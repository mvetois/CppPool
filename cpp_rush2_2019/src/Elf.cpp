/*
** EPITECH PROJECT, 2020
** CPP Pool Rush2
** File description:
** Elf
*/

#include "../include/Elf.hpp"

Elf::Elf(ITable &t,IConveyorBelt &c) : _itable(t), _iconveyor(c)
{}

bool Elf::mvCbTable()
{
    if (_iconveyor.isEmpty())
        _iconveyor.IN();
    if (_iconveyor.isEmpty() && _itable.isFull())
        return (false);
    _itable.put(_iconveyor.getObject());
    return (true);
}

bool Elf::mvTableCb(size_t i)
{
    if (!_iconveyor.isEmpty())
        return (false);
    _iconveyor.putObject(_itable.take(i));
    return (true);
}

bool Elf::wrapToObject(size_t a, size_t b)
{
    Wrap *wrap = (Wrap *)_itable.take(a);
    Object *o = _itable.take(b);
    if (!wrap || !o || _itable.isFull())
        return (false);
    wrap->openMe();
    wrap->wrapMeThat(o);
    wrap->closeMe();
    _itable.put(wrap, a);
    return (true);
}

enum objEnum {
    BOX,
    GIFT_PAPER,
    NULLPTR,
    TOY
};

static int findStrInVec(std::vector<std::string *> *vec, objEnum type, const std::string &str = "")
{
    for (int i = 0; i < 10; i++) {
        switch (type) {
            case NULLPTR :
                if (vec->at(i) == nullptr)
                    return i;
                break;
            case TOY :
                if (vec->at(i) != nullptr && (*vec->at(i)) != "Box" && (*vec->at(i)) != "GiftPaper")
                    return i;
                break;
            case BOX :
            case GIFT_PAPER :
                if (vec->at(i) != nullptr && (*vec->at(i)) == str)
                    return i;
                break;
        }
    }
    return (-1);
}

static void deleteVector(std::vector<std::string *> *vector)
{
    for (int it = 0; it < 10; it++) {
        if (vector->at(it) != nullptr)
            delete(vector->at(it));
    }
    delete(vector);
}

bool Elf::wrapAGift()
{
    std::vector<std::string *> *a= _itable.look();
    int toy = findStrInVec(a, TOY);
    int wrap = findStrInVec(a, BOX, "Box");
    int empty = findStrInVec(a, NULLPTR);
    int gp = findStrInVec(a, GIFT_PAPER, "GiftPaper");


    if (toy == -1 || (wrap == -1 && empty == -1)) {
        std::cout << "o'pa ere's somin'wron'in da box!" << std::endl;
        deleteVector(a);
        return (false);
    }
    while (wrap == -1 && empty != -1) {
        this->mvCbTable();
        deleteVector(a);
        a = _itable.look();
        wrap = findStrInVec(a, BOX, "Box");
        empty = findStrInVec(a, NULLPTR);
    }
    this->wrapToObject(wrap, toy);
    gp = findStrInVec(a, GIFT_PAPER, "GiftPaper");
    if (gp == -1 && empty == -1) {
        std::cout << "o'pa ere's somin'wron'in da box!" << std::endl;
        deleteVector(a);
        return (false);
    }
    while (gp == -1 && empty != -1) {
        this->mvCbTable();
        deleteVector(a);
        a = _itable.look();
        gp = findStrInVec(a, GIFT_PAPER, "GiftPaper");
        empty = findStrInVec(a, NULLPTR);
    }
    if (gp == -1) {
        std::cout << "o'pa ere's somin'wron'in da box!" << std::endl;
        deleteVector(a);
        return (false);
    }
    wrapToObject(gp, wrap);
    if (!_iconveyor.isEmpty() && _itable.isFull()) {
        std::cout << "o'pa ere's somin'wron'in da box!" << std::endl;
        deleteVector(a);
        return (false);
    }
    if (!_iconveyor.isEmpty()) {
        _itable.put(_iconveyor.getObject());
    }
    mvTableCb(gp);
    pressOut();
    std::cout << "e speex'n'XML" << std::endl;
    deleteVector(a);
    return (true);
}

void Elf::pressIn()
{
    _iconveyor.IN();
}

void Elf::pressOut()
{
    _iconveyor.OUT();
}

size_t Elf::run(size_t toBuild)
{
    size_t builded = 0;

    while (builded < toBuild && wrapAGift())
        builded++;
    return builded;
}
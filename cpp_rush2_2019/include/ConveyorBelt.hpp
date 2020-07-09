/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** ConveyorBelt.hpp
*/

#ifndef CPP_RUSH2_2019_CONVEYORBELT_HPP
#define CPP_RUSH2_2019_CONVEYORBELT_HPP

#include "IConveyorBelt.hpp"
#include "Object.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"
#include "XmlWriter.hpp"

class ConveyorBelt : public IConveyorBelt
{
public:
    ConveyorBelt();
    ~ConveyorBelt() override;

    void IN();
    void OUT();
    bool isEmpty();
    Object *getObject();
    bool putObject(Object *object);
    void setDirectory(const std::string &directory);
private:
    Object *_object;
    std::string _directory;
};

#endif

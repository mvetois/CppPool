/*
** EPITECH PROJECT, 2020
** CPP Pool D06
** File description:
** KoalaNurse
*/

#include "KoalaNurse.hpp"


KoalaNurse::KoalaNurse(int id)
{
    _id = id;
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << _id << ": Finally some rest!" << std::endl;
}

void KoalaNurse::giveDrug(std::string str, SickKoala *name)
{
    name->takeDrug(str);
}

std::string KoalaNurse::readReport(std::string str)
{
    std::string name = str.substr(0, str.find('.'));
    std::string ext = str.substr(str.find('.'), str.length());
    if (ext != ".report")
        return ("");

    std::ifstream fs(str , std::fstream::in);
    if (!fs.is_open())
        return ("");
    std::ostringstream ss;
    ss << fs.rdbuf();
    std::string d = ss.str();
    std::cout << "Nurse " << _id << ": Kreog! Mr." << name << " needs a " << d << "!" << std::endl;
    fs.close();
    return (d);
}

void KoalaNurse::timeCheck()
{
    static bool a = false;

    if (a == false) {
        std::cout << "Nurse " << _id << ": Time to get to work!" << std::endl;
        a = true;
    } else {
        std::cout << "Nurse " << _id << ": Time to go home to my eucalyptus forest!" << std::endl;
        a = false;
    }
}

int KoalaNurse::getID()
{
    return(_id);
}

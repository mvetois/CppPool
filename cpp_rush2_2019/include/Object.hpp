/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Object
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <string>

class Object {
    public:
        explicit Object(const std::string &name = "Object");
        virtual ~Object() = default;
        const std::string &getName() const;
        virtual Object *getObject() const;
        const std::string &getType() const;
    protected:
        std::string _name;
        std::string _type;
};

#endif /* !OBJECT_HPP_ */
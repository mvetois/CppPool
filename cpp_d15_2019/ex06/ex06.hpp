/*
** EPITECH PROJECT, 2020
** CPP Pool D15
** File description:
** ex06
*/

#ifndef EX06_HPP_
#define EX06_HPP_
#include <iostream>
#include <sstream>

template<typename T>
std::string prnt(T) {
    return ("???");
}
template<>
std::string prnt(std::string str) {
    return (std::string("string:\"") + str + "\"");
}
template<>
std::string prnt(int a) {
    std::stringstream ss;
    ss << a;
    return ("int:" + ss.str());
}
template<>
std::string prnt(float a) {
    std::stringstream ss;
    ss << a;
    return ("float:" + ss.str() + "f");
}

template<typename T, typename U = T>
class Tuple {
    public:
        Tuple() {}

        std::string toString() const {
            return ("[TUPLE [" + prnt(a) + "] [" + prnt(b) + "]]");
        }
        T a;
        U b;
};

#endif /* !EX06_HPP_ */

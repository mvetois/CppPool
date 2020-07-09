/*
** EPITECH PROJECT, 2020
** CPP Pool Rush2
** File description:
** TestReader
*/

#include <ostream>
#include <iostream>
#include <criterion/criterion.h>
#include "../include/santa.hpp"

class OSRedirector {
    private:
        std::ostringstream _oss;
        std::streambuf *_backup;
        std::ostream &_c;


    public:
        OSRedirector(std::ostream &c) : _c(c) {
            _backup = _c.rdbuf();
            _c.rdbuf(_oss.rdbuf());
        }

        ~OSRedirector() {
            _c.rdbuf(_backup);
        }

        const std::string getContent() {
            _oss << std::flush;
            return _oss.str();
        }
};

Test(TestReader, one)
{
    OSRedirector oss(std::cout);
    santa(1, NULL);

    cr_assert_eq(oss.getContent(), "Usage : ./santa filename [...]\n");
    cr_assert_eq(santa(1, NULL), 0);
}

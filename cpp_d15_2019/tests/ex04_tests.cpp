/*
** EPITECH PROJECT, 2020
** CPP Pool D15
** File description:
** ex04_tests
*/

#include "../ex04/ex04.hpp"
#include <criterion/criterion.h>

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

Test(ex04, ex04)
{
    cr_assert_eq(equal(1, 0), false);
    cr_assert_eq(equal(1, 1), true);

    Tester<int> iT;
    cr_assert_eq(iT.equal(1, 0), false);
    cr_assert_eq(iT.equal(1, 1), true);
}
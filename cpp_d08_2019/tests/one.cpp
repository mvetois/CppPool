/*
** EPITECH PROJECT, 2020
** CPP Pool D08
** File description:
** one
*/

#include "../ex00/Droid.hpp"
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

int one()
{
    Droid d("ok");
    Droid d1("Avenger");
    size_t Durasel = 200;
    std::cout << d << std::endl;
    std::cout << d1 << std::endl;
    d = d1;
    d.setStatus(new std::string("Kill Kill Kill!"));
    d << Durasel;
    std::cout << d << "--" << Durasel  << std::endl;
    Droid d2 = d;
    d.setId("Rex");
    d.setEnergy(2);
    d.getAttack();
    d.getToughness();
    std::cout << (d2 != d) << std::endl;
    return 0;
}

Test(one, one) {
   cr_assert_eq(one(), 0);
}
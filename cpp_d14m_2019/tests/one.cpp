/*
** EPITECH PROJECT, 2020
** CPP Pool D08
** File description:
** one
*/

#include "../ex00/Banana.hpp"
#include "../ex00/Fruit.hpp"
#include "../ex00/FruitBox.hpp"
#include "../ex00/FruitNode.hpp"
#include "../ex00/Lemon.hpp"

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
    Lemon l;
    Banana b;
    std::cout << l.getVitamins () << std::endl;
    std::cout << b.getVitamins () << std::endl;
    std::cout << l.getName () << std::endl;
    std::cout << b.getName () << std::endl;

    Fruit &f = l;
    std::cout << f.getVitamins() << std::endl;
    std::cout << f.getName() << std::endl;
    return (0);
}

int two()
{
    FruitBox box(10);
    Lemon l1;
    Lemon l2;
    Lemon l3;
    Lemon l4;
    Lemon l5;
    Lemon l6;
    Banana b1;
    Banana b2;
    Banana b3;
    Banana b4;

    box.putFruit(&l1);
    box.putFruit(&l1);
    box.putFruit(&l2);
    box.putFruit(&l3);
    box.putFruit(&l4);
    box.putFruit(&l5);
    box.putFruit(&l6);
    box.putFruit(&l6);
    box.putFruit(&b1);
    box.putFruit(&b1);
    box.putFruit(&b2);
    box.putFruit(&b3);
    box.putFruit(&b4);
    auto head = box.head();
    head = head->next;
    head = head->next;
    head = head->next;
    head = head->next;
    head = head->next;
    head = head->next;
    head = head->next;
    head = head->next;
    head = head->next;
    head = head->next;
    return (0);
}

Test(one, one) {
    OSRedirector oss(std::cout);
    cr_assert_eq(one(), 0);
}

Test(two, two) {
    two();
    cr_assert_eq(two(), 0);
}
/*
** EPITECH PROJECT, 2020
** CPP Pool D07M
** File description:
** Borg
*/

#ifndef BORG_HPP_
#define BORG_HPP_
#include "WarpSystem.hpp"
#include "Federation.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>

namespace Federation {
    namespace Starfleet {
        class Ship;
    }
    class Ship;
}

namespace Borg {
    class Ship {
        public:
            Ship();
            Ship(int weaponFrequency, short repair);
            Ship(int weaponFrequency);
            void setupCore(WarpSystem::Core *core);
            void checkCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            int getShield();
            void setShield(int shield);
            int getWeaponFrequency();
            void setWeaponFrequency(int frequency);
            short getRepair();
            void setRepair(short repair);
            void fire(Federation::Starfleet::Ship *target);
            void fire(Federation::Ship *target);
            void repair();
            void setShieldBorg(int shield);
        private:
            int _side;
            short _maxWarp;
            WarpSystem::Core *_core;
            Destination _home;
            Destination _location;
            int _shield;
            int _weaponFrequency;
            short _repair;
    };
}


#endif /* !BORG_HPP_ */

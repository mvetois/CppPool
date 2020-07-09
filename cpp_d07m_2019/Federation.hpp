/*
** EPITECH PROJECT, 2020
** CPP Pool D07M
** File description:
** Federation
*/

#ifndef FEDERATION_HPP_
#define FEDERATION_HPP_
#include "WarpSystem.hpp"
#include "Borg.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>

namespace Borg {
    class Ship;
}

namespace Federation {
    namespace Starfleet {
        class Captain {
            public:
                Captain(std::string name);
                std::string getName();
                int getAge();
                void setAge(int age);
            private:
                std::string _name;
                int _age;
        };
        class Ensign {
            public:
                Ensign(std::string name);
            private:
                std::string _name;
        };
        class Ship {
            public:
                Ship(int length, int width, std::string name, short maxWarp);
                Ship(int length, int width, std::string name, short maxWarp, int torpedo);
                Ship();
                void setupCore(WarpSystem::Core *core);
                void checkCore();
                void promote(Captain *captain);
                bool move(int warp, Destination d);
                bool move(int warp);
                bool move(Destination d);
                bool move();
                void fire(Borg::Ship *target);
                void fire(int torpedo, Borg::Ship *target);
                WarpSystem::Core *getCore();
                void setShield(int shield);
            private:
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;
                WarpSystem::Core *_core;
                Captain *_captain;
                Destination _home;
                Destination _location;
                int _shield;
                int _photonTorpedo;
        };
    }
    class Ship {
        public:
            Ship(int length, int width, std::string name);
            void setupCore(WarpSystem::Core *core);
            void checkCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            WarpSystem::Core *getCore();
        private:
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            WarpSystem::Core *_core;
            Destination _home;
            Destination _location;
    };
}

#endif /* !FEDERATION_HPP_ */

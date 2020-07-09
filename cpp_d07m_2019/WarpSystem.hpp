/*
** EPITECH PROJECT, 2020
** CPP Pool D07m
** File description:
** WarpSystem
*/

#ifndef WARPSYSTEM_HPP_
#define WARPSYSTEM_HPP_
#include "Destination.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>

namespace WarpSystem {
    class QuantumReactor {
        public:
            QuantumReactor();
            ~QuantumReactor();
            bool isStable();
            void setStability(bool stability);
        private:
            bool _stability;
    };
    class Core {
        public:
            Core(QuantumReactor* coreReactor);
            ~Core();
            QuantumReactor *checkReactor();
        private:
            QuantumReactor *_coreReactor;
    };
}

#endif /* !WARPSYSTEM_HPP_ */

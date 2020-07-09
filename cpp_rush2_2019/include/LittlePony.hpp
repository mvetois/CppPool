/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** LittlePony
*/

#ifndef LITTLEPONY_HPP_
#define LITTLEPONY_HPP_

#include "Toy.hpp"

class LittlePony : public Toy {
	public:
        explicit LittlePony(const std::string &name);
		~LittlePony() = default;
	private:
};

#endif /* !LITTLEPONY_HPP_ */

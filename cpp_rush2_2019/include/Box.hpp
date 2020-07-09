/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Box
*/

#ifndef BOX_HPP_
#define BOX_HPP_

#include "Object.hpp"
#include "Wrap.hpp"

class Box : public Wrap {
	public:
		Box();

        void wrapMeThat(Object *object);
};

#endif /* !BOX_HPP_ */
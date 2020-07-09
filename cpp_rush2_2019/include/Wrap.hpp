/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Wrap
*/

#ifndef WRAP_HPP_
#define WRAP_HPP_

#include "Object.hpp"

class Wrap : public Object{
	public:
		explicit Wrap(const std::string &name = "Wrap");
		~Wrap() override;

        Object *getObject() const override;
        void wrapMeThat(Object *object);
        void openMe();
        void closeMe();

    protected:
        bool _open;

	private:
        Object *_object;
};

#endif /* !WRAP_HPP_ */
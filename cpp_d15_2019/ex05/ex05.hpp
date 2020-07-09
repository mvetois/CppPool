/*
** EPITECH PROJECT, 2020
** CPP Pool D15
** File description:
** ex05
*/

#ifndef EX05_HPP_
#define EX05_HPP_
#include <iostream>

template<typename T>
class array {
    protected:
        size_t _size;
        T *tab;
    public:
        array() {
            _size = 0;
            tab = NULL;
        }
        array(size_t size) {
            _size = size;
            tab = new T[_size];
        }
        array(const array<T> &src) {
            _size = src._size;
            tab = new T[_size];
            for (size_t i = 0; i < _size; i++)
                tab[i] = src.tab[i];
        }
        virtual ~array() {
            if (tab)
                delete[] tab;
        }
        size_t size() const {
            return (_size);
        }
        void dump() const {
            std::cout << "[";
            for (size_t i = 0; i < _size; i++) {
                std::cout << tab[i];
                if (i + 1 < _size)
                    std::cout << ", ";
            }
            std::cout << "]" << std::endl;
        }
        template<typename U>
        array<U> convertTo(U(*convert)(const T &var)) {
            array<U> dup(_size);
            for (size_t i = 0; i < _size; i++)
                dup[i] = (*convert)(tab[i]);
            return (dup);
        }
        T &operator[](size_t i) {
            try {
                if (i >= _size) {
                    T *copy = new T[i + 1];
                    for (size_t i = 0; i < _size; i++)
                        copy[i] = tab[i];
                    delete [] tab;
                    tab = copy;
                    _size = i + 1;
                }
                return (tab[i]);
            }
            catch(...) {
                throw std::exception();
            }
        }

        T &operator[](size_t i) const {
            if (i >= _size)
                throw std::exception();
            return (tab[i]);
        }
        array<T> &operator=(array<T> const &copy) {
            if (tab)
                delete [] tab;
            _size = copy._size;
            tab = new T[_size];
            for (unsigned int i = 0; i < _size; ++i)
                tab[i] = copy.tab[i];
            return *this;
        }
};

template<>
void array<bool>::dump() const {
    std::cout << "[";
    for (size_t i = 0; i < _size;) {
        std::cout << (tab[i] ? "true" : "false");
        i++;
        if (i != _size)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

#endif /* !EX05_HPP_ */

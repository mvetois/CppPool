/*
** EPITECH PROJECT, 2020
** CPP Pool D17
** File description:
** Container
*/

#ifndef CONTAINER_HPP_
#define CONTAINER_HPP_
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <stack>

template<typename T>
void aff(T t) {
    std::cout << "Value: " << t << std::endl;
}

template<typename T>
void add(T &t) {
    t++;
}

template<typename T, template<typename, typename> class Container>
class contain {
    public:
        contain() {}
        ~contain() {}
        void push(T const &data)
        {
            _ctn.push_back(data);
        }
        void aff()
        {
            std::for_each(_ctn.begin(), _ctn.end(), &::aff<T>);
        }
        void add()
        {
            std::for_each(_ctn.begin(), _ctn.end(), &::add<T>);
        }

    protected:
        std::list<T, std::allocator<T>> _ctn;
    private:
};

template<typename T>
class contain <T, std::stack>{
    public:
        contain() {}
        ~contain() {}
        void push(T const &data)
        {
            _ctn.push(data);
        }
        void aff()
        {
            std::stack<T> save;
            while (!_ctn.empty()) {
                save.push(_ctn.top());
                _ctn.pop();
            }
            while (!save.empty()) {
                ::aff(save.top());
                _ctn.push(save.top());
                save.pop();
            }
        }
        void add()
        {
            std::stack<T> save;
            while (!_ctn.empty()) {
                ::add(_ctn.top());
                save.push(_ctn.top());
                _ctn.pop();
            }
            while (!save.empty()) {
                _ctn.push(save.top());
                save.pop();
            }
        }

    protected:
        std::stack<T> _ctn;
    private:
};

#endif /* !CONTAINER_HPP_ */
/*
** EPITECH PROJECT, 2020
** CPP Pool D16
** File description:
** Parser
*/

#ifndef PARSER_HPP_
#define PARSER_HPP_
#include <iostream>
#include <stack>
#include <string>

class Parser {
    public:
        Parser();
        ~Parser();

        void feed(const std::string &str);
        int result() const;
        void reset();
    private:
        std::stack<char> _cop;
        std::stack<int> _iop;
};

#endif /* !PARSER_HPP_ */

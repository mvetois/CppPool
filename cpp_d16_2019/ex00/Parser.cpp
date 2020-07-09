/*
** EPITECH PROJECT, 2020
** CPP Pool D16
** File description:
** Parser
*/

#include <sstream>
#include <string>
#include "Parser.hpp"

static int add(int a, int b)
{
    return (a + b);
}

static int sub(int a, int b)
{
    return (a - b);
}

static int mul(int a, int b)
{
    return (a * b);
}

static int divi(int a, int b)
{
    return (a / b);
}

static int mod(int a, int b)
{
    return (a % b);
}

static int ops(int a, int b, char op) {
    switch (op) {
        case '/':
            return (divi(a, b));
            break;
        case '*':
            return (mul(a, b));
            break;
        case '+':
            return (add(a, b));
            break;
        case '-':
            return (sub(a, b));
            break;
        default:
            return (mod(a, b));
            break;
        }
}

Parser::Parser()
{
}

Parser::~Parser()
{
}

void Parser::feed(const std::string &src)
{
    int one;
    char op = '\0';
    std::string str;

    if (src[0] != '(' || src[src.length() - 1] != ')') {
        str = "(";
        str += src;
        str += ")";
    } else
        str = src;
    for (int i = 0; str[i];) {
        if (str[i] >= '0' && str[i] <= '9') {
            int tmp = 0;
            while (str[i] && str[i] >= '0' && str[i] <= '9') {
                tmp = tmp * 10 + str[i] - '0';
                i++;
            }
            _iop.push(tmp);
        }
        else if (str[i] == ')') {
            int two = _iop.top();
            _iop.pop();
            one = _iop.top();
            _iop.pop();
            op = _cop.top();
            _cop.pop();
            _iop.push(ops(one, two, op));
            i++;
        }
        else if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*' || str[i] == '%'){
            _cop.push(str[i]);
            i++;
        }
        else
            i++;
    }
    one = _iop.top();
    _iop.pop();
    if (!_iop.empty()) {
        if (!_cop.empty()) {
            op = _cop.top();
            _cop.pop();
            one = ops(one, _iop.top(), op);
        }
        else {
            one += _iop.top();
            _iop.pop();
        }
    }
    _iop.push(one);
}

int Parser::result() const {
    return _iop.top();
}
void Parser::reset() {
    while (!_iop.empty())
        _iop.pop();
    while (!_cop.empty())
        _cop.pop();
}
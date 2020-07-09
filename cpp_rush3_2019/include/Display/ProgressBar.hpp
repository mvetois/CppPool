/*
** EPITECH PROJECT, 2019
** exec
** File description:
** ProgressBar.hpp
*/

#ifndef EXEC_PROGRESSBAR_HPP
#define EXEC_PROGRESSBAR_HPP

#include "Drawable.hpp"

class ProgressBar : public Drawable
{
public:
    ProgressBar(IMonitorDisplay &monitorDisplay);
    ~ProgressBar() override = default;

    std::string getUnits() const;
    size_t getMax() const;
    size_t getContent() const;
    void setUnits(std::string const str);
    void setMax(size_t const str);
    void setContent(size_t const str);
    std::string getName() const;
    void setName(std::string const str);

private:
    std::string _units;
    size_t _max;
    size_t _content;
    std::string _name;
};

#endif

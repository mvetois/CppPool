/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Ncurses
*/

#ifndef NCURSES_HPP_
#define NCURSES_HPP_

#include <list>
#include <iterator>

#include "ncurses.h"

#include "IMonitorDisplay.hpp"
#include "Line.hpp"
#include "ProgressBar.hpp"
#include "../Module/Module.hpp"


class Ncurses : public IMonitorDisplay
{
public:
	Ncurses();
	~Ncurses();

	void initializeModule(Module *module) override;
	void drawModule(Module *module) override;
	void initializeLine(Line *line) override;
	void drawLine(Line *line) override;
	void initializeProgressBar(ProgressBar *progressBar) override;
	void drawProgressBar(ProgressBar *progressBar) override;
    DisplayType getType() const override;
	bool isRunning() override;
	sf::Vector2u getWindowSize() const override;
	bool chageDisplayMode(void) override;

private:
	WINDOW *_window;
	std::list<WINDOW *> WindowList;
	size_t _lineCount = 2;
	size_t _boxSeparator = 1;
};

#endif /* !NCURSES_HPP_ */
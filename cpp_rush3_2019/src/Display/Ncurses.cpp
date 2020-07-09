/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Ncurses
*/

#include "../../include/Display/Ncurses.hpp"

Ncurses::Ncurses() : IMonitorDisplay()
{
	this->_window = initscr();
	start_color();
	noecho();
	curs_set(0);
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_YELLOW, COLOR_BLACK);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	init_pair(4, COLOR_CYAN, COLOR_BLACK);
	init_pair(5, COLOR_BLUE, COLOR_BLACK);

}

Ncurses::~Ncurses()
{
	clear();
	refresh();
	endwin();
}

IMonitorDisplay::DisplayType Ncurses::getType() const
{
    return NCURSES;
}

void Ncurses::initializeModule(Module *module)
{
	(void)module;
}

void Ncurses::drawModule(Module *module)
{
    _lineCount = 0;
	if (module->getRect().top != 0 && this->WindowList.size() % 2 == 0)
		this->_boxSeparator += 2;
	else if (module->getRect().top == 0 && module->getRect().left == 0)
		this->_boxSeparator = 0;

	WINDOW *window = newwin(module->getRect().height + 2, module->getRect().width,
	module->getRect().top + this->_boxSeparator, module->getRect().left);
	box(window, 0, 0);
	wattron(window, A_BOLD);
	wattron(window, COLOR_PAIR(5));
	mvwprintw(window, 1, module->getRect().width / 2.5, module->getName().c_str());
	wattroff(window, A_BOLD);
	wattroff(window, COLOR_PAIR(5));
	wrefresh(window);
	this->WindowList.push_back(window);
	this->_lineCount = 2;
}

void Ncurses::initializeLine(Line *line)
{
	(void)line;
}

void Ncurses::drawLine(Line *line)
{
	wattron(this->WindowList.back(), A_BOLD);
	mvwprintw(this->WindowList.back(), 1 + _lineCount, 1, line->getContent().c_str());
	wattroff(this->WindowList.back(), A_BOLD);
	wrefresh(this->WindowList.back());
	this->_lineCount++;
}

void Ncurses::initializeProgressBar(ProgressBar *progressBar)
{
	(void)progressBar;
}

void Ncurses::drawProgressBar(ProgressBar *progressBar)
{
	wattron(this->WindowList.back(), A_BOLD);
	for (unsigned int i = 1; i < this->WindowList.back()->_maxx;i++) {
		if ((float)progressBar->getContent() / (float)progressBar->getMax() *this->WindowList.back()->_maxx + 1 < i) {
			wattron(this->WindowList.back(), COLOR_PAIR(1));
			mvwprintw(this->WindowList.back(), this->_lineCount, i, "|");
			wattroff(this->WindowList.back(), COLOR_PAIR(1));
		}
		else {
			wattron(this->WindowList.back(), COLOR_PAIR(3));
			mvwprintw(this->WindowList.back(), this->_lineCount, i, "|");
			wattroff(this->WindowList.back(), COLOR_PAIR(3));
		}
	}
	mvwprintw(this->WindowList.back(), this->_lineCount, 1, "[");
	mvwprintw(this->WindowList.back(), this->_lineCount, this->WindowList.back()->_maxx - 1, "]");
	wattroff(this->WindowList.back(), A_BOLD);
	wrefresh(this->WindowList.back());
	this->_lineCount++;
}

bool Ncurses::isRunning()
{
	timeout(1);
	return (getch() != 'q');
}

sf::Vector2u Ncurses::getWindowSize() const
{
	int x = 0;
	int y = 0;

	getmaxyx(this->_window, y, x);
	return (sf::Vector2u(x, y));
}

bool Ncurses::chageDisplayMode(void)
{
	timeout(1);
	if (getch() == 'a')
		return (true);
	else
		return (false);
}
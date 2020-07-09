/*
** EPITECH PROJECT, 2019
** _cpp_rush3_2019
** File description:
** IMonitorDisplay.hpp
*/

#ifndef CPP_RUSH3_2019_GRAPHIQUE_HPP
#define CPP_RUSH3_2019_GRAPHIQUE_HPP

#include <SFML/System.hpp>

class Module;
class Line;
class ProgressBar;

class IMonitorDisplay
{
	public:

    enum DisplayType {
        SFML,
        NCURSES
    };

    virtual ~IMonitorDisplay() = default;

		virtual void initializeModule(Module *module) = 0;
		virtual void drawModule(Module *module) = 0;
		virtual void initializeLine(Line *line) = 0;
		virtual void drawLine(Line *line) = 0;
		virtual void initializeProgressBar(ProgressBar *progressBar) = 0;
		virtual void drawProgressBar(ProgressBar *progressBar) = 0;
		virtual bool isRunning() = 0;
		virtual sf::Vector2u getWindowSize() const = 0;
		virtual DisplayType getType() const = 0;
		virtual bool chageDisplayMode(void) = 0;
};

#endif

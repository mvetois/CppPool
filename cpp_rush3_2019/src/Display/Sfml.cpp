/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Sfml
*/

#include <iostream>
#include <iomanip>
#include "../../include/Display/Sfml.hpp"

Sfml::Sfml()
{
    createWindow(770, 570);
}

void Sfml::gammeLoop()
{
    while (_window.pollEvent(_event)) {
        if (_event.type == sf::Event::Closed)
            _window.close();
		if (_event.type == sf::Event::KeyPressed)
			if (_event.key.code == sf::Keyboard::A)
				this->APressed = true;
	}
    _window.display();
    _window.clear(sf::Color(50, 50, 50, 255));
}

void Sfml::createWindow(size_t width, size_t height, size_t posX, size_t posY)
{
	sf::VideoMode screen = sf::VideoMode::getDesktopMode();
	sf::VideoMode wind = sf::VideoMode(width, height, 32);

	_window.create(wind, "GKrellM", sf::Style::Close);
	_window.setVerticalSyncEnabled(1);
	_window.setFramerateLimit(60);
    if (posX == 0 && posY == 0)
	    _window.setPosition(sf::Vector2i((screen.width / 2) - (wind.width / 2), (screen.height / 2) - (wind.height / 2)));
    else
        _window.setPosition(sf::Vector2i(posX, posY));
}

void Sfml::initializeModule(Module *module)
{
	(void)module;
}

void Sfml::drawModule(Module *module)
{
	_curentModule = module;
}

void Sfml::initializeLine(Line *line)
{
	sf::Font tempFont;
	sf::Text tempText;
	sf::FloatRect posInt = line->getRect();
	sf::Vector2f pos(posInt.left, posInt.top);

	tempFont.loadFromFile("Resources/Roboto-Regular.ttf");
	tempText.setFont(tempFont);
	tempText.setString(" ");
	tempText.setCharacterSize(24);
	tempText.setPosition(pos);

	LineDataSfml_t truc2 = {tempFont, tempText};
	DataSfml *truc = new DataSfml {nullptr};
	truc->lineData._font = tempFont;
	truc->lineData._text = tempText;

	_drawableData.insert(std::pair<Drawable*, DataSfml*>((Drawable*)line, truc));
}

void Sfml::drawLine(Line *line)
{
    LineDataSfml_t data = _drawableData.at((Drawable*)line)->lineData;
	sf::Vector2f pos(line->getRect().left + _curentModule->getRect().left, line->getRect().top + _curentModule->getRect().top);

	data._text.setFont(data._font);
	data._text.setString(line->getContent().c_str());
	data._text.setPosition(pos);
	_window.draw(data._text);
}

void Sfml::initializeProgressBar(ProgressBar *progressBar)
{
	sf::RectangleShape rectangle;
	sf::Font tempFont;
	sf::Text tempText;

	tempFont.loadFromFile("Resources/Roboto-Regular.ttf");
	tempText.setFont(tempFont);
	tempText.setString(" ");
	tempText.setCharacterSize(24);
	tempText.setPosition(0, 0);

	ProgressBarDataSfml_t truc2 = {rectangle, tempFont, tempText};
	DataSfml *truc = new DataSfml {nullptr};
	truc->ProgressBarData = truc2;

	_drawableData.insert(std::pair<Drawable*, DataSfml*>((Drawable*)progressBar, truc));
}

void Sfml::drawProgressBar(ProgressBar *progressBar)
{
    ProgressBarDataSfml_t data = _drawableData.at((Drawable*)progressBar)->ProgressBarData;
	sf::Vector2f maxSize{progressBar->getRect().width, progressBar->getRect().height};
	sf::Vector2f textPos{(progressBar->getRect().width + progressBar->getRect().left) - progressBar->getRect().width / 2 - 20, (progressBar->getRect().height + progressBar->getRect().top) - progressBar->getRect().height / 2 - 10};
	float res = (float)progressBar->getContent() / (float)progressBar->getMax() * maxSize.x;

	data._indicator.setPosition(sf::Vector2f(progressBar->getRect().left, progressBar->getRect().top));
	data._indicator.setSize(sf::Vector2f(res, maxSize.y));
	data._indicator.setFillColor(sf::Color(0, 190, 0, 255));
	data._text.setFont(data._font);
	data._text.setString(progressBar->getName());
	data._text.setPosition(textPos);

    _window.draw(data._indicator);
	_window.draw(data._text);
}

bool Sfml::isRunning()
{
    gammeLoop();
    return _window.isOpen();
}

IMonitorDisplay::DisplayType Sfml::getType() const
{
	return SFML;
}


sf::Vector2u Sfml::getWindowSize() const
{
	return _window.getSize();
}

bool Sfml::chageDisplayMode(void)
{
	return (this->APressed);
}
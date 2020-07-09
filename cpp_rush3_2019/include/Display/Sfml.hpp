/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Sfml
*/

#ifndef SFML_HPP_
#define SFML_HPP_

#include <map>
#include <SFML/Graphics.hpp>
#include <vector>
#include "Line.hpp"
#include "Drawable.hpp"
#include "ProgressBar.hpp"
#include "DrawableDataSfml.hpp"
#include "../../include/Module/Module.hpp"
#include "../../include/Display/IMonitorDisplay.hpp"

class Sfml : public IMonitorDisplay {
public:
	Sfml();
	~Sfml() override = default;

    void gammeLoop();
    void createWindow(size_t width, size_t height, size_t posX = 0, size_t posY = 0);

    void initializeModule(Module *module) override;
    void drawModule(Module *module) override;
    void initializeLine(Line *line) override;
    void drawLine(Line *line) override;
    void initializeProgressBar(ProgressBar *progressBar) override;
    void drawProgressBar(ProgressBar *progressBar) override;
    bool isRunning() override;
    DisplayType getType() const override;
    sf::Vector2u getWindowSize() const override;
    bool chageDisplayMode(void) override;

private:
    std::map<Drawable*, DataSfml*> _drawableData;
    std::map<IMonitorModule*, ModuleDataSfml_t*> _moduleData;
    sf::RenderWindow _window;
	sf::Event _event;
    bool APressed = false;
    Module *_curentModule;
};

#endif /* !SFML_HPP_ */
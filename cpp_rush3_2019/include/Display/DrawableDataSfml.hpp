/*
** EPITECH PROJECT, 2019
** exec
** File description:
** DrawableData.hpp
*/

#ifndef EXEC_DRAWABLEDATA_HPP
#define EXEC_DRAWABLEDATA_HPP

typedef struct {
} ModuleDataSfml_t;

typedef struct {
    sf::Font _font;
    sf::Text _text;
} LineDataSfml_t;

typedef struct {
    sf::RectangleShape _indicator;
    sf::Font _font;
    sf::Text _text;
} ProgressBarDataSfml_t;

union DataSfml {
    void *nothing;
    ProgressBarDataSfml_t ProgressBarData;
    LineDataSfml_t lineData;
    ~DataSfml() {}
};

#endif
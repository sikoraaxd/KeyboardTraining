#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include <string>

class Key: public sf::Drawable
{
private:

	sf::Font					font;		//Шрифт текта кнопки
	sf::RectangleShape			button;		//Фигура кнопки
	sf::Text					buttonKey;	//Текст кнопки
	bool						Theme;		//true если светлая тема 
	bool						Pressed;
public:
	/*<----Конструкторы---->*/
	Key();
	explicit Key(sf::String uButtonKey, float uButtonX = 0.0, float uButtonY = 0.0, 
				 float uButtonWidth = 0.0, float uButtonHeight = 0.0);
	/*<-------------------->*/

	/*<----Методы---->*/
	Key setButton(sf::String uButtonKey, float uButtonX = 0.0, float uButtonY = 0.0,	//Настройка кнопки
				  float uButtonWidth = 0.0, float uButtonHeight = 0.0);
	sf::String getButtonKey();															//Получение текста кнопки
	void switchTheme();
	void PushRelease(sf::Event event);
	void toUpper();
	void toLower();
	void switchKey(sf::Event event);
	virtual void draw(sf::RenderTarget& btn, sf::RenderStates states) const;

	/*<-------------->*/

	/*<----Операторы сравнения---->*/
	friend bool operator==(const Key Key1, const Key Key2);
	friend bool operator!=(const Key Key1, const Key Key2);
	/*<--------------------------->*/
};


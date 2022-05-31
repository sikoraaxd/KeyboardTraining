#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include <string>

class Key: public sf::Drawable
{
private:

	sf::Font					font;		//����� ����� ������
	sf::RectangleShape			button;		//������ ������
	sf::Text					buttonKey;	//����� ������
	bool						Theme;		//true ���� ������� ���� 
	bool						Pressed;
public:
	/*<----������������---->*/
	Key();
	explicit Key(sf::String uButtonKey, float uButtonX = 0.0, float uButtonY = 0.0, 
				 float uButtonWidth = 0.0, float uButtonHeight = 0.0);
	/*<-------------------->*/

	/*<----������---->*/
	Key setButton(sf::String uButtonKey, float uButtonX = 0.0, float uButtonY = 0.0,	//��������� ������
				  float uButtonWidth = 0.0, float uButtonHeight = 0.0);
	sf::String getButtonKey();															//��������� ������ ������
	void switchTheme();
	void PushRelease(sf::Event event);
	void toUpper();
	void toLower();
	void switchKey(sf::Event event);
	virtual void draw(sf::RenderTarget& btn, sf::RenderStates states) const;

	/*<-------------->*/

	/*<----��������� ���������---->*/
	friend bool operator==(const Key Key1, const Key Key2);
	friend bool operator!=(const Key Key1, const Key Key2);
	/*<--------------------------->*/
};


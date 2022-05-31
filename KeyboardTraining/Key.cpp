#include "Key.h"

Key::Key()
{
	button.setSize(sf::Vector2f(40, 40));
	button.setFillColor(sf::Color(181, 181, 181));

	font.loadFromFile("Fonts\\Roboto-Thin.ttf");

	buttonKey = sf::Text("", font, 20);
	buttonKey.setPosition(10, 5);
	buttonKey.setStyle(sf::Text::Bold);
	buttonKey.setFillColor(sf::Color::Black);

	Theme = true;
	Pressed = false;
}

Key::Key(sf::String uButtonKey, float uButtonX, float uButtonY,
		 float uButtonWidth , float uButtonHeight): Key()
{
	buttonKey.setString(uButtonKey);
	if (uButtonX || uButtonY) {
		button.setPosition(uButtonX, uButtonY);
		buttonKey.setPosition(uButtonX + 10, uButtonY + 5);
	}
	if (uButtonWidth || uButtonHeight)	button.setSize(sf::Vector2f(uButtonWidth, uButtonHeight));
}

Key Key::setButton(sf::String uButtonKey, float uButtonX, float uButtonY, float uButtonWidth, float uButtonHeight)
{
	return Key(uButtonKey, uButtonX, uButtonY, uButtonWidth, uButtonHeight);
}

sf::String Key::getButtonKey() 
{
	return buttonKey.getString();
}

void Key::switchTheme()
{
	if (button.getFillColor() == sf::Color::Black && !Theme) {
		button.setFillColor(sf::Color(181, 181, 181));
		buttonKey.setFillColor(sf::Color::Black);
		Theme = true;
	}
	else {
		button.setFillColor(sf::Color::Black);
		buttonKey.setFillColor(sf::Color::White);
		Theme = false;
	}
}

std::wstring toUpperCase(std::wstring str)
{
    int i = 0;
    while (str[i])
    {
        str[i] = towupper(str[i]);
        i++;
    }
    return str;
}

std::wstring toLowerCase(std::wstring str)
{
    int i = 0;
    while (str[i])
    {
        str[i] = towlower(str[i]);
        i++;
    }
    return str;
}


void Key::toUpper()
{
    buttonKey.setString(toUpperCase(getButtonKey()));
}

void Key::toLower()
{
    buttonKey.setString(toLowerCase(getButtonKey()));
}

void Key::PushRelease(sf::Event event)
{
	if (event.type == sf::Event::KeyPressed) 
	{
        if ((Theme && button.getFillColor() != sf::Color::Black)
			|| (!Theme && buttonKey.getFillColor() == sf::Color::Black))
		{
			this->switchTheme();
			Pressed = true;
		}
	}
	else if (event.type == sf::Event::KeyReleased)
	{
        if (Pressed) {
			this->switchTheme();
			Pressed = false;
		}
	}
}

void Key::switchKey(sf::Event event)
{
    std::wstring btnKey = this->getButtonKey();
    switch (event.key.code)
    {
    case sf::Keyboard::Q:
    {
        if (toUpperCase(btnKey) == L"Q" || toUpperCase(btnKey) == L"é")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::W:
    {
        if (toUpperCase(btnKey) == L"W" || toUpperCase(btnKey) == L"Ö")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::E:
    {
        if (toUpperCase(btnKey) == L"E" || toUpperCase(btnKey) == L"Ó")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::R:
    {
        if (toUpperCase(btnKey) == L"R" || toUpperCase(btnKey) == L"Ê")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::T:
    {
        if (toUpperCase(btnKey) == L"T" || toUpperCase(btnKey) == L"Å")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::Y:
    {
        if (toUpperCase(btnKey) == L"Y" || toUpperCase(btnKey) == L"Í")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::U:
    {
        if (toUpperCase(btnKey) == L"U" || toUpperCase(btnKey) == L"Ã")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::I:
    {
        if (toUpperCase(btnKey) == L"I" || toUpperCase(btnKey) == L"Ø")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::O:
    {
        if (toUpperCase(btnKey) == L"O" || toUpperCase(btnKey) == L"Ù")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::P:
    {
        if (toUpperCase(btnKey) == L"P" || toUpperCase(btnKey) == L"Ç")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::LBracket:
    {
        if (toUpperCase(btnKey) == L"Õ") {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::RBracket:
    {
        if (toUpperCase(btnKey) == L"Ú") {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::A:
    {
        if (toUpperCase(btnKey) == L"A" || toUpperCase(btnKey) == L"Ô")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::S:
    {
        if (toUpperCase(btnKey) == L"S" || toUpperCase(btnKey) == L"Û")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::D:
    {
        if (toUpperCase(btnKey) == L"D" || toUpperCase(btnKey) == L"Â")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::F:
    {
        if (toUpperCase(btnKey) == L"F" || toUpperCase(btnKey) == L"À")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::G:
    {
        if (toUpperCase(btnKey) == L"G" || toUpperCase(btnKey) == L"Ï")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::H:
    {
        if (toUpperCase(btnKey) == L"H" || toUpperCase(btnKey) == L"Ð")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::J:
    {
        if (toUpperCase(btnKey) == L"J" || toUpperCase(btnKey) == L"Î")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::K:
    {
        if (toUpperCase(btnKey) == L"K" || toUpperCase(btnKey) == L"Ë")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::L:
    {
        if (toUpperCase(btnKey) == L"L" || toUpperCase(btnKey) == L"Ä")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::Semicolon:
    {
        if (toUpperCase(btnKey) == L"Æ")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::Quote:
    {
        if (toUpperCase(btnKey) == L"Ý")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::Z:
    {
        if (toUpperCase(btnKey) == L"Z" || toUpperCase(btnKey) == L"ß")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::X:
    {
        if (toUpperCase(btnKey) == L"X" || toUpperCase(btnKey) == L"×")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::C:
    {
        if (toUpperCase(btnKey) == L"C" || toUpperCase(btnKey) == L"Ñ")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::V:
    {
        if (toUpperCase(btnKey) == L"V" || toUpperCase(btnKey) == L"Ì")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::B:
    {
        if (toUpperCase(btnKey) == L"B" || toUpperCase(btnKey) == L"È")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::N:
    {
        if (toUpperCase(btnKey) == L"N" || toUpperCase(btnKey) == L"Ò")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::M:
    {
        if (toUpperCase(btnKey) == L"M" || toUpperCase(btnKey) == L"Ü")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::Comma:
    {
        if (toUpperCase(btnKey) == L"Á")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::Period:
    {
        if (toUpperCase(btnKey) == L"Þ")
        {
            this->PushRelease(event);
        }
    }break;
    case sf::Keyboard::LShift:
    {
        if(event.type == sf::Event::KeyPressed)
            this->toUpper();
        if (event.type == sf::Event::KeyReleased)
            this->toLower();
    }break;
    }
    
}

void Key::draw(sf::RenderTarget& btn, sf::RenderStates states) const
{
	btn.draw(button);
	btn.draw(buttonKey);
}


bool operator==(const Key Key1, const Key Key2)
{
	return (Key1.buttonKey.getString() == Key2.buttonKey.getString());
}

bool operator!=(const Key Key1, const Key Key2)
{
	return !(Key1.buttonKey.getString() == Key2.buttonKey.getString());
}

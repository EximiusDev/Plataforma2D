#ifndef SCENE_MENU_H
#define SCENE_MENU_H
#include <SFML/Graphics/RenderWindow.hpp>
#include "Scene.h"

#include "Game.h"
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <vector>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Window/Mouse.hpp>

#include "../InputBox.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
using namespace sf;
using namespace std;

class Scene_Menu : public Scene {
public:
	Scene_Menu();
	void Update (Game & playgame, RenderWindow & win) override;
	void Draw (RenderWindow & win) override;
	
	void InputEvents (Event & event) override;
	~Scene_Menu()override ;
private:
	vector<Texture>txtr_button;
	vector<Sprite>spr_button;
	Clock Cl;
	Mouse Arrow;
	Vector2i r1;
	
	InputText m_text_inputBox;
	Font m_font;
	//char user[25];
	Game* m_playgame;
	bool two_players=false;
	
	Text txt_who_plays;
	Text txt_username;
};

#endif


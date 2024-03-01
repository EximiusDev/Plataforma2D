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
using namespace sf;
using namespace std;

class Scene_Menu : public Scene {
public:
	Scene_Menu();
	void Update (Game & playgame, RenderWindow & win) override;
	void Draw (RenderWindow & win) override;
	
	void InputEvents (Event & event) override {};
	//~Scene_Menu();
private:
vector<Texture>Tex;
vector<Sprite>Spr;

Mouse Arrow;
Vector2i r1;
};

#endif


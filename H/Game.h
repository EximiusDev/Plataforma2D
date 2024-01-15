#ifndef GAME_H
#define GAME_H
#include <SFML\Graphics.hpp>
#include <SFML\Graphics\RenderWindow.hpp>
#include <SFML\Graphics\Texture.hpp>
#include <SFML\Graphics\Sprite.hpp>
#include "Player.h"
#include "../Background.h"
using namespace sf;

class Game {
private:
	RenderWindow win;
	Texture textur;
	Sprite spr;
	//vector <*Background> back[6];
	
	Player p;
	
public:
		
	Game();
	void run();
	void update();
	void draw();
	void processEvent();
	

	

	
};

#endif


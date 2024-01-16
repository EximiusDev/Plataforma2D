#ifndef GAME_H
#define GAME_H
#include <SFML\Graphics.hpp>
#include <SFML\Graphics\RenderWindow.hpp>
#include <SFML\Graphics\Texture.hpp>
#include <SFML\Graphics\Sprite.hpp>
#include "Player.h"
#include "../H/Background.h"
#include <vector>
#include "Background.h"
using namespace std;
using namespace sf;

class Game {
private:
	RenderWindow win;
	Texture textur;
	Sprite spr;
	Player p;
	vector<Background> back;

	
public:
		
	Game();
	void run();
	void update();
	void draw();
	void processEvent();
	

	

	
};

#endif


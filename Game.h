#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
using namespace sf;

class Game {
private:
	RenderWindow win;
	Texture textur;
	Sprite spr;
	
public:
		
	Game();
	void run();
	void update();
	void draw();
	void processEvent();
	

	

	
};

#endif


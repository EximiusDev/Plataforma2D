

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "../H/Game.h"
#include "../H/Background.h"
using namespace sf;

Game::Game():win(VideoMode(1920,1080),"Ejemplo de SFML"){
	win.setFramerateLimit(60);
	
}

void Game::run(){
	while(win.isOpen()) {
		processEvent();
		update();
		draw();
		
	
}}
void Game::update(){
	
		p.Update();
back.Update();
	
}
void Game::draw(){
		win.clear(Color(255,255,255,255));
		p.Draw(win);
		//back.Obj[1].Draw(win);
		win.display();
}
void Game::processEvent(){
	Event e;
	while(win.pollEvent(e)) {
	if(e.type == Event::Closed)
	win.close();	
						}}

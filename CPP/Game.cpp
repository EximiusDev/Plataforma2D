

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "../H/Game.h"
#include "../H/Background.h"
#include <iostream>
using namespace sf;
/// MEJORAR EL BACJGROUND DE ACA
Game::Game():win(VideoMode(1920,1080),"Ejemplo de SFML"){
	win.setFramerateLimit(60);
	
	back.resize(12);
	for(int i=0;i<6;i++) { 
		string Name1="./Textures/B";
		string Name2=to_string(i+1);
		string Name3=".png";
		string Name4=Name1+Name2+Name3;
		back[i].Init(Name4);
	}
	
	
}

void Game::run(){
	while(win.isOpen()) {
		processEvent();
		update();
		draw();
		
	
}}
void Game::update(){
	Falling=false;
	for(int i=0;i<7;i++) { 
		if(Pl.getBloq(i).Collide(p)){
			Falling=true;
			
		}}
	Pl.Update();
	p.Update(Falling);
	
		
		for(int i=0;i<6;i++){back[i].Update(i);
		}
		
	
}
void Game::draw(){
		win.clear(Color(255,255,255,255));
		
for(int i=0;i<6;i++){
			back[i].Draw(win);
		
		}
		Pl.Draw(win);
		p.Draw(win);
		
		
		win.display();
}
void Game::processEvent(){
	Event e;
	while(win.pollEvent(e)) {
	if(e.type == Event::Closed)
	win.close();	
						}}

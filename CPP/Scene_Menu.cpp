#include "../H/Scene_Menu.h"
#include <iostream>
#include "../H/Game.h"
#include <SFML/Window/Keyboard.hpp>
#include "../H/Scene_Play.h"

using namespace sf;
using namespace std;

Scene_Menu::Scene_Menu() {
	/// inicializo las cosas
	//textu.loadFromFile("Menu_temporal.png");
	Tex.resize(4);
	Spr.resize(4);
	Tex[0].loadFromFile("./Textures/Menu.png");
	Spr[0].setTexture(Tex[0]);

	Tex[1].loadFromFile("./Textures/button_Play.png");
	Spr[1].setTexture(Tex[1]);
	Spr[1].setPosition(411,329);

	Tex[2].loadFromFile("./Textures/button_Score.png");
	Spr[2].setTexture(Tex[2]);
	Spr[2].setPosition(364,429);

	Tex[3].loadFromFile("./Textures/button_Exit.png");
	Spr[3].setTexture(Tex[3]);
	Spr[3].setPosition(386,528);

	//Hay que poner el scale segun resolucion

}

void Scene_Menu::Update (Game & playgame) {
	
	
	if (Keyboard::isKeyPressed(Keyboard::Key::Return)){ // Enter
		playgame.SetScene(new Scene_Play()); //playgame.SetScene(new Match());
		///new_scene = true;
	}
	if (Keyboard::isKeyPressed(Keyboard::Key::Escape)){ // Escape
		
		///Agregar clock clk (dar un tiempo para button_Exit)
		 /// en segundos
			playgame.Stop();
		
	}
	
}

void Scene_Menu::Draw (RenderWindow & win) {
	
	
	win.draw(Spr[0]);
	win.draw(Spr[1]);
	win.draw(Spr[2]);
	win.draw(Spr[3]);
	// no va display
}


/*
Scene_Menu::~Scene_Menu() {

}*/





/*
Texture t;
Sprite s;

t.loadFromFile("sfml.png");
s.setTexture(t);
s.setPosition(175, 130);
*/
/*
while(win.isOpen()) {

// procesar eventos
Event evt;
while(win.pollEvent(evt)) {
if(evt.type == Event::Closed)
win.close();	
}

// actualizar
s.move(0.005,0.01);

// redibujar todo
win.clear(Color(255,255,255,255));
win.draw(s);
win.display();
*/

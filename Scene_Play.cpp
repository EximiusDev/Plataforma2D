#include "Scene_Play.h"
#include "Game.h"
#include <SFML/Window/Keyboard.hpp>
#include "Scene_Menu.h"

Scene_Play::Scene_Play() {
	m_floor.setSize({640.f,300.f});
	m_floor.setPosition({0.f,350.f});
	m_floor.setFillColor({100,200,100});
}

void Scene_Play::Update (Game & playgame) {
	
	if (Keyboard::isKeyPressed(Keyboard::Key::Escape)){ // Escape
		playgame.SetScene(new Scene_Menu());
		///playgame.Stop();
	}
	m_player.Update(m_floor.getGlobalBounds());
}

void Scene_Play::Draw (sf::RenderWindow & win) {
	//win.clear(Color(180,255,180,255));
	win.clear({150,255,255});
	win.draw(m_floor);
	m_player.Draw(win);
}


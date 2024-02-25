#include "Scene_Play.h"
#include "Game.h"
#include <SFML/Window/Keyboard.hpp>
#include "Scene_Menu.h"

Scene_Play::Scene_Play() {
	m_floor.setSize({640.f,300.f});
	m_floor.setPosition({0.f,350.f});
	m_floor.setFillColor({100,200,100});
	
	//initialize text
	m_font.loadFromFile("RetroGaming.ttf");
	txt_mov_lat.setFont(m_font);
	txt_salto.setFont(m_font);
	txt_score.setFont(m_font);
	
	txt_mov_lat.setString("Movimiento: Left - Right");
	txt_mov_lat.setFillColor({0,0,0});
	txt_mov_lat.setPosition(50,450);
	txt_mov_lat.setCharacterSize(20);
	
	//txt_subtitulo.setString("<presione Enter para comenzar a jugar> \n<presione Escape para comenzar a jugar>");
	txt_salto.setString("Salto: Up");
	//txt_salto.setFillColor({150,150,150});
	txt_salto.setFillColor({0,0,0});
	txt_salto.setPosition(400,450);
	txt_salto.setCharacterSize(20);
	
	
	txt_score.setString("Score : " + std::to_string(m_score) + " \nTime: "+ std::to_string(seconds_game)); //txt_score.setString("Score : " + std::to_string(m_score) + ""); //txt_score.setString("Score : " + score + "");
	txt_score.setFillColor({0,0,0});
	txt_score.setPosition(0,0);
	txt_score.setCharacterSize(20);
}

void Scene_Play::Update (Game & playgame) {
	
	if (Keyboard::isKeyPressed(Keyboard::Key::Escape)){ // Escape
		playgame.SetScene(new Scene_Menu());
		///playgame.Stop();
	}
	m_player.Update(m_floor.getGlobalBounds());
	
	m_score = m_player.GetScore();
	seconds_game = playgame.GetTime_Sec_Curr_mScn()/100;
	txt_score.setString("Score : " + std::to_string(m_score) + " \nTime: "+ std::to_string(seconds_game));
}

void Scene_Play::Draw (sf::RenderWindow & win) {
	//win.clear(Color(180,255,180,255));
	win.clear({150,255,255});
	win.draw(m_floor);
	m_player.Draw(win);
	
	win.draw(txt_mov_lat);
	win.draw(txt_salto);
	win.draw(txt_score);
}


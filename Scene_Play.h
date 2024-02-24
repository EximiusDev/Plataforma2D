#ifndef SCENE_PLAY_H
#define SCENE_PLAY_H
#include "Scene.h"
#include <SFML/Graphics/RectangleShape.hpp>
#include "Player.h"
//using namespace sf;

class Scene_Play : public Scene {
public:
	Scene_Play();
	void Update (Game & playgame) override;
	void Draw (sf::RenderWindow & win) override;
private:
	RectangleShape m_floor;
	Player m_player;
};

#endif


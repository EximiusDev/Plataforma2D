#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Window/Keyboard.hpp>
#include "Object.h"
using namespace sf;
class Player: public Object{
private:
	string Name1;
	int NumAnim=1;
	bool Walking=false;
	bool Jumping=false;
	int Jumping_Time=40;
	
public:
	Player();
	void Update();
};	

#endif


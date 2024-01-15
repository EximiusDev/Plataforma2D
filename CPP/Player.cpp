#include "../H/Player.h"
#include <iostream>  ///eliminar post prueba
using namespace std;

Player::Player():Object("./Textures/1.png") {
	pos = {400, 500};
	//speed = {0,0};
	// ascel = {10,10};
	spr.setPosition(pos);
	spr.setScale(0.5,0.5);
}

void Player::Update(){
	///Faltaria contemplar la colision con el terreno
	Jumping= false;
	if ((Keyboard::isKeyPressed(Keyboard::Up)||Keyboard::isKeyPressed(Keyboard::W)||Keyboard::isKeyPressed(Keyboard::Space))&&Jumping_Time>0)
	{
		speed.y = -10; /// forma insuficiente corregir luego (speed y pos)
		pos.y -=10; 
		Jumping= true;
		Jumping_Time-=1;
	}
	else speed.y = 0;
	if ((Keyboard::isKeyPressed(Keyboard::Left)||Keyboard::isKeyPressed(Keyboard::A))&&pos.x>-100  )//&&!Jumping)
	{
		speed.x = -10;
		pos.x -=10;
		Jumping_Time=40;
	}
	else if ((Keyboard::isKeyPressed(Keyboard::Right)||Keyboard::isKeyPressed(Keyboard::D))&&pos.x<1650   ) //&&!Jumping)
	{
		speed.x = +10;
		pos.x +=10;
		Jumping_Time=40;
	}
	else speed.x = 0;
	cout<<pos.x<<", "<<pos.y<<endl;
	
	spr.move(speed);
} 

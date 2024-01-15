#include "../H/Player.h"

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
		speed.y = -10;
		spr.move(speed);
		//pos.y -=10; 
		Jumping= true;
		Jumping_Time-=1;
	}
	else speed.y = 0;
	if ((Keyboard::isKeyPressed(Keyboard::Left)||Keyboard::isKeyPressed(Keyboard::D))&&pos.x<1650  )//&&!Jumping)
	{
		speed.x = -10;
		spr.move(speed);
		//pos.x -=10;
		Jumping_Time=40;
	}
	else speed.x = 0;
	if ((Keyboard::isKeyPressed(Keyboard::Right)||Keyboard::isKeyPressed(Keyboard::A))&&pos.x>-200   ) //&&!Jumping)
	{
		speed.x = +10;
		spr.move(speed);
		//pos.x +=10;
		Jumping_Time=40;
	}
	else speed.x = 0;
	
} 

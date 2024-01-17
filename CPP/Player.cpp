#include "../H/Player.h"
#include <string>
using namespace std;

Player::Player():Object() {
	positionG = {400, 500};
	spr.setPosition(positionG);
	scaleG={0.5,0.5};
	spr.setScale(scaleG);

	
}

void Player::Update(){
	///Faltaria contemplar la colision con el terreno
	
	
	
	
	speedG={0.0,0.0};
	NumAnim+=1;
	if ((Keyboard::isKeyPressed(Keyboard::Up)||Keyboard::isKeyPressed(Keyboard::W)||Keyboard::isKeyPressed(Keyboard::Space))&&Jumping_Time>0){
		speedG.y=-10;
		positionG.y+=speedG.y;
		Jumping=true;
		
	}	
	if (Keyboard::isKeyPressed(Keyboard::Down)||Keyboard::isKeyPressed(Keyboard::S)){
		speedG.y=+10;
		positionG.y+=speedG.y;
		Jumping=true;
		
	}	
	
	if ((Keyboard::isKeyPressed(Keyboard::Right)||Keyboard::isKeyPressed(Keyboard::D))&&positionG.x<1650){
		speedG.x=10;
		positionG.x+=speedG.x;
		scaleG.x=0.5;
		spr.setPosition(positionG);
		Walking= true;
	}
	
	if ((Keyboard::isKeyPressed(Keyboard::Left)||Keyboard::isKeyPressed(Keyboard::A))&&positionG.x>-200){	
		speedG.x=-10;
		positionG.x+=speedG.x;
		scaleG.x=-0.5;
		spr.setPosition(positionG.x+256,positionG.y);
		Walking= true;
	}
	
	if(NumAnim>20||(NumAnim>8&&Jumping)){
		NumAnim=1;
	}
	if(Jumping){
		Name1="./Textures/J";
		Jumping = false;
	}else{
		if(Walking){
			Name1="./Textures/Walk";
			Walking = false;
			
		}else{
			Name1="./Textures/";
		}
	}
	string Name2=to_string(NumAnim);
	string Name3=".png";
	tex.loadFromFile(Name1+Name2+Name3);
	spr.setTexture(tex);
	spr.setScale(scaleG);
	spr.move(speedG);
	
}

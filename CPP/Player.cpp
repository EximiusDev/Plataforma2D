#include "../H/Player.h"
#include <string>
using namespace std;

Player::Player():Object("./Textures/1.png") {
	spr.setPosition(x_position,y_position);
	
	
}

void Player::Update(){
	///Faltaria contemplar la colision con el terreno
	
	
	
	
	speedG={0.0,0.0};
	NumAnim+=1;
	if ((Keyboard::isKeyPressed(Keyboard::Up)||Keyboard::isKeyPressed(Keyboard::W)||Keyboard::isKeyPressed(Keyboard::Space))&&Jumping_Time>0){
		speedG.y=-10;
		y_position-=10;
		
	}	
	
	if ((Keyboard::isKeyPressed(Keyboard::Left)||Keyboard::isKeyPressed(Keyboard::D))&&x_position<1650){
		speedG.x=10;
		x_position+=10;
		spr.setScale(1,1);
		spr.setPosition(x_position,y_position);
		Walking= true;
	}
	
	if ((Keyboard::isKeyPressed(Keyboard::Right)||Keyboard::isKeyPressed(Keyboard::A))&&x_position>-200){	
		speedG.x=-10;
		x_position-=10;
		spr.setScale(-1,1);
		spr.setPosition(x_position+512,y_position);
		Walking= true;
	}
	
	if(NumAnim>20){
		NumAnim=1;
	}
	if(Walking){
		Name1="./Textures/Walk";
		Walking = false;
	}else{
		Name1="./Textures/";
	}
	string Name2=to_string(NumAnim);
	string Name3=".png";
	tex.loadFromFile(Name1+Name2+Name3);
	spr.setTexture(tex);
		
	spr.move(speedG);
	
}

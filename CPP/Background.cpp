#include "../H/Background.h"
#include "../H/Object.h"
Background::Background(){
	spr.setScale(6,6);
	spr.setPosition(0,0);
}
Background::Background(string name):Object(name){
	
	
	
}
void Background::Update(int i){
	spr.move(speedG.x*i,speedG.y);
}
void Background::Init(string name){
	tex.loadFromFile(name);
	spr.setTexture(tex);
	
}


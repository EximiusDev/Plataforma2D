#include "../H/Background.h"
//#include "../H/Background.h"
//#include "../H/Object.h"

Background::Background(){
	spr.setPosition(0,0);
	
	spr.setScale(resolutionG.x*0.0042,resolutionG.x*0.0042);
}

void Background::Update(float velocity){
	speedG.x = -velocity;
	positionG += speedG;
	spr.move(speedG); //spr.move(speedG.x* -velocity,speedG.y);
	r1=spr.getGlobalBounds();
	if(r1.left<=-resolutionG.x*0.0042*320){
		spr.setPosition(0,0);
	}
}


void Background::Init(string name){
	tex.loadFromFile(name);
	spr.setTexture(tex);
}



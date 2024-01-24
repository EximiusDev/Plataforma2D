
#include "../H/Bloque.h"
#include "../H/Object.h"

Bloque::Bloque():Object(){
	scaleG={6,6};
	spr.setScale(scaleG);
}

void Bloque::Update(int i){
	spr.move(speedG.x*-i,speedG.y);
	positionG.x+=speedG.x*-i;
	if(positionG.x<=-16*scaleG.x){
		spr.setPosition(1920,positionG.y);
		positionG.x=1920;
	}
	
}
void Bloque::Init(string name,int i,int Pl){ 
	
	tex.loadFromFile(name);
	spr.setTexture(tex);
	positionG={i*144,500};
	spr.setPosition(positionG);

		
}

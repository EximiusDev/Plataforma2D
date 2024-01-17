
#include "../H/Bloque.h"
#include "../H/Object.h"

Bloque::Bloque():Object(){
	spr.setScale(scaleG);
	
}

void Bloque::Update(int i){
	spr.move(speedG.x*-i,speedG.y);
	positionG.x+=speedG.x*-i;
	if(positionG.x<=-16*scaleG.x){
		spr.setPosition(1920,0);
		positionG.x=1920;
	}
	
}
void Bloque::Init(string name,int i){
	tex.loadFromFile(name);
	spr.setTexture(tex);
	positionG.x=16*scaleG.x*i; ///Estos valores dependen de la resolucion para hacer que dejen de ser valores magicos debemos calcular el cambio de resolucion en "object" (Solo para valores menores a 6)
	spr.setPosition(positionG);
	
}

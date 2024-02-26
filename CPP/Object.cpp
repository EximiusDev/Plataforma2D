
#include "../H/Object.h"
#include <iostream>
using namespace std;
Object::Object() {}
Object::Object(string name) {
	tex.loadFromFile(name);
	spr.setTexture(tex);
	
	
}
void Object::Draw (RenderWindow& win ) {
	win.draw(spr);
}
bool Object::CollideDown(Object & O){
	FloatRect r1= this->spr.getGlobalBounds();
	FloatRect r2= O.spr.getGlobalBounds();
	if(r1.intersects(r2)&&r1.top+r1.height>r2.top&&r1.left<r2.left+r2.width&&r1.left+r1.width>r2.left&&r1.top+r1.height<r2.top+22){
		return true;
	}
		return false;
	
}; 
bool Object::CollideUp(Object & O){
	FloatRect r1= this->spr.getGlobalBounds();
	FloatRect r2= O.spr.getGlobalBounds();

	if(r1.intersects(r2)&&r1.top<r2.top+r2.height&&r1.top>r2.top+r2.height-20&&r1.left<r2.left+r2.width&&r1.left+r1.width>r2.left){
		return true;
	}
	return false;

}; 


bool Object::CollideWithWallright(Object & O){
	FloatRect r1= this->spr.getGlobalBounds(); //r1 : player
	FloatRect r2= O.spr.getGlobalBounds(); //r2 : bloq
	if(r1.intersects(r2)&&r1.top+r1.height>r2.top+50&&r1.top<r2.top+r2.height-50&&r1.left+r1.width>r2.left&&r1.left+r1.width<r2.left+50){ //Si se intertan y el personaje esta mas abajo entonces devolver verdadero
		return true;
	}
	return false;

}
bool Object::CollideWithWallleft(Object & O){
	FloatRect r1= this->spr.getGlobalBounds();
	FloatRect r2= O.spr.getGlobalBounds();
	if(r1.intersects(r2)&&r1.top+r1.height>r2.top+50&&r1.top<r2.top+r2.height-50&&r1.left<r2.left+r2.width&&r1.left+50>r2.left+r2.width){ //Si se intertan y el personaje esta mas abajo entonces devolver verdadero
		return true;
	}
	return false;
}




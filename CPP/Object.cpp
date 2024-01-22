
#include "../H/Object.h"
Object::Object() {}
Object::Object(string name) {
	tex.loadFromFile(name);
	spr.setTexture(tex);
	
	
}
void Object::Draw (RenderWindow& win ) {
	win.draw(spr);
}
bool Object::Collide(Object & O){
	auto r1= this->spr.getGlobalBounds();
	auto r2= O.spr.getGlobalBounds();
	return r1.intersects(r2);
}; 


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
	FloatRect r1= this->spr.getGlobalBounds();
	FloatRect r2= O.spr.getGlobalBounds();
	r1.left = r1.left +100;
	
	return r1.intersects(r2);
}; 


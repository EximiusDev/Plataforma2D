
#include "../H/Object.h"
Object::Object() {}
Object::Object(string name) {
	tex.loadFromFile(name);
	spr.setTexture(tex);
	
	
}
void Object::Draw (RenderWindow& win ) {
	win.draw(spr);
}
bool Object::Collide(Object &){
	
};


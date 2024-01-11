
#include "../H/Object.h"

Object::Object(string name) {
	tex.loadFromFile(name);
	spr.setTexture(tex);
	
	
}
void Object::Draw (RenderWindow &) {
	
}
bool Object::Collide(Object &){
	
};

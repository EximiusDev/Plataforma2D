#ifndef OBJECT_H
#define OBJECT_H
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "Object.h"
#include <string.h>
#include <SFML/Graphics/RenderWindow.hpp>
using namespace std;
using namespace sf;
class Object {
protected:
Vector2f speedG = {0,0}; //Velocidad general
Texture tex;
Sprite spr;
public:
	Object(string name);
	void Draw (RenderWindow& win);
	bool Collide(Object &);

};

#endif


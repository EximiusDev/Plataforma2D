#ifndef OBJECT_H
#define OBJECT_H
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "Object.h"
#include <string>
#include <SFML/Graphics/RenderWindow.hpp>
using namespace std;
using namespace sf;
class Object {
protected:
  Texture tex;
  Sprite spr;
public:
	Object(string name);
	void Draw (RenderWindow &);
	bool Collide(Object &);

};

#endif


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
	
Vector2f scaleG={0,0};
Vector2f resolutionG={1280,720};
Vector2f speedG = {1,0}; //Velocidad general
Vector2f positionG = {0,0}; 
Vector2f acelG = {0,0};
Texture tex;
Sprite spr;
public:
	Object();
	Object(string name);
	void Draw (RenderWindow& win);
	bool Collide(Object & O);
	bool CollideWithWallleft(Object & O);
	bool CollideWithWallright(Object & O);
	

};

#endif


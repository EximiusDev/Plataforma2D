#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "H/Life.h"
#include "H/Game.h"

using namespace sf;

int main(int argc, char *argv[]){
	Game G;
	G.run();
	Life l;
	
	return 0;
}


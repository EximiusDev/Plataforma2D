#ifndef PLATAFORM_H
#define PLATAFORM_H
#include "Bloque.h"

class Plataform {
public:
	Plataform();
	void Draw(RenderWindow & win);
	void Update();
	Bloque getBloq(int i);
private:
	vector<Bloque>Plat1;
	
	
	
};

#endif


#ifndef PLATAFORM_H
#define PLATAFORM_H
#include "Bloque.h"

class Plataform {
public:
	Plataform();
	void Draw(RenderWindow & win);
	void Update();
private:
	vector<Bloque>Plat1;
	vector<Bloque>Plat2;
	vector<Bloque>Plat3;
	vector<Bloque>Plat4;
	
	
};

#endif


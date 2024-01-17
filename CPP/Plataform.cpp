
#include "../H/Plataform.h"
///Aca hay que hacerlo con puntero
Plataform::Plataform() {
	Plat1.resize(2);
	Plat2.resize(2);
	Plat3.resize(2);
	Plat4.resize(2);

	for(int i=0;i<2;i++) { 
		string Name1="./Textures/Tierra";
		string Name2=to_string(i+1);
		string Name3=".png";
		string Name4=Name1+Name2+Name3;
		Plat1[i].Init(Name4,i);
		Plat2[i].Init(Name4,i+2);
		Plat3[i].Init(Name4,i+4);
		Plat4[i].Init(Name4,i+6);  
	
	}
}
void Plataform::Update(){
	for(int i=0;i<2;i++) { 
		Plat1[i].Update(3);
		Plat2[i].Update(3);
		Plat3[i].Update(3);
		Plat4[i].Update(3); 
	}
}

void Plataform::Draw(RenderWindow & win){
	for(int i=0;i<2;i++) { 
		Plat1[i].Draw(win);
		Plat2[i].Draw(win);
		Plat3[i].Draw(win);
		Plat4[i].Draw(win);
	}
	
}

#include "../H/Background.h"

Background::Background(){
	
for(int i=0;i<6;i++) { 
	string Name1="./Textures/Walk";
	string Name2=to_string(i);
	string Name3=".png";
	Object aux(Name1+Name2+Name3);
	Obj.push_back(aux);
}
	//spr.setPosition(0,0);
}
void Background::Update(){
	
}

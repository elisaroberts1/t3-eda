#include <iostream>
#include "trees/tree.hpp"
#include <cstring>
#include <cstring>
#include <string.h>
#include <fstream>

using namespace std;
//aqui van las funciones
void cd(){
	;
}

void ls(){
	;
}

void mkdir(){
	;
}

void mkfile(){
	;
}

void rm(){
	;
}

void tree(){
	;
}

void find(){
	;
}

int main(int nargs, char** vargs){
	bool ciclo=false;
	string respuesta;
	string exit ="exit";
	trees::Tree treeSO;//aqui se crea arbol incial
	cout<<" $TreeSO "<< endl<<" Bienvenido a TreeSO "<< endl <<" Autores: <franca> y <elisa> "<<endl;
	while (ciclo==false){
		string *estado;//estado es actualidad del programa
		cout<<"/# "<<estado<<endl;
		cout<<"Que quiere hacer?"<<endl;
		cin>>respuesta;
		// treeSO.setRoot(new trees::TreeNode raiz);//crear raiz
		if (respuesta!=exit){//si no son iguales a exit, sigue con los comandos
			for (int i=0;i<respuesta.length();i++){
				if (respuesta[i-1] == '#'){
					treeSO.setRoot(new trees ::TreeNode (0));//nose si va aca
					if (respuesta[i]=='c' && respuesta[i+1]=='d'){
					cout<<"me dijo cd()"<<endl;
					}
					if (respuesta[i]=='l' && respuesta[i+1]=='s'){
					cout<<"me dijo ls"<<endl;
					}
					if (respuesta[i]=='m' && respuesta[i+1]=='k' && respuesta[i+2]=='d'){
					cout<<"me dijo mkdir"<<endl;
					}
					if (respuesta[i]=='m' && respuesta[i+1]=='k' && respuesta[i+2]=='f'){
					cout<<"me dijo mkfile"<<endl;
					}
					if (respuesta[i]=='r' && respuesta[i+1]=='m'){
					cout<<"me dijo rm"<<endl;
					}
					if (respuesta[i]=='t' && respuesta[i+1]=='r'){
					cout<<"me dijo tree"<<endl;
					}
					if (respuesta[i]=='f' && respuesta[i+1]=='i'){
					cout<<"me dijo find"<<endl;
					}
				}
			}
		}
		else{//si es igual a exit sale
			ciclo=true;
		}
		
	}
	return 0;
}

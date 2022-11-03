#include <iostream>
#include "trees/tree.hpp"
#include <cstring>
#include <cstring>
#include <string.h>
#include <fstream>

using namespace std;
//aqui va la funcion 

int main(int nargs, char* vargs){
	bool ciclo=false;
	string respuesta;
	trees::Tree treeSO;//aqui se crea arbol incial
	cout<<"$TreeSO"<< endl<<"¡Bienvenido a TreeSO!"<< endl <<"¡Autores: <Elisa> y <Franca>!"<<endl;
	while (ciclo==false){
		int estado=0;//estado es actualidad del programa
		cout<<"/#"<<estado<<endl;
		cout<<"Que quiere hacer?"<<endl;
		cin>>respuesta;// /misdocumentos/carpeta1# cd
		// treeSO.setRoot(new trees::TreeNode raiz);//crear raiz
		std::cout<<"Mostrar los hijos de 10" << std::endl;
		trees::TreeNode* node = treeSO.find(10);
		if (respuesta == "exit"){
			ciclo==true;
		}
		
	}
	return 0;
}

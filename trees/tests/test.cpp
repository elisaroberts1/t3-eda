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
	cout<<"$TreeSO"<< endl<<"¡Bienvenido a TreeSO!"<< endl <<"¡Autores: <estudiante1> y <estudiante2>!"<<endl;
	while (ciclo==false){
		int estado=0;//estado es actualidad del programa
		cout<<"/#"<<estado<<endl;
		cout<<"Que quiere hacer?"<<endl;
<<<<<<< HEAD
		cin>>respuesta;// /misdocumentos/carpeta1# cd
=======
		for(int j=0; j<nargs; j++){
			if(vargs[1]=="#"){

			}
		}
		if (vargs=="cd"}{

		}


>>>>>>> c13fc84051dc530ae9020844aa5e362e932e8235


		trees::Tree treeSO;//aqui se crea arbol inial
		treeSO.setRoot(new trees::TreeNode(10));
		treeSO.insert(5,10);
		treeSO.traverse();
		std::cout<<"Mostrar los hijos de 10" << std::endl;
		trees::TreeNode* node = treeSO.find(10);
		if (node != nullptr){
			node->getChildren()->print();
		}
<<<<<<< HEAD
		
	}
=======
>>>>>>> c13fc84051dc530ae9020844aa5e362e932e8235
	return 0;
}

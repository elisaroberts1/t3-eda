#include <iostream>
#include "trees/tree.hpp"
#include <cstring>

using namespace std;
//aqui va la funcion 

int main(int nargs, char** vargs){
	bool ciclo=false;
	cout<<"$TreeSO"<< endl<<"¡Bienvenido a TreeSO!"<< endl <<"¡Autores: <estudiante1> y <estudiante2>!"<<endl;
	while (ciclo==false){
		int estado=0;//estado es actualidad del programa
		cout<<"/#"<<estado<<endl;
		cout<<"Que quiere hacer?"<<endl;
		if (vargs=="cd"}{

		}




		trees::Tree treeSO;//aqui se crea arbol inial
		treeSO.setRoot(new trees::TreeNode(10));
		treeSO.insert(5,10);
		treeSO.traverse();
		std::cout<<"Mostrar los hijos de 10" << std::endl;
		trees::TreeNode* node = treeSO.find(10);
		if (node != nullptr){
			node->getChildren()->print();
		}
		if 
	}
	return 0;
}

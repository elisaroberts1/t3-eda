#include <iostream>
#include "trees/tree.hpp"
#include <cstring>

int main(int nargs, char** vargs){
	//aqui va un while, y exit lo termina

	trees::Tree treeSO;//aqui se crea arbol inial
	treeSO.setRoot(new trees::TreeNode(10));
	treeSO.insert(5,10);
	treeSO.traverse();
	std::cout<<"Mostrar los hijos de 10" << std::endl;
	trees::TreeNode* node = treeSO.find(10);
	if (node != nullptr){
		node->getChildren()->print();
	}
	return 0;
}

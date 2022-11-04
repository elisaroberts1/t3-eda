/*
 * tree.cpp
 *
 *  Created on: Aug 31, 2022
 *      Author: jsaavedr
 */

#include "trees/tree.hpp"
#include <iostream>
#include <string.h>

namespace trees {

Tree::Tree(): root(nullptr) {

}

/*void Tree:: rm(TreeNode* node,char nombre){
	TreeNode* node = find(nombre);
	if (node -> getData() == nombre){
		remove(nombre);
	}

}*/

/*void Tree::item(std::string nombre, int val){
	if(val==1){
		TreeNode* nodo1=nombre;
    	insert(nodo);
	}
    if(val==0){
		TreeNode* nodo2=val;
		insert(nodo);

	}
}*/

void Tree::setRoot(TreeNode* node){
	if (root == nullptr){
		root = node;
	}
}
void Tree::insert(TreeNode* child, TreeNode* parent){
	if (parent != nullptr){
		parent->getChildren()->insertFirst(child);
	}
}

void Tree::insert(std::string val, std::string val_parent){
	TreeNode* parent = find(val_parent);
	if (parent != nullptr){
		TreeNode* child = new TreeNode(val);
		insert(child, parent);
		std::cout << "insertado " << val << " in " << val_parent << " at " << parent << std::endl;
	}
}

TreeNode* Tree::find_rec(std::string val, TreeNode* node){
	TreeNode* ans = nullptr;
	if (node != nullptr){
		std::string nod = node->getData();
		const char* n = nod.c_str();
		if(nod.length() == val.length()){
			for(int i = 0; i < val.length(); i++){
				if(nod[i] == val[i]){
					ans = node;
				}
				else{ // search in children
					TreeList* childrenList = node->getChildren();
					TreeListNode* ptr = childrenList->getHead();
					while (ptr!=nullptr && ans == nullptr){
						ans = find_rec(val, ptr->getData());
						ptr = ptr->getNext();
					}
				}
			}
		}
	}
	return ans;
}

TreeNode* Tree::find(std::string val){
	TreeNode* ans = find_rec(val, root);
	return ans;
}


void Tree::traverse_rec(TreeNode* node, int level){
	if (node != nullptr){
		std::cout << std::string(level*2, '-');
		std::cout<<node->getData() << " at level " << level <<std::endl;
		TreeList* childrenList = node->getChildren();
		TreeListNode* ptr = childrenList->getHead();
		while (ptr!=nullptr){
			traverse_rec(ptr->getData(), level + 1);
			ptr = ptr->getNext();
		}
	}
}

void Tree::traverse(){
	traverse_rec(root, 1);
}

Tree::~Tree() {
	delete root;
}

} /* namespace trees */

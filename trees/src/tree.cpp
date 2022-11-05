/*
 * tree.cpp
 *
 *  Created on: Aug 31, 2022
 *      Author: jsaavedr
 */

#include "trees/tree.hpp"
#include <iostream>
#include <string.h>
#include <string>
#include <vector>

namespace trees {

Tree::Tree(): root(nullptr) {

}

/*void Tree:: rm(TreeNode* node,char nombre){
	TreeNode* node = find(nombre);
	if (node -> getData() == nombre){
		remove(nombre);
	}

}*/
std::vector<std::string*> v_item;
void Tree::item(std::string nombre, int val){
	if(val==1){
		std::string n1 = nombre + "1";
		v_item.push_back(&n1);
		std::cout << n1 << std::endl;
		std::cout << "Creaste una carpeta" << std::endl;
	}
    if(val==0){
		std::string n0 = nombre + "0";
		v_item.push_back(&n0);
		std::cout << n0 << std::endl;
		std::cout << "Creaste un file" << std::endl;
	}
}

void Tree::searchItem(std::string nom){
	std::string n = nom + "1";
	std::string nn = nom + "0";
	for(int i=0; i<v_item.size(); i++){
		if(v_item[i] == &n){
			std::cout << "ES UNA CARPETA, PUEDES HACER UN INSERT" << std::endl;
		}
		else if(v_item[i] == &nn){
			std::cout << "ES UN FILE, NO PUEDES HACER UN INSERT" << std::endl;
		}
		else if(v_item[i] != &n && v_item[i] != &nn){
			std::cout << "ESA CARPETA NO ESTA EN EL PATH, LO LAMENTO" << std::endl;
		}
	}
}

void Tree::rm(TreeNode* node){
	if(node != NULL){
		delete node->getChildren();
		delete node;
	}
}

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
	TreeNode* par = find(val_parent);
	if (par != nullptr){
		TreeNode* child = new TreeNode(val);
		insert(child, par);
		std::cout << "insertado " << val << " in " << val_parent << " at " << par << std::endl;
	}
}

TreeNode* Tree::find_rec(std::string val, TreeNode* node){
	TreeNode* ans = nullptr;
	if (node != nullptr){
		if (node->getData() == val){
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

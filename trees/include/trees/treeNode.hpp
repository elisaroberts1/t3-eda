/*
 * treeNode.hpp
 *
 *  Created on: Aug 30, 2022
 *      Author: jsaavedr
 */

#ifndef TREENODE_HPP_
#define TREENODE_HPP_

#include "trees/treeList.hpp"
#include <string>

namespace trees {

class TreeList;
class TreeNode {
private:
	TreeNode* parent;
	int data; //data can be of any type
	std::string dat;
	TreeList* children;
public:
	TreeNode();
	TreeNode(std::string nom);
	void setParent(TreeNode* node);
	void setData(std::string val);
	void setChildren(TreeList* list);
	TreeNode* getParent();
	std::string getData();
	TreeList* getChildren();
	virtual ~TreeNode();
};

} /* namespace trees */

#endif /* TREENODE_HPP_ */

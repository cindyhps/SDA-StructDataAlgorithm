#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;


void BinaryTree::insert(int insertId){
	
	root = insertRecursion(root, insertId);
		
}


Node *BinaryTree::insertRecursion(Node *currentRoot, int insertId){
	
	if (currentRoot == NULL){
		currentRoot = new Node();
		currentRoot->id = insertId;
		return currentRoot;
	}
	
	if(insertId < currentRoot->id){
		currentRoot->left = insertRecursion(currentRoot->left, insertId);
	}
	else if(insertId > currentRoot->id){
		currentRoot->right = insertRecursion(currentRoot->right, insertId);
	}
	
	return currentRoot;
}

void BinaryTree::inOrder(){
	inOrderRecursive(root);
	
}

void BinaryTree::inOrderRecursive(Node *currentRoot){
	
	if(currentRoot != NULL){
		inOrderRecursive(currentRoot->left);
		cout << currentRoot->id << ", ";
		inOrderRecursive(currentRoot->right);
	}
	
	
	
}





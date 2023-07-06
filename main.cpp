#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

int main(int argc, char** argv){
	
	BinaryTree bin;
	
	bin.insert(84);
	bin.insert(21);
	bin.insert(44);
	bin.insert(99);
	bin.insert(74);
	bin.insert(70);
	bin.insert(30);
	bin.insert(1);
	
	cout << bin.root->id;
	cout << bin.root->left->id;
	bin.inOrder();
	
	return 0;
}

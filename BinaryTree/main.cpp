#include "Header.h"
#include <iostream>
#include <string>
using namespace std;
#include "Tree.h"
#include "Node.h"

int main()
{
	Tree<int,string> tree;
	tree.Add(3,"Hi");
	tree.Add(2,"Hello");
	tree.Add(1,"Hola");
	tree.Print();
	cout << endl;
	system("pause");
	return 0;
}
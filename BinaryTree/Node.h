#pragma once
#include <iostream>
using namespace std;
#include "Tree.h"
#include "Node.h"

template<typename T_key, typename T_value>
class Node
{
public:
	T_key key;
	T_value value;
	Node<T_key, T_value>* left;
	Node<T_key, T_value>* right;


	Node(T_key key, T_value value):key{ key }, value{ value } , left{NULL}, right{NULL} {};


	void Add(T_key key, T_value value)
	{
		if (key <= this->key) {
			if (this->left) {
				this->left->Add(key, value);
			}
			else {
				this->left = new Node<T_key, T_value>(key, value);
			}
		}
		else {
			if (this->right) {
				this->right->Add(key,value);
			}
			else {
				 
			}
		}
	}
	void Print(const Node*);

};

template<typename T_key, typename T_value>
inline void Node<T_key, T_value>::Print(const Node* node)
{
	if (node)
	{
		cout << "Value: " << node->value<< "\n" << "Key: " << node->key<< "\n" << endl;

		if (node->left)
			Print(node->left);

		if (node->right)
			Print(node->left);
	}
	else
		cerr << "EMPTY TREE";
}

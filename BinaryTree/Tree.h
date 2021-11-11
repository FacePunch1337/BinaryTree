#pragma once
#include <iostream>
using namespace std;
#include "Tree.h"
#include "Node.h"

 template<typename T_key, typename T_value>
class Tree
{
private:
	Node<T_key, T_value>* root;

public:
	Tree():root{NULL} {}
	void Add(T_key key, T_value value) {
		Node<T_key, T_value>* new_node = new Node<T_key, T_value>(key, value);

		if (root == nullptr)
			root = new_node;
		else
		{
			Node<T_key, T_value>* cursor = root;
			Node<T_key, T_value>* current = root;

			while (cursor != nullptr)
			{
				current = cursor;

				if (key < cursor->key)
					cursor = cursor->left;
				else
					cursor = cursor->right;
			}

			if (key < current->key)
				current->left = new_node;
			else
				current->right = new_node;
		}
	}

	void Print() const;

	
	

};

template<typename T_key, typename T_value>
inline void Tree<T_key, T_value>::Print() const { root->Print(root); }


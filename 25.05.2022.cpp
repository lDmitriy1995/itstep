#pragma once
#include <iostream>
using namespace std;

template<typename T>
struct node {
	T key;
	node* left, * right;
	node() : left(nullptr), right(nullptr) {}
};

template<typename T>
class tree
{
	node<T>* root;
public:
	tree() :root(nullptr) {}
	void push(const T& val);
	void show();
private:
	void push(node<T>* ptr, const T& val);
	void show(node<T>* ptr);

};

template<typename T>
inline void tree<T>::push(const T& val)
{
	if (root == nullptr)
	{
		root = new node<T>();
		root->key = val;
	}
	else
	{
		push(root,val);
	}
}

template<typename T>
inline void tree<T>::show()
{
	if (root == nullptr)
	{
		cout << " net dannix" << endl;
	}
	else
	{
		show(root);
	}
}

template<typename T>
inline void tree<T>::push(node<T>* ptr, const T& val)
{
	if (ptr->key > val)
	{
		if (ptr->left != nullptr)
			push(ptr->left, val);
		else
		{
			ptr->left = new node<T>();
			ptr->left->key = val;
		}
	}
	else
	{
		if (ptr->right != nullptr)
	      push(ptr->right, val);
	     
		else
		  ptr->right = new node<T>();
			ptr->right->key = val;
		
	}


}

template<typename T>
inline void tree<T>::show(node<T>* ptr)
{
	if (ptr->left != nullptr)
		show(ptr->left);
	cout << ptr->key << endl;
	if (ptr->right != nullptr)
		show(ptr->right);

}

int main() {
	tree<int> a;
	a.push(45);
	a.push(30);
	a.push(50);
	a.push(27);
	a.push(39);
	a.push(15);
	a.push(90);
	a.push(103);
	a.push(70);

	a.show();
}

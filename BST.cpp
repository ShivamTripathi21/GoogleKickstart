#include <bits/stdc++.h>

using namespace std;

class node
{
public:
	int data;
	node *left;
	node *right;

	node(){
		this->data = 0;
		this->left = NULL;
		this->right = NULL;
	}

	node(int value){
		this->data = value;
		this->left = this->right = NULL;
	}

	node *Insert(node *root, int value){
		if(!root) 
    	{
        	return new node(value); 
    	}
    	if(value > root->data){
    		root->right = Insert(root->right, value);
    	} 
    	else{
    		root->left = Insert(root->left, value);
    	}
    	return root;
	}

	void Inorder(node *root) 
	{ 
	    if(!root) 
	    { 
	        return; 
	    } 
	    Inorder(root->left); 
	    cout << root->data << endl; 
	    Inorder(root->right); 
	} 
};



int main(){

	node b, *root = NULL; 
    root = b.Insert(root, 50); 
    b.Insert(root, 30); 
    b.Insert(root, 20); 
    b.Insert(root, 40); 
    b.Insert(root, 70); 
    b.Insert(root, 60); 
    b.Insert(root, 80); 
  
    b.Inorder(root); 

	return 0;
}
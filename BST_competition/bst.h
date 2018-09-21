#include<iostream>
using namespace std;

#include "tnode.h"
#ifndef BST_H
#define BST_H

class BST{
        public:
                BST():  root(NULL) {};
                ~BST(){ clean(root); root = NULL; };
                
				void insert(string akey, string aval){
					if(root == NULL){
						root = new Tnode(akey, aval);
						return;
					}
					root = insert(root, akey, aval);
					updateHeight(root);
					
				};
				void print_inorder(){ print_inorder(root);
                        cout << endl;
				};

				void heightPrint(){ 
					heightPrint(root); 
					cout << endl;
				};
		
				void remove(string ak){
					root = remove(root, ak);
					updateHeight(root);
				};
				string leftmostLCA(string akey1, string akey2);
				void traverseTree(Tnode *root, string akey1, string akey2, string & leftmostLCA);
				void printLeafParent();

				void printLevel(int);

				
		private:
	

			Tnode* balance(Tnode *cur);

			int getSize(Tnode *cur){
				if(cur == NULL)
					return 0;
				return 1 + getSize(cur->left) + getSize(cur->right);
			}//getSize
			void updateSize(Tnode *cur){
				cur->size = 1 + getSize(cur->left) + getSize(cur->right);
			}//updateSize
	
			Tnode* remove(Tnode* cur, string ak);
			Tnode* getLeftmost(Tnode* cur);

			int getHeight(Tnode *cur){
				if(cur == NULL)
					return -1;
				else
					return cur->height;
			};
				void updateHeight(Tnode *cur);
				int balanceFactor(Tnode *cur);
				Tnode* rightRotation(Tnode *cur);
				Tnode* leftRotation(Tnode *cur);
				void heightPrint(Tnode *cur);
				Tnode* insert(Tnode *cur, string akey, string aval);
				void print_inorder(Tnode *cur);
				Tnode *root = NULL;
				void clean(Tnode* cur);
				Tnode* copy(Tnode* cur);
				bool printLeafParent(Tnode *);
				void printLevel(int depthLevel, Tnode *cur);
};


#endif

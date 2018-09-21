#include <stdlib.h>
#include<iostream>
#include<string>
#include<iomanip>
#include<stdio.h>
#include<cstdio>
#include<cmath>
#include<fstream>
using namespace std;

#include "bst.h"


int main(int argc, char* argv[]){

	
    BST numbers;
	string command;

	while(cin >> command){//
		  if(command == "print_inorder"){
		 	numbers.print_inorder();
		 	cout << endl;
		}else if(command == "heightPrint"){
			numbers.heightPrint();
			cout << endl;
		}else if(command == "insert"){
			string word;
			cin >> word;
			int len ;
			cin >> len;
			string akey = word.substr(0, len);
			numbers.insert(akey, word);
		 }else if(command == "remove"){
			string akey;
			cin >> akey;
			numbers.remove(akey);
		}else if(command == "printLevel"){
			int x;
			cin >> x;
			numbers.printLevel(x);
		 }else if(command == "leftmostLCA"){
			string k1, k2;
			cin >> k1 >> k2;
			string res = numbers.leftmostLCA(k1, k2);
			cout << "The leftmost node of LCA of " << k1 << " and " << k2 << " is " << res << endl;
		}
			// string res = numbers.leftmostLCA(k1, k2);
			//cout << "The leftmost node of LCA of " << k1 << " and " << k2 << " is " << res << endl;
		}else if(command == "sumLCA"){
			string k1, k2;
			cin >> k1 >> k2;
			// int res = numbers.sumLCA(k1, k2);
			//cout << "The sum of edges from LCA to " << k1 << " and " << k2 << " is " << res << endl;
		}else if(command == "printLeafParent"){
			numbers.printLeafParent();

		}else if(command == "emptyIntersection"){
			string k1, k2;
			cin >> k1 >> k2;
			// bool res = numbers.emptyIntersection(k1, k2);
			//if(res){
			//	cout << "The intersection of two subtrees rooted at " << k1 << " and " << k2 << " is empty." << endl;
			//}
			//else
			//	cout << "The intersection of two subtrees rooted at " << k1 << " and " << k2 << " is NOT empty." << endl;

		}else if(command == "printOneChild"){
			// numbers.printOneChild();
		}else if(command == "sizeDifference"){
			string k1, k2;
			cin >> k1 >> k2;
			//int res = numbers.sizeDifference(k1, k2);
			//cout << "The size of the difference of " << k1 << " and " << k2 << " is " << res << endl;
		}else if(command == "printHeight1"){
			//numbers.printHeight1();
		}else if(command == "sizeUnion"){
			string k1, k2;
			cin >> k1 >> k2;
			// int res = numbers.sizeUnion(k1, k2);
			//cout << "The size of the union of " << k1 << " and " << k2 << " is " << res << endl;		
		}
		else if(command == "printLeaves"){
			// int res = numbers.printLeaves();
			//cout << "There are total of " << res << " leaves in the tree." << endl;
		}
		else if(command == "previous"){
			string akey;
			cin >> akey;
			// string res = numbers.previous(akey);
			//cout << "The previous node of " << akey << " is " << res << endl;
		}else if(command == "printPathsLCA"){
			string k1, k2;
			cin >> k1 >> k2;
			// numbers.printPathsLCA(k1, k2);
		}
		else{
			cerr << "ERROR: command " << command << " is not found." << endl;
		}
	}//while

    return 0;

}//main()

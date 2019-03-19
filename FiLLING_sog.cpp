#include<iostream>
#include<string>
#include<fstream>
#include<process.h>
using namespace std;
struct Node {
	int num;
	Node *next;

	Node(int x) {
		num = x;
		next = 0;
	}
};
Node *first;
void addAtbeg(int x) {
	//cout << "add at beg";
	Node *ptr = new Node(x);
	if (first == 0) {
		first = ptr;
	}
	else {
		ptr->next = first;
		first = ptr;
	}
}

void disp() {
	int x;
	Node *temp = first;
	while (temp)
	{
	cout<<" "<< temp->num;
		temp = temp->next;
		//return x;
	}
	//return x;
}
void main(int argc, char *argv[])
{
	ofstream out;
	//ifstream in;
	//string ch;
	char r[100];
	
	//in.open(argv[1]);
	//if (in.fail())
//	{
	//	cout << "\n File Not Found";
	//	exit(0);
	///
	///getline(in, ch);
	//cout << ch << endl;
	//in.close();
	//int c = atoi(argv[1])
	for(int i=0;i<5;i++)
	addAtbeg(i);
	//addAtbeg(argv[2]);
	
	out.open(argv[1]);
	//out << "\n Check ur file";
//	int x = disp();
	//int y = disp();
	cin.getline(r,100);
	out<<disp();
	//out << y;
	//out >> ch;
	out.close();
	
}
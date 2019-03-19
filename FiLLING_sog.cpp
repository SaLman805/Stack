#include<iostream>
#include<string>
#include<fstream>
#include<process.h>
using namespace std;
struct Node {
	string num;
	Node *next;
	Node(string x) {
		num = x;
		next = 0;
	}
};
Node *first;
void addAtbeg(char *a) {
	//cout << "add at beg";
	ifstream io;
	string ch;
	io.open(a);
	getline(io, ch);
	//int k = stoi(ch);
	Node *ptr = new Node(ch);
	if (first == 0) {
		first = ptr;
	}
	else 
	{
		ptr->next = first;
		first = ptr;
	}
	io.close();
}

void disp(char *a) {
	char r[100];
	ofstream out;
	cin.getline(r, 100);
	out.open(a);
	
	Node *temp = first;
	while (temp)
	{
	cout<<" "<< temp->num<<"->";
	out <<temp->num<<"->";
		temp = temp->next;
		//return x;
	}
	out.close();
	//return x;
}
void main(int argc, char *argv[])
{
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
	//for(int i=0;i<5;i++)
	addAtbeg(argv[1]);
	//addAtbeg(argv[2]);
	
	//out << "\n Check ur file";
//	int x = disp();
	disp(argv[2]);
	
	//out<<disp();
	//out << y;
	//out >> ch;
	
}
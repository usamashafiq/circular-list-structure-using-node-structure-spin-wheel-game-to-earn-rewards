#include<iostream>
#include<conio.h>
#include<string>
#include<ctime>
#include<stdlib.h>
#include <thread>
#include <chrono>
#include<stdio.h>
#include<Windows.h>
using namespace std;
struct Node {
	int data;
	string data1;
	Node *next;
	Node() {
		data = 0;
		next = NULL;
	}
};
class cirlist {
private:
	int size;
	Node*last;
public:
	cirlist() {
		last = NULL;
		size = 0;
	}
	void display();
	bool addfirst(string, int);
	bool addLast(int, string);
	Node* get(int);
};
bool cirlist::addfirst(string a, int b) {
	Node *t = new Node();
	t->data1 = a;
	t->data = b;
	if (last == NULL) {
		last = t;
		t->next = last;
		size++;
		return true;
	}
	else {
		t->next = last->next;
		last->next = t;
		last = t;
		size++;
		return true;

	}
}

void cirlist::display() {

	if (size == 0) {
		cout << "Empty" << endl;
	}
	else {
		Node *t = last->next;
		do {
			cout << t->data1 << "(" << t->data << ")";
			cout << endl;
			t = t->next;
		} while (t != last->next);
	}
}

bool cirlist::addLast(int a, string b) {
	Node *t = new Node();
	t->data = a;
	t->data1 = b;
	if (last == NULL) {
		last = t;
		t->next = last;
		size++;
		return true;
	}
	else {
		t->next = last->next;
		last->next = t;
		size++;
		return true;
	}
}
Node* cirlist::get(int a) {
	Node *n = last->next;
	Node *t = new Node();

	int count = 0;
	if (size == 0) {
		return NULL;
	}
	else if (a == count) {
		t->data1 = n->data1;
		t->data = n->data;

		return n;




		count++;
		t = t->next;
		while (t != last->next) {
			if (a == count) {
				t->data1 = n->data1;
				t->data = n->data;

				return n;

			}
			count++;
			t = t->next;

		}
	}

	else
		return NULL;

}
void main() {
	cirlist c;
	srand(time(0));
	c.addfirst("usama", 2);
	c.addfirst("ali", 3);
	c.addfirst("numan", 5);
	c.addfirst("haseeb", 6);
	c.addfirst("muneeb", 9);
	c.display();
	Node *t = new Node();
	t = c.get(0);
	int q = 300 + rand() % 700;
	int i = 300;
		while (i <= q) {
			cout << t->data1 << "(" << t->data << ")" << endl;
			Sleep(100);
			t = t->next;
			
			i++;
		}



	
	cout <<"reward"<< t->data1 << "(" << t->data << ")";

	_getch();
}




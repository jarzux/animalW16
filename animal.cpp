#include<iostream>
#include<string>

#include "animal.h"

using namespace std;

Animal::Animal() {
	name = "Fred";
	color = "White";
	address = new Address("GCB 101");
}

Animal::Animal(string name, string color, string address) {
	Animal::name = name;
	Animal::color = color;
	Animal::address = new Address(address);
}

Animal::~Animal() {
	cout << "Animal Desctructor!" << endl;
	delete address;
}

void Animal::description() {
	cout << name << ":" << " is " << color << endl;
	address->print();
}
#include<iostream>
#include "address.h"

using namespace std;

Address::Address(string address) {
	location = address;
}

void Address::print() {
	cout << "At: " << location << endl;
}
#include<iostream>
#include<string>

#include "animal.h"

using namespace std;

int main(int argc, char **argv) {
	cout << "Hello Class!" << endl;
	Animal *fred = new Animal();
	Animal bob("Bob","Yellow","Caf");
	
	fred->description();
	bob.description();
	
	delete fred;
}
#include<string>
#include "address.h"

using namespace std;

class Animal {
public:
	Animal();
	Animal(string name, string color, string address);
	~Animal();
	
	void description();
private:
	string name;
	string color;
	Address *address;
};

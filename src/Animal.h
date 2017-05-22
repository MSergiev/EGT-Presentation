#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Animal{
public:
	Animal(const string& name="");
	void setName(const string& name);
	string getName() const;
	virtual void move()=0;
	virtual ~Animal();

private:
	string name;
};

#endif

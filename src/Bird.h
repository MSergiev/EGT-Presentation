#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal{
public:
	Bird(const string& name="The bird");
	void move();
	~Bird();
};

#endif

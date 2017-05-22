#ifndef SNAKE_H
#define SNAKE_H

#include "Animal.h"

class Snake : public Animal{
public:
	Snake(const string& name="The snake");
	void move();
	void hiss();
	~Snake();
};

#endif

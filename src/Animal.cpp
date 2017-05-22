#include "Animal.h"

Animal::Animal(const string & name){
	setName(name);
}

void Animal::setName(const string & name){
	this->name=name;
}

string Animal::getName() const{
    return name;
}

Animal::~Animal(){

}


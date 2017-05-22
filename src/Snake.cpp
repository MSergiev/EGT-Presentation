#include "Snake.h"

Snake::Snake(const string & name) 
:Animal(name){
}

void Snake::move(){
	cout << getName() << " slithered" << endl;
}

void Snake::hiss(){
	cout << "HISSSS" << endl;
}

Snake::~Snake(){

}


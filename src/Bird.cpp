#include "Bird.h"

Bird::Bird(const string & name)
:Animal(name){
}

void Bird::move(){
	cout << getName() << " flew" << endl;
}

Bird::~Bird(){

}


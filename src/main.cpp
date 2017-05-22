#include <iostream>
#include <vector>
#include "Snake.h"
#include "Bird.h"
using namespace std;

int main(){
	//Animal animal;
	Snake snake;
	Bird bird;

	Animal* sPtr = &snake;
	Animal* bPtr = &bird;

	vector<Animal*> zoo;

	zoo.push_back(bPtr);
	zoo.push_back(sPtr);

	for(unsigned i = 0; i < zoo.size(); i++){
		zoo[i]->move();
		if(Snake* ptr = dynamic_cast<Snake*>(zoo[i])){
			cout << "Cast succeeded" << endl;
			ptr->hiss();

		}
	}

	return 0;
}

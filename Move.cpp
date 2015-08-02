#include "Move.h"

Move::Move(vector<Input::Action> *in, string name){
	this->name=name;
	this->sequence=in;
}

vector<Input::Action>* Move::getSequence(){
	return this->sequence;
}
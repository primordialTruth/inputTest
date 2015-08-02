#pragma once
#include <vector>
#include <string>

#include "Input.h"

using std::vector;
using std::string;

/*
	Assumptions: no gap specifier is default gap
*/

class Move{
public:
	Move(vector<Input::Action> *in, string name);
	vector<Input::Action>* getSequence();

private:
	string name;
	vector<Input::Action>* sequence;
};
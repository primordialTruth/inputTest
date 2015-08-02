#pragma once
#include <vector>
#include <string>

using std::vector;
using std::string;

class Input{
public:
	enum Action {UP=1, DOWN, LEFT, RIGHT, 
		UPRIGHT, UPLEFT, DOWNLEFT, DOWNRIGHT, 
		A1, A2, JUMP};
//	vector<string> names; //UP,DN,LF,RT		UR,DR,DL,UL		//A1,A2,J
};
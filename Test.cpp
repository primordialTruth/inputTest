#include <stdio.h>
#include "Move.h"
#include "Input.h"
#include "MoveTree.h"
#include <vector>
#include <string>

using std::vector;

int main(int argc, char ** argv){
	vector<Input::Action> act;
	act.push_back(Input::Action::UP);
	act.push_back(Input::Action::DOWN);
	Move* move = new Move(&act,"Testmove!");
	vector<Move*> mpv;
	mpv.push_back(move);
	MoveTree* mt = new MoveTree(&mpv);

	return 0;
}
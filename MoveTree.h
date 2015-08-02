#pragma once

#include <string>
#include <vector>
#include "Move.h"
#include "MoveNode.h"

class MoveTree{
	MoveNode* root;
public:
	MoveTree(vector<Move*>* moves);
	void addMove(Move* movePointer);
};
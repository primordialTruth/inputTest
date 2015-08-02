#pragma once

#include "Move.h"
#include "Input.h"
#include <unordered_map>
using std::unordered_map;

class MoveNode;
//
using umap=unordered_map<Input::Action,MoveNode*,std::hash<int>>;

class MoveNode{
private:
	Move* move;
	umap branches;
public:
	MoveNode();
	void setBranch(Input::Action in, MoveNode* mnp);
	umap* getBranches();
	MoveNode* getBranchNode(Input::Action in);
	Move* getMove();
	void setMove(Move* m);
};
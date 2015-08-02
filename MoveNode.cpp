#include "MoveNode.h"
#include "Input.h"
#include "Move.h"

MoveNode::MoveNode(){
	move=0;
	//branches=0;
}

void MoveNode::setBranch(Input::Action in, MoveNode* mnp){
	this->branches[in]=mnp;
}

umap* MoveNode::getBranches(){
	return &branches;
}

MoveNode* MoveNode::getBranchNode(Input::Action in){
	return this->branches[in];
}

Move* MoveNode::getMove(){
	return move;
}

void MoveNode::setMove(Move* m){
	this->move=m;
}
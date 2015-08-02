#include <stdio.h>

#include "MoveTree.h"
#include "Input.h"
#include "MoveNode.h"

MoveTree::MoveTree(vector<Move*>* moves){
	root=new MoveNode();
	for(auto move : *moves){
		addMove(move);
	}
}

void MoveTree::addMove(Move* movePointer){
	MoveNode* currentNode;
	currentNode=root;
	for(auto input : *( movePointer->getSequence() ) ){
		//if the node does not exist, create
		auto iter=currentNode->getBranches()->find(input);
		if(iter == currentNode->getBranches()->end()){
			MoveNode* newMN= new MoveNode();
			currentNode->setBranch(input, newMN);
			currentNode = newMN;
		}else{
			currentNode=currentNode->getBranchNode(input);
		}
		//terminate with pointer to Move
		currentNode->setMove(movePointer);
	}
}

void MoveTree::printTree(){
	auto currentNode=this->root;
	while(true){
		if(move){
			break;
		}
		}
	}
}
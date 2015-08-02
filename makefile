HEADERS=Move.h Input.h MoveTree.h MoveNode.h
SEEPEEPEES=Test.cpp Move.cpp Input.cpp MoveTree.cpp MoveNode.cpp

test:
	g++ $(HEADERS) $(SEEPEEPEES) -o Test -std=c++11
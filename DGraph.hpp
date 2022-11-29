#pragma once
#include <vector>
#include <iterator>
#include "GraphBaseClasses.hpp"

using std::list;
using std::vector;
using std::string;

class DGraph
{
vector < Node > nodeList;
string printListNodes();

public:
DGraph() 
{

}
~DGraph() {}


void addEdge(char destID, char sourceID);
void addNode(char id);

vector < Node > getlistNodes() { return nodeList; }

string listNodes();
string displayAdjacency();

string breadthFirst() { return ""; };
string depthFirst() { return ""; };

char getNextEdge(Node);

string printNodeEdges(Node n);

};


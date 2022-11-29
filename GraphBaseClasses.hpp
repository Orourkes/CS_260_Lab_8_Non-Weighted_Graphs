#pragma once
#include <list>
#include <iostream>

using std::list;
using std::string;
using std::cout;
using std::endl;

class Edge;
class Node;

class Edge {
private:
    char destinationNodeID;
    char sourceNodeID;


public:
    Edge() {
        destinationNodeID = '0';
        sourceNodeID = '0';
    }
    Edge(char destID, char sourceID) {
        destinationNodeID = destID;
        sourceNodeID = sourceID;
    }

    char getDestinationNodeID() {
        return destinationNodeID;
    }

    char getSourceNodeID() {
        return sourceNodeID;
    }
    
};

class Node {
private:
    char node_id;
    bool visited = false;
    list < Edge > og_edgeList;
    list < char > edgeList;

public:
    Node() { node_id = '0'; }

    Node(char id) 
    { 
        node_id = id; 
    }

    char getNodeID() { return node_id; }

    bool operator==(char testNodeID) 
    { 
        return testNodeID == this->node_id ? true : false; 
    };

    bool beenVisited() { return visited; }

    string printEdgeList()
    {
        string retString;
        for (auto n : edgeList)
        {
            retString.push_back(n); //.getDestinationNodeID());
            retString.push_back(' ');
        }
        return retString;
    }
    list <char> getEdgeList()
    {
        return edgeList;
    }

    void addEdgetoList(char destID)
    {
        edgeList.push_back(destID);
    }

    void newVisit() { visited = true; }

};



#include <algorithm>
#include "DGraph.hpp"

using std::for_each;
using std::find;

string DGraph::printListNodes()
{
    string retString;
    for (auto n : nodeList)
    {
        retString.push_back(n.getNodeID());
        retString.push_back(' ');
    }
    return retString;
}

void DGraph::addEdge(char destID, char sourceID) {
    Edge* e = new Edge(destID, sourceID);
    for (auto n : nodeList)
    {
        if (n.getNodeID() == destID)
            n.addEdgetoList(sourceID);
        else if (n.getNodeID() == sourceID)
            n.addEdgetoList(destID);
    }
}

string DGraph::listNodes()
{
    return printListNodes();
    //string retString;
    //auto it = for_each(nodeList.cbegin(), nodeList.cend(), retString = getNodeID());

    
}
string DGraph::displayAdjacency()
{
    string retString;
    for (auto n : nodeList)
    {
        retString.push_back(n.getNodeID());
        retString.push_back(' ');
        retString += n.printEdgeList();
        retString.push_back('\n');

    }
    return retString;
}
void DGraph::addNode(char id)
{
    Node* n = new Node(id);
    nodeList.push_back(id);
}

char DGraph::getNextEdge(Node n)
{
    //n.newVisit();
    Node m;
    list<char> eList = n.getEdgeList();
    for (auto in : eList)
    {
        char inName = in;
        for (auto it : nodeList)
        {
            return it.getNodeID();
        }
    }
    return 0;
}

string DGraph::printNodeEdges(Node n)
{
    string retString;
    n.newVisit();
    Node m;
    list<char> eList = n.getEdgeList();
    for (auto in : eList)
    {
        retString.push_back(in);
        retString.push_back(' ');

    }
    return retString;
}

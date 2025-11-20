#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include "Node.h"
#include "List.h"

class Graph{

public:
    Graph();
    int addNode(Node node);
    int addVertex(int firstNode, int secondNode); //create a vertex between firstNode to secondNode
    int removeNode(Node node); 
    int removeVertex(int firstNode, int secondNode); //remove a vertex between fisrtNode to secondNode

private:

int** adjacencyMatrix;
int size;
void expandMatrix(int**& ajacencyMatrix);

};



#endif
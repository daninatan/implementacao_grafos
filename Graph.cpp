#include "Graph.h"

Graph::Graph(){

}

int Graph::addNode(Node node){
    nodes.addNode(size + 1, node);
    expandMatrix(adjacencyMatrix);

    return 1;
}

int Graph::addVertex(int firstNode, int secondNode){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i == firstNode && j == secondNode){
                adjacencyMatrix[i][j] = 1;
            }
        }
    }

    return 1;
}

void Graph::expandMatrix(int**& adjacencyMatrix){

    //allocating the newMatrix
    int** newMatrix = new int*[size + 1];
    for (int i = 0; i < size + 1; i++) {
        newMatrix[i] = new int[size + 1](); // "()" is beeing used to initialize the matrix with 0
    }    

    //copying the values
    for(int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            newMatrix[i][j] = adjacencyMatrix[i][j];
        }
    }

    //deleting the old matrix
    for(int i = 0; i < size; i++){
        delete[] adjacencyMatrix[i];
    }
    delete[] adjacencyMatrix;

    adjacencyMatrix = newMatrix;
    
    size++;
}

void Graph::shrinkMatrix(int**& adjacencyMatrix, int index){
    int newI = 0, newJ = 0;
    //allocating the newMatrix
    int** newMatrix = new int*[size - 1];
    for (int i = 0; i < size - 1; i++) {
        newMatrix[i] = new int[size - 1](); // "()" is beeing used to initialize the matrix with 0
    } 

    //copying the values and the removing
    for(int i = 0; i < size; i++){
        if(i != index){
            newJ = 0;
            for(int j = 0; j < size; j++){
                if(j != index){
                    newMatrix[newI][newJ] = adjacencyMatrix[i][j];
                    newJ++;
                }
            }
            newI++;
        }
        
    }

    //deleting the old matrix
    for(int i = 0; i < size; i++){
        delete[] adjacencyMatrix[i];
    }
    delete[] adjacencyMatrix;

    adjacencyMatrix = newMatrix;

    size--;
}
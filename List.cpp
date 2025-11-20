#include "List.h"
#include <iostream>

List::List() {
    head = nullptr;
    size = 0;
}

void List::addNode(int position, Node newData){
    ListNode* newNode;
    newNode = new ListNode;
    ListNode* currentNode;

    if(getSize() == 0 && position == 1){
        newNode->data = newData;
        newNode->nextNode = nullptr;
        head = newNode; 
    }else{
        int checkPosition = setPosition(position - 1, currentNode);
        if(checkPosition == 0){
            cout << "Posição Inválida\n\n";
            return;
        }
        newNode->data = newData;
        newNode->nextNode = currentNode->nextNode;
        currentNode->nextNode = newNode;
    }

    size++;
}

void List::removeNode(int position){
    ListNode* currentNode;
    ListNode* removedNode;

    if(getSize() > 0){
        if(position == 1){
            currentNode = head;
            head = head->nextNode;
            free(currentNode);        
        }else{
            setPosition(position - 1, currentNode);
            removedNode = currentNode->nextNode;
            currentNode->nextNode = removedNode->nextNode;
            free(removedNode); 
        }
        size--;
    }else{
        cout << "Lista vazia";
    }

    
}

int List::setPosition(int position, ListNode*& node){
    ListNode* indexNode;
    indexNode = head;
    if(position == 0){
        node = head;
        return 1;
    }else{
        for(int i = 1; i < position; i++){
            if(indexNode->nextNode != nullptr){
                indexNode = indexNode -> nextNode;
            }else{
                break;
                return 0;       
            }
        }
        node = indexNode;
        return 1;
    }
}

void List::printNodes(){
    system("clear || cls");
    ListNode* currentNode;
    currentNode = head;

    for(int i = 0; i < getSize(); i++){
        cout << currentNode->data.index << "\n\n";
        currentNode = currentNode->nextNode;
    }
}

int List::getSize() {
    return size;
}
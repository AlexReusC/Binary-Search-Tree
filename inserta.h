#ifndef INSERTA_H
#define INSERTA_H

#include "Node.h"

void insert(int data, Node **h){
  Node* trav = *h;
  Node* tmp = new Node;
  tmp->left = NULL;
  tmp->rigth = NULL;
  tmp->data = data;

  if(*h == NULL){
    *h = tmp;
    return;
  }

  while(true){
    if(trav->data == data){
      return;
    }
    else if(trav->data < data && trav->rigth != NULL){
      trav = trav->rigth;
    }
    else if(trav->data > data && trav->left != NULL){
      trav = trav->left;
    }
    else if(trav->data < data && trav->rigth == NULL){
      trav->rigth = tmp;
    }
    else if(trav->data > data && trav->left == NULL){
      trav->left = tmp;
    }

  }

}

#endif

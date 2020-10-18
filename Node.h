#ifndef NODE_H
#define NODE_H

/*
Struct de nodo que contiene
un apuntador al nodo izquierdo y
al derecho y un entero data
*/

struct Node{
  Node *left;
  Node *right;
  int data;
};

#endif

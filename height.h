#ifndef HEIGHT_H
#define HEIGHT_H

#include "Node.h"

/*
Complejidad: O(n)
Funcion que te indica el numero de niveles
del árbol. Recibe un apuntador a nodo y regresa
un entero
*/

int height(Node* tmp){
  if (tmp == NULL){
    return 0;
  }
  else{
    int altLeft = height(tmp->left);
    int altRight = height(tmp->right);

    if (altRight < altLeft){
      return(altLeft + 1);
    }
    else{
      return(altRight + 1);
    }
  }
}

#endif

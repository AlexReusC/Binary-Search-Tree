#ifndef HEIGHT_H
#define HEIGHT_H

#include "Node.h"

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

#ifndef ANCESTORS_H
#define ANCESTORS_H

#include <queue>

void ancestors(Node *trav, int data){

  std::queue<int> cola;

  if(trav == NULL){
    return;
  }


  while(true){
    if(trav->data == data){
      //imprimir
      while(cola.empty() != true){
        std::cout << cola.front() << " ";
        cola.pop();
      }
      //std::cout << std::endl;
      return;
    }
    else if(trav->data < data && trav->right != NULL){
      cola.push(trav->data);
      trav = trav->right;
    }
    else if(trav->data > data && trav->left != NULL){
      cola.push(trav->data);
      trav = trav->left;
    }
    else if( ( trav->data < data && trav->right == NULL ) || ( trav->data > data && trav->left == NULL ) ){
      //std::cout << std::endl;
      return;
    }

  }

}



#endif

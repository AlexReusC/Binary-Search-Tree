#ifndef WHATLEVELAMI_H
#define WHATLEVELAMI_H


/*
Complejidad: O(logn)
Funcion que te dice en que nivel esta
el nodo indicado. No regresa nada,
recibe un apuntador a nodo y un entero
*/
void whatlevelamI(Node *trav, int data){
  if(trav == NULL){
    std::cout << "-1";
    return;
  }

  int cont=0;

  while(true){
    if(trav->data == data){
      std::cout << cont;
      return;
    }
    else if(trav->data < data && trav->right != NULL){
      cont++;
      trav = trav->right;
    }
    else if(trav->data > data && trav->left != NULL){
      cont++;
      trav = trav->left;
    }
    else if( ( trav->data < data && trav->right == NULL ) || ( trav->data > data && trav->left == NULL ) ){
      std::cout << "-1";
      return;
    }

  }

}



#endif

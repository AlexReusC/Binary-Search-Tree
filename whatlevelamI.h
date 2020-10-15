#ifndef WHATLEVELAMI_H
#define WHATLEVELAMI_H

void whatlevelamI(Node *trav, int data){
  if(trav == NULL){
    return;
  }

  int cont=0;

  while(true){
    if(trav->data == data){
      std::cout << cont << std::endl;
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
      std::cout << "-1" << std::endl;
      return;
    }

  }

}



#endif

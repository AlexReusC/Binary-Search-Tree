#ifndef ELIMINATE_H
#define ELIMINATE_H

void eliminate(Node **h, int data){
  if(*h == NULL){
    return;
  }

  Node *trav = *h;

  if(trav->data == data && trav->left==NULL){
    *h = trav->right;
    delete(trav);
    return;
  }
  else if(trav->data == data && trav->right==NULL){
    *h = trav->left;
    delete(trav);
    return;
  }

  Node *ant = *h;
  int flag = -1;  //1=derecha, 2=izquierda

  while(true){
    if(trav->data == data){

      //eliminate leaves
      if(trav->right == NULL && trav->left == NULL){
        if(ant->data < data){
          ant->right = NULL;
        }
        else if(ant->data > data){
          ant->left = NULL;
        }
        delete(trav);
        return;
      }

      else if (trav->right == NULL && trav->left != NULL){
        if(flag == 1){
          ant->right = trav->left;
          delete(trav);
        }
        else if(flag == 2){
          ant->left = trav->left;
          delete(trav);
        }
        return;
      }

      else if(trav->left == NULL && trav->right != NULL){
        if(flag == 1){
          ant->right = trav->right;
          delete(trav);
        }
        else if(flag == 2){
          ant->left = trav->right;
          delete(trav);
        }
        return;
      }

      else if (trav->left != NULL && trav->right != NULL){
        Node *tmp = trav;
        //ant = trav;
        trav = trav->right;

        while(trav->left != NULL){
          if (trav->left->left == NULL){
            ant = trav;
            trav = trav->left;
            break;
          }
          trav = trav->left;
          ant = trav;
        }

        if (trav->left == NULL && trav->right == NULL) {
          if (ant != *h){
            tmp->data = trav->data;
            delete(trav);
            ant->left = NULL;
          }
          else{
            tmp->data = trav->data;
            delete(trav);
            tmp->right = NULL;
          }
          return;
        }

        if(trav->right != NULL){ //there's smth to the right
          ant->left = trav->right;
          tmp->data = trav->data;
          delete(trav);
          return;
        }
        else if(trav->right == NULL){ //it's a leaf
          ant->left = NULL;
          tmp->data = trav->data;
          delete(trav);
          return;
        }

      }
    }

    //Moving pointer to right side
    else if(trav->data < data && trav->right != NULL){
      ant = trav;
      trav = trav->right;
      flag = 1;
    }

    //Moving pointer to left side
    else if(trav->data > data && trav->left != NULL){
      ant = trav;
      trav = trav->left;
      flag = 2;
    }
  }

}


#endif

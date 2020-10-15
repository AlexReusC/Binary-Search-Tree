#ifndef TRAVERSAL_H
#define TRAVERSAL_H

#include <queue>
#include "Node.h"


void traversal(Node *tmp, int flag){
  if(tmp == NULL){
    return;
  }

  if(flag == 1) {
    /* PREORDEN */
    std::cout << tmp->data << " ";
    traversal(tmp->left,1);
    traversal(tmp->right,1);
  }

  else if (flag == 2) {
    /* INORDER */
    traversal(tmp->left,2);
    std::cout << tmp->data << " ";
    traversal(tmp->right,2);
  }

  else if (flag == 3) {
    /* POSTORDER */
    traversal(tmp->left,3);
    traversal(tmp->right,3);
    std::cout << tmp->data << " ";
  }

  else if (flag == 4) {
    /* LEVEL BY LEVEL */
    if (tmp == NULL){
      return;
    }

    std::queue<Node *> cola;
    cola.push(tmp);

    while (cola.empty() == false){
      Node *tmp2 = cola.front();
      std::cout << tmp2->data << " ";
      cola.pop();

      if (tmp2->left != NULL){
        cola.push(tmp2->left);
      }
      if (tmp2->right != NULL){
        cola.push(tmp2->right);
      }
    }
  }
}

#endif

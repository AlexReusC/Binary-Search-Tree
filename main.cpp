#include <iostream>
#include <vector>

#include "inserta.h"
#include "traversal.h"
#include "height.h"
#include "whatlevelamI.h"
#include "ancestors.h"
#include "eliminate.h"
#include "Node.h"

using namespace std;


int main(){
  Node *head = NULL;
  int n = 0, dato = 0;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> dato;
    insert(dato, &head);
  }
  cout << "Por Preorden: ";
  traversal(head,1);
  cout << endl << "Por Inorden: ";
  traversal(head,2);
  cout << endl << "Por Postorden: ";
  traversal(head,3);
  cout << endl << "Por Nivel: ";
  traversal(head,4);
  cout << endl << "La altura es: " << height(head) << endl;

  // ancestors(head, 5);
  // ancestors(head, 31);
  // ancestors(head, 9);
  //
  // whatlevelamI(head, 4);
  // whatlevelamI(head, 9);
  // whatlevelamI(head, 31);

  eliminate(&head,71);
  cout << head->right->data;
  cout << endl << "Por Nivel: ";
  //cout << head->right->right->left;
  traversal(head,4);

}

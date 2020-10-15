#include <iostream>
#include <vector>

#include "inserta.h"
#include "traversal.h"
#include "heigth.h"
#include "Node.h"

using namespace std;


int main(){
  Node *head = NULL;
  int n = 0, dato = 0;
  cin >> n;
  // vector<int> arr={7, 89, 67, 3, 6};

  for(int i = 0; i < n; i++){
    cin >> dato;
    // insert(arr[i], &head);
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
  /*
  cout << head->data << endl;
  cout << head->left->data << endl;
  cout << head->left->right->data << endl;
  cout << head->right->data << endl;
  cout << head->left->left->data << endl;
  */
}

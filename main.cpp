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

  int m = 0, datoDelete = 0;
  cin >> m;

  for (int i = 0; i < m; i++) {
    cin >> datoDelete;
    eliminate(&head, datoDelete);
  }

  traversal(head,1);
  cout << endl;
  traversal(head,2);
  cout << endl;
  traversal(head,3);
  cout << endl;
  traversal(head,4);
  cout << endl << height(head) << endl;

  int q = 0, datoAncestors = 0;
  cin >> q;

  for (int i = 0; i < q; i++) {
    cin >> datoAncestors;
    ancestors(head, datoAncestors);
  }

  int r = 0, datoLevel = 0;
  cin >> r;

  for (int i = 0; i < r; i++) {
    cin >> datoLevel;
    whatlevelamI(head, datoLevel);
  }

  return 0;
}

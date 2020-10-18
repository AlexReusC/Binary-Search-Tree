/*
Arbol de busqueda binaria
Fecha de entrega: 18/10/2020
Daniel Esteban Maldonado Espitia A01657967
Alejandro Castro Reus A01731065
Programa que consiste en un arbol de
busqueda binaria que permite insertar nodos,
eliminarlos, imprime su traversal y los
ancestros y nivel de varios nodos en
particular
*/



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

  //Insercion de nodos
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> dato;
    insert(dato, &head);
  }

  int m = 0, datoDelete = 0;

  //Eliminacion de nodos
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> datoDelete;
    eliminate(&head, datoDelete);
  }

  //Traversals
  traversal(head,1);
  cout << endl;
  traversal(head,2);
  cout << endl;
  traversal(head,3);
  cout << endl;
  traversal(head,4);
  cout << endl << height(head) << endl;

  int q = 0, datoAncestors = 0;

  //Nodos que se quieren conocer sus ancestros
  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> datoAncestors;
    ancestors(head, datoAncestors);
    cout << endl;
  }

  int r = 0, datoLevel = 0;

  //Nodos que se quieren conocer sus niveles
  cin >> r;
  for (int i = 0; i < r; i++) {
    cin >> datoLevel;
    whatlevelamI(head, datoLevel);
    cout << endl;
  }

  return 0;
}

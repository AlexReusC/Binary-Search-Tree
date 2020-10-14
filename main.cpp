#include <iostream>
#include <vector>

#include "inserta.h"
#include "Node.h"

using namespace std;


int main(){
  Node *head = NULL;
  vector<int> arr={5, 3, 4, 6, 2, 3};

  for(int i=0; i<arr.size(); i++){
    insert(arr[i], &head);
  }

  cout << head->data << endl;
  cout << head->left->data << endl;
  cout << head->left->rigth->data << endl;
  cout << head->rigth->data << endl;
  cout << head->left->left->data << endl;


  return 0;
}

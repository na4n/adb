#include "btree.h"

btree::btree(){
  this->is_leaf = true;
  this->num_keys = 0;
}

btree::~btree(){
  return;
}

bool btree::search(btree* t, int key){
  if(this->num_keys == 0){
    return false;
  }
  
  int last = -1;
  for(int i = 0; i < this->num_keys; i++){
    if(key == this->keys[i]){
      return true;
    }
    else if(last < key && this->keys[i] > key){
      return (this->is_leaf && search(this->children[i], key));
    }     
  }

  if(key > this->keys[this->num_keys-1]){
    return (this->is_leaf && search(this->children[this->num_keys], key));
  }
  
  return false;  
}

bool btree::insert(btree* t, int key){
  return false;
}

void btree::print(void){
  std::cout << "Printing Btree" << std::endl;

  return;
}


#include <iostream>

const int MAX_KEYS = 16;

class btree{
  private:
    bool is_leaf;
    int num_keys;
    int keys[MAX_KEYS];
    btree* children[MAX_KEYS+1]; 

  public:
    btree();
    ~btree();
    bool search(btree*, int);
    bool insert(btree*, int);
    void print(void);
};


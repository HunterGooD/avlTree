#ifndef NODE_H_INCLUDE
#define NODE_H_INCLUDE

typedef struct node node;

node* newNode(int key, int value);

void recalcHeight(node *n);
int height(node* n);
int balanceFactor(node* n);

node* balance(node* n);
node* rotateRight(node* n);
node* rotateLeft(node* n);

node* insert(node* n, int value, int key);
node* getNode(node* n, int key);
char removeElement(node* n, int key);
char* getPrintsTree(node* n);

#endif

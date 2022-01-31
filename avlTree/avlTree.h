#ifndef AVL_H_INCLUDE
#define AVL_H_INCLUDE

typedef struct avlTree avlTree;
typedef struct node node;

avlTree* newAVLTree();

void insertAVL(avlTree* avl, int value, int key);
node* insert(node* n, int value, int key);

int getValue(avlTree* avl, int key);
node* getNode(node* n, int key);

char removeElementAVL(avlTree* avl, int key);
char removeElement(node* n, int key);

void printAVLTree(avlTree* avl);
char* getPrintsTree(node* n);

#endif


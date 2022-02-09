#include "avlTree.h"
#include <stdlib.h>

struct avlTree {
    node* head;
};

avlTree* newAVLTree() {
    avlTree* avl = (avlTree*)malloc(sizeof(avlTree));
    avl->head = NULL;
    return avl;
}

/* void insertAVL(avlTree* avl, int value, int key); */
/* node* insert(node* n, int value, int key); */
void insertAVL(avlTree* avl, int value, int key) {
    avl->head = insert(avl->head, value, key);
}

/* int getValue(avlTree* avl, int key); */
/* node* getNode(node* n, int key); */
int getValue(avlTree* avl, int key) {
    node* findedNode = getNode(avl->head, key);
    if (findedNode == NULL) {
        return 0;
    }
    return findedNode->value;
}


/* char removeElementAVL(avlTree* avl, int key); */
/* char removeElement(node* n, int key); */
char removeElementAVL(avlTree *avl, int key) {
    return removeElement(avl->head, key);
}

/* void printAVLTree(avlTree* avl); */
/* char* getPrintsTree(node* n); */
void printAVLTree(avlTree *avl) {
    char* tree = getPrintsTree(avl->head);
    printf("%s", tree);
}


#include <stdlib.h>
#include "node.h"

struct node {
    node* left;
    node* right;
    int height;

    int key;
    int value;
};

node* newNode(int key, int value) {
    node* n = (node*)malloc(sizeof(node));
    n->key = key;
    n->value = value;
    n->height = 0;
    n->right = NULL;
    n->left = NULL;
    return n;
}

// определяет высоту дерева
int height(node* n) {
    return n == NULL ? 0 : n->height;
}

// перевычисление высоты
void recalcHeight(node* n) {
    int hl = height(n->left);
    int hr = height(n->right);
    n->height = (hl > hr ? hl : hr) +1;
}

// проверка баланса
int balanceFactor(node* n) {
    return height(n->right) - height(n->left);// если будет положительное значит правое перевешивает
}

// малый левый поворот
node* rotateLeft(node* n) {
    node* nr = n->right;
    n->right = nr->left;
    nr->left = n;
    return nr;
}

// малый правый поворот
node* rotateRight(node* n) {
    node* nl = n->left;
    n->left = nl->right;
    nl->right = n;
    return nl;
}

// балансировка узла
node* balance(node* n) {
    recalcHeight(n);
    if (balanceFactor(n) == 2) { // значит перевешивает правое
        if (balanceFactor(n->right) < 0) { // если меньше 0 то перешивает левая
            n = rotateRight(n); // большой левый поворот
        }
        return rotateLeft(n);
    }
    if (balanceFactor(n) == -2) {
        if (balanceFactor(n->left) > 0) {
            n = rotateLeft(n);
        }
        return rotateRight(n);
    }
    return n;
}


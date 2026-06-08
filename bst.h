#ifndef BST_H
#define BST_H

typedef struct BSTNode{
    int id;
    char nama[50];

    struct BSTNode *left;
    struct BSTNode *right;
}BSTNode;

extern BSTNode *root;

BSTNode* createNode(int id, char nama[]);
BSTNode* insertBST(BSTNode *root, int id, char nama[]);
BSTNode* searchBST(BSTNode *root, char nama[]);
void inorder(BSTNode *root);

#endif

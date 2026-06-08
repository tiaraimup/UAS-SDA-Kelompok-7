#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"

BSTNode *root = NULL;

BSTNode* createNode(int id, char nama[])
{
    BSTNode *baru =
    (BSTNode*)malloc(sizeof(BSTNode));

    baru->id = id;
    strcpy(baru->nama,nama);

    baru->left = NULL;
    baru->right = NULL;

    return baru;
}

BSTNode* insertBST(BSTNode *root, int id, char nama[])
{
    if(root == NULL)
    {
        return createNode(id,nama);
    }

    if(strcmp(nama,root->nama) < 0)
    {
        root->left =
        insertBST(root->left,id,nama);
    }
    else
    {
        root->right =
        insertBST(root->right,id,nama);
    }

    return root;
}

BSTNode* searchBST(BSTNode *root, char nama[])
{
    if(root == NULL)
    {
        return NULL;
    }

    if(strcmp(root->nama,nama)==0)
    {
        return root;
    }

    if(strcmp(nama,root->nama)<0)
    {
        return searchBST(root->left,nama);
    }

    return searchBST(root->right,nama);
}

void inorder(BSTNode *root)
{
    if(root==NULL)
    {
        return;
    }

    inorder(root->left);

    printf("%d - %s\n",
           root->id,
           root->nama);

    inorder(root->right);
}

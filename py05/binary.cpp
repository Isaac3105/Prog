#include <iostream>
#include "binary.h"

int imp_binary(node *root,int acc){
    acc += root->value;
    if(root->left != nullptr){
        acc = imp_binary(root->left, acc);
    }
    delete(root->left);
    if(root->right != nullptr){
        acc = imp_binary(root->right, acc);
    }
    delete(root->right);
    return acc;
}

int binary(node *root){
    int acc = 0;
    acc = imp_binary(root,acc);
    return acc;
}

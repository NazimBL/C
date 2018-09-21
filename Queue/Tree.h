#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef struct Tree{

int data;
Tree* left;
Tree* right;

}Tree;

Tree* root=NULL;

Tree* newBST(int x){

 Tree* newNode=malloc(sizeof(Tree));
 newNode->data=x;
 newNode->left=newNode->right=NULL;
 return newNode;
}
Tree* Insert(Tree* root,int x){
if(root==NULL){
  root=newBST(x);
}else if(x<=root->data)root->left=Insert(x);
 else if(x>root->data)root->right=Insert(x);

 return root;

}
bool Search(Tree* root,int x){
if(root==NULL)return false;
else if(root->data==x)return true;
else if(x<=root->data)return Search(root->left,x);
else if(x>root->data)return Search(root->right,x);


}



}



#endif // TREE_H_INCLUDED

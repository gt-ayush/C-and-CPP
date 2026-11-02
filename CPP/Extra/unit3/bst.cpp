#include <iostream>
using namespace std;
//binary search tree
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(){
        left = NULL;
        right = NULL;
    }
};

node* insert(node *root, int val) {
    if(root == NULL) {
        node *newNode = new node();
        newNode->data = val;
        return newNode;
    }
    if(val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

node *findMin(node *root);

node *deleteNode(node *root,int val){
    if(root ==NULL) return NULL;

    if(val < root->data){
        root->left = deleteNode(root->left,val);
    }
    else if(val > root->data){
        root->right = deleteNode(root->right,val);
    }
    else {
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        if(root->left == NULL){
            node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            node *temp = root->left;
            delete root;
            return temp;
        }
        else{
            node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right,temp->data);

        }
    }
    return root;
}
node *findMin(node *root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

int main() {
    node *root = NULL;
    int n , val;
    cin >> n;

    for(int i=0;i<n;i++){
        cout<<"Enter the value to be inserted at position ["<<i<<"]: ";
        cin >> val;
    }
    cout << "Enter " << n << " values to be inserted: ";
    for(int i=0;i<n;i++){
        cin >> val;
        root = insert(root,val);
    }
    int valToDelete;
    cin >> valToDelete;
    // Check if the value exists before deletion
    node* search = root;
    bool found = false;
    while (search != NULL) {
        if (valToDelete == search->data) {
            found = true;
            break;
        } else if (valToDelete < search->data) {
            search = search->left;
        } else {
            search = search->right;
        }
    }
    if (!found) {
        cout << "Value not found in the tree." << endl;
    } else {
        root = deleteNode(root, valToDelete);
        if (root == NULL) {
            cout << "The tree is now empty." << endl;
        } else {
            cout << "Value deleted successfully." << endl;
        }
    }
}
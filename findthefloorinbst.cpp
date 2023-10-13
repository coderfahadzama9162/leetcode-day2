   #include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};
 
/*This function is used to create and
initializes new Nodes*/
Node* newNode(int key)
{
    Node* temp = new Node;
    temp->left = temp->right = NULL;
    temp->data = key;
    return temp;
}
Node* insert(Node* root, int key)
{
    if (!root)
        return newNode(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
    return root;
}
  class Solution{ 
    public:
   int floor(Node* root, int x) {
      int ans=-1;
      
      while(root){
          
          if(root->data<=x) {
              ans=root->data;
              root=root->right;
          }
          else root=root->left;
      }
      
      return ans;
      
    }
};
int main()
{
    
    Node* root = NULL;
    root = insert(root, 7);
    insert(root, 10);
    insert(root, 5);
    insert(root, 3);
    insert(root, 6);
    insert(root, 8);
    insert(root, 12);

    Solution* s = new Solution();

    cout << s->floor(root,10) << endl;

    return 0;
}
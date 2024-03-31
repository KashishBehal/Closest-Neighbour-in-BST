class Solution {
  public:
  void inorder(Node * root , vector<int>&v){
      if(root==NULL){
          return ;
      }
      inorder(root->left ,v);
      v.push_back(root->key);
      inorder(root->right ,v);
      
  }
    int findMaxForN(Node* root, int n) {
        // code here
        vector<int>v;
        inorder(root , v);
        int a=-1;
       for(int i=0;i<v.size();i++){
          if(v[i]<=n){
              a=v[i];
          }
       }
        return a;
    }
};

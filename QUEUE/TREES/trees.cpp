#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode * left;
    TreeNode * right;

    TreeNode(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
void preorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
};


void inorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    postorder(root->right);
    cout<<root->data<<"  ";
    postorder(root->left);
}

int count_nodes(TreeNode* root){
    if(root==NULL){
        return 0;
    }
   int left=count_nodes(root->left);
   int right=count_nodes(root->right);
   return left+right+1;
}

int sum(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    
    
    // int a=sum(root->left);
    // int b=sum(root->right);
    // return root->data + a + b ;

    return root->data + sum(root->left) + sum(root->right);
}

int height(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    return max(lheight,rheight)+1;

}

int leaf(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    else if(root->left==NULL && root->right==NULL){
        return 1;

    }
    else if(root->left!=NULL || root->right!=NULL){
          return leaf(root->left) + leaf(root->right) ;
    } 
    
}

void levelorder(TreeNode *root)
{
    queue<TreeNode*>q;
    if(root==NULL){
        return ;
    }
    q.push(root);
    while(!q.empty()){
        TreeNode* tree=q.front();
        cout<<tree->data<<" ";
        q.pop();

        if(tree->left){
            q.push(tree->left);
        }
        if(tree->right){
            q.push(tree->right);
        }

    }
}

int sumK(TreeNode* root,int k){
    
    if(root==NULL){
        return -1;
    }
    queue<TreeNode*>q;
    int sum=0;
    int level=0;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode* tree=q.front();
        q.pop();

    
    if(tree!=NULL){
        if(level==k){
            sum=sum+tree->data;
        }
        if(tree->left){
            q.push(tree->left);
        }
        if(tree->right){
            q.push(tree->right);
        }
        

    }
    else if(!q.empty()){
        q.push(NULL);
        level++;
    }
    }
    return sum;
}



void right_view(TreeNode* root){
    if(root==NULL){
        return;
    }
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=1;i<=n;i++){
            TreeNode* tree=q.front();
            q.pop();
            if(i==n){
                cout<<tree->data<<" ";
            }

            if(tree->left){
                q.push(tree->left);
            }
            if(tree->right){
                q.push(tree->right);
            }
        }
    }
}

TreeNode* insert(TreeNode* root,int value){
    if(root==NULL){
        root=new TreeNode(value);
        
    }

     if(root->data > value){
        if(root->left==NULL){
            root->left=new TreeNode(value);
        }
        else{
            root->left=insert(root->left,value);
       }
    }

    else if(root->data < value){
        if(root->right==NULL){
            root->right=new TreeNode(value);
        }
        else{
            root->right=insert(root->right,value);
        }
    }
    
    
    
}



void zigzag(TreeNode* root){
        if(!root){
    	    return ;
    	}
    	stack<TreeNode*>current;
    	stack<TreeNode*>next;
    	
    	current.push(root);
    	
    	bool left_right=true;
    	
    	while(!current.empty()){
    	    TreeNode* t=current.top();
    	    current.pop();
    	    
    	    
    	       cout<<(t->data);
            
    	    if(left_right){
    	        if(t->left){
    	            next.push(t->left);
    	        }
    	        if(t->right){
    	            next.push(t->right);
                }
    	    }
    	    else{
    	        if(t->right){
    	            next.push(t->right);
    	        }
    	        if(t->left){
    	            next.push(t->left);
    	        
    	        }
    	    }
            
    	    if(current.empty()){
    	        left_right=!left_right;
    	        swap(current,next);
    	    }
    	}
    	
}

int main(){
    TreeNode * root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);

    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);    
    
    //preorder(root);
    //inorder(root);
    //postorder(root);
    levelorder(root);
    //cout<<sumK(root,2);
    //right_view(root);
   //zigzag(root);
   //insert(root,108);
   //inorder(root);
   //cout<<count_nodes(root);
    //cout<<sum(root);
    //cout<<height(root);
    //cout<<leaf(root);
}
    //
    //  main.cpp
    //  Maximum Level Sum of a Binary Tree
    //
    //  Created by manzoor on 1/9/19.
    //  Copyright © 2019 manzoor. All rights reserved.
    //

    #include <iostream>
    class node
    {
        public:
        int data;
        node *left;
        node *right;
        
    };
    int array[7]={1,7,0,7,-8,NULL,NULL};
    int counter=0;
    int flag=0;
    node *createnode(node* root)
    {
        
        for(int i=0;i<7;i++)
        {
        
        if(i%2==0)
        {
           
            root->left=new node();
            root=root->left;
            root->data=array[i];
        }
        else{   root->right=new node();
                root=root->right;
                root->data=array[i];
            }
        }
        return root;
    }
    void Printnode(node* root,int &sum)
    {
        printf("%d\n",root->data);
    
       ;
    }
    int main(int argc, const char * argv[]) {
        // insert code here...
        
        class node * root,*leaf;
        root=new node();
        int sum=0;
        int first=false,second=false;
        
        leaf=createnode(root);
        for(int i=0;i<7;i++)
        {
            
        
          // Printnode(root,sum);
           
           if(i%2==0)
           {
               
               second=root->data;
               root=root->left;
               if((first)&&(second))
               {
                   printf("sum:%d\n",second+first);;
                   first=false;second=false;
               }
               
           }
           else{
              
              first=root->data;
               root=root->right;
               if((first)&&(second))
               {
                   printf("sum:%d\n",second+first);;
                   first=false;second=false;
               }
               
           }
            
            
            
            
        }
        return 0;
    }

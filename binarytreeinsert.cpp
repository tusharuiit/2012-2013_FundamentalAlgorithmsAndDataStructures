#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
struct node
{
   int value;
   node* left;node* right; 
};
node* binarytreeinsert(node* , int);
void display(node*,int);
int main ()
{
    srand(time(0));int n=9;int a[n+1];  
    node* start=NULL;  
    for(int i=0;i<=n;i++)
    {
        a[i]=((float)rand()/RAND_MAX)*(10000.0 - 1.0)+1;
        cout<<a[i]<<"\t ";
        start=binarytreeinsert(start , a[i]);                
    }
    display (start,0);    
}
void display(node* np,int c)
{
   if(np == NULL)
   {
     return;
   }
   else
   {
      cout<<"value at height "<<c<<" is "<<np->value<<endl;
      display( np->left,c+1);
      display( np->right,c+1);
   }
}
node* binarytreeinsert(node* np, int val)
{      
    if(np == NULL)
    {
        node* ptr = new node;np=ptr;np->value=val;np->left=NULL;np->right=NULL;return np;
    }
    else
    {
       if(val == np->value)
       {
          cout<<"not allowed"<<endl;
       }
       else if(val > np->value)
       {
          np->right=binarytreeinsert(np->right ,val); return np;
       }
       else 
       {
          np->left=binarytreeinsert(np->left ,val); return np;
       }
    } 
}




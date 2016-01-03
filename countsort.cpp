#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void countsort(int a[],int lo , int hi);

int main ()
{
    srand(time(0));int k=100;int n=9;int a[n];
    cout<<"the original"<<endl;
    for(int i=0;i<=n;i++)
    {
        a[i]=((float)rand()/RAND_MAX)*(k - 1.0)+1;
        cout<<a[i]<<endl;
    }
    countsort(a,n,k);
       
    cout<<"the modified"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
}

void countsort(int a[],int n,int k)
{
    int b[k+1];
    for(int j=0;j<=k;j++)
       {b[j]=0;}
       for(int j=0;j<=k;j++)
    {
        cout<<b[j]<<"\t";
    }
    
    int i=0;
    while(i<=n)
    {
        b[a[i]]+=1;i++;
    }
    
    int m=0;
    for(int j=1;j<=k;j++)
    { 
      int l=1;
      while(l<=b[j])
      {
        
        a[m]=j;l++;m++;
      } 
      
      
    }  
}



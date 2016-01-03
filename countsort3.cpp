#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void countsort(int a[],int lo , int hi);

int main ()
{
    srand(time(0));int k=100;int n=9;int a[n+1];
    cout<<"the original"<<endl;
    for(int i=0;i<=n;i++)
    {
        a[i]=((float)rand()/RAND_MAX)*(k - 1.0)+1;
        cout<<a[i]<<endl;
    }
    countsort(a,n,k);
       
    cout<<"the modified"<<endl;
    /*for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }*/
}

void countsort(int a1[],int n,int k)
{
    int c[k+1],b[n+1];
    for(int i=0;i<=k;i++)
    {
        c[i]=0;
    }
    for(int i=0;i<=n;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<=n;i++)
    {
        c[a1[i]]++;
    }
    for(int i=1;i<=k;i++)
    {
        c[i]+=c[i-1];
    }
    for(int i=n;i>=0;i--)
    {
        b[c[a1[i]]-1]=a1[i];c[a1[i]]--;
    }
    cout<<"the modified"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<b[i]<<endl;
    }
}



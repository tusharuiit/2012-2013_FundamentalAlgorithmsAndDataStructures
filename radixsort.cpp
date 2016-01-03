#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void radixsort(int a[],int n);
int main ()
{
    srand(time(0));int k=100;int n=9;int a[n+1];
    //cout<<"the original"<<endl;
    for(int i=0;i<=n;i++)
    {
        a[i]=100-i;
        //a[i]=((float)rand()/RAND_MAX)*(100.0 - 0.0)+0;
        cout<<a[i]<<"\t";
    }
    cout<<"love 22";
    radixsort(a,n);
       
    cout<<"the modified"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<"\t";      
    } 
}
void radixsort(int a1[],int n)
{
    cout<<"love 0";
    int max=a1[0];int exp=1;int b[n+1];int box[10];
    cout<<"love 1";  
    for(int i =0;i<=n;i++)
    {
        b[i]=0;
    }
    cout<<"love 2";
    for(int i =0;i<=9;i++)
    {
        box[i]=0;
    }
    for(int i = 1;i<=n;i++)
    {
        if(a1[i]>max)
        {max=a1[i];}
    }
    while(max/exp > 0)
    {
        int box[10];
        for(int i = 0;i<=n;i++)
           box[a1[i]/exp%10]++;
        for(int i=0;i<=9;i++)    
           box[i] += box[i - 1];
        for(int i=n;i>=0;i--)
        {
           b[box[a1[i]/exp%10 ]- 1]=a1[i];box[a1[i]/exp%10 ]--;      
        }
        exp*=10;          
    }
    for(int i=0;i<=n;i++)
    {
        a1[i]=b[i];      
    }
    cout<<"the modified"<<endl;
        
}


#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    srand(time(0));float a[25];float k;int n=9;
    cout<<"the original"<<endl;
    for(int i=0;i<=n;i++)
    {
        a[i]=((float)rand()/RAND_MAX)*(1000.0 - 1.0)+1;
        cout<<a[i]<<endl;
    }
    for(int i=1;i<=n;i++)
    {   
        k=a[i]; 
        for(int j=i-1;j>=0;j--)
        {
            if(k<a[j])
            {
                a[j+1]=a[j];a[j]=k;
            }
            else 
            {
                break;
            }
            
        }
            
    }
    cout<<"the modified"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
}

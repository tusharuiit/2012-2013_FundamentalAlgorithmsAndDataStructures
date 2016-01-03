#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int binarysearch(int a[],int lo , int hi, int key);
void quicksort(int a[],int lo , int hi);
int partition (int a[],int lo , int hi);
int main ()
{
    srand(time(0));int a[10];int key;int n=9;int lo=0;int hi=n;    
    
    
    for(int i=0;i<=n;i++)
    {
        a[i]=((float)rand()/RAND_MAX)*(1000.0 - 1.0)+1;        
    }
    quicksort(a,lo,hi);
    cout<<"the original"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<endl;        
    }
    cout<<"the key?"<<endl;cin>>key;
    int position = binarysearch(a,lo,hi,key);
    cout<<"the index of "<<key<<" is "<<position <<endl;   
    
}

int binarysearch(int a[],int lo , int hi,int key)
{
       int mid = (lo+hi)/2;
       if(a[mid]==key) return mid;
       if(a[mid]>key) 
          binarysearch(a, lo ,  mid-1, key);
       else 
          binarysearch(a,mid+1 , hi, key);
        
}
void quicksort(int a[],int lo , int hi)
{
    if(lo<hi)
    {
       int pivotindex = partition(a, lo ,  hi);
       quicksort(a,lo ,pivotindex-1);quicksort(a,pivotindex+1,hi);
    }
}

int partition (int a[],int lo , int hi)
{
    int left = lo;int eq=lo;int right = hi;
    int pivotindex=((float)rand()/RAND_MAX)*(hi - lo)+lo;
    int pivot=a[pivotindex];
    while(eq<=right)
    {
        if(a[right]>pivot)
        {
            right-=1;
        }
        else
        {
            int temp = a[right];a[right]=a[eq];a[eq]=temp;
            if(a[eq]<pivot)
            {
              int temp = a[eq];a[eq]=a[left];a[left]=temp;
              left+=1;
            }
            eq+=1;
        }
    }
    return left;
}


#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void quicksort(float a[],int lo , int hi);
int partition (float a[],int lo , int hi);
int main ()
{
    srand(time(0));float a[10];float k;int n=9;int lo=0;int hi=n;
    cout<<"the original"<<endl;
    for(int i=0;i<=n;i++)
    {
        a[i]=((float)rand()/RAND_MAX)*(1000.0 - 1.0)+1;
        cout<<a[i]<<endl;
    }
    quicksort(a,lo,hi);
       
    cout<<"the modified"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
}

void quicksort(float a[],int lo , int hi)
{
    if(lo<hi)
    {
       int pivotindex = partition(a, lo ,  hi);
       quicksort(a,lo ,pivotindex-1);quicksort(a,pivotindex+1,hi);
    }
}

int partition (float a[],int lo , int hi)
{
    int left = lo;int eq=lo;int right = hi;
    int pivotindex=((float)rand()/RAND_MAX)*(hi - lo)+lo;
    float pivot=a[pivotindex];
    while(eq<=right)
    {
        if(a[right]>pivot)
        {
            right-=1;
        }
        else
        {
            float temp = a[right];a[right]=a[eq];a[eq]=temp;
            if(a[eq]<pivot)
            {
              float temp = a[eq];a[eq]=a[left];a[left]=temp;
              left+=1;
            }
            eq+=1;
        }
    }
    return left;
}


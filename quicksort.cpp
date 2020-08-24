#include"windows.h"
#include"stdio.h"
#include<iostream>
using namespace std;
int partition(double *arr,int low,int high)
{
    int i = ( low-1 );    // 最小元素索引
    int pivot = arr[high];     
    for (int j=low;j<high;j++) 
    {
        //# 当前元素小于或等于 pivot 
        if   (arr[j] <= pivot)
          {
            i = i+1;
            arr[i]= arr[j] ;
            arr[j]= arr[i];
          }
    }
    arr[i+1] = arr[high] ;
    arr[high]=arr[i+1];

    return ( i+1 ) ;
  
}
void quicksort(double *arr,int low,int high)
{
    if (low < high){ 
  
        int pi = partition(arr,low,high) ;
  
        quicksort(arr, low, pi-1) ;
        quicksort(arr, pi+1, high);
    }
}
void quicksort1(double *arr,int low,int high)
{
    for (int j=low;j<high;j++) 
    {
        for (int i=0;i<=high;i++)
        {
            arr[i]=i;
        }   
    }
}
int main()
{
    double *f;
    f=new double[99];
    int i=0;
    while (cin>>f[i])
    {
        if(f[i]==0)
            {//f[i]=NULL;
            break;}
        ++i;
    }
    f[0]=23;
    quicksort(f,0,i-1);
    for (int j=0;j<i;j++)
    {
        printf("%.1f\n",f[j]);
    }
    //cout<<s<<endl;
    //cin>>s;
    system( "PAUSE ");
    return 0;
}
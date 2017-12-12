#include<iostream>
#include<cstdlib>
using namespace std;
void show(int  *arr, int n)
{
    for(int i=0;i<n;i++) (i+1!=n)? cout<<arr[i]<<" , " : cout<<arr[i]<<endl<<endl;
}
int bin_srch(int *arr,int x, int low, int high)
{
    while(low<=high){
        int mid=(low+high)/2;
        if(x==arr[mid]) return mid;
        if(x>arr[mid]) bin_srch(arr,x,mid+1,high);
        else bin_srch(arr,x,low,mid-1);
    }
    return 999;
}
int main()
{
    int arr[10]={1,6,19,24,56,78,83,89,106,134};
    show(arr,10);
    cout<<bin_srch(arr,569,0,9);
    cin.get();
    return 0;
}

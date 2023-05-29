//rotate an array by k - codestudio
//ex- 1 2  3 4 5 6 7 ,k=3 ,1-reverse 1 2 3= 3 2 1 ,2-reverse d to n 7 6 5 4 ,3-reverse resulted array 7 6 5 4 3 2 1 
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

 void leftrotate(int arr[], int n,int d)
 {
     reverse(arr, arr+d);
     reverse(arr+d,arr+n);
     reverse(arr,arr+n);
 }


int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftrotate(arr,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

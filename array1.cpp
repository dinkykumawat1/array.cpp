//find second largest element
//1 m- using first sort then print n-1 which is the largest element but the time complexity is o(n log n)
//2- using update largest time complexity is o(n)

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
      if(arr[i]>largest)
      largest=arr[i];
    }
    return largest;
}

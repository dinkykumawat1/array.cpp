vector<int> moveZeros(int n, vector<int> arr) {
    // Write your code here.
    vector<int>temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
    }
    int nz=temp.size();

    for(int i=0;i<nz;i++)
    {
        arr[i]=temp[i];
    }

    for(int i=nz;i<n;i++)
    {
        arr[i]=0;
    }

    return arr;
}

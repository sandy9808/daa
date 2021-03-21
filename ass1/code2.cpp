#include<bits/stdc++.h>
using namespace std;

int kth(int *array1, int *array2, int *end1, int *end2, int k)
{
    if (array1 == end1)
    {
        return array2[k];
    }
    if (array2 == end2)
    {
        return array1[k];
    }
    int mid1 = (end1 - array1) / 2;
    int mid2 = (end2 - array2) / 2;
    if (mid1 + mid2 < k)
    {
        if (array1[mid1] > array2[mid2])
        {
            return kth(array1, array2 + mid2 + 1, end1, end2, k - mid2 - 1);
        }
        else
        {
            return kth(array1 + mid1 + 1, array2, end1, end2, k - mid1 - 1);
        }
    }
    else
    {
        if (array1[mid1] > array2[mid2])
        {
            return kth(array1, array2, array1 + mid1, end2, k);
        }
        else
        {
            return kth(array1, array2, end1, array2 + mid2, k);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,k;
        cin>>m>>n>>k;
        int array1[m],array2[n];
        for(int i=0;i<m;i++)
        {
            cin>>array1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>array2[i];
        }
        int kth_element=kth(array1,array2,array1+m,array2+n,k-1);
        cout<<kth_element<<endl;
    }
}
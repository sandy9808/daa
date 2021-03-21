//C++ program to find kth element of the final sorted array
//from two arrays of size m and n
#include <bits/stdc++.h>

using namespace std;

int minimum(int a,int b)
{
    //checking the minimum of two numbers
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int kth(int arr1[],int arr2[],int n,int m,int k)
{
	if(k>m+n || k<1)
	{
		return -1;
	}
	
    //let arr1 be a empty array
    //kth element of arr2
    if(n==0 && m>0)
    {
        return arr2[k-n-1];
    }
    //let arr2 be a empty array
    //kth element of arr1
    if(m==0 && n>0)
    {
        return arr1[k-m-1];
    }
    //if k=1 return minimum of first element of each array
    if(k==1)
    {
        return minimum(arr1[0],arr2[0]);
    }
    //divide the arrays and conquer 
    int i=minimum(n,k/2);
    int j=minimum(m,k/2);

    if(arr1[i-1]<arr2[j-1])
    {
        //we have lowest j
        //finding (k-j)th element
        return kth(arr1+i,arr2,(n-i),m,(k-i));
    }
    else
    {
        //we have lowest i
        //finding (k-i)th element
        return kth(arr1,arr2+j,n,(m-j),(k-j));
    }
}
//main function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //take input of size of arrays and value of k
        int n,m,k;
        cin>>n>>m>>k;
        int arr1[n],arr2[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
        }
        //finding kth element
        int kth_element=kth(arr1,arr2,n,m,k);
        cout<<kth_element<<endl;
    }
return 0;
}
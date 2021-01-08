/*Shuvro Das*/

#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
ll b_s(ll a[],ll n,ll x)
{
    ll left=0,right=n-1;
    ll mid;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        if(a[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
     return -1;
}

int main()
{
    ll ara[]= {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29};
    ll n;
    cin>>n;
    ll z=15;
    ll m=binary_search(ara,z,n);
    if(m==-1)
    {
        printf("%d is not found in array\n",n);
    }
    else{
       cout<<n<<" is the "<<m<<" number element in ara"<<endl;
    }
    return 0;
}


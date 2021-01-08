#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int binarySearch(int i, int j, int v, int *a)
{
    int m;
    if(i > j) return -1;
    m = (i+j)/2;
    if(a[m] < v) return binarySearch(m+1, j, v, a);
    if(a[m] > v) return binarySearch(i, m-1, v, a);
    return m;
}

int main()
{
    int a[100], n, i, q, v, x;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];

    cin>>q;
    for(i=0; i<q; i++)
    {
        cin>>v;
        x = binarySearch(0, n-1, v, a);
        if(x==-1) cout<<"Not found"<<endl;
        else cout<<"Found at %d\n"<<endl;
    }
    return 0;
}


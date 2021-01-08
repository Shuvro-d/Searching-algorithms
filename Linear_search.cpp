/*Shuvro Das*/

#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int linear_search(int a[],int n,int x)
{
    int i;
    for(i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    i=-1;
    return i;
}
int main()
{
    int ara[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n;
    cin>>n;
    int z=15;
    int m=linear_search(ara,z,n);
    if(m==-1){
        printf("%d is not found in array\n",n);
    }
    else printf("%d is %dth num in array\n",n,ara[m]);
    return 0;
}


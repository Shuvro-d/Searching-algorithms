/*Shuvro Das*/

#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int compare_fnc(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int ara[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n,*m;
    cin>>n;
    int z=15;
    m=(int *)bsearch(&n,ara,15,sizeof(int),compare_fnc);
       printf("%d found in array\n",*m);
    return 0;
}


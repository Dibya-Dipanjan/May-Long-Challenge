#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,x,k;
        scanf("%ld %ld %ld", &n,&x,&k);
        if(x%k==0 || (n+1-x)%k==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

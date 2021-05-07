#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,a,b;
        scanf("%d %d %d", &x,&a,&b);
        int u = (a+((100-x)*b))*10;
        printf("%d\n",u);
    }
    return 0;
}

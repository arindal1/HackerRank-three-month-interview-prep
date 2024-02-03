#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int comp(void *a,void *b)
    {
    return (*(int *)a-*(int *)b);
}


int main() {

    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort((void *)a,n,sizeof(a[0]),comp);
    int x,y,z;
    for(i=n-1;i>=2;i--)
        {
        if(a[i-2]+a[i-1]>a[i])
            break;
    }
    if(i==1)
        printf("-1");
    else
        printf("%d %d %d",a[i-2],a[i-1],a[i]);
    return 0;
}

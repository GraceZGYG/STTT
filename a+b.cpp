#include<stdio.h>
int main()
{
    int a[3];
    int b[3];

    for(int i=0,j=0;i<3,j<3;i++,j++){
        scanf("%d%d",&a[i],&b[j]);
    }
    for(int i=0; i<3; i++) {
       printf("%d\n",a[i]+b[i]);
    }
return 0;
}




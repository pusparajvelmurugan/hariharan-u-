#include <stdio.h>
void main()
{

    int n,k,a[90],j=0;

    printf("Enter the two numbers");
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
     {
         if(a[i]==k)
         {
             ++j;
         }
     
     }
     printf("%d",j);

}

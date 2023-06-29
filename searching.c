#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i,key,j,mid,flag=0;
    printf("enter the total no. of elements ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("memory not allocated\n");
        exit(0);
    }
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
     printf("display the elements ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
    printf("\nEnter the element you want to  search:\t");
    scanf("%d",&key);
    i=0;
    j=n-1;
    mid=(i+j)/2;
    while(i<=j)
    {
        if (*(p+mid)>key)
        {
            j=mid-1;
        }
        else if (*(p+mid)==key)
        {
            flag=1;
            break ;
        }
        else {
            i=mid + 1;
        }
        mid=(i+j)/2;

    }
    if (flag==1)
    {
        printf("Element found at %d position \t",mid+1);
    }
    else
    {
        printf("Element not found");
    }

        free(p);
}




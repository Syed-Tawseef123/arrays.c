#include<stdio.h>
int sort(int arr[],int k,int n)
{
    int min,loc;
    min=arr[k];
    loc=k;
    for(int j=k+1;j<=9;j++)
    {
        if(min > arr[j])
        {
            min=arr[j];
            loc=j;
        }
    }
    return loc;
}
main()
{
    int a[]={100,99,88,77,66,55,44,33,22,11};
    int n=10,temp,k,min,loc;
    for(k=0;k<=8;k++)
    {
        loc=sort(a,k,10);
        temp=a[k];
        a[k]=a[loc];
        a[loc]=temp;
    }
    for(k=0;k<=9;k++)
    {
        printf("%d  ",a[k]);
    }
}

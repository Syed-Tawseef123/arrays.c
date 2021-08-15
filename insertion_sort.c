#include<stdio.h>
void ins_Sort(int arr[],int n)
{
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
    for(j=i-1;j>=0 && temp < arr[j];j--)
    {
        arr[j+1]=arr[j];
    }
    arr[j+1]=temp;
    }
}
main()
{
    int a[]={101,1,22,55,22,99,32};
    int n=7;
    ins_Sort(a,7);
    for(int i=0;i<7;i++)
    {
        printf("%d  ",a[i]);
    }
}

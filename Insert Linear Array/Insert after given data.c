#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,6};
    int n=5;
    int data=5;
    int p=4;
    for(int i=n; i>p; i--)
    {
        arr[i] = arr[i-1];
    }
     arr[p]=data;
     n=n+1;
   for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
   return 0;
}

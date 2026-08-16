#include<stdio.h>
int FindMin(int N, int arr[])
{
    int min = 0;
    for(int i=1; i<N; i++)
    {
        if(arr[min]<arr[i])
        {
            min=i;
        }
    }
    return min;
}
int main()
{
    int N=0 , i;
    printf("Enter length of array:");
    scanf("%d", &N);
    int arr[i];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int Result= FindMin(N,arr);
    printf("minimum=%d",arr[Result]);
    return 0;
}

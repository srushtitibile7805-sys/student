#include<stdio.h>
int FindMax(int N, int arr[])
{
    int max = 0;
    for(int i=1; i<N; i++)
    {
        if(arr[max]>arr[i])
        {
            max=i;
        }
    }
    return max;
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
    int Result= FindMax(N,arr);
    printf("maximum=%d",arr[Result]);
    return 0;
}

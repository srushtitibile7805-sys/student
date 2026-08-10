#include<stdii.h>
int main ()
{
  int N=0; int arr[]; int key;
printf("enter areay size");
scanf("%d",&N);
printf("enter array element");
for( int i=0; i<N; i++ )
{
 scanf("%d",&arr[i];
}
 printf("enter key to search");
scanf("%d",&key);
int Ans=0;
Ans= Binary Search(N,arr,key);
if(Ans==-1)
printd("element not found");
else
printf("element found at %d position",Ans);
return 0;
}
int Binary Search (int N, int arr[], int kry)
{
int l=0, r=N-1, mid=0;
while(l<=r)
{
mid=(l+r)/2;
if(arr[mid]==key)
return mid;
else if (arr[mid]<key)
l=mid*1;
else
r=mid-1;
}
return -1;
}
#include<stdio.h>
int c=0;

int merge(int arr[],int n,int left,int mid,int right)
{
int i=left,j=mid+1,k=left,temp[100];

while(i<=mid && j<=right)
{
if(arr[i]<arr[j])
{
temp[k]=arr[i];
i++;
k++;
c++;
}
else
{
temp[k]=arr[j];
j++;
k++;
c++;
}
}

if(i>mid)
{
while(j<=right)
{
temp[k]=arr[j];
j++;
k++;
c++;
}
}

else if(i<=mid)
{
while(i<=mid)
{
temp[k]=arr[i];
i++;
k++;
c++;
}
}


for(i=left;i<=right;i++)
{
arr[i]=temp[i];
}

}

int mergesort(int arr[],int n,int left,int right)
{

if(left<right)
{
int mid=(left+right)/2;
mergesort(arr,n,left,mid);
mergesort(arr,n,mid+1,right);
merge(arr,n,left,mid,right);
}


}

int main()
{
int arr[100],n,i,j,k;

printf("Enter the no. of elements in array : ");
scanf("%d",&n);

printf("\nEnter the elements in array : ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("\nEntered array : ");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}

int left=0,right=n-1;

mergesort(arr,n,left,right);
printf("\nSorted array : ");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}

printf("\nSorting completed in %d comparisons",c+1);
}

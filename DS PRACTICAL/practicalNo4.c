#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,k,beg=0,end=10,mid;

printf("enter the element:");
for(i=0;i<10;i++)
{
   printf("number is %d:",i+1);

scanf("%d",&a[i]);
}
printf("enter the no to be searched");
scanf(" %d",&k);
mid=(beg+end)/2;
while(beg<=end)
{
    if(k<a[mid])

{

end=mid-1;

}
  else
  beg=mid+1;
  
  mid=(beg+end)/2;
}
  if(a[mid]==k)
  {
      printf("number is found");
  }
  else
  {
      if(beg>end)
     {

      printf("number not found");
     }
  }
      getch();
     }
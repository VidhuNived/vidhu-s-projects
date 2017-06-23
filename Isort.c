//Pogram to Implement Insertion Sort
#include<stdio.h>
void sort(int *a,int size)
{
int i,j,k;
  for(i=1;i<size;i++)
    {
      k=a[i];
      for(j=i-1;(j>=0)&&(k<a[j]);j--)
		{
	  	a[j+1]=a[j];

		}
      a[j+1]=k;
    }
}
int read(int *a)
{
int i,size;
printf("Enter the size of array");
scanf("%d",&size);
printf("Enter tha array");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("\n");
return size;
}

main()
{
  int a[20],size,h;
size=read(a);
sort(a,size);
      for(h=0;h<size;h++)
	printf("%d\t",a[h]);
    
}


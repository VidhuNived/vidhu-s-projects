//Pogram to Implement Insertion Sort
#include<stdio.h>
main()
{
  int i,j,a[7]={4,23,43,38,15,10,30},k,h;
  for(i=1;i<7;i++)
    {
      k=a[i];
      for(j=i-1;(j>=0)&&(k<a[j]);j--)
	{
	  a[j+1]=a[j];
	 
	}
 a[j+1]=k;
      printf("\nAfter %dth pass\n",i);
      for(h=0;h<7;h++)
	printf("%d\t",a[h]);
    }
}



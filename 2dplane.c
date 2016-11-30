#include<stdio.h>
#include<math.h>
 void main()
{
 int a[200][200],i,j,q,l,m,k,t1,t2;
 float s,distance[200],w;
 	printf("Enter the total  points \n");
 	scanf("%d",&l);
 printf("Enter the the points \n");
 	for(i=0;i<l;i++)
 	{

 		 for(q=0;q<2;q++)
 		{
     		scanf("%d",&a[i][q]);
  		}
 	}
 printf("Enter the key \n");
 scanf("%d",&m);
 printf("Enter the number of coordinates with smallest distance to be printed\n");
 scanf("%d",&k);
 	for(i=0;i<l;i++)
 	{
 		 if(a[m][0]!=a[i][0]&&a[m][1]!=a[i][1])
 		 {
 		  s=sqrt(pow((a[m][0]-a[i][0]),2)+pow((a[m][1]-a[i][1]),2));
 		  distance[i]=s;
 		 }
 		 else
 		 {
 		 distance[i]=INFINITY;
 		 }
 	}
 
 
	for (i = 0 ; i < ( l - 1 ); i++)
  	{
    		for (j = 0 ; j < l - i - 1; j++)
    		{
      			if (distance[j] > distance[j+1]) 
      			{
        		w = distance[j];
        		distance[j]   = distance[j+1];
        		distance[j+1] = w;

     			t1 = a[j][0];
        		a[j][0] = a[j+1][0];
        		a[j+1][0] = t1;

        		t2 = a[j][1];
        		a[j][1] = a[j+1][1];
        		a[j+1][1] = t2;


			}    		  

	  	}
  	}
  
 for(i=0;i<k;i++)
 {
    printf("%d coordinate near is %d %d  distance :%f \n",i+1,a[i][0],a[i][1],distance[i]);
 }
}


                              

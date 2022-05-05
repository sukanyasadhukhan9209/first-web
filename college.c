	#include<stdio.h>
     int main() 
	{ 
	    int i,n,sum; 
	    printf ("Enter the n value"); 
	    scanf ("%d",&n); 
	    for (i=1;i <n;i++) 
	        { 
	            sum=sum+i*(i + 1); 
	        } 
	    printf ("%d",sum ); 
    return 0 ;
	} 
   

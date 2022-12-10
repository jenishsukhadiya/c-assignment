#include<stdio.h>
main()
{
	int num, reverse=0, rem;
	 printf("enter a value of num=");
	 scanf("%d",&num);
	 
	 while(num!=0)
	 {
		rem=num%10;    
     	reverse=reverse*10+rem;    
    	 num/=10;
	 }
	 printf("reverse number=%d",reverse);
	
}

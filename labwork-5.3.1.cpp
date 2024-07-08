#include<stdio.h>

main()
{
	int a,b,c;
	printf("Enter the value A:");
	scanf("%d",&a);
	printf("Enter the value B:");
	scanf("%d",&b);
	printf("Enter the value C:");
	scanf("%d",&c);
	(a<b)? (a<c)? printf("A is min"): printf("C is min")
	     : (b<c)? printf("B is min"): printf("C is min");
}
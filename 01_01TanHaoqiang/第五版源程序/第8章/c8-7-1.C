#include <stdio.h>
int  main()
{ 
	int *p,i,a[10];
	p=a;								//pָ��a[0] 
	
	printf("please enter 10 numbers:");
	for(i=0;i<10;i++)
		scanf("%d",p++);
	
	for(i=0;i<10;i++,p++)
		printf("%d ",*p);				//�����a[0] ~ a[9] 
	
	printf("\n");
	
	return 0;
}

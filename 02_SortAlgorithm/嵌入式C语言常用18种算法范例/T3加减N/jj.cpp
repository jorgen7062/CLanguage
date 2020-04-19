//*****************************************************//
//题目：1-2+3-4+5-6+7-8-----
//编程思路：通过题目可以推算出结果的规律：若最后一个为双数，则直接除2并取相反数
//          若最后一个数为单数，则直接加1后除于2
//****************************************************//
#include <stdio.h>

#define uint unsigned int

main()
{
	uint a,i;

	printf("计算：1-2+3-4+5-6+7-8+...+n=?\n");
	printf("请输入第n个数字!回车键结束输入!\n");
	scanf("%d",&a);
	if(a%2==0)									//判断输入的数字是单数还是双数
		i=-(a/2);								//双数就直接除2并取相反数
	else
		i=(a+1)/2;								//单数就直接加1后除于2
	printf("%d\n",i);
}
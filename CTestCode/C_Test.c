#include <stdio.h>

void Struct_Test(void); 
void Array_Test(void);
void Const_Test(void);
void Macro_vs_Enum(void);
void FormatEffector_Test(void);
void ComplementalCode_Test(void); 


int main()
{
	//Struct_Test();
	Array_Test();
	
	return 0;
}

void Struct_Test(void)
{
	typedef struct 
	{
		int 	i;		
		char 	c;
		char 	c2;
		char	c3;
		char 	c4;		
		short 	s;	
	} ST_SIZE;
	
	ST_SIZE st1;
	
	printf("size of st1 = %d",sizeof(st1));		
}

void Array_Test(void)
{
	char buf[8] = {0,1,2,3,4,5,6,7};
	int i = 0;
	char temp;
	//for()
	
	temp = buf[i++];
	printf("buf[i ++] = %d\n",temp);
	/*
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	*/		
}

void Const_Test(void)
{
	const int a = 2018;
	int *p = (int *)&a;
//	p = (int *)&a;
	*p = 2019;
	printf("%d\n",a);
	
	return;
}

/*****************************************	
ö�����ͳ�Ա���� ��ֵ�� Ԥ����׶� ��Ч

�궨�壺Ԥ����׶Σ������ܼ��ö�ٳ�Ա���͵�ֵ 

ö�����ͣ�����׶�			
******************************************/
void Macro_vs_Enum(void)
{
	enum
	{
		test00,
		test01
	};	
	
	//#define   0
	//#define   1
	#define Macro test01
	
	#if(test00 == 0)
		printf("enmu.test00 == 0\n");
	#endif
	
	#if(test01 == 0)
		printf("enmu.test01 == 0\n");
	#endif
		
	#if(Macro == test00)
		printf("Macro == test00\n"); 
	#endif	
	
	#if(Macro == test01)
		printf("Macro == test01\n");  
	#endif
	
	#if(test00 == test01)
		printf("test00 == test01\n");  
	#endif
	
		return;
}


void FormatEffector_Test(void)
{
	float a, b;
	b = 25.5;
//	a = '\123'; 	//8 octal   123 = 83 (8 + 2*8 + 3 = 83)
	a = 010; 		//8 octal   int  = 8
//	a = -1;
//	a = 1.0/7*4;
	printf("a = %d\n",a);
//	printf("a = %u\n",a); //u�޷�����ʽ��� 
	printf("b = %g\n",b);

//	printf("%d\noooooooo\tbbb\a\rcccc", a=b);
	printf("%d  abc\n",377);

	return;
}

/*
���� ���� ԭ�� 
*/
void ComplementalCode_Test(void)
{
	char c1 = -12;
	unsigned char uc1 = 0;
	
	printf("c1 = %d\t,uc1 = %d\n\n",c1,uc1) ;
	
	uc1 = c1;
	printf("uc1 = c1;\n\n") ;
	
	printf("c1 = %d\t,uc1 = %d\n",c1,uc1);
	
	getchar();
}





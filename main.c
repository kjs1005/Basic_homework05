#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hour1,min1,sec1,
		hour2,min2,sec2,
		tot1,tot2,tot3;
	
	printf("�п�J�Ĥ@��:��/��/��\n");
	scanf("%d %d %d",&hour1,&min1,&sec1);
	printf("�п�J�ĤG��:��/��/��\n");
	scanf("%d %d %d",&hour2,&min2,&sec2);
	
	tot1=hour1*3600+min1*60+sec1;
	tot2=hour2*3600+min2*60+sec2;
	tot3=abs(tot1-tot2);
	
	printf("�ɶ����j��%d��",tot3);
	system("pause");
	
	return 0;
}

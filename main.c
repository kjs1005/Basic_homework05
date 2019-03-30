#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hour1,min1,sec1,
		hour2,min2,sec2,
		tot1,tot2,tot3;
	
	printf("請輸入第一個:時/分/秒\n");
	scanf("%d %d %d",&hour1,&min1,&sec1);
	printf("請輸入第二個:時/分/秒\n");
	scanf("%d %d %d",&hour2,&min2,&sec2);
	
	tot1=hour1*3600+min1*60+sec1;
	tot2=hour2*3600+min2*60+sec2;
	tot3=abs(tot1-tot2);
	
	printf("時間間隔為%d秒",tot3);
	system("pause");
	
	return 0;
}

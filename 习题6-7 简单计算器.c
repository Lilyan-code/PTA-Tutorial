#include<stdio.h>
int main()
{
	int i, sum, isnan=0;
	char op='0';
	scanf("%d", &sum);
	while(op!='='){
		scanf("%c", &op);
		if(op=='=')
			break;
		scanf("%d", &i);
		if(op=='+')
			sum=sum+i;
		else if(op=='-')
			sum=sum-i;
		else if(op=='*')
			sum=sum*i;
		else if(op=='/'){
			if(i!=0)
				sum=sum/i;
			else
				isnan=1;
		}
		else
			isnan=1;
	}
	if(isnan==1)
		printf("ERROR");
	else
		printf("%d\n", sum);
		
	return 0;
}
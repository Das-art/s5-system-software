#include<stdio.h>
#include<stdlib.h>
int main(){
int nop,psize,i;
int *str;
printf("page no:");
scanf("%d",&nop);
printf("page size:");
scanf("%d",&psize);
str=(int*)malloc(2*nop);
for(i=0;i<nop;i++){
	str[i]=(long)malloc(psize);
	printf("page%d\taddress%u\n",i+1,str[i]);
	}
}

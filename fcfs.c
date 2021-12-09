#include<stdio.h>
#include<stdlib.h>
int main()
{
int r[100],i,n,th=0,initial;
printf("enter no:of sqncs\n");
scanf("%d",&n);
printf("enter sqncs\n");
for(i=0;i<n;i++){
	scanf("%d",&r[i]);}
printf("enter head\n");
scanf("%d",&initial);

for(i=0;i<n;i++){
th=th+abs(r[i]-initial);
initial=r[i];
}

printf("totalhead%d",th);
return 0;
}

/*....OUTPUT.....

enter no:of sqncs
7
enter sqncs
82
170
43
140
24
16
190
enter head
50
totalhead 642

*/

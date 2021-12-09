#include<stdio.h>
#include<stdlib.h>

int f[50],i,k,j,inde[50],n,c,count=0,p;
int main()
{
    for(i=0;i<50;i++)
        f[i]=0;
    x:
    printf("enter index block\t");
    scanf("%d",&p);
    if(f[p]==0)
    {
        f[p]=1;
        printf("enter no of files on index\t");
        scanf("%d",&n);
    }
    else
    {
        printf("Block already allocated\n");
        goto x;
    }
    for(i=0;i<n;i++)
        scanf("%d",&inde[i]);
    for(i=0;i<n;i++)
    {
        if(f[inde[i]]==1)
        {
            printf("Block already allocated");
            goto x;
        }
    }
    for(j=0;j<n;j++)
        f[inde[j]]=1;

    printf("\n allocated");
    printf("\n file indexed");

    for(k=0;k<n;k++)
        printf("\n %d-  >%d:%d",p,inde[k],f[inde[k]]);
        
    printf("\nEnter 1 to enter more files and 0 to exit\t");
    scanf("%d",&c);
    if(c==1)
        goto x;
    else
        exit(0);
    
}
/*......OUTPUT.......

enter index block	5
enter no of files on index	
6
8
2
3
7
1
0

 allocated
 file indexed
 5-  >8:1
 5-  >2:1
 5-  >3:1
 5-  >7:1
 5-  >1:1
 5-  >0:1
Enter 1 to enter more files and 0 to exit	

*/


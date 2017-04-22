#include <stdio.h>
#define MAX 255
int R[MAX];


void main()
{
	int i,n;
	puts("Please input total element number of the sequence:");
	scanf("%d",&n);
	if(n<=0||n>MAX)
	{
		printf("n must more than 0 and less than %d.\n",MAX);
		exit(0);
	}
	puts("Please input the elements one by one:");
	for(i=1;i<=n;i++)
		scanf("%d",&R[i]);
	puts("The sequence you input is:");
	for(i=1;i<=n;i++)
		printf("%4d",R[i]);
	Merge_SortDC(R,1,n);
	puts("\nThe sequence after merge_sortDC is:");
	for(i=1;i<=n;i++)
		printf("%4d",R[i]);
}

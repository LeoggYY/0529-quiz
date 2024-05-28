#include <stdlib.h>
#include <stdio.h>
int  gg(int x,int y)
{
	return (x+y)*(x+y+1)/2+x;
}
int main()
{
	int a,x1,y1,x2,y2;
	
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		printf("Case %d: %d\n",i,gg(x2,y2)-gg(x1,y1));
	}




	return 0;
}

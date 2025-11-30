#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int *a=NULL;
	
	a=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
	a=(int*)realloc(a,n*2*sizeof(int));
	
	for(int i=n;i<n*2;i++)scanf("%d",&a[i]);
	
	for(int i=0;i<n*2;i++)printf("%d ",a[i]);
	
	free(a);
}

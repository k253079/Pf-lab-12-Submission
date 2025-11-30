#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int  cmp(const void *a,const void *b){
	return (*(char*)a- *(char*)b);
}
void sortal(char **str,int n){
	for(int i=0;i<n;i++){
		qsort(str[i],strlen(str[i]),sizeof(char),cmp);
	}	
}

int main(){
	int n;
	scanf("%d",&n);
	char **str;
	str=(char**)malloc(n*sizeof(char *));
	
	for(int i=0;i<n;i++){
		char temp[20];
		printf("Enter %d string:",i+1);
		scanf("%s",temp);
		str[i]=(char*)malloc((strlen(temp)+1)*sizeof(char));
		strcpy(str[i],temp);
	}
	sortal(str,n);
	for(int i=0;i<n;i++){
	printf("%s\n",str[i]);
	free(str[i]);
	}
	free(str);
	
}

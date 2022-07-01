#include<stdio.h>
#include<conio.h>
//#define N 5
int main(){
	
	int a[5],i,j,N;
	printf("Enter n value");
	scanf("%d",&N);
	for(i=0;i<N;i++){
		printf("Enter array elements");
		scanf("%d",&a[i]);
	}
	for( i=0;i<N-1;i++)
{
int flag=0;
	for(j=0;j<N-1-i;j++)
	{
		int temp=0;
		if(a[j]>a[j+1]){
		
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		flag=1;
	}
	}
	if(flag==0)
	break;
}
	for(int i=0;i<N-1;i++){
		printf("The sorted elements are %d\n",a[i]);
		}
	return 0;
}

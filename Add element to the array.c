#include<stdio.h>

int main(){
	int i,n,value,position,array[10];
	
          printf("Enter the no of element:");
          printf("\n");
          scanf("%d",&n);

for(i=0;i<n;i++){
	printf("array[%d]=",i);
	scanf("%d",&array[i]);
	}
	
	printf("\nEnter the position: ");
	scanf("%d",&position);
	
	printf("\nEnter the value: ");
	scanf("%d",&value);
	
	for(i=n-1;i>=position-1;i--){
	array[i+1] = array[i];
	}
	array[position -1] = value;
	
	printf("\n****resultant array is****\n");
	
	for(i=0;i<=n;i++){
	printf("array[%d]= %d\n",i,array[i]);
	}
	
	return 0;	
	
	
}

#include<stdio.h>
main(){
	int i,j,k,n;
/*
  		1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/	
	for(i=1;i<=5;i++){
		
		for(k=5;k>i;k--){
			printf(" ");
		}
		
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		
		int a=i-1;
		for(n=a;n>=1;n--){		
			printf("%d",n);
		}

		printf("\n");
	}
}

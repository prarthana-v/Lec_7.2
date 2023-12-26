#include<stdio.h>
main(){
	int i,j,k,n;
	/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
	*/
	for(i=1;i<=5;i++){
		
		for(k=5;k>i;k--){
			printf(" ");
		}
		
		for(j=1;j<=i;j++){
			printf("*");
		}
		
		int a=i-1;
		for(n=a;n>=1;n--){		
			printf("*");
		}

		printf("\n");
	}
}

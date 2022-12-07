#include<stdio.h>
int main(){
	int lines;
	int stars;
	int space;
	
	for(lines=1;lines<=5;lines++){
		for(stars=5;stars<(space-1);stars--){
			printf("*");
		
		space=space-1;
		}
		printf("\n");
		
	}
	return 0;
}
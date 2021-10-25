/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size 100
//void Ex1(int n){
	//Your codes here
	
    
//}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
int i,j;
	int arr[size][size];
	testcase= testcase +1;
	for(i=0;i<n;i++){
		for(j=0;i<i;j++){
			if(j==0||j==i)
			arr[i][j]=1;
			else
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
			printf("%d",arr[i][j]);
		}
	printf("\n");
	}
	   

	//Ex1(testcase);
	return 0;
}

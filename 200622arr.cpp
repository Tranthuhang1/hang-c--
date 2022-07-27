#include <stdio.h>
void main()
{
	int arr[2][3];
	int row,col;
	for(row=0;row<2;col++){
		for(col=0;col<3;col++){
			printf("\nEnter a nuber at [%d][%d]:",row, col);
			scanf("%d", &arr[row][col]);
		
		}
	}
}

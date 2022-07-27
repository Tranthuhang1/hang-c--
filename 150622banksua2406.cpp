#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cardid, pass,chon, dem;
	char check;
	
	printf("nhap carid\n");
	scanf("%d", &cardid);
	
	printf("nhap pass\n");
	scanf("%d", &pass);
	dem=0;


	if (cardid==123 && pass==456) {
		
		printf("1. rut tien\n");
			printf("2. chuyen khoan\n");
			printf("3. xem so du\n");
			printf("4. ket thuc\n");
		do {
		
				printf("\nEnter a number:");
	     		scanf("%d",&chon);
	     		
	    switch(chon)	{
			case 1: 
			printf("nhap so tien\n");
			
				break;
			case 2:
			printf("nhap so tk\n");
			
				break;
			case 3:
			printf("so du tk\n");
				
				break;
		 	case 4:
			printf("bye\n");
				break;
			 }
			printf ("ban co muon tiep tuc khong Y/N");
			fflush (stdin); // xoa o nho dem truoc do 
			scanf ("%c", &check);
		}
			
		while (check =='y'|| check == 'Y');
		
		}
	else
	
	 
	 printf("Invalid\n");
	printf ("ban co muon tiep tuc khong Y/N\n");
			fflush (stdin); // xoa o nho dem truoc do 
			scanf ("%c", &check);
	return 0;
}

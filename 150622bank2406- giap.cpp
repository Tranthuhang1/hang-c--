#include <stdio.h>
#include <stdlib.h>

int login(int a, int b)
{	
	if(a==123,b==456)
	{
	printf(" \n\n\t\t\a*** Chuc mung ban da dang nhap thanh cong  *** \n ");
	return 1;
}
	else
	{
	
	printf("\n\n\t\t\a*** Ban da dang nhap sai user hoac pass  *** \n");
	return 0;
	}
}
char menu()
{
	printf("\n\n\t\t1. Rut tien\t\t2. Chuyen tien\n\t\t3. Hien thi so su\t4. Thoat\n\n");
}

int sodu()
{	
	int sd,c;
	sd=100000000;
	return sd;
}

int ruttien()
{
	int c,sd,cl,tien;
	sd=sodu();
	
	printf("Nhap vao so tien can rut : ");
	scanf("%d",&c);
	if(c<sd && c%50==0 && c<3000000)
	{
		printf("Ban da rut thanh cong %d VND\n",c);
		cl=sd-c;
		printf("So du hien tai la %d VND\n",cl);
		tien=cl;
	}
	else if(c<sd && c%50!=0)
	printf("So tien rut khong phai la boi cua 50, moi ban nhap lai\n");
	else if(c<sd && c>3000000)
	printf("So tien ban rut vuot qua 3M, moi ban nhap lai \n");
	else
	printf("So tien can rut vuot qua so du, moi ban nhap lai \n");
}

int chuyentien()
{
	int stc, stk, cl,sd;
	sd=sodu();
	

	if(stc<sd)
	{
		printf("Nhap vao so tien can chuyen :");
	scanf("%d",&stc);
	printf("Nhap vao so tai khoan can chuyen:");
	scanf("%d",&stk);
	printf("Ban da chuyen thanh cong %d VND cho so tai khoan %d\n",stc,stk);
	cl=sd-stc;
	printf("So du hien tai cua ban la %d VND\n",cl);
	
}
	else
	printf("so tien khong du de chuyen\n");
}

int main()
{
	int a,b,log,rt,ct,sd,tien;
	char mn,ch,check;
	do{
	printf("\t\t\t *** Chao mung ban den voi ATM *** \n\n");
	printf("Nhap vao user cua tai khoan : ");
	scanf("%d",&a);
	printf("Nhap vao pass cua tai khoan : ");
	scanf("%d",&b);
	log=login(a,b);
	if(a==123&&b==456)
	{
		do
		{
		
		int yc;
		char mn;
		mn=menu();
		printf("TK cua ban",sd);
		printf("Moi ban lua chon yeu cau : ");
		scanf("%d",&yc);
		
		switch(yc)
		{
			case 1:
				rt=ruttien();
				tien=tien+1;
				sd= tien;
				break;
			
			case 2:
			ct=chuyentien();
			break;
			
			case 3:
				sd=sodu();
				printf("So du cua ban la %d VND\n",sd);
				break;
			case 4:
				return 0;
				break;
			}
		printf("Ban co muon tiep tuc khong (Y/N) : ");
		fflush(stdin);
		scanf("%c",&ch);
	}
		while(ch=='Y'||ch=='y');
}
	else
	{
		printf("\n\t\t\t*** Moi ban dang nhap lai  *** \n");
	}
}	
		while(a!=123||b!=456);
	
}

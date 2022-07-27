#include <stdio.h>
#include <stdlib.h>

main()
{
 register int i;
 int no, digit, sum;
 printf("Sum of Cubes of Digits is Equa\n");
  for(i=1;i<999;i++)
 {
 sum = 0;
 no = i;
 while(no)
 {
 digit = no%10;
 no = no/10;
 sum = sum + digit * digit * digit;
 }
 if(sum==i)
 printf("%d",i);
 }
}

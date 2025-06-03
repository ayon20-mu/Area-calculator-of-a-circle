#include <stdio.h>
#include<math.h>

int main() {

int radius ;
float pi = 3.1416 ;

printf("Enter the radius") ;
scanf("%d", &radius) ;

int square = pow(radius,2);
float area = pi * square ;
printf("The area is %f", area);

return 0 ;

}
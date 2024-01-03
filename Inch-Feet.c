#include <stdio.h>

struct Distance {
	
   int feet;
   float inch;
   
};

void main() {
	
	struct Distance d1, d2, sum;
   
   printf("Enter 1st distance\n");
   printf("Enter feet = ");
   scanf("%d", &d1.feet);
   printf("Enter inch = ");
   scanf("%f", &d1.inch);
 
   printf("\nEnter 2nd distance\n");
   printf("Enter feet = ");
   scanf("%d", &d2.feet);
   printf("Enter inch = ");
   scanf("%f", &d2.inch);
   
   sum.feet = d1.feet + d2.feet;
   sum.inch = d1.inch + d2.inch;

   while (sum.inch >= 12.0) {
      sum.inch = sum.inch - 12.0;
      ++sum.feet;
   }
   printf("\nSum of distances = %d\'%.1f\"", sum.feet, sum.inch);

}
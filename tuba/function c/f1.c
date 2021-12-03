//Area and Circumference of a Circle.
//formula.
//Area of Circle = PI * R * R
//Circumference of Circle = 2 * PI * R
// function
#include<stdio.h> 

   void circle()
    {
    	float radius, area, circumference;
    	printf("\nEnter the radius of Circle : ");
    	scanf("%f", &radius);
    	area = 3.14 * radius * radius;
    	printf("\nArea of Circle : %f", area);
    	circumference= 2 * 3.14 * radius;
    	printf("\n circumference if a circle : %f", circumference);
    	
    }
 // Run..
  int main ()
 {
   float c;
     
     printf("Enter any number:\n");
     scanf("%f",&c);
     circle(c);
       
       return 0;
 }
    

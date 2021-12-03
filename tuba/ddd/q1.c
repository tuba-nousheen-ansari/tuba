//Area and Circumference of a Circle.
//formula.
//Area of Circle = PI * R * R
//Circumference of Circle = 2 * PI * R
    #include<stdio.h>
    int main() {
    	float radius, area, circumference;
    	printf("\nEnter the radius of Circle : ");
    	scanf("%f", &radius);
    	area = 3.14 * radius * radius;
    	printf("\nArea of Circle : %f", area);
    	circumference= 2 * 3.14 * radius;
    	printf("\n circumference if a circle : %f", circumference);
    	return 0;
    }

// ASCII value of any character..
// function
#include <stdio.h>
 void ASCI(char c)
 {
    
    printf("ASCII value of %c = %d", c, c); 

 }
  
// Run..
int main()
{
  char c;
  
    printf("Please Enter A Character: \n");
    scanf("%c",&c);
    ASCI (c);
}

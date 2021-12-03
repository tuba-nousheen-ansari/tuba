//Write person’s name in abbreviated form 
//function
#include <stdio.h>
#include<string.h>
void Abbreviate(char fname[20], char mname[20],char lname[20])
  {
    
 
   printf("%c.%c.%s\n", fname[0], mname[0], lname);
  }
// Run....
  int main()
  {
      char fname[20], mname[20], lname[20]; 

      printf("Enter full name (first middle last): \n");
      scanf("%s%s%s",fname,mname,lname);
     
      printf("Abbreviated name: \n");
     
      
      Abbreviate( fname, mname, lname);

  return 0;
  }

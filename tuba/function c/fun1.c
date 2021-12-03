#include<stdio.h>

  void abc(){
   printf("called fun.....\n");
   }
  
  void pqr(){
   printf("called fun1.....\n");
  }
  
  void xyz(){
   printf("called fun2.....\n");
  }
  
  int main(){
  printf("main started\n");
  abc();
  pqr();
  printf("hey\n");
  xyz();
  }

// write a programme to print 1,3,5,7,9,.....n

#include <stdio.h>
int main() {
int n=9, i=1;
printf("Enter no. of terms");
scanf ("%d",&n);
while (n>0){
printf("%d",i);
i=i+2;
n--;

}

return 0;
}

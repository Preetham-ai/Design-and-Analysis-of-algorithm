#include<stdio.h>
int factorial(int n){
if(n==1){
return 1;
}
else{
return n*factorial(n-1);
}
}
int main(){
int n;
printf("CH.SC.U4CSE24139\n");
printf("Enter value of n:");
scanf("%d",&n);
printf("The factorial of %d is %d\n",n,factorial(n));
}
/*Space Complexity O(n) 1 variable
Justification:
In main(): only 1 int variable n
In factorial():int variable - return
so the worst case is O(n) as the value is returned n times.
space used 4+4n bytes
*/

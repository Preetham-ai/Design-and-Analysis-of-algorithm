#include<stdio.h>
int main(){
printf("CH.SC.U4CSE24139\n");
int n;
int sum=0;
printf("Enter value of n:");
scanf("%d",&n);
for(int i=1;i<n+1;i++){
sum+=i*i*i;
}
printf("The sum of cubes of first %d natural numbers is %d\n",n,sum);
}
/*Space Complexity O(1) 2 variables
Justification:
In main(): int variables - n,sum
so the worst case is O(1)
space used 8 bytes
*/

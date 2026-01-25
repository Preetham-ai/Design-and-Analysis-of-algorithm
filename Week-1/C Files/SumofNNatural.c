#include<stdio.h>
int sum(int n){
int sum=0;
for(int i=1;i<n+1;i++){
sum+=i;
}
return sum;
}
int main(){
printf("CH.SC.U4CSE24113\n");
int n;
printf("Enter value of n:");
scanf("%d",&n);
printf("The sum of first %d natural numbers is %d\n",n,sum(n));
}
/*Space Complexity O(1) 3 variables
Justification:
In main(): only 1 int variable n
In sum():int variables - sum,return
so the worst case is O(1)
space used 12 bytes
*/

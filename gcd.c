#include <stdio.h>
// Approach:
// - get 2 nums
// - use Euclidean method
// - gcd(a,b) -> gcd(b,a%b)
// - when b becomes 0 return a

int gcd(int x, int y);
int main(){
    int a, b;
    printf("Enter two integers to find GCD: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    
}
int gcd(int x, int y){
    if(y == 0)
        return x;
    else
        return gcd(y, x % y);
}
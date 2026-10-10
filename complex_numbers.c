#include<stdio.h>

// Approach:
// - structure with real and imag
// - get 2 complex nums
// - add real parts
// - add imaginary parts
// - print result


    struct Complex{
        float real;
        float imag;
    };

    struct Complex add(struct Complex a,struct Complex b){
        struct Complex c;
        c.real=a.real+b.real;
        c.imag=a.imag+b.imag;
        return c;
    }

    void display(struct Complex a){
        printf("%.2f + %.2fi",a.real,a.imag);
    }

    int main(){
        struct Complex a,b,result;

        printf("Enter real and imaginary part of first number: ");
        scanf("%f %f",&a.real,&a.imag);

        printf("Enter real and imaginary part of second number: ");
        scanf("%f %f",&b.real,&b.imag);

        result=add(a,b);

        printf("Sum = ");
        display(result);

        return 0;
    }
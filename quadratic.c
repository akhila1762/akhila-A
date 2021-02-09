
#include <stdio.h>
#include <conio.h>
#include <math.h>
void quadraticroots(float, float, float);
int main(){
    float x,y,z;
    printf("\n In a Quadratic Equation of form ax^2+bx+c=0, enter the coefficients a, b and c:");
    scanf("%f %f %f", &x, &y, &z);
    quadraticroots(x,y,z);
    getch();
    return 0;
}
void quadraticroots(float a, float b, float c)
{
    float discriminant, r1, r2, realPart, imagPart;
    discriminant = pow(b,2) - 4 * a * c;
    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("r1 = %f and r2 = %f", r1, r2);
    }
       else if (discriminant == 0) {
        r1 = r2 = -b / (2 * a);
        printf("r1 = r2 = %f", r1);
    }
        else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("1st root = (%f + %f i) and 2nd root = (%f - %f i) , where i = (-1)^(0.5)", realPart, imagPart, realPart, imagPart);
    }
    return;
}

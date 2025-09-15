//Write a program to find the roots of a quadratic equation and categorize them.//
#include <stdio.h>
#include <math.h>  // for sqrt()

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;


    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);


    discriminant = (b * b) - (4 * a * c);

    
    if (discriminant > 0) {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f, Root 2 = %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } 
    else {
    
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and conjugate.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}

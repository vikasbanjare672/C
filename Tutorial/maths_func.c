#include <stdio.h>
#include <math.h>

//   Calculating something something related to Sphere:::::

int main(){

    double radius = 0.0f;
    double area = 0.0f;
    double volume = 0.0f;
    
    const double PI = 3.14159;

    printf("Enter the radius of Sphere : ");
    scanf("%lf", &radius);

    area = 4 * PI * pow(radius ,2);
    volume = (4/3.0) * PI * pow(radius, 3);

    printf("Area of the Sphere is : %.2lf cm^2\n", area );
    printf("Volume of the Sphere is : %.2lf cm^3\n", volume );
    
    
    return 0;
}
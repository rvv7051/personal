#include <stdio.h>
int main(){
    const double PI = 3.1459;// no change to this variable
    double circumfrence;
    double radius;

    printf("\nEnter radius of circle: ");
    scanf("%lf", &radius);
    circumfrence = 2 * PI * radius;
    double area = PI*radius*radius;

    printf("\ncircumfrence: %lf", circumfrence);
    printf("\narea: %lf", area);

    return 0;
}
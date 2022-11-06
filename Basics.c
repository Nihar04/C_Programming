/*SIMPLE INTEREST*/
#include <stdio.h>
#include <math.h>
int main()
{
    float P = 1000.0, ROI = 8.5, T = 3.0,si;
    si = P*ROI*T/100;
    printf("The Simple Interest is %f", si);
    return 0;
}

/*AREA OF TRIANGLE*/

#include <stdio.h>
#include <math.h>
int main()
{
    float base, height, area;
    printf("Enter base = ");
    scanf("%f", & base);
    printf("Enter height = ");
    scanf("%f", & height);
    area = 0.5*base*height;
    printf("The Area of the Triangle = %f", area);

    return 0;
}

/*AREA OF SQUARE*/

#include <stdio.h>
#include <math.h>
int main()
{
    float side, area;
    printf("Enter side = ");
    scanf("%f", & side);
    area = side*side;
    printf("The Area of the Square = %f", area);

    return 0;
}




/*AREA OF RECTANGLE*/

#include <stdio.h>
#include <math.h>
int main()
{
    float length, breadth, area;
    printf("Enter length = ");
    scanf("%f", & length);
    printf("Enter breadth = ");
    scanf("%f", & breadth);
    area = length*breadth;
    printf("The Area of the Rectangle = %f", area);

    return 0;
}

/*AREA OF CIRCLE*/

#include <stdio.h>
#include <math.h>
int main()
{
    float radius, area;
    printf("Enter Radius = ");
    scanf("%f", & radius);
    area = 3.14159*radius*radius;
    printf("The Area of the Circle = %f", area);

    return 0;
}

/*CIRCUMFERENCE OF A CIRCLE*/

#include <stdio.h>
#include <math.h>
int main()
{
    float radius, circumference;
    printf("Enter Radius = ");
    scanf("%f", & radius);
    circumference = 2*3.14159*radius;
    printf("The Circumference of a Circle = %f", circumference);

    return 0;
}


/*CALCULATE THE EMI*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
    float principalvalue, roi, timet, emi;
    printf("Enter Principal Value = ");
    scanf("%f", & principalvalue);
    printf("Enter Rate of Interest = ");
    scanf("%f", & roi);
    printf("Enter Time(in years) = ");
    scanf("%f", & timet);
    emi = principalvalue*roi*pow(1+roi, timet)/(pow(1+roi, timet)- 1);
    printf("EMI = %f", emi);

    return 0;
}

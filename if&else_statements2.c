/*C PROGRAM TO INPUT WEEK NUMBER AND PRINT WEEK DAY*/
#include <stdio.h>

int main()
{
    int week;
    printf("Enter week number (1-7): ");
    scanf("%d", &week);


    if(week == 1)
    {
        printf("Monday");
    }
    else if(week == 2)
    {
        printf("Tuesday");
    }
    else if(week == 3)
    {
        printf("Wednesday");
    }
    else if(week == 4)
    {
        printf("Thursday");
    }
    else if(week == 5)
    {
        printf("Friday");
    }
    else if(week == 6)
    {
        printf("Saturday");
    }
    else if(week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}
/*C PROGRAM TO INPUT MONTH NUMBER AND PRINT NUMBER OF DAYS IN THAT MONTH*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int month_num;
    printf("Enter number of the month (1-12): ");
    scanf("%d", &month_num);
    if((month_num == 1||month_num == 3||month_num == 5||month_num ==7||month_num ==8||month_num ==10||month_num == 12)){
        printf("The month has 31 days.");
    }
    else if((month_num == 4|| month_num == 6||month_num == 9||month_num ==11)){
        printf("The month has 30 days.");
    }
    else if(month_num == 2){
        printf("The month has 28-29 days.");
    }
    else{
        printf("Enter valid number of month between 1-12.");
    }

    return 0;

/*C PROGRAM TO COUNT TOTAL NUMBER OF NOTES GIVEN IN AMOUNT*/
#include <stdio.h>
int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;
     printf("Enter amount: ");
    scanf("%d", &amount);
    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }
    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);
    return 0;
}


/*C PROGRAM TO INPUT ANGLES OF A TRIANGLE AND CHECK WHETHER TRIANGLE IS VALID OR NOT*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float ang1, ang2, ang3, cond;
    printf("Enter the measurement of the first angle of the traingle: ");
    scanf("%f", &ang1);
    printf("Enter the measurement of the second angle of the triangle: ");
    scanf("%f", &ang2);
    printf("Enter the measurement of the third angle of the triangle: ");
    scanf("%f", &ang3);
    if(ang1+ang2+ang3 == 180){
        printf("It is a valid triangle");
    }
    else{
        printf("It is not a valid triangle.");
    }
    return 0;
}
/*C PROGRAM TO INPUT ALL SIDES OF THE TRIANGLE AND CHECK WHETHER TRIANGLE IS VALID OR NOT*/
include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter three sides of the triangle: \n");
    scanf("%f%f%f", &a, &b, &c);
    
    if((a<b+c)||(b<a+c)||(c<a+b)){
        printf("It is a valid triangle");
    }
    else{
        printf("It is not a valid triangle.");
    }
    return 0;
}
/*C PROGRAM TO CHECK WHETHER THE TRIANGLE IS EQUILATERAL, ISOSCELES OR SCALENE*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter three sides of the triangle: \n");
    scanf("%f%f%f", &a, &b, &c);
    
    if(a==b && b==c){
        printf("It is an equilateral triangle.");
    }
    else if(a==b || a==c || b==c){
        printf("It is an isosceles triangle.");
    }
    else{
        printf("It is a scalene triangle.");
    }
    return 0;
}

/*C PROGRAM TO FIND ALL ROOTS OF QUADRATIC EQUATION*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, root1, root2, discriminant, realPart, Imaginarypart;
    printf("Enter coefficients a,b & c : ");
    scanf("%d%d%d", &a, &b, &c);
    discriminant = b*b-4*a*c;
    if(discriminant>0){                        /*condition for real and different roots*/
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (b-sqrt(discriminant))/(2*a);
        printf("Root 1 = %d and Root 2 = %d", root1, root2);
    }
    else if(discriminant==0){               /*condition for real and equal roots*/
        root1 = root2 = -b / (2*a);
        printf("Root 1 = Root 2 =%d", root1);
    }
    else{                                 /*condition if the roots are not real*/
        realPart = -b/(2*a);
        Imaginarypart = sqrt(-discriminant)/(2*a);
        printf("Root 1 = %d+ %d & Root 2 = %d-%d", realPart, Imaginarypart, realPart, Imaginarypart);
    }

    return 0;
}

/*C PROGRAM TO CHECK PROFIT OR LOSS*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cp, sp, amt;
    printf("Enter the cost price of the product: ");
    scanf("%d", &cp);
    printf("Enter the selling price of the product: ");
    scanf("%d", &sp);
    if(sp>cp){
        amt = sp-cp;
        printf("PROFIT = %d", amt);
    }
    else if(sp<cp){
        amt = cp-sp;
        printf("LOSS = %d", amt);
    }
    else{
        printf("No PROFIT NO LOSS");
    }

    return 0;
}

/*C PROGRAM TO INPUT ELECTRICITY UNIT CHARGES AND CALCULATE TOTAL ELECTRICITY BILL ACCORDING TO THE GIVEN CONDITIONS*/
#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }

    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}

/*If number of years w0rked in org is more than 3 else what if not more than 3*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int c_year, j_year;
    printf("Enter the current year: ");
    scanf("%d", &c_year);
    printf("Enter the year of enrollment in the organization: ");
    scanf("%d", &j_year);
    if((c_year-j_year) >3){
        printf("The employee has recieved a bonus of Rs. 2,500/-");
    }
}

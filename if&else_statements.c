/*IF & ELSE STATEMENT ON HOW TO CALCULATE GROSS SALARY AND OTHER CONDITIONS*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float bs,hra,da,grossSalary;
    printf("Enter the basic salary of the employee :");
    scanf("%f",&bs);
    if(bs<1500)
    {
    printf("The HRA is %f \n", hra= 0.1*bs);
    printf("The DA is %f \n", da= 0.9*bs);
    }
    else
    {
    printf("The HRA is %f \n", hra= 500*bs);
    printf("The DA is %f \n", da= 0.98*bs);
    }
    grossSalary = bs+da+hra;
    printf("The gross salary is = %f", grossSalary);
    
    return 0;
}

/*IF,ELSE & ELSE_IF STATEMENTS ON MARKS ON OBTAINED BY STUDENTS, CALCULATING THE PERCENTAGE AND ALLOTING THEM THE CORRESPONDING GRADE*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float m1,m2,m3,m4,m5, perc;
    printf("Enter the marks obtained in subject 1:");
    scanf("%f", &m1);
    printf("Enter the marks obtained in subject 2:");
    scanf("%f", &m2);
    printf("Enter the marks obtained in subject 3:");
    scanf("%f", &m3);
    printf("Enter the marks obtained in subject 4:");
    scanf("%f", &m4);
    printf("Enter the marks obtained in subject 5:");
    scanf("%f", &m5);
    perc = (m1+m2+m3+m4+m5)*100/500;
    if(perc>=60)
    {
        printf("Promoted to First Division");
    }
    else if(perc>50)
    {
        printf("Promoted to Second Division");
    }
    else if(perc>40)
    {
        printf("Promoted to Third Divisionn");
    }
    else
    {
        printf("Failed");
    }
    return 0;
}

/*PROGRAM TO ACCEPT THREE NUMBERS FROM THE USER AND FIND THE LARGEST ONE*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3;
    printf("Enter the value of num1:");
    scanf("%f", &num1);
    printf("Enter the value of num2:");
    scanf("%f", &num2);
    printf("Enter the value of num3:");
    scanf("%f", &num3);
    if(num1>num2 && num1>num3)
    {
        printf("The largest number is %f.", num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("The largest number is %f.", num2);
    }
    else
    {
        printf("The largest number is %f ", num3);
    }
   
    return 0;
}

/*PROGRAM TO ACCEPT THREE NUMBERS FROM THE USER AND FIND THE LARGEST ONE USING TERNARY OPERATOR*/
#include <stdio.h>

int main()
{
    int x, y,z, lnum;
    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    printf("Enter the value of z: ");
    scanf("%d", &z);
    lnum = x>y?(x>z?x:z):(y>z?y:z);
    printf("The largest number is %d", lnum);

    return 0;
}

/*C PROGRAM TO CHECK WHETHER A NUMBER IS NEGATIVE, POSITIVE OR ZERO*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int
main ()
{
  int num;
  printf ("Enter a number: ");
  scanf("%d", &num);
  if(num>0){
      printf("%d is a positive number", num);
  }
  else if (num<0){
      printf("%d is negative", num);
  }
  else
  printf("%d is a equal to zero", num);
  return 0;
}
/*C PROGRAM TO CHECK WHETHER NUMBER IS DIVISIBLE BY 5 & 11 OR NOT*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num%5==0 && num%11==0)
    {
        printf("The number entered is divisible by 5 & 11.");
    }
    else if (num%5==0)
    {
        printf("The number entered is only divisible by 5.");
    }
    else if (num%11==0)
    {
        printf("The number entered is only divisible by 11.");
    }
    else
    {
        printf("The number entered is neither divisble by 5 nor by 11.");
    }
 return 0;
}
/*C PROGRAM TO CHECK WHETHER NUMBER IS EVEN OR ODD*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("The number is an even number.");
    }
    else
    {
        printf("The number is an odd number.");
    }

    return 0;
}
/*C PROGRAM TO CHECK WHETHER A YEAR IS A LEAP YEAR OR NOT*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a year : ");
    scanf("%d", &num);
    if(num%4==0)
    {
        printf("It is a leap year.");
    }
    else
    {
        printf("It is not a leap year.");
    }

    return 0;
}

/*C PROGRAM TO CHECK WHETHER CHARACTER IS AN ALPHABET OR NOT*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}
/*C PROGRAM TO CHECK WHETHER AN ALPHABET IS A VOWEL OR A CONSONANT*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char c;
    int lowercase_Vowel, uppercase_Vowel;
    printf("Enter an alphabet : ");
    scanf("%c", &c);
    lowercase_Vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase_Vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if(lowercase_Vowel || uppercase_Vowel){
        printf("The alphabet is a vowel.");
    }
    else{
        printf("The alphabet is a constant.");
    }

    return 0;
}
/*C PROGRAM TO INPUT ANY CHARACTER AND CHECK WHETHER IT IS ALPHABET, DIGIT, OR SPECIAL CHARACTER*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char c;
    printf("Enter any character : ");
    scanf("%c", &c);
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        printf("It is an alphabet.");
    }
    else if(c>='0' && c<= '9' ){
        printf("It is a digit.");
    }
    else{
        printf("It is a special character");
    }

    return 0;
}
/*C PROGRAM TO CHECK WHETHER A CHARACTER IS AN UPPERCASE OR LOWERCASE ALPHABET*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char c;
    printf("Enter any character : ");
    scanf("%c", &c);
    if(c>='a' && c<='z'){
        printf("The alphabet is in lowercase.");
    }
    else{
        printf("The alphabet is in uppercase.");
    }

    return 0;
}


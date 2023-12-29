//WAP to accepts Marks and display class accordingly
// 0 to 34     Fail
// 35 to 49    Pass Class
// 50 to 59    Seccond Class
// 60 to 74    First Class
// 75 to 100   First Class with Distinction

#include<stdio.h>

void DisplayClass(float fMarks)
{
    if(fMarks<0.0f)
    {
        printf("Invalid percentage \n");
    }
    else if(fMarks>100.0f)
    {
        printf("Bapacha College ahe ka?");
    }
    else if (fMarks>=0.0f && fMarks<35.0f)
    {
        printf("Candidate is Failed");
    }
    else if (fMarks>=35 && fMarks<50)
    {
        printf("Candidate in Pass Class");
    }
    else if(fMarks>=50 && fMarks<=60)
    {
        printf("Candidate in Seccond Class");
    }
    else if(fMarks>=60 && fMarks<=75)
    {
        printf("Candidate is in First Class");
    }
    else if(fMarks>=75 && fMarks<=100)
    {
        printf("Candidate in First Class with Distinction");
    }
}

int main()
{
    float Marks=0;
    printf("Enter your Percentage: \n");
    scanf("%f",&Marks);
    DisplayClass(Marks);
}
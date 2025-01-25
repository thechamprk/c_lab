//pr
//(percentage calculator)

#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    float per,sum;
    printf("************************Progress Report Generator(FOR 5 SUBJECTS ONLY)************************\n");
    
    
    printf("****PLEASE ENTER HOW MANY MARKS YOU'VE OBTAINED****\n\n");
    printf("English: ");
    scanf("%d\n", &s1);
    printf("Hindi: ");
    scanf("%d\n", &s2);
    printf("Maths: ");
    scanf("%d\n", &s3);
    printf("Science: ");
    scanf("%d\n", &s4);
    printf("Social Studies: ");
    scanf("%d\n", &s5);
    
    sum = s1+s2+s3+s4+s5;
    per = ((sum)/(100*5))*100;
    
    printf("Your Average Score: %.2f\n", sum);
    printf("Percentage Obatined: %.3f\n", per);
    
    if(per > 60.00)
    {
        if(per > 90.00)
        {
            printf("You've got FIRST DIVISION in EXAMS.\n");
            printf("You're a OUTSTANDING student and keep working hard.\n;)\n");
        }
        else
        {
            printf("You've got FIRST DIVISION in EXAMS.\n:)\n");
        }
    }
    else if(per < 60.00 && per > 50.00)
    {
        printf("You've got SECOND DIVISION in EXAMS.\nYou can do better with little efforts.\n:)\n");
    }
    else if(per < 50.00 && per > 40.00)
    {
        printf("You've got THIRD DIVISION in EXAMS.\nFROM NOW ON YOU NEED TO WORK HARD.\n(-_-)\n");
    }
    else
    {
        printf("You've TOPPED the Exam from backwards.\nYou have two ways work your ass off else you'll not able to cross this class and your friends will\n(*_*)\n");
    }
    return 0;
}

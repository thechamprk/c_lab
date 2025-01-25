#include<stdio.h>

float physics, chemistry, maths, english, hindi, avg, sum, ptc;
printf ("Physics Score: \n");
scanf ("%f", &physics);
printf ("Chemistry Score: \n");
scanf ("%f", &chemistry);
printf ("Maths Score: \n");
scanf ("%f", &maths);
printf ("English Score: \n");
scanf ("%f", &english);
printf ("Hindi Score: \n");
scanf ("%f", &hindi);
sum = (physics + chemistry + maths + english + hindi);
avg = (sum) / 5;
printf ("Average Score: %.2f\n", avg);
ptc = (sum / 500)*100;
printf ("Your Overall Percentage: %.2f\n", ptc);
if(ptc < 45.00);
{
printf("WELL DONE;)\n");
}
if(45.00 < ptc && ptc < 75.00);
{
printf("KEEP PUSHING HARD, HARD WORK ALWAYS PAYS OFF\n");
}
else
{
printf("YOU NEED TO START RIGHT NOW\n");
}
        //for (int ptc=75.00; ptc<101.00; ptc++)
           //if(75.00 < ptc < 100.00)


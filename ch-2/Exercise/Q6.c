// amt = 93$
// $20, 10$, 5$, 1$ break it for smallest change

#include <stdio.h>
int main(){ int in;
           
printf("Enter a dollar amount: ");scanf("%d",&in);
           printf("20$ bills: %d\n",in/20);
           in =in - (in/20)*20;
           printf("10$ bills: %d\n",in/10);
           in = in - (in/10)*10;
           printf("5$ bills: %d\n",in/5);
           in = in - (in/5)*5;
           printf("1$ bills: %d\n",in);          
  return 0;
}

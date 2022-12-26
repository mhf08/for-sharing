#include <stdio.h>
main(){
int m, i=1, c=0;
char g;

while(i==1){
    printf("please enter marks:");
    scanf("%d", &m);
    if (m>100){ printf("please enter a valid mark");
    break;}
    else if(m>=80) g='A';
    else if(m>=70) g='B';
    else if(m>=60) g='C';
    else if(m>=50) g='D';
    else if(m>=40) g='E';
    else g='F';
    c++;
    printf("The grade of student no %d is: %c \n", c, g);
    printf("If you want to continue, press 1. And if you want to terminate, press 0\n");
    scanf("%d", &i);
}
}

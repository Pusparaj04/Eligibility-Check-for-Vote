/*Author: PUSPA RAJ KARNA
Contact: https://www.facebook.com/pusparaj.karna */

#include <stdio.h>
int main()
{
    // continue statement:
    int i, age;
    int PY, YOB;
    printf("Enter the present year: ");
    scanf("%d", &PY);

    for (int i = 1; i < 100; i++)
    {
        printf("%d) ", i);
        printf("Enter the year of birth: ");
        scanf("%d", &YOB);
        age = PY - YOB;
        printf("Since you're %d years old, ", age);
        

        if (age > 0 && age < 18)
        {
            printf("You are not eligible to vote.\n");
            continue;
        } else if(age<0){
            printf("Invalid age.\n \a");
        }
        else
        {
            break;
        }
    }
    printf("You're eligible to vote!!");
    return 0;
}

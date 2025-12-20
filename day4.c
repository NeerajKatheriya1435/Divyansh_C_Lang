#include <stdio.h>
int main()
{

    // Control Statement
    // if else
    // switch case statemnets

    // int age = 56;
    // if (age > 18)
    // {
    //     if (age == 56)
    //     {
    //         printf("Conguratulation ");
    //     }
    //     printf("You can drive the car");
    // }
    // else
    // {

    //     printf("You can not drive the car");
    // }

    // int age = 45;

    // if (age > 150)
    // {
    //     printf("Invalid Age");
    // }
    // else if (age > 90)
    // {
    //     printf("You can not drive due to overage");
    // }
    // else if (age > 18)
    // {
    //     printf("You can drive the car");
    // }
    // else
    // {
    //     printf("You can not drive the car");
    // }

    int value = 13;
    switch (value)
    {
    case 11:
        printf("Today is Monday\n");
        break;
    case 12:
        printf("Today is Tuesday\n");
        break;
    case 13:
        printf("Today is Wednesday\n");
        break;
    case 14:
        printf("Today is Thursday\n");
        break;
    case 15:
        printf("Today is Friday\n");
        break;
    default:
        printf("Please Input Value between 11 to 15\n");
    }

    return 0;
}

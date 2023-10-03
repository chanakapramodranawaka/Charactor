#include <stdio.h>
int main(void)
{
    char charactor;

    printf("Please Enter 'A' tco H Charactor : ");
    scanf("%c",&charactor);

    switch(charactor)
    {
        case 'a': case 'A':
        printf("You Enter : %c", charactor);
        break;

        case 'b': case'B':
        printf("You Enter : %c", charactor);
        break;

        case 'c': case 'C':
        printf("You Enter : %c", charactor);
        break;

        case 'd': case 'D':
        printf("You Enter : %c", charactor);
        break;

        case 'e': case 'E':
        printf("You Enter : %c", charactor);
        break;

        case 'f': case 'F':
        printf("You Enter : %c", charactor);
        break;

        case 'g': case 'G':
        printf("You Enter : %c", charactor);
        break;

        case 'h': case 'H':
        printf("You Enter : %c", charactor);
        break;

        default:
        printf("Wrong Entry");
    }

    return 0;
}
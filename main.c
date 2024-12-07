#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int bit;
    int manipulation;

    printf("Enter a number:");
    scanf("%d",&number);

      do {
        printf("\nEnter a bit position (0-31): ");
        scanf("%d", &bit);
        if (bit < 0 || bit > 31)
            {
            printf("Invalid bit position. Please enter a value between 0 and 31.\n");
            }
       } while (bit < 0 || bit > 31);

    printf("\nChoose a manipulation function:\n");
    printf("1. Set a Bit\n");
    printf("2. Clear a Bit\n");
    printf("3. Toggle a Bit\n");
    printf("4. Read a Bit\n");
    printf("Enter your choice: ");
    scanf("%d", &manipulation);

    switch (manipulation){
    case 1:
        printf("\nThe number after setting that bit %d:%d\n",bit,(number|(1<<bit)));   //Set a Bit
        break;
    case 2:
        printf("\nThe number after clearing that bit %d:%d\n",bit,(number&~(1<<bit))); //Clear a Bit
        break;
    case 3:
        printf("\nThe number after toggling that bit %d:%d\n",bit,(number^(1<<bit)));  //Toggle a Bit
        break;
    case 4:
        printf("\nOriginal bit value at position %d:%d\n",bit,((number>>bit)&1));      //Read a Bit
        break;
    default:
        printf("\nInvalid choice. Please select a valid operation (1-4).\n");
        }

    return 0;
}

#include <stdio.h>

int main()
{
    char message[100];
    unsigned long hash = 0;
    int i;

    printf("Enter a message: ");
    scanf("%s", message);

    for (i = 0; message[i] != '\0'; i++)
    {
        hash = hash * 31 + message[i];
    }

    printf("\nGenerated Hash Value: %lu\n", hash);
    return 0;
}
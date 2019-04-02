#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    printf("Hello world!\n");

    // print each argv
    for(int i=0; i<argc; i++)
    {
        printf("%s\n", argv[i]);

        // print each character from the each argv[i]
        for (int j=0, n=strlen(argv[i]); j<n; j++)
        {
            printf("%c\n", argv[i][j]);
        }
    }

    return 0;
}

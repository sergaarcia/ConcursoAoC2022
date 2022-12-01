#include <stdio.h>
#include <stdlib.h>

int main(void)
{

        char line[11];
        unsigned long int totalElf = 0, maxElf = 0;

        while(fgets(line, 11, stdin) != NULL)
        {
                if(line[0] == '\n')
                {
                        maxElf = totalElf > maxElf ? totalElf : maxElf;
                        totalElf = 0;
                }
                else
                {
                        totalElf += (unsigned long int)strtol(line, NULL, 10);
                }
        }
        maxElf = totalElf > maxElf ? totalElf : maxElf;
        printf("%lu\n", maxElf);
        return 0;

}




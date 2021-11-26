#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("how many llamas at start\n");
    }
    while (start<9);
    
    // TODO: Prompt for end size
    int end;
    do
    { 
        end = get_int("how many llamas at end\n");
    }
    while (end<start);
    
    // TODO: Calculate number of years until we reach threshold
 
    int newpop = (start+(start/3)-(start/4));
    int t = 1;
    while (newpop<end)
    {
       // printf("newpop=%i, year=%i\n", newpop, t);
        newpop = (newpop+(newpop/3)-(newpop/4));
        t++;
    }
    //printf("newpop=%i, year=%i\n", newpop, t);
    
    // TODO: Print number of years
    printf("it will take %i year(s)\n", t);
}

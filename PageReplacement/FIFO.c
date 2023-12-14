#include <stdio.h>
#include <math.h>
/*
First In First Out Page replacement algo
*/
int checkHit(int mem[], int cap, int target)
{
    for (int i = 0; i < cap; i++)
    {
        if (mem[i] == target)
            return 1;
    }
    return 0;
}
void printMem(int mem[], int cap)
{
    for (int i = 0; i < cap; i++)
    {
        printf("%d ", mem[i]);
    }
    printf("\n");
}
int main()
{
    int cap, n;
    printf("Enter capacity and size of pages array");
    scanf("%d %d", &cap, &n);
    int pages[100], memory[100];

    // Input the pages
    printf("Enter the pages:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pages[i]);
        memory[i] = -1;
    }

    int pageHit = 0, pageFault = 0, occupied = 0;

    for (int i = 0; i < n; i++)
    {
        if (checkHit(memory, cap, pages[i]))
        {
            pageHit++;
        }
        else
        {
            memory[occupied] = pages[i];
            occupied++;
            pageFault++;
        }
        occupied = occupied % cap;
        printMem(memory, cap);
    }
    printf("page faults = %d pageHit = %d", pageFault, pageHit);

    return 0;
}
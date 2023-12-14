#include <stdio.h>
#include <math.h>
/*
Least Recently used page fault algo
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
        else if (occupied < cap)
        {
            memory[occupied] = pages[i];
            occupied++;
            pageFault++;
        }
        else
        {
            int dis, mxx = -1, index = 0;
            for (int j = 0; j < cap; j++)
            {
                dis = 0;
                for (int k = i; k < n; k++)
                {
                    if (memory[j] == pages[k])
                        break;
                    ++dis;
                }
                if (dis > mxx)
                {
                    mxx = dis;
                    index = j;
                }
            }
            memory[index] = pages[i];
            pageFault++;
        }
        printMem(memory, cap);
    }
    printf("page faults = %d pageHit = %d", pageFault, pageHit);

    return 0;
}
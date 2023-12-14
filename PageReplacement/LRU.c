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

int main()
{
    int cap, n;
    printf("Enter capacity and size of pages array");
    scanf("%d %d", &cap, &n);
    int pages[100], memory[100] = {0};

    // Input the pages
    printf("Enter the pages:");
    for (int i = 0; i < n; i++)
        scanf("%d", &pages[i]);

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
                for (int k = i - 1; k >= 0; k--)
                {
                    dis++;
                    if (memory[j] == pages[k])
                        break;
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
    }
    printf("page faults = %d", pageFault);

    return 0;
}
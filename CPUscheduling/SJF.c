/*Shortest job first algorithm
Find average waiting time
Sort the jobs on basis o burst times
and execute one by one
*/
#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int at[10], bt[10], wt[10], n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter arrival time and burst times\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &at[i], &bt[i]);
        wt[i] = 0;
    }
    // sort by burst time
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (bt[j + 1] < bt[j])
            {
                swap(&at[j], &at[j + 1]);
                swap(&bt[j], &bt[j + 1]);
            }
        }
    }
    // now calculate
    int twt = 0;
    for (int i = 1; i < n; i++)
    {
        int d = wt[i - 1] + bt[i - 1] - at[i];
        wt[i] = d < 0 ? 0 : d;
        twt += wt[i];
        printf("%d ", wt[i]);
    }
    float avg = (float)twt / n;
    printf("Avg wait time = %f", avg);
    return 0;
}
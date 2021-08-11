#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100];
    int n, ch, pos, val, j, p;
    while (1)
    {
        printf("1:- create array:\n");
        printf("2:- Display array:\n");
        printf("3:- insertion:\n");
        printf("4:- Deletion:\n");
        printf("5:- Exit:\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the size of the array:\n");
            scanf("%d", &n);
            printf("Enter the elements of the array:\n");
            for (int i = 0; i < n; ++i)
            {
                scanf("%d", &arr[i]);
            }
            break;
        case 2:
            for (int i = 0; i < n; ++i)
            {
                printf("element %d: %d\n", i + 1, arr[i]);
            }
            break;
        case 3:
            printf("Enter the position to insert element:\n");
            scanf("%d", &pos);
            printf("Enter the value to insert:\n");
            scanf("%d", &val);
            if (pos == 0)
            {
                for (j = n - 1; j > pos - 1; j--)
                {
                    arr[j + 1] = arr[j];
                }
                arr[j + 1] = val;
                n++;
                break;
            }
            if (pos == n + 1)
            {
                arr[n] = val;
                n++;
                break;
            }
            for (j = n - 1; j >= pos - 1; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = val;
            n++;
            break;
        case 4:
            printf("Enter the position to delete:\n");
            scanf("%d", &p);
            if (p == n)
            {
                n--;
                break;
            }
            for (j = p - 1; j < n - 1; ++j)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        case 5:
            exit(0);
        }
    }
    return 0;
}
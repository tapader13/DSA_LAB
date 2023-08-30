#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%c", 64 + i);
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", i % 2);
    //     }
    //     printf("\n");
    // }

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }
    // for (int i = n - 1; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

    // for (int i = n; i >= 0; i--)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }
    // 1
    // 22
    // 333
    // 22
    // 1
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 1; j <= n - i; j++)
    //      {
    //          printf(" ");
    //      }
    //      for (int j = 1; j <= i; j++)
    //      {
    //          printf("%d", i);
    //      }
    //      printf("\n");
    //  }
    //  for (int i = n - 1; i >= 0; i--)
    //  {
    //      for (int j = 1; j <= n - i; j++)
    //      {
    //          printf(" ");
    //      }
    //      for (int j = 1; j <= i; j++)
    //      {
    //          printf("%d", i);
    //      }
    //      printf("\n");
    //  }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // 1
    // 123
    // 12345
    // 1234567
    // 123456789
    // 1234567
    // 12345
    // 123
    // 1
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
    // for (int i = n - 1; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
    //****************
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {

    //         if (i == 1 || i == n || j == 1 || j == n)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }

    //     printf("\n");
    // }
    // 4 *********
    //     for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {

    //         if (i == n || j == 1 || j == i)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }

    //     printf("\n");
    // }
    // *********
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {

    //         if (j + i == 1 + n || j == i)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }

    //     printf("\n");
    // }
    // 1 121 12321
    //  for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     for (int j = i - 1; j >= 1; j--)
    //     {
    //         printf("%d", j);
    //     }

    //     printf("\n");
    // }
    // 1
    // 121
    // 12321
    // 121
    // 1

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     for (int j = i - 1; j >= 1; j--)
    //     {
    //         printf("%d", j);
    //     }

    //     printf("\n");
    // }
    // for (int i = n - 1; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     for (int j = i - 1; j >= 1; j--)
    //     {
    //         printf("%d", j);
    //     }

    //     printf("\n");
    // }
}
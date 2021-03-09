#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include "complex.h"

int main()
{

    char s[100];

    scanf("%s", s);

    long long int n;

    scanf("%lld", &n);

    if (strcmp(s, "ADD") == 0 || strcmp(s, "MOD") == 0 || strcmp(s, "SUBT") == 0 || strcmp(s, "DOT") == 0)
    {

        n_complex a, b;

        long long int i, j;

        if (strcmp(s, "MOD") == 0)
        {
            for (i = 0; i < n; i++)
            {
                scanf("%lld", &a.dim[i]);
            }

            double Mod;

            Mod = mod(a, n);

            printf("%.2lf\n", Mod);
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                scanf("%lld", &a.dim[i]);
            }

            for (i = 0; i < n; i++)
            {
                scanf("%lld", &b.dim[i]);
            }

            if (strcmp(s, "ADD") == 0)
            {
                n_complex sum;

                sum = add(a, b, n);

                for (i = 0; i < n; i++)
                {

                    printf("%lld ", sum.dim[i]);
                }
                printf("\n");
            }

            else if (strcmp(s, "SUBT") == 0)
            {

                n_complex Diff;

                Diff = subt(a, b, n);

                for (i = 0; i < n; i++)
                {

                    printf("%lld ", Diff.dim[i]);
                }
                printf("\n");
            }

            else if (strcmp(s, "DOT") == 0)
            {

                n_complex Dot;

                Dot = dot(a, b, n);

                for (i = 0; i < n; i++)
                {

                    printf("%lld ", Dot.dim[i]);
                }
                printf("\n");
            }
        }
    }
    else
    {

        printf("Invalid Input.\n");
        return 0;
    }
}
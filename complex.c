#include <math.h>
#include <stdio.h>

#include "complex.h"
n_complex add(n_complex a, n_complex b, long long int n)
{

    n_complex comp;

    long long int i;

    for (i = 0; i < n; i++)
    {
        comp.dim[i] = a.dim[i] + b.dim[i]; //Addition of each term in n-dimensions
    }
    return comp;
}
n_complex subt(n_complex a, n_complex b, long long int n)
{

    n_complex comp;

    long long int i;

    for (i = 0; i < n; i++)
    {
        comp.dim[i] = a.dim[i] - b.dim[i]; // Subtraction of each term in n-dimensions.
     
    }

    return comp;
}

n_complex dot(n_complex a, n_complex b, long long int n)
{

    n_complex comp;

    long long int i;

    for (i = 0; i < n; i++)
    {
        comp.dim[i] = a.dim[i] * b.dim[i]; // Dot product Occurs only same dimensional vector;
        
    }
    
    return comp;
}

double mod(n_complex a, long long int n)
{

    n_complex comp;

    long long int i;

    double mod_2 = 0, mod;
    for (i = 0; i < n; i++)
    {
        mod_2 += pow(a.dim[i], 2);
    }

    mod = sqrt(mod_2);

   return mod;
}

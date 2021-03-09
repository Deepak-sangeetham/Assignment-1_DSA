// N -DIMENSIONAL COMPLEX NUMBER ADT

#ifndef _NDIMENSIONAL
#define _NDIMENSIONAL

typedef struct complex_n n_complex;

struct complex_n{

    long long int dim[100000];// Array for storing N numbers
};

double mod(n_complex, long long int );

n_complex add(n_complex,n_complex,long long int);
n_complex subt(n_complex,n_complex,long long int);
n_complex dot(n_complex,n_complex,long long int);

//n_complex get_complex(long long int,long long int,long long int);


#endif
#include <stdio.h>
#include <math.h>
#include "myfunc.h"

int solutiontwo(double a, double b, double c, double *x1, double *x2);
int solutionone(double a, double b, double *x1);
int solutionline(double b, double c, double *x1);


int solution(double a, double b, double c, double *x1, double *x2){
    double d;
    if ((a == 0.0) && (b == 0.0)) return -1;
    if (a != 0.0)
    {
	d = b * b - 4 * a * c;
    if (d > 0.0) {solutiontwo(a, b, d, &*x1, &*x2); return 2;}
    else {
        if (d == 0.0) {solutionone(a,b,&*x1); return 1;}
                else return -1;
    }
    }
    else return solutionline(b, c, &*x1);
    }



int solutiontwo(double a, double b, double d, double *x1, double *x2)
{
    *x1 = (-b + sqrt(d))/(2*a);
    *x2 = (-b - sqrt(d))/(2*a);
    return 2;
}


int solutionone(double a, double b, double *x1)
{
    *x1 = (-b)/(2*a);
    return 1;
}

int solutionline(double b, double c, double *x1)
{
    *x1 = (-c) / b;
    return 1;
}

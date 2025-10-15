#ifndef MYLIB_H
#define MYLIB_H
#include <cmath>

#ifdef EXTERNC
extern "C" {
#endif

double findPi(long nthrows);
double magnitude(double re, double im);
int mandel_test(double c_re, double c_im, int NTRIALS);
void mandel(double *img, double re1, double re2, double im1, double im2,
            int nr, int ni, int NTRIALS=255);

#ifdef EXTERNC
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
double HSVolume(int d, long long N, double r, unsigned long long seed);
#ifdef __cplusplus
}
#endif

#endif // block to ensure header is only compiled once

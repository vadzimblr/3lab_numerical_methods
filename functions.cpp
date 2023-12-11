//
// Created by vadim on 19.11.2023.
//

#include "functions.h"
const double alfa1 = 1.;
const double alfa2 = 2./3;
const double alfa3 = 1./3;
void calculateFVector(vector<double>& F,const vector<double>& yk,const double& a, const double &k ){
    F[0] = ((k-a) / a) * yk[1]*yk[2];
    F[1] = ((a+k) / k) * yk[0]*yk[2];
    F[2] = ((a-k) / a) * yk[0]*yk[1];
}


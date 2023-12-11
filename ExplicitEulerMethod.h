//
// Created by vadim on 19.11.2023.
//

#ifndef NUMERICAL_METHODS_EXPLICITEULERMETHOD_H
#define NUMERICAL_METHODS_EXPLICITEULERMETHOD_H
#include <iostream>
#include <vector>
#include <cmath>
#include "functions.h"
using namespace std;

double calculateTauK(const vector<double>& F, const double& eps, const double& tauMax);
void ExplicitEulerMethod(const vector<double>& U0, const double& eps, const double& T, const double& tauMax);
void printInfo(const int& ykSize, const vector<double>& yk, const double& tk);
#endif //NUMERICAL_METHODS_EXPLICITEULERMETHOD_H

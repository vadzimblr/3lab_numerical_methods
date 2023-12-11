//
// Created by vadim on 19.11.2023.
//

#include <iostream>
#include <vector>
#include "ExplicitEulerMethod.h"
//#include "ImplicitEulerMethod.h"
using namespace std;
int main() {
    bool flag = true;
    while (flag){
        cout << "1 - Explicit Euler Method" << endl << "2 - Implict Euler Method" << endl;
        int ch = 0;
        cin>>ch;
        switch (ch) {
            case(1):{
                flag = false;
                const double eps1 = 1e-3;
                const double eps2 = 1e-5;
                const double tauMax = 1.0;
                vector<double> U0 = {1,1,1};
                double T = 1;

                ExplicitEulerMethod(U0,eps1,T,tauMax);
                break;
            }
            case(2):{
                flag = false;
                const vector<double> U0 = {10,22,9};
                const double eps1 = 1e-3;
                const double eps2 = 1e-5;
                const double T = 1;
                const double tauMax =T;
                const double tauMin =0;
                vector<double> yk = U0;
                vector<double> ykMinus1 = U0;
                vector<double> ykPlus1 = U0;
                double tauKMinus1 = tauMin;
                double tauK = tauMin;
                double tk = tauMin;
                //ImplicitEulerMethod(U0,eps1,T);
                break;
            }
            default:
                break;
        }
    }



    return 0;
}





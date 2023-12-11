//
// Created by vadim on 19.11.2023.
//

#include "ExplicitEulerMethod.h"
void ExplicitEulerMethod(const vector<double>& U0, const double& eps, const double& T, const double& tauMax){
    double tk = 0;
    vector<double> yk = U0;
    vector<double> F(3,0);
    int ykSize = yk.size();
    double a = 1;
    double k = 2;
    do{
        calculateFVector(F,yk,a,k);
        double tauK = calculateTauK(F,eps,tauMax);
        for(int i = 0;i<ykSize;i++){
            yk[i] = yk[i]+tauK*F[i];
        }
        tk+=tauK;
        printInfo(ykSize,yk,tk);
    }
    while(tk<T);
}
double calculateTauK(const vector<double>& F, const double& eps, const double& tauMax){
    double tauMin = (eps/ fabs( fabs(F[0]) + (eps/tauMax) ) );
    int fSize = F.size();
    for(int i = 1; i<fSize; i++){
        double tmpMin = (eps/ fabs( fabs(F[i]) + (eps/tauMax) ) );
        if(tmpMin<tauMin)
            tauMin = tmpMin;
    }
    return tauMin;
}
void printInfo(const int& ykSize, const vector<double>& yk, const double& tk){
    cout << "tk: " << tk << " ";
    for(int i =0; i<ykSize;i++){
        cout <<"yk[" << i << "] "<< yk[i] << " ";
    }
    cout << endl;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  Newton-Raphson法
  正数Nの平方根(N^(1/2))の近似値を求めるため、
  F(X)=X^2-NとしてF(X)=0を満足するXをNewton-Raphson法で求める。
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <cmath>
using namespace std;

int main(int argc,char *argv[]) {
	
	double X0,X1;
	double N;

	if(argc < 2){
		cout<<"使用方法:"<<argv[0]<<" <数値>"<<endl;
		exit(0);
	}else{
		N = atoi(argv[1]);
	}
	
	X1 = N;
	
	do{
		X0 = X1;
		X1 = (X0 / 2) + (N / (2 * X0));
	}while(abs(X0-X1) >= numeric_limits<double>::epsilon());
	
	cout << "ルート" << N << " : " << fixed << setprecision(55) << X1 << endl;
	
	return 0;
}

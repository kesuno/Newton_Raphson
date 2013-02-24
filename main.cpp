/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  Newton-Raphson�@
  ����N�̕�����(N^(1/2))�̋ߎ��l�����߂邽�߁A
  F(X)=X^2-N�Ƃ���F(X)=0�𖞑�����X��Newton-Raphson�@�ŋ��߂�B
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
		cout<<"�g�p���@:"<<argv[0]<<" <���l>"<<endl;
		exit(0);
	}else{
		N = atoi(argv[1]);
	}
	
	X1 = N;
	
	do{
		X0 = X1;
		X1 = (X0 / 2) + (N / (2 * X0));
	}while(abs(X0-X1) >= numeric_limits<double>::epsilon());
	
	cout << "���[�g" << N << " : " << fixed << setprecision(55) << X1 << endl;
	
	return 0;
}

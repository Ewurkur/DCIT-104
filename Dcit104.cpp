#include <iostream>
using namespace std;

bool PrimeCheck(int num){
	for (int i=2;i<num;i++){
		if(num % i==0){
			return false;
		}
	}
	return true;
}

bool PrimeNum=false;

int main(){
	int sum=2;
	int avg = 2;
	for (int k =3;k<15;k++){
		PrimeNum= PrimeCheck(num:k);
		if (PrimeNum){
			sum=sum+k;
			avg=sum/15;
		}
	}
	cout << The sum of prime numbers between 1 to 15 is:<<sum<<"\n";
	cout <<"The average of the sum is: "<<avg <<"\n";
	
};

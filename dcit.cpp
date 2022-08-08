#include <iostream>
using namespace std;
int main(){
	int num,i,j,sum=0;
    cout<<"enter a number"<<endl;
    cin>>num;
    cout<<"Enter the sum of the prime numbers"<<endl;
    cin>>num;
    for(i=1;i<=num;i++){
    	for(j=2;j<=i;j++){
    		if(i%j==0){
    			break;
			}
    		
		}
		if(j==i){
			sum=sum+i;
			cout<<i<<",";
		}
	}cout<<""<<endl;
	cout<<"sum of all prime numbers between 1 to"<<num<<"="<<sum;
}



	

	

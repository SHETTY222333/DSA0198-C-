#include<iostream>
using namespace std;
int main(){
	int temp,num,sum=0;
	cout<<"enter the number: ";
	cin>>num;
	int digit=num;
	while(num>0){ 
		temp=num%10;
		sum=sum+temp;
		num/=10;
		
	}
	if(digit%sum==0){
		cout<<"harshad number"<<endl;
	}else{
		cout<<"not a harshad number"<<endl;
	}
	return 0;
	
}

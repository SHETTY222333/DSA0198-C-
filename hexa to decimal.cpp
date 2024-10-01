#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
	string hexanum;
	cout<<"enter the hexa-decimal number:";
	cin>>hexanum;
	int base=1,decimal=0,length=hexanum.size();
	for(int i=length-1;i>=0;i--){
		if(hexanum[i]>='0' && hexanum[i]<='9'){
			decimal+=(hexanum[i]-'0')*base;
		}else if(hexanum[i]>='A' && hexanum[i]<='F'){
				decimal+=(hexanum[i]-'A'+10)*base;
			}else if(hexanum[i]>='a'&& hexanum[i] <='f'){
				decimal+=(hexanum[i]-'a'+10)*base;
			}
			base*=16;
				
			}
			cout<<"decimal equivalent:"<<decimal<<endl;
			return 0;
		}
	
	

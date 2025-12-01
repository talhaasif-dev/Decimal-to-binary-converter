#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(){
	while(1){
	
	cout<<"ENTER A DECIMAL NUMBER (LESS THAN 500) :"<<endl;
	int num1, num2, num3, num4;
	int n,j,k,z;
	int input;
	cin >> input;
	if(input<500){
	int i = 0;
	if(input >= 0){
	while(1){
		int a = pow(2, i);
		i++;
		if(a>input){
			break;
		}
		
		num1 = a;
	}
	n = input - num1;
}
else{
	n = 0;
}

if(n >= 0){
	i = 0;
	while(1){
		int a = pow(2, i);
		i++;
		if(a>n){
			break;
		}
		
		num2 = a;
	}
	j = n - num2;
}
else{
	j = 0;
}
if(j >= 0){

	i = 0;
	while(1){
		int a = pow(2, i);
		i++;
		if(a>j){
			break;
		}
		
		num3 = a;
	}
	k = j - num3;
}
else{
	k = 0;
}
if(k >= 0){

	i = 0;
	while(1){
		int a = pow(2, i);
		i++;
		if(a>k){
			break;
		}
		
		num4 = a;
	}
	z = k - num4;
}
else{
	z = 0;
}
i = 0;
char c;
char binary[10];
	if(input >= 0){
	while(1){
		int a = pow(2, i);
		i++;
		if(a>input){
			break;
		}
		
		if(a==num4 || a==num3 || a==num2 || a==num1){
			c = '1';
		}
		else{
			c = '0';
		}
		binary[i] = c;
	}
	strrev(binary);
	cout<<binary<<endl;
	
}
}
else{
	cout<<"INPUT NUMBET IS TOO BIG, THIS PROGRAM USE TRADITIONAL SQUARING MATHMATIC TECHNIQUE TO CONVERT DECIMAL INTO BINARY"<<endl;
}
}
}

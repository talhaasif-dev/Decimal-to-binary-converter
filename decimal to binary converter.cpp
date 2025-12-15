#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(){
	
	cout<<"ENTER A DECIMAL NUMBER (LESS THAN 500) :"<<endl;
	int num1, num2, num3, num4, num5, num6, num7, num8, num9;
	int n,j,k,z,f,g,h,o,q;
	int input;
	cin >> input;
	if(input<512){
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

if(n > 0){
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
if(j > 0){

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
if(k > 0){

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
if(z > 0){

	i = 0;
	while(1){
		int a = pow(2, i);
		i++;
		if(a>z){
			break;
		}
		
		num5 = a;
	}
	f = z - num5;
}
else{
	f = 0;
}
if(f > 0){

	i = 0;
	while(1){
		int a = pow(2, i);
		i++;
		if(a>f){
			break;
		}
		
		num6 = a;
	}
	g = f - num6;
}
else{
	g = 0;
}
if(g > 0){

	i = 0;
	while(1){
		int a = pow(2, i);
		i++;
		if(a>g){
			break;
		}
		
		num7 = a;
	}
	h = g - num7;
}
else{
	h = 0;
}
if(h > 0){

	i = 0;
	while(1){
		int a = pow(2, i);
		i++;
		if(a>h){
			break;
		}
		
		num8 = a;
	}
	o = h - num8;
}
else{
	o = 0;
}
if(o > 0){

	i = 0;
	while(1){
		int a = pow(2, i);
		i++;
		if(a>o){
			break;
		}
		
		num9 = a;
	}
	q = o - num9;
}
else{
	q = 0;
}
i = 0;
char c;
char binary[9];
	if(input > 0){
	while(1){
		int a = pow(2, i);
		i++;
		if(a>input){
			break;
		}
		
		if(a==num9 || a==num8 || a==num7 || a==num6 || a==num5 || a==num4 || a==num3 || a==num2 || a==num1){
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


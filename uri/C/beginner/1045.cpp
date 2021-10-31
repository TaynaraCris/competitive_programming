#include <bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{

	double A, B, C, x, y, z, arr[3];

	scanf("%lf %lf %lf", &x, &y, &z);

	arr[0] = x;
	arr[1] = y;
	arr[2] = z;

	sort(arr, arr+3);


	A = arr[2];
	B = arr[1];
	C = arr[0];


	if(A >= (B + C)){
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}

	if(pow(A, 2) > (pow(B, 2) + pow(C, 2))){
		printf("TRIANGULO OBTUSANGULO\n");
	} 
	if(pow(A, 2) < (pow(B, 2) + pow(C, 2))){
		printf("TRIANGULO ACUTANGULO\n");
	} 
	if(pow(A, 2) == (pow(B, 2) + pow(C, 2))){
		printf("TRIANGULO RETANGULO\n");
	} 
	if(A == B && B == C && A == C){
		printf("TRIANGULO EQUILATERO\n");
	} 
	if( (A == B && B!=C) || (A == C && B!=A) || (B == C && B!=A)){
		printf("TRIANGULO ISOSCELES\n");
	}

	return 0;
}

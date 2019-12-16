// Recursive C program to compute modular power 
#include <stdio.h> 
#include<bits/stdc++.h>

using namespace std;
int exponentMod(int A, int B, int C) 
{ 
	// Base cases 
	if (A == 0) 
		return 0; 
	if (B == 0) 
		return 1; 

	// If B is even 
	long y; 
	if (B % 2 == 0) { 
		y = exponentMod(A, B / 2, C); 
		y = (y * y) % C; 
	} 

	// If B is odd 
	else { 
		y = A % C; 
		y = (y * exponentMod(A, B - 1, C) % C) % C; 
	} 

	return (int)((y + C) % C); 
} 

// Driver program to test above functions 
int main() 
{ 
int A = 5 , B = 26 , C = 96; 
cout<<__gcd(A,C)<<endl;
printf("Power is %d\n", exponentMod(A, B, C)); 
set<int> s;
int x=A;
while(s.find(x)==s.end())
{
	s.insert(x);
	x=(x*A)%C;
}
cout<<s.size()<<" "<<C-1<<"\n";
return 0; 
} 

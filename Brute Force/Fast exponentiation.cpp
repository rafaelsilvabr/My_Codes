#include <iostream>
#include <vector>
using namespace std;
 
void FastExponentiation(int number, int power, int mod);
vector<int> FindBinary(int power);

int main(int argc, char *argv[]) {
	int number = atoi(argv[1]);
	int power = atoi(argv[2]);
	int mod = atoi(argv[3]);
	
	cout << number << " " << power << " " << mod << endl;
	
	FastExponentiation(number, power, mod);
	return 0;
}

void FastExponentiation(int number, int power, int mod){
    vector<int> binary = FindBinary(power);
    long long temp = number;

    for(unsigned int i=0;i<binary.size();i++){
        if(binary[i] == 0){ //s
        	cout << "0:" << temp << "*" << temp << " mod " << mod << " = " ;
            temp = ((temp * temp)% mod);
            cout << temp << endl;
        }else if(binary[i] == 1){ //sx
        	cout << "1:(" << temp << "*" << temp << ")*" << number <<") mod " << mod << " = " ;
            temp = ((temp * temp) * number) % mod;
            cout << temp << endl;
            
        }
    }

    cout << "Answer: " << temp % mod;
}

vector<int> FindBinary(int power){
	int remainder;
	vector<int> binary;

	while(power > 1){
		remainder = power % 2;
        binary.push_back(remainder);
		power = power / 2;
	}

	//binary.push_back(1);

	vector<int> output;

	for(int i=binary.size()-1; i > -1;i--){
        output.push_back(binary[i]);
	}

	return output;
}
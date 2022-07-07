#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main(){
    std::string user_input;

    std::cout << "Please enter a binary number\n" << ".... \n" << "Binary: ";
    std::cin >> user_input;
    bool valid_binary;

    for(int i = 0; i < user_input.length(); i++){
        if(user_input[i] == '1' || user_input[i] == '0'){
            valid_binary = true;
        }
        else{
            std::cout << "Binary only uses ones and zeroes, you used a " << user_input[i] << " in position " << i;
            valid_binary = false;
            break;
        }
    }

    if(valid_binary == 1){
        int j = 0;
        std::string reversed;
        for(int i = user_input.length() - 1; i >= 0; i--){
            reversed.push_back(user_input[i]);
            j++;
        }
        int result {0};
        for(int i = 0; i < reversed.length(); i++){
            result += (reversed[i] -48) * pow(2, i);
            int x = reversed[i] * pow(2, i);
            std::cout << reversed[i] - 48 << " * " << pow(2, i) << " = " << (reversed[i] - 48) * pow(2, i)<< std::endl;
        }
        std::cout << "The binary: 0b" << user_input << " in decimal form is: " << result;
    }
}
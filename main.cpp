#include <iostream>

//standard library needed for string type data
#include <string>

//standard library used for the pow Function
#include <math.h>

using namespace std;
int main(){
    std::string user_input;

    std::cout << "Please enter a binary number\n" << ".... \n" << "Binary: ";
    std::cin >> user_input;
    bool valid_binary;

//Validating that user input is binary by confirming it onlly contains zeroes and ones
    for(int i = 0; i < user_input.length(); i++){
        if(user_input[i] == '1' || user_input[i] == '0'){
            //setting bool valid_binary to true to be checked on in line 30
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
        //reversing the user input to be able to do the math for it easily
        for(int i = user_input.length() - 1; i >= 0; i--){
            reversed.push_back(user_input[i]);
            j++;
        }
        int result {0};
        //looping the reversed user input to add the value to result variable
        for(int i = 0; i < reversed.length(); i++){
            result += (reversed[i] -48) * pow(2, i);
        }
        std::cout << "The binary: 0b" << user_input << " in decimal form is: " << result;
    }

    return 0;
}
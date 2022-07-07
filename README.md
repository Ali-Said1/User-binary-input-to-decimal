# User-binary-input-to-decimal
c++ project to get user input in binary and change it to a decimal number.

## simple project to recieve binary input from user and convert it into a decimal number

1. the user input is requested as a string.
2. the user input is then checked to ba a valid binary consisting only of zeroes and ones.
3. the user input is reversed to use the indecies in their order (i.e. the binary is written as 100, but interpreted to decimal form as (0 * 2 ^ 0) + (0 * 2 ^ 1) + (1 * 2 ^ 2) by reversing the index will be the same as the power of 2).
4. the *reversed* user input is then looped to add the value of the binary to a variable **result**, which will be printed to the user.

## How to use?

1. Open your terminal on **windows** os.
2. Copy the executable file path: 
![Get File Path](/images/explanatoryImage1.png)
3. in the terminal type in the partition where the executable file exists, in my case **F:**.
4. Then type cd \<path of the executable in that partition\>, in my case `cd projectFolder`.
5. Finally run the program by typing **binary-decimal.exe**.

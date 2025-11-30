# Decimal-to-binary-converter
A simple decimal to binary converter made with C++
![banner image](https://i.ibb.co/Rk6Xdb1n/git-img.png)

---

## How it works
First it ask user to enter a number (decimal input), then it uses a infine while loop to increment value of a variable i by 1 in every cycle,
I used `pow();` of math.h library to get powers of 2 `pow(2,i);`, the loop will run until it gets a value greater than the input nummber. The loop stops immediately and pass the value to another variable
before every loop there is a if statement that checks that the incoming value should be greater than zero. 
the nearest power of 2 that we got from the first loop is passed to a new variable and another variable subtract that value from user input value, then the same process as above repeats for the new value 
this process will repeat again and again until the value bacome zero after subraction.
now once again we use a  loop to print all powers of 2 until it reaches nearest value to to user input. for every value a condition will check it that if the incoming value exist in above variables in which we have passed the values in the first place it will return a character 1 otherwise it's 0.
But here is a catch, the decimal output we are getting is reveresed so I used `strrev()` function from string.h library to reverse the output and get the correct binary result.

![](https://i.ibb.co/rRGfbV6T/Untitled.png)

this is how the last loop works to print the result out!
you can also reverse the process to convert binary to decimal


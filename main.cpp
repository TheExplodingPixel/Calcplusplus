//Calc++, Version 1.0 by Barry Kane.
#include <iostream>
#include "operations.h"

/*Calc++ is a very simple program that asks for an operation, and two numbers.
It then applies that operation to the two numbers and prints the result.*/
int main ()
{
  //Create a variable to store user input.
  char selection;
  //Ask for the user's desired operation, and store it in the variable "selection".
  do
    {
      std::cout << "Please choose an operation!" << std::endl;
      std::cout << "A) Addition" << std::endl;
      std::cout << "S) Subtraction" << std::endl;
      std::cout << "M) Multiplication" << std::endl;
      std::cout << "D) Division" << std::endl;
      std::cin >> selection;
    }
  //Repeat the question until a vaild selection is made.
  while (selection != 'A' && selection != 'S' && selection != 'M' && selection != 'D' &&
	 selection != 'a' && selection != 's' && selection != 'm' && selection != 'd'); 
  //Create variables to store the two requested numbers, and the output.
  int num1;
  int num2;
  int answer;
  //Request two numbers and perform the requested operation.
  switch (selection)
    {
    case 'A':
      std::cout << "Addition!" << std::endl;
      std::cout << "Enter a number! :";
      std::cin >> num1;
      std::cout << "Enter a second number! :";
      std::cin >> num2;
      answer = add(num1, num2);
      std::cout << answer << std::endl;
      break;
    case 'a':
      std::cout << "Addition!" << std::endl;
      std::cout << "Enter a number! :";
      std::cin >> num1;
      std::cout << "Enter a second number! :";
      std::cin >> num2;
      answer = add(num1, num2);
      std::cout << answer << std::endl;
      break;
    case 'S':
      std::cout << "Subtraction!" << std::endl;
      std::cout << "Enter a number! :";
      std::cin >> num1;
      std::cout << "Enter a second number! :";
      std::cin >> num2;
      answer = subtract(num1, num2);
      std::cout << answer << std::endl;
      break;
    case 's':
      std::cout << "Subtraction!" << std::endl;
      std::cout << "Enter a number! :";
      std::cin >> num1;
      std::cout << "Enter a second number! :";
      std::cin >> num2;
      answer = subtract(num1, num2);
      std::cout << answer << std::endl;
      break;
    case 'M':
      std::cout << "Multiplication!" << std::endl;
      std::cout << "Enter a number! :";
      std::cin >> num1;
      std::cout << "Enter a second number! :";
      std::cin >> num2;
      answer = multiply(num1, num2);
      std::cout << answer << std::endl;
      break;
    case 'm':
      std::cout << "Multiplication!" << std::endl;
      std::cout << "Enter a number! :";
      std::cin >> num1;
      std::cout << "Enter a second number! :";
      std::cin >> num2;
      answer = multiply(num1, num2);
      std::cout << answer << std::endl;
      break;
    case 'D':
      std::cout << "Division!" << std::endl;
      std::cout << "Enter a number! :";
      std::cin >> num1;
      std::cout << "Enter a second number! :";
      std::cin >> num2;
      answer = divide(num1, num2);
      std::cout << answer << std::endl;
      break;
    case 'd':
      std::cout << "Division!" << std::endl;
      std::cout << "Enter a number! :";
      std::cin >> num1;
      std::cout << "Enter a second number! :";
      std::cin >> num2;
      answer = divide(num1, num2);
      std::cout << answer << std::endl;
      break;
    }
  return 0;
}
  

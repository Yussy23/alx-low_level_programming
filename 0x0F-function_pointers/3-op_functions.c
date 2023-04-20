#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This function adds two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This function sub two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: Return the result of the sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This function multiply two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: Return the result of the multiply
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - This function divide two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: Return the result of the divide
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - This function calcualte the module
 * @a: The first number
 * @b: The second number
 *
 * Return: Return the result of the module
 */
int op_mod(int a, int b)
{
	return (a % b);
}

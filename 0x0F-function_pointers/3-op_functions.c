#include "3-calc.h"

/**
 * op_add - calculates sum of two integer operands
 * @a: first integer operand
 * @b: second integer operand
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);

}
/**
 * op_sub - subtracts second operand from the first
 * @a: first integer operand
 * @b: second integer operand
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer operand
 * @b: second integer operand
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: first integer operand
 * @b: second integer operand
 * Return: result of division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculates the remainder of division between two integers
 * @a: first integer operand
 * @b: second integer operand
 * Return: reamainder of divion between a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

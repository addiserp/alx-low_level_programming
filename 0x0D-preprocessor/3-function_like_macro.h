#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 *ABS - absolut value of given no
 *@x: parameter 1.
 *Description - ABS: is macro token.
 *Return: Always value.
 */

#define ABS(x) ((x) < (0) ? ((x) * (-1)) : (x))
#endif

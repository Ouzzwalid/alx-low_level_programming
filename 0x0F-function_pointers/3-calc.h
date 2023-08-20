#ifndef CALC_H
#define CALC_H
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 *struct op - struct operator
 *
 *@p: pointer to operator
 *@f: pointer to the associated function
 *
 */
typedef struct op
{
	char *p;
	int (*f)(int, int);
} op_t;
int (*get_op_func(char *s))(int, int);
#endif

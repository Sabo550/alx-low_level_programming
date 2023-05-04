#ifndef __MAIN_H__
#define __MAIN_H__

unsigned int binary_to_uint(const char *b);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
void print_binary(unsigned long int n);
int _atoi(const char *s);
int _putchar(char c);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
int get_endianness(void);

#endif

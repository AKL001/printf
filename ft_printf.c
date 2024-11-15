#include "ft_printf.h"

int print_format(char c, va_list ap)
{
  int count;

  count = 0;
  if (c == 'c')
    count += ft_printc(va_arg(ap, int));
  else if (c == 's')
    count += ft_prints(va_arg(ap, char *));
  else if (c == 'd' || c  == 'i')
    count += ft_printd(va_arg(ap, int));
  else if (c == 'u')
    count += ft_printu(va_arg(ap, unsigned int));
  else if (c == 'p')
    count += ft_printp(va_arg(ap, unsigned int));
  else if (c == 'x' || c == 'X')
    count += ft_printx(va_arg(ap, unsigned int) , c);
  else
    count += write(1 , &c , 1);
  return count;
}


int ft_printf(const char *format, ...)
{
  
  va_list ap;
  int     count;

  va_start(ap, format);
  count = 0;

  if (!format)
    return (-1);
  while(*format)
  {
    if (*format == '%' && *(++format))
      count += print_format(*(format), ap);
    else
      count += write(1, format, 1);
    format++;
  }
  va_end(ap);
  return (count);
}

// void test_printf(char *format, ...) {
//     va_list ap;
//     va_start(ap, format);

//     // Compare printf and ft_printf outputs
//     printf("Standard printf:\n");
//     vprintf(format, ap);

//     printf("\nft_printf:\n");
//     va_end(ap); // Reset va_list
//     va_start(ap, format); // Restart va_list for ft_printf
//     ft_printf(format, ap); // Call ft_printf

//     va_end(ap); // End the va_list
//     printf("\n------------------------------------\n");
// }

// int main() {
//     // Test case 1: Simple character
//     test_printf("%c", 'A');

//     // Test case 2: String with normal characters
//     test_printf("%s", "Hello, world!");

//     // Test case 3: Integer (positive)
//     test_printf("%d", 123);

//     // Test case 4: Integer (negative)
//     test_printf("%d", -123);

//     // Test case 5: Integer (zero)
//     test_printf("%d", 0);

//     // Test case 6: Unsigned integer
//     test_printf("%u", 12345);

//     // Test case 7: Hexadecimal (lowercase)
//     test_printf("%x", 255);

//     // Test case 8: Hexadecimal (uppercase)
//     test_printf("%X", 255);

//     // Test case 9: Pointer (null)
//     test_printf("%p", NULL);

//     // Test case 10: String with special characters
//     test_printf("%s", "Special characters: \t\n\r");

//     // Test case 11: Multiple format specifiers
//     test_printf("Char: %c, String: %s, Integer: %d, Unsigned: %u, Hex: %x\n", 'Z', "Test", -42, 42, 255);

//     // Test case 12: Test with wide numbers
//     test_printf("%d", 2147483647);   // Max int
//     test_printf("%u", 4294967295);   // Max unsigned int
//     test_printf("%x", 0xABCDEF);     // Hexadecimal large number

//     // Test case 13: Very large integer (unsigned)
//     test_printf("%u", 1234567890);

//     // Test case 14: Very small integer (negative)
//     test_printf("%d", -2147483648);  // Min int

//     return 0;
// }
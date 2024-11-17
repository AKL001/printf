# 🎉 `ft_printf` - A Custom `printf` Implementation 🎉  

Welcome to **`ft_printf`**, a meticulously crafted implementation of the famous C standard library function, `printf`. Built as part of the 42 Network curriculum! 🌟  

## 📜 About  

The **`ft_printf`** project is part of the 42 Network curriculum. The goal? To implement a versatile and efficient alternative to the original `printf` function, while gaining a deeper understanding of variadic functions, memory handling, and string formatting.  

With **`ft_printf`**, you can format and display:  
- Characters (`%c`)  
- Strings (`%s`)  
- Pointers (`%p`)  
- Integers (`%d`, `%i`)  
- Unsigned integers (`%u`)  
- Hexadecimal numbers (lowercase: `%x`, uppercase: `%X`)  
- And, of course, the literal `%` symbol itself (`%%`)  

## 🚀 Features  

✅ Handles variadic arguments with `va_list`  
✅ Accurate formatting for all required specifiers  
✅ Robust error handling and memory management  
✅ Adheres to the 42 Norm 🛠️  

## 🛠️ Installation  

1. Clone the repository to your local machine:  
```bash  
git clone https://github.com/AKL001/printf.git
cd ft_printf
```
2. Compile the library:  
   `make`

   For cleaning up use:  
   `make clean`

   Or for a complete clean:
   `make fclean`
   
## 📚 Usage  

To use `ft_printf` in your projects, include the header file and link the library. 
### Example:  
Create a file named `main.c`:  
```c  
#include "ft_printf.h"  

int main(void) {  
    ft_printf("Hello, %s! You are number %d.\n", "42 Cadet", 1);  
    return 0;  
}
```
## 🏆 Goals Achieved  

- Gained proficiency in handling variadic arguments (`va_list`).  
- Learned advanced memory management and formatting techniques.  
- Developed a deeper appreciation for the complexities of standard library functions.  

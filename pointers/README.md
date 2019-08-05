# Pointers
## Pointer Variables
**Key Terms**
- `*` is known as the dereference operator. Also known as the "Value at Address" operator because when used, it returns the value at the assigned address.
	- Coincidentaly used to declare a pointer but doesn't act as a dereference operator.
- `&` is known as the reference operators. Also known as the "Address of" operator because when used, it returns the address of the variable. 
**Notables**
```
int a = 10;
int b = 5;
int *p;
p = &a;	//p is assigned the address of a
*p = b;	//*p is assigned the value of b which makes 'a' also equal to b
```
- After declaring the pointer, you can use the variable for the address `p` without the `*`. Example: `p = &a'
- You can only assign an address to a pointer. Thats why `&` is used with `int a`
- You can assign the variable directly to the pointer when using the dereferenc operator. Example: `*p = b`



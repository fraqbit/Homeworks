#include <stdio.h>
#include <locale.h>
#include <cstdlib>

int main() {
	char value; 
	int bitNumber; 
	int bitValue; 
	L = (value >> bitNumber) << (bitNumber + 1);
	R = (value << (8 - bitNumber)) >> (8 - bitNumber);
	value = L | R | (bitValue << bitNumber);
	_asm {
		mov     al, [value]
		mov     cx, [bitNumber]
		mov     bx, [bitValue]

		and bx, 1; 
		and cx, 7h; 

		shl     bx, cl;

		mov     ah, al; 
		shr     ah, cl
		shl     ah, cl
		shl     ah, 1

		sub     cl, 8;
		neg     cl
		shl     al, cl
		shr     al, cl

		or al, ah; 
		or al, bl;

		mov[value], al
	}
}
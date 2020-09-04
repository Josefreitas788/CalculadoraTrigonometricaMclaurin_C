all: CalculadoraTrigonometrica.c

CalculadoraTrigonometrica.c: CalculadoraTrigonometrica.o
	gcc CalculadoraTrigonometrica.o cos.h sen.h -o CalculadoraTrigonometrica
CalculadoraTrigonometrica.o:
	gcc -c CalculadoraTrigonometrica.c
rm:
	rm *.o
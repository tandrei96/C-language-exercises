#include <stdio.h>
#include "func1.h"
#include "func2.h"
////////////////////////*  functia main poate fi apelata in terminal cu comanda ./tema   *//////////////////////
int main (){
	functie(); 
	functie_2();//functia 1 si functia 2 fac exact acelasi lucru, doar ca una foloseste 1 printf, si cea de-a doua foloseste 2; librariile pe care le-am facut, care contin functiile invocate in functia main (functie si functie_2) se regasesc in func1.c si func2.c, respectiv header file-urile folosite pt a le putea declara in functia mea main.
}

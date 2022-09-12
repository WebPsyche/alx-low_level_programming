#include <string.h>
#include "4main.h"
/**
 * main - entry point takrs in return value for main
 *
 * str is assigned to getputstring function and returns value from main
 *
 *getputstring - calls put string functuon
 *
 * Return -  always return str with inputed parameters
 */
int main(){
	int str;
	str = getputstring("\"Prgramming is like building a multilingual puzzle\n");
	return (str);
}

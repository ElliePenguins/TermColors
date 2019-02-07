/****************************************
 *		
 *	  Functions and constants 
 *	  that change text to colored
 *	  text. (linux).		
 *
 *	  MIT License 
 *	  Copyright (c) 2019 ElliePenguins				
 * 
 ****************************************/

/**********************************
 *			
 *  The below functions work,
 *  %s for hex has too much	
 *  overhead. 	
 *
 *  TODO:	
 *  Reset after color set:	
 *  eg. ( RED "%s" NRM );
 *		
 **********************************/

// Add change back to normal 
// after print in color functions.

#include <stdio.h>
#include "colors.h"

void print_red(char* string)
{
   printf("%s%s", RED, string);
}

void print_green(char* string)
{
   printf("%s%s", GRN, string);
}

void print_yellow(char* string)
{
   printf("%s%s", YEL, string);
}

void print_blue(char* string)
{
   printf("%s%s", BLU, string);
}

void print_magenta(char* string)
{
   printf("%s%s", MAG, string);
}

void print_cyan(char* string)
{
   printf("%s%s", CYN, string);
}

void print_white(char* string)
{
   printf("%s%s", WHT, string);
}


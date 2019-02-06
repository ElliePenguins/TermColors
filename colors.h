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

#define NRM "\x1B[0m"
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"

#define CLR "\x1B[2J"
#define SET "\x1B[1;1H"

char *colors[] = {
  NRM, RED, GRN, YEL,
  BLU, MAG, CYN, WHT
}; 

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


// -------- BROKEN -------- 

/* BROKEN FIX LATER!
void print_any(char* string, char* color)
{
   printf("%s%s", color, string);
}
*/


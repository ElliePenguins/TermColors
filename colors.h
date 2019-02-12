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

void print_red(char* string);
void print_green(char* string);
void print_yellow(char* string);
void print_blue(char* string);
void print_magenta(char* string);
void print_cyan(char* string);
void print_white(char* string);


// -------- BROKEN -------- 
//void print_any(char* string, char* color);

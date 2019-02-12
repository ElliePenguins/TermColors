# TermColors

Tiny header file to provide Linux terminal color output.
-----

Defines some color codes, An array that can be iterated through
and some simple prebuilt print statements. 

Looking through the header should provide more then enough
information.

Modify to your own needs.

UPDATED:
	Created proper C module, and included simple build
	script to create the .so file.

	Place files in the appropriate directories for use
	with your particular system.

To Use the share object:

	gcc pratice.c -L. -l:termcolors.so


A line like this may be required to find the .so
if running out of a non standard directory.

	LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/yourLibDir
	export LD_LIBRARY_PATH

 
! Warning !	! Warning !	! Warning !

     Be careful when modifying env variables.


TODO:
	Proper build script for install.

	Proper system integration.
	

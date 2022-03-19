my_scalar: my_scalar.c
	gcc -g -Wall -o my_scalar my_scalar.c

  clean:
	  $(RM) my_scalar
This readme is discussing the creation of the library
copy files for the libaray into the directory
run gcc with the standard flags and -c so that it stops while creating
the .o files
run ar -rc [filename.a] *.o
run ranlib [filename.a]
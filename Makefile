CC = gcc

executable = temp_convert
src_files = main.c

$(executable): $(src_files)
	$(CC) $(src_files) -o $@

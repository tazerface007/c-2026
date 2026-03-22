# Header stdio.h

Header stdio.h is a standard input/output header that is being used for console and file input output operations.

It contains close to 40+ functions for console/file i/o operations.

Following is the categorisation of functions:

1. **Formatted Input/Output:** These functions are the most powerful because they allow you to translate data types (integers, float) into readable text and vice-versa using format specifiers like %d or %f.

- printf/scanf: The standard way to talk to the console.
- fprintf/fscanf: Exactly like console I/O, but  they work on files instead.
- sprintf/sscanf: These print to or read from strings (character arrays) rather than the screen or files. useful for data conversions.
- snprintf: A safer version of sprintf that prevents buffer overflows by letting you specify a maximum character limit.
- vprintf: Version of the above that accept a "variable argument list" (va_list) often used when writing your own custom logging functions.


2. **Character and String I/O:** These are the function used when you don't need complext formatting and just want to move raw text. These are much faster.

- fgetc/fputc: Reads and write single character to file.
- getchar/putchar: Shortcuts for reading/writing a single character to the standard console.
- fgets/fputs: Reads and writes entire like of text to the file. fgets is highly recommended because it limits the number of character read, preventing crashes.
- puts: Prints a string to the screen and adds a newline(\n) at the end.
- ungetc: A unique function that will pushes a character back to the input stream so it can be read again.

3. **Direct (Block) Input/Output:** Used for binary files where you want to move large chunks of memory as exactly as they are.

- fread: Reads a specfic number of data block from a file into a buffer.
- fwrite: Write block of memory directly to a file.

4. **File Management and Positioning:** These function controls the state of your file- opening, closing, and moving the internal "cursor".

- fopen/fclose: Start and end your connection to a file.
- fflush: Forces any data waiting in the temporary "buffer" to be written to the disk immediately.
- remove/rename: Deletes or changes the name of a file on your hard drive.
- fseek/ftell: fseek moves the file pointer to a specific spot (beginning, middle, or end), while ftell tells you where you are.
- rewind: A quick shortcut to jump bak to the very beginning of a file.
- tmpfile/tmpnam: Creates temporary files that are automatically deleted when the program ends.

5. **Error Handling:** Essential for "defensinve programming", checking if something went wrong.
- feof: Returns true if you have reached the very end of file.
- ferror: Checks if any error occured during the last file opreation.
- perror: Print a human readable description of the last error to the standard error stream (stderr).
- clearerr: Resets the error and EOF indicators so you can try an operation again.



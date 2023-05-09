#include "main.h"

/**
 * read_textfile - reads a text file
 *
 * @filename: pointer to a string that contains the name of the file to read
 * @letters: maximum number of letters to read
 *
 * Return: actual number of letters it could read and print, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp; /*Pointer to a FILE object*/
	char *buffer;/*Pointer to a block of memory that will hold 
	the file contents*/
	ssize_t nwritten;/*Number of bytes written to stdout*/
	ssize_t nread;/*Number of bytes read from the file*/

	if (!filename) /*Check if filename is NULL*/
		return (0);

	fp = fopen(filename, "r");/*Opens the file*/
	if (!fp)/*Check if the file cannot be opened*/
		return (0);

	buffer = (char *)malloc(letters + 1);
	/*Allocates enough space for letters plus the null byte*/
	if (!buffer)
	{
		fclose(fp);
		return (0);
	}

	nread = fread(buffer, 1, letters, fp);
	/*Read data from the file into the buffer*/
	if (nread == 0 && !feof(fp))/*Check if the read failed*/
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buffer, nread);
	/*Writes the buffer to stdout*/
	if (nwritten < 0 || nwritten != nread)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);
	return (nwritten);
}

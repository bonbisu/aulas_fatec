#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(void)
{
	FILE *file;
    DIR *dir;
    struct dirent *lsdir;

    dir = opendir("c:\\Windows\\");

    /* print all the files and directories within directory */
    while ( ( lsdir = readdir(dir) ) != NULL )
    {
    	file = fopen ("C:\\Users\\aluno.L4M20\\Desktop\\Gnome\\lista.txt", "a");
        fprintf(file,"%s\n", lsdir->d_name);
		printf ("%s\n", lsdir->d_name);
    }
	fclose(file);
    closedir(dir);

    return 0;

}
 

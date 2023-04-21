#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("file.txt", "w");

    // if(ptr == NULL)
    // {
    //     printf("Error opening file");
    //     exit(1);
    // }
    // fprintf(ptr, "Hello everyone\n");
    // fprintf(ptr, "%d", 5);
    ptr = fopen("file.txt", "r");
    FILE *write;
    write = fopen("write.txt", "w");
    int buff[10];
    int a = fread(buff, sizeof(int), 10, ptr);
    fwrite(buff, sizeof(int), a, write);

    fputs("Hellow", write);
    fclose(ptr);
    fclose(write);
    

}
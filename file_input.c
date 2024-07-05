#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

struct database_header_t{
    unsigned short version;
    unsigned short empoyees;
    unsigned int fileLength;
};

int main(int argc, char *argv[]){
    struct database_header_t head = {0};
    if(argc != 2){
        printf("Usage: %s <filename>\n", argv[0]);
        return 0;
    }
    int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
    if(fd == -1){
        perror("open");
        return -1;
    }
    char *fileData = "Hot Chocolate!\n";
    write(fd, fileData, strlen(fileData));
    close(fd);    
    return 0;
}
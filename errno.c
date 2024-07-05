#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
    int fd = open("./totally-a-real-file", O_RDONLY);
    if(fd == -1){
        perror("open");
        return -1;
    }
    return 0;
}
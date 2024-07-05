#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

struct database_header_t{
    unsigned short version;
    unsigned short employees;
    unsigned int fileSize;
};

int main(int argc, char *argv[]){
    struct database_header_t head = {0};
    struct stat dbStat = {0};
    if(argc != 2){
        printf("Usage: %s <filename>\n", argv[0]);
        return 0;
    }
    int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
    if(fd == -1){
        perror("open");
        return -1;
    }
    if(fstat(fd, &dbStat) < 0){
        perror("fstat");
        close(fd);
        return -1;
    }
    if(read(fd, &head, sizeof(head)) != sizeof(head)){
        perror("read");
        close(fd);
        return -1;
    }
    if(dbStat.st_size != head.fileSize){
        printf("dbStat.st_size: %lu\n", dbStat.st_size);
        printf("head.fileSize: %d\n", head.fileSize);
        printf("File size on disk does not match file header.\n");
        close(fd);
        return -1;
    }
    printf("DB Version: %u\n", head.version);
    printf("DB Number of Employees: %u\n", head.employees);
    printf("DB File Length: %u\n", head.fileSize);
    close(fd);    
    return 0;
}
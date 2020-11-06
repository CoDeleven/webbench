#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <getopt.h>

int force = 0;
int options_index = 0; // 保存长选项在long_options里的下标

static const struct option long_options[] = {
    {"force", no_argument, &force, 1},
    {"time", no_argument, NULL, 't'},
    {NULL, 0, NULL, 0} // 必须要存在的空元素
};

int main(int argc, char *argv[])
{
    char opt;
    while( (opt = getopt_long(argc, argv, "1t", long_options, &options_index)) != -1) {
        printf("%c \n", opt);
        printf("%d \n", options_index);
    }
    exit(EXIT_SUCCESS);
}
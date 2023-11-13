#include "main.h"

int main(int argc, char *argv[])
{
    print_args(argc, argv);
    return 0;
}

void print_args(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        _puts(argv[i]);
    }
}


// nob.c
#define NOB_IMPLEMENTATION
#include "nob.h"

int main(int argc, char **argv)
{
    NOB_GO_REBUILD_URSELF(argc, argv);
    Nob_Cmd cmd = {0};
    nob_cmd_append(&cmd, "cc", "-std=c99", "-Wall", "-Wextra", "-Werror", "-O3", "-o", "roll-dice", "main.c");
    if (!nob_cmd_run_sync(cmd)) return 1;
    return 0;
}

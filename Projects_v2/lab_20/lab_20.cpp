// Link to marcoses: https://www.opennet.ru/docs/RUS/cpp/cpp-5.html

#include <iostream>

//#define NDEBUG 1

// Вывод просто информации
#ifndef NDEBUG
#  define debug_print(msg) stderr_printf msg
#else
#  define debug_print(msg) (void)0
#endif

void stderr_printf(const char* fmt, ...)
{
    printf("RUNNING the error debug print");
}

// Вывод номера строки в файле
#ifdef NDEBUG
#define Dprintf(FORMAT, ...) ((void)0)
#define Dputs(MSG) ((void)0)
#else
#define Dprintf(FORMAT, ...) \
    fprintf(stderr, "%s() in %s, line %i: " FORMAT "\n", \
        __func__, __FILE__, __LINE__, __VA_ARGS__)
#define Dputs(MSG) Dprintf("%s", MSG)
#endif

int main()
{
    Dprintf("Some tracking info\n");

    debug_print(("argv[0] is \n"));

    // Строчное объявление
#ifndef NDEBUG
    printf("RUNNING NOT DEBUG BUILD");
#else
    printf("Running... this is a release build.");
#endif

    return 0;
}

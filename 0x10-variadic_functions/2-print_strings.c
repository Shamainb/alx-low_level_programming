#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

    va_list args;
    va_start(args, n);

    for (i = 0; i < n; ++i) {
        const char *str = va_arg(args, const char *);
        
        if (str != NULL) {
            printf("%s", str);
        } else {
            printf("(nil)");
        }

        if (i < n - 1 && separator != NULL) {
            printf("%s", separator);
        }
    }

    va_end(args);

    printf("\n");
}

int main() {
    print_strings(", ", 5, "Hello", "World", NULL, "Goodbye", "C");
    return 0;
}

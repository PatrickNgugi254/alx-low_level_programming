#include <unistd.h>
#include <string.h>

int main(void) {
    const char *message = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
    size_t len = strlen(message);

    if (write(STDERR_FILENO, message, len) != (ssize_t)len) {
        return 1;
    }

    return 1;
}

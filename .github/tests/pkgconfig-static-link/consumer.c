#include <stddef.h>
#include <xevd.h>

int main(void)
{
    XEVD_CDSC cdsc = { 0 };
    XEVD decoder = NULL;
    cdsc.threads = 1;
    decoder = xevd_create(&cdsc, NULL);
    if(decoder == NULL) {
        return 1;
    }
    xevd_delete(decoder);
    return 0;
}

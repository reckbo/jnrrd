#include <stdio.h>
#include <string.h>
#include <nrrd.h>

int main() {
    Nrrd* nrrd = nrrdNew();
    char filename[] = "T1.nrrd";
    int ret = nrrdLoad(nrrd, filename, NULL);
    printf("%s\n", airEnumStr(nrrdType, nrrd->type));

    size_t size[4];
    nrrdAxisInfoGet_nva(nrrd, nrrdAxisInfoSize, size);
    for (int i = 0; i < nrrd->dim; i++) {
        /*printf("%i\n", (int) nrrd->axis[i].size);*/
        printf("size axis %i: %i\n", i, (int) size[i]);
    }

    return ret;
}



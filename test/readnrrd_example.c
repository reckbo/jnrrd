#include <stdio.h>
#include <string.h>
#include <nrrd.h>

int get_dim(Nrrd *nrrd) {
    return nrrd->dim;
}

int main() {
    Nrrd* nrrd = nrrdNew();
    char filename[] = "T1.nrrd";
    int ret = nrrdLoad(nrrd, filename, NULL);
    printf("%s\n", airEnumStr(nrrdType, nrrd->type));
    printf("%i\n", nrrd->type);

    printf("nrrdAxisInfoSize:%i\n", nrrdAxisInfoSize);

    size_t size[4];
    nrrdAxisInfoGet_nva(nrrd, nrrdAxisInfoSize, size);
    for (int i = 0; i < get_dim(nrrd); i++) {
        /*printf("%i\n", (int) nrrd->axis[i].size);*/
        printf("size axis %i: %i\n", i, (int) size[i]);
    }

    return ret;
}



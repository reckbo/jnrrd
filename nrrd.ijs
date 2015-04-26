load'dll'
DLL=:'/usr/local/lib/libteem.1.12.0.dylib'

NB. int nrrdStringRead(Nrrd *nrrd, const char *string, NrrdIoState *nio)
nrrdread=:DLL, ' nrrdStringRead i  *c *c *c'

filename=:'T1.nrrd'
nrrd=:''
params=: nrrd;filename;<''
NB.nrrdread 


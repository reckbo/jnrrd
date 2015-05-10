A [J](www.jsoftware.com) binding for teem's [nrrd](http://teem.sourceforge.net/nrrd/) library to
load a nrrd image.  So far only tested on a 64 bit Mac.

# Example

    load 'nrrd.ijs viewmat'
    d=. readnrrd 'test/T1.nrrd'
    viewmat 90 { d

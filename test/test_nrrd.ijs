Note 'To run tests:'
    load'nrrd.ijs test/test_nrrd.ijs'
)

loc=. 3 : '> (4!:4 <''y'') { 4!:3 $0' 
TESTDIR=: getpath_j_ jpath loc''
load TESTDIR, '../nrrd.ijs'

errNum=: 13!:11

test_readnrrd=: 4 : 0
    smoutput 'TEST: ', y
    try. 
        assert 256 256 = $ readnrrd y
        smoutput 'OK'
    catch.
        ('Did not fail with expected error ',":x) assert x = errNum''
        smoutput 'OK'
    end.
    smoutput''
)

11 11  0 0  0 11  0 11  0 0 test_readnrrd each 1 dir TESTDIR,'T1slice-*.nrrd'

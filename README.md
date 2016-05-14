# test-C-parameters-function
Small execution time test in C for passing parameters to a function

Test: on bash command line, execute:

    ./test.sh

This will compile twice the file `test.c` with 2 different methods and compare the execution time.

Result:
-------
*With my configuration: Win10 + Cygwin, i5-4440 CPU @3.10GHz*


    
    Test FOO_METHODE
    ****************
    FOO_METHODE
    result = 10000000
    
    real    0m1.305s
    user    0m1.281s
    sys     0m0.000s
    
    
    Test BAR_METHODE
    ****************
    BAR_METHODE
    result = 10000000
    
    real    0m0.048s
    user    0m0.031s
    sys     0m0.015s


Observations:
------------

FOO_METHODE:  
Passing a large amount of data through the parameter of the function is not a good idea, as it takes lot of time to copy the data. Specially in our case where only a few data are used in the function.

BAR_METHODE:  
As only the pointer to the data is passed here, there is no data to copy, this is why the time is drastically less than FOO_METHODE.


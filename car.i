/* File: example.i */
%module car
%{
#include "car.h"
%}

%include "std_string.i"

%include "car.h"

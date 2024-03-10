# Using of a C++ lib in a JS app

**DON'T FORGET TO CONFIGURE SWIG ON YOUR MACHINE**

First, while in the directory `cpp-to-js`, run the following command:

> `swig -c++ -javascript -node car.i`

to create the wrapper for the code written in C++ that gets along with JavaScript.

**DON'T FORGET TO INSTALL THE NODE RUNTIME ENVIRONMENT**

After that, go to the directory `js-test`. The steps are:

- `npm i`
- `npm run build`
- `npm run start`

*Feel free modify the file `index.js` if you want to try out the functionality more thoroughly*

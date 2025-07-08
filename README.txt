libcgnp (Cruz General Network Protocol) - a general-purpose network protocol optimised for quick requests

libcgnp is licensed under the LGPLv3 license. See LICENSE.txt for details. If this file is
missing, go to <https://www.gnu.org/licenses/lgpl-3.0.txt>.

Usage: run `make` from the command line. Include the cgnp.h header in your code files, and link
the library with -lcgnp (as the LAST arg). Ensure that the libcgnp.a file is in the directory from
which you are running your C compiler, otherwise pass the argument -L/path/to/libcgnp.a before -lcgnp.

Dependencies: glibc, GNU Make, gcc (clang is untested)

Below is an overview of the functions:

int foo(int bar): return 2 * bar
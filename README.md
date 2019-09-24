
clang++ -O0 -mllvm -sobf -mllvm -debug-only=sobf throw.cpp -o throw.obf
clang -O0 -mllvm -sobf -mllvm -debug-only=sobf hello.c -o hello.obf

git clone https://www.bearssl.org/git/BearSSL
cd BearSSL
make CONF=UnixClang CFLAGS='-mllvm -fla -mllvm -sub -mllvm -bcf -mllvm -sobf -O0 -fPIC'

https://github.com/davidrios/benchmarksgame
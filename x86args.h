#ifndef x86ARGS
#define x86ARGS

#define Args (arg) \
    unsigned int _x; \
    __asm("mov %%ebp, %0":"%=r"(_x)); \
    _x += 8; \
    args = (unsigned int *)_x

#endif

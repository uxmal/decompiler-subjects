// Generated by Rec Studio 4 - build Sep 23 2015

_init()
{// addr = 0x080482AC
    _unknown_ __ebx;                       // r1
    _unknown_ _t2;                         // _t2
    intOrPtr _t4;                          // _t4
    _unknown_ _t5;                         // _t5

    __x86.get_pc_thunk.bx(_t2);
    _t4 =  *((intOrPtr*)(_t5 + 7499 - 4));
    if(_t4 != 0) {
        __gmon_start__();
        return _t4;
    }
    return _t4;
}

printf()
{// addr = 0x080482E0
    goto __imp__printf;
}

__libc_start_main()
{// addr = 0x080482F0
    goto __imp____libc_start_main;
}

__gmon_start__()
{// addr = 0x08048300
    goto __imp____gmon_start__;
}

_start(
    _unknown_ __eax,                       // r0
    _unknown_ __edx                        // r3
)
{// addr = 0x08048310
    __edx = __edx;
    __eax = __eax;
    _pop(__esi);
    __ecx = __esp;
    __esp = __esp & -16;
    _push(__eax);
    _push(__esp);
    _push(__edx);
    _push(__libc_csu_fini);
    _push(__libc_csu_init);
    _push(__ecx);
    _push(__esi);
    _push(main);
    __libc_start_main();
    asm("hlt");
    0;
    return __eax;
}

__x86.get_pc_thunk.bx(
    _unknown_ __eax                        // r0
)
{// addr = 0x08048340
    __eax = __eax;
    return __eax;
}

deregister_tm_clones()
{// addr = 0x08048350
    signed int _t7;                        // _t7

    if(3 > 6 && 0 != 0) {
        _push(__ebp);
        __ebp = __esp;
        __esp = __esp - 20;
        _push(134520932);
         *0();
        __esp = __esp + 16;
        __esp = __ebp;
        _pop(__ebp);
    }
    asm("repe ret");
    while(1) {
        _t7 = (0 >> 2) + (134520932 >> 31) >> 1;
        if(134520932 != 0 && 0 != 0) {
            _push(__ebp);
            __ebp = __esp;
            __esp = __esp - 16;
            _push(_t7);
            _push(134520932);
             *0();
            __esp = __esp + 16;
            __esp = __ebp;
            _pop(__ebp);
        }
        asm("repe ret");
        if(completed.6532 == 0) {
            _push(__ebp);
            __ebp = __esp;
            __esp = __esp - 8;
            deregister_tm_clones();
            completed.6532 = 1;
            __esp = __ebp;
            _pop(__ebp);
        }
        asm("repe ret");
        if(__JCR_LIST__ == 0) {
        }
L12:
        while(1) {
            _t7 = (0 >> 2) + (134520932 >> 31) >> 1;
            if(134520932 != 0 && 0 != 0) {
                _push(__ebp);
                __ebp = __esp;
                __esp = __esp - 16;
                _push(_t7);
                _push(134520932);
                 *0();
                __esp = __esp + 16;
                __esp = __ebp;
                _pop(__ebp);
            }
            asm("repe ret");
            if(completed.6532 == 0) {
                _push(__ebp);
                __ebp = __esp;
                __esp = __esp - 8;
                deregister_tm_clones();
                completed.6532 = 1;
                __esp = __ebp;
                _pop(__ebp);
            }
            asm("repe ret");
            if(__JCR_LIST__ == 0) {
            }
            goto L13;
        }
        goto L12;
L13:
        if(0 == 0) {
            goto L12;
        }
        _push(__ebp);
        __ebp = __esp;
        __esp = __esp - 20;
        _push( &__JCR_LIST__);
         *0();
        __esp = __esp + 16;
        __esp = __ebp;
        _pop(__ebp);
    }
}

register_tm_clones()
{// addr = 0x08048380
    signed int _t5;                        // _t5
    _unknown_ _t12;                        // _t12
    _unknown_ _t13;                        // _t13

L0:
    while(1) {
L0:
        _t5 = (0 >> 2) + (134520932 >> 31) >> 1;
        if(134520932 != 0 && 0 != 0) {
            _push(_t12);
            _t12 = __esp;
            __esp = __esp - 16;
            _push(_t5);
            _push(134520932);
             *0();
            __esp = __esp + 16;
            __esp = _t12;
            _pop(__ebp);
        }
        asm("repe ret");
        if(completed.6532 == 0) {
            _push(_t12);
            _t12 = __esp;
            __esp = __esp - 8;
            deregister_tm_clones();
            completed.6532 = 1;
            __esp = _t12;
            _pop(__ebp);
        }
        asm("repe ret");
L7:
        if(__JCR_LIST__ != 0) {
L9:
            if(0 == 0) {
                goto L8;
            }
L10:
            _push(_t12);
            _t13 = __esp;
            __esp = __esp - 20;
            _push( &__JCR_LIST__);
             *0();
            __esp = __esp + 16;
            __esp = _t13;
            _pop(__ebp);
            while(1) {
L0:
                _t5 = (0 >> 2) + (134520932 >> 31) >> 1;
                if(134520932 != 0 && 0 != 0) {
                    _push(_t12);
                    _t12 = __esp;
                    __esp = __esp - 16;
                    _push(_t5);
                    _push(134520932);
                     *0();
                    __esp = __esp + 16;
                    __esp = _t12;
                    _pop(__ebp);
                }
                asm("repe ret");
                if(completed.6532 == 0) {
                    _push(_t12);
                    _t12 = __esp;
                    __esp = __esp - 8;
                    deregister_tm_clones();
                    completed.6532 = 1;
                    __esp = _t12;
                    _pop(__ebp);
                }
                asm("repe ret");
                goto L7;
            }
        }
L8:
    }
}

__do_global_dtors_aux()
{// addr = 0x080483C0
    _unknown_ _t6;                         // _t6


}

frame_dummy()
{// addr = 0x080483E0
    signed int _t6;                        // _t6

L0:
    while(1) {
        if(__JCR_LIST__ != 0) {
            if(0 == 0) {
                goto L8;
            }
            _push(__ebp);
            __ebp = __esp;
            __esp = __esp - 20;
            _push( &__JCR_LIST__);
             *0();
            __esp = __esp + 16;
            __esp = __ebp;
            _pop(__ebp);
        } else {
L8:
        }
        _t6 = (0 >> 2) + (134520932 >> 31) >> 1;
        if(134520932 != 0 && 0 != 0) {
            _push(__ebp);
            __ebp = __esp;
            __esp = __esp - 16;
            _push(_t6);
            _push(134520932);
             *0();
            __esp = __esp + 16;
            __esp = __ebp;
            _pop(__ebp);
        }
        asm("repe ret");
        if(completed.6532 == 0) {
            _push(__ebp);
            __ebp = __esp;
            __esp = __esp - 8;
            deregister_tm_clones();
            completed.6532 = 1;
            __esp = __ebp;
            _pop(__ebp);
        }
        asm("repe ret");
    }
}

use(
    _unknown_ __eax,                       // r0
    intOrPtr _a4,                          // _cfa_4
    intOrPtr _a8                           // _cfa_8
)
{// addr = 0x0804840B
    __eax = __eax;
    __esp = __esp - 16;
    _push(_a8);
    _push(_a4);
    _push(134514724);
    printf();
    __esp = __esp + 28;
    return __eax;
}

use_int(
    _unknown_ __eax,                       // r0
    intOrPtr _a4                           // _cfa_4
)
{// addr = 0x08048424
    __eax = __eax;
    __esp = __esp - 20;
    _push(_a4);
    _push(134514727);
    printf();
    __esp = __esp + 28;
    return __eax;
}

read_ints(
    _unknown_ __eax,                       // r0
    _unknown_ __fp0                        // r28
)
{// addr = 0x08048439
    short _v22;                            // _cfa_ffffffea

    _v22 = global_char;
    asm("fild word [esp+0x16]");
    asm("fild word [0x804a060]");
    asm("faddp st1, st0");
    asm("fild dword [0x804a05c]");
    asm("faddp st1, st0");
    asm("fild dword [0x804a058]");
    asm("faddp st1, st0");
    asm("fild qword [0x804a050]");
    asm("faddp st1, st0");
    use(global_char, __fp0 +  *134514752);
    return 120;
}

write_ints(
    _unknown_ _a4                          // _cfa_4
)
{// addr = 0x08048484
    _unknown_ _v6;                         // _cfa_fffffffa
    short _v8;                             // _cfa_fffffff8
    signed short _v10;                     // _cfa_fffffff6
    intOrPtr _v16;                         // _cfa_fffffff0
    signed int _t8;                        // _t8
    intOrPtr _t9;                          // _t9

    asm("fnstcw word [esp+0xe]");
    _v8 = 12;
    asm("fldcw word [esp+0xc]");
    asm("fist word [esp+0xa]");
    asm("fldcw word [esp+0xe]");
    _t8 = _v10 & 65535;
    global_char = _t8;
    global_short = _t8;
    asm("fldcw word [esp+0xc]");
    asm("fist dword [esp+0x4]");
    asm("fldcw word [esp+0xe]");
    _t9 = _v16;
    global_int = _t9;
    global_long = _t9;
    asm("fldcw word [esp+0xc]");
    asm("fistp qword [0x804a050]");
    asm("fldcw word [esp+0xe]");
    return 121;
}

read_floats(
    _unknown_ __fp0                        // r28
)
{// addr = 0x080484E8
    long long _v20;                        // _cfa_ffffffec
    _unknown_ _t3;                         // _t3

    asm("fldz");
    asm("faddp st1, st0");
    _v20 = tword [0x804a030];
    use(_t3, _v20);
    return 122;
}

write_floats(
    _unknown_ __eax,                       // r0
    long long _a4                          // _cfa_4
)
{// addr = 0x0804851A
    __eax = __eax;
    asm("fst dword [0x804a048]");
    asm("fst qword [0x804a040]");
    tword [0x804a030] = _a4;
    return __eax;
}

converting_between_floats_f1(
    _unknown_ __eax                        // r0
)
{// addr = 0x08048537
    __eax = __eax;
    global_float = global_double;
    return __eax;
}

converting_between_floats_f2(
    _unknown_ __eax                        // r0
)
{// addr = 0x0804854A
    __eax = __eax;
    global_float = tword [0x804a030];
    return __eax;
}

converting_between_floats_d1(
    _unknown_ __eax                        // r0
)
{// addr = 0x0804855D
    __eax = __eax;
    global_double = global_float;
    return __eax;
}

converting_between_floats_d2(
    _unknown_ __eax                        // r0
)
{// addr = 0x0804856A
    __eax = __eax;
    global_double = tword [0x804a030];
    return __eax;
}

converting_between_floats_l1(
    _unknown_ __eax                        // r0
)
{// addr = 0x0804857D
    __eax = __eax;
    tword [0x804a030] = global_float;
    return __eax;
}

void converting_between_floats_l2()
{// addr = 0x0804858A
    tword [0x804a030] = global_double;
}

int basic_operations(double x)
{// addr = 0x08048597
    signed int _v20;                       // _cfa_ffffffec
    signed int _v28;                       // _cfa_ffffffe4
    _unknown_ _t14;                        // _t14
    _unknown_ _t20;                        // _t20

    asm("fxch st0, st1");
    asm("fst qword [esp+0x10]");
    asm("fxch st0, st1");
    asm("fst qword [esp+0x18]");
    asm("faddp st1, st0");
    _t20 = use(use(use(use(use(use(_t14, _a12), _v28 - _v20), _v20 - _v28), _v28 * _v20), _v28 / _v20), _v20 / _v28);
    asm("fchs");
    use(_t20, _v28);
    return 123;
}

int compare_floats(double x)
{// addr = 0x0804861F
    long long _v20;                        // _cfa_ffffffec
    long long _v28;                        // _cfa_ffffffe4
    signed char _t18;                      // _t18
    long long _t44;                        // _t44

    __esp = __esp - 40;
    _t44 = _a12;
    asm("fucomi st0, st1");
    asm("fxch st0, st1");
    _t18 = __eflags ?_? 0;
    _v28 = _t44;
    _v20 = _t44;
    _t20 = _t18 != 0 ? 0 : _t18 & 255;
    _push(_t18 != 0 ? 0 : _t18 & 255);
    use_int(_t18 != 0 ? 0 : _t18 & 255);
    asm("fucomip st0, st1");
    st0 = _v20;
    _t24 = __eflags ?_? 0 != 0 ? 1 : __eflags ?_? 0 & 255;
    use_int(__eflags ?_? 0 != 0 ? 1 : __eflags ?_? 0 & 255, __eflags ?_? 0 != 0 ? 1 : __eflags ?_? 0 & 255);
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    st0 = _v20;
    use_int(__eflags > 0 & 255, __eflags > 0 & 255);
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    st0 = _v20;
    use_int(__eflags >= 0 & 255, __eflags >= 0 & 255);
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    st0 = _v28;
    use_int(__eflags > 0 & 255, __eflags > 0 & 255);
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    st0 = _v28;
    use_int(__eflags >= 0 & 255, __eflags >= 0 & 255);
    __esp = __esp + 44;
    return 124;
}

int constants(double x)
{// addr = 0x080486E5
    signed int _v20;                       // _cfa_ffffffec
    _unknown_ _t6;                         // _t6

    asm("fst qword [esp+0x18]");
    asm("faddp st1, st0");
    use(use(use(use(use(_t6, st0), _v20 *  *134514756), _v20 *  *134514768), _v20 *  *134514760), _v20 *  *134514776);
    return 125;
}

main(
    char _a4                               // _cfa_4
)
{// addr = 0x0804874D
    intOrPtr _v12;                         // _cfa_fffffff4
    _unknown_ _t7;                         // _t7
    signed int _t8;                        // _t8

    __esp = __esp & -16;
    _push( *((intOrPtr*)( &_a4 - 4)));
    _push(_t7);
    _t8 = __esp;
    _push( &_a4);
    __esp = __esp - 12;
    _push(8);
    _push(4);
    _push(4);
    _push(2);
    _push(1);
    _push("%zu %zu %zu %zu %zu\n");
    printf();
    __esp = __esp + 32;
    _push(12);
    _push(8);
    _push(4);
    _push("%zu %zu %zu\n");
    printf();
    __esp = __esp + 16;
    __esp = _t8;
    _pop(__ebp);
    __esp = _v12 - 4;
    return 0;
}

__libc_csu_init(
    intOrPtr _a4,                          // _cfa_4
    intOrPtr _a8,                          // _cfa_8
    intOrPtr _a12                          // _cfa_c
)
{// addr = 0x080487A0
    _unknown_ __ebx;                       // r1
    signed int __edi;                      // r4
    _unknown_ __esi;                       // r5
    intOrPtr __ebp;                        // r6
    _unknown_ _t9;                         // _t9
    _unknown_ _t13;                        // _t13
    _unknown_ _t14;                        // _t14
    signed int _t17;                       // _t17

    __x86.get_pc_thunk.bx(_t9);
    _t14 = _t13 + 6231;
    __esp = __esp - 12;
    __ebp = _a4;
    _init();
    _t17 = _t14 - 244 - _t14 - 248 >> 2;
    if(_t17 != 0) {
        __edi = 0;
        do {
            __esp = __esp - 4;
            _push(_a12);
            _push(_a8);
            _push(__ebp);
             *((intOrPtr*)(_t14 + __edi * 4 - 248))();
            __edi = __edi + 1;
            __esp = __esp + 16;
        } while(_t17 != __edi);
    }
    __esp = __esp + 12;
}

__libc_csu_fini(
    intOrPtr* __eax                        // r0
)
{// addr = 0x08048800
    _unknown_ __ebx;                       // r1
    _unknown_ _t2;                         // _t2
    _unknown_ _t3;                         // _t3

    asm("repe ret");
     *__eax =  *__eax + __eax;
    _push(_t3);
    __esp = __esp - 8;
    _t2 = __x86.get_pc_thunk.bx(__eax);
    __esp = __esp + 8;
    _pop(__ebx);
    return _t2;
}

_fini()
{// addr = 0x08048804
    _unknown_ __ebx;                       // r1
    _unknown_ _t1;                         // _t1
    _unknown_ _t3;                         // _t3

    return __x86.get_pc_thunk.bx(_t1);
}

_fini()
{// addr = 0x08048804
    _unknown_ __ebx;                       // r1
    _unknown_ _t1;                         // _t1
    _unknown_ _t3;                         // _t3

    return @rec __x86.get_pc_thunk.bx@__x86.get_pc_thunk.bx@(_t1);
}

// Statistics:
//     221 Register nodes
//      70 Temporaries nodes
//       3 Casts
//     190 Statements
//      22 Labels
//       6 Gotos
//      29 Blocks
//    1196 Nodes
//      55 Assembly nodes
//      38 Unknown Types


Total time: 0 seconds.

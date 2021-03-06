//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t __do_global_dtors_aux(void);
int64_t __libc_csu_fini(void);
int64_t __libc_csu_init(void);
int64_t _fini(int64_t a1);
int64_t _init(int64_t a1);
int64_t _start(int64_t a1);
int64_t call_weak_fn(void);
int64_t deregister_tm_clones(int64_t a1);
int64_t frame_dummy(void);
int64_t function_710(int64_t a1);
int32_t function_720(int64_t main2, int32_t argc, char ** ubp_av, void (*init)(), void (*fini)(), void (*rtld_fini)());
int64_t function_730(int64_t a1);
void function_740(void);
int32_t function_750(char * s);
int32_t function_760(char * format, ...);
int32_t function_770(char * format, ...);
int64_t function_998(int64_t a1, int64_t a2);
int64_t register_tm_clones(int64_t * a1, int64_t a2);

// --------------------- Global Variables ---------------------

int64_t g1 = 2408; // 0x10da8
int64_t g2 = 2336; // 0x10db0
int64_t g3 = 0; // 0x10db8
void (*g4)() = (void (*)())2584; // 0x10fa8
int64_t g5 = 0; // 0x10fb0
int64_t g6 = 0; // 0x10fc0
void (*g7)() = (void (*)())2464; // 0x10fc8
int64_t g8 = 1920; // 0x10fd0
int64_t g9 = 0; // 0x10fd8
int64_t g10 = 1776; // 0x11000
int64_t g11 = 0; // 0x11048
int32_t g12;

// ------------------------ Functions -------------------------

// Address range: 0x6d8 - 0x6ec
int64_t _init(int64_t a1) {
    // 0x6d8
    return call_weak_fn();
}

// Address range: 0x710 - 0x720
int64_t function_710(int64_t a1) {
    // 0x710
    return __cxa_finalize();
}

// Address range: 0x720 - 0x730
int32_t function_720(int64_t main2, int32_t argc, char ** ubp_av, void (*init)(), void (*fini)(), void (*rtld_fini)()) {
    // 0x720
    return __libc_start_main(main2, argc, ubp_av, init, fini, rtld_fini);
}

// Address range: 0x730 - 0x740
int64_t function_730(int64_t a1) {
    // 0x730
    return __gmon_start__();
}

// Address range: 0x740 - 0x750
void function_740(void) {
    // 0x740
    abort();
}

// Address range: 0x750 - 0x760
int32_t function_750(char * s) {
    // 0x750
    return puts(s);
}

// Address range: 0x760 - 0x770
int32_t function_760(char * format, ...) {
    // 0x760
    return scanf(format);
}

// Address range: 0x770 - 0x780
int32_t function_770(char * format, ...) {
    // 0x770
    return printf(format);
}

// From module:   /mnt/from_boomerang/./fbranch2/source.c
// Address range: 0x780 - 0x858
// Line range:    3 - 17
int main() {
    // 0x780
    float32_t v1; // 0x780
    scanf("%f", &v1);
    int128_t v2; // 0x780
    printf("a is %f, b is %f\n", (float64_t)(int64_t)v2, (float64_t)(int64_t)v2);
    if (v1 == 5.0f) {
        // 0x7c4
        puts("Equal");
    }
    float32_t v3 = v1; // 0x7e8
    bool v4; // 0x780
    bool v5; // 0x780
    bool v6; // 0x780
    bool v7; // 0x780
    bool v8; // 0x780
    bool v9; // 0x780
    bool v10; // 0x780
    if (v3 == 5.0f) {
        // 0x800
        __asm_fcmpe(5.0f, 5.0f);
        __asm_fcmpe(v1, 5.0f);
        v5 = false;
        v7 = true;
        v9 = true;
        goto lab_0x80c;
    } else {
        // 0x7e8
        puts("Not Equal");
        __asm_fcmpe(v1, 5.0f);
        bool v11 = false; // 0x7f0
        bool v12 = true; // 0x7f0
        if (v3 > 5.0f) {
            // 0x7f4
            puts("Greater");
            v11 = true;
            v12 = false;
        }
        // 0x800
        __asm_fcmpe(v1, 5.0f);
        v5 = v3 >= 5.0f == v3 <= 5.0f;
        v7 = v12;
        v9 = false;
        v4 = v3 >= 5.0f == v3 <= 5.0f;
        v6 = v12;
        v8 = false;
        v10 = v11;
        if (v11 == v3 >= 5.0f == v3 <= 5.0f) {
            goto lab_0x80c;
        } else {
            goto lab_0x818;
        }
    }
  lab_0x80c:
    // 0x80c
    puts("Less or Equal");
    v4 = v5;
    v6 = v7;
    v8 = v9;
    v10 = v5;
    goto lab_0x818;
  lab_0x818:
    // 0x818
    __asm_fcmpe(v1, 5.0f);
    if (v6 != !v8) {
        // 0x824
        puts("Greater or Equal");
    }
    // 0x830
    __asm_fcmpe(v1, 5.0f);
    if (!v8 && v10 == v4) {
        // 0x83c
        puts("Less");
    }
    // 0x848
    return 0;
}

// Address range: 0x858 - 0x890
int64_t _start(int64_t a1) {
    // 0x858
    int64_t v1; // 0x858
    int64_t v2; // 0x858
    __libc_start_main(g8, (int32_t)a1, (char **)&v1, g7, g4, (void (*)())v2);
    abort();
    return &g12;
}

// Address range: 0x890 - 0x8a4
int64_t call_weak_fn(void) {
    // 0x890
    if (g6 == 0) {
        // 0x8a0
        return 0;
    }
    // 0x89c
    return function_730(g6);
}

// Address range: 0x8a8 - 0x8dc
int64_t deregister_tm_clones(int64_t a1) {
    if ((int64_t)&g11 + 7 - (int64_t)&g11 == 14 || (uint64_t)((int64_t)&g11 + 7 - (int64_t)&g11) < 14 || g5 == 0) {
        // 0x8d8
        return &g11;
    }
    // 0x8d4
    return _ITM_deregisterTMCloneTable(&g11, g5);
}

// Address range: 0x8e0 - 0x91c
int64_t register_tm_clones(int64_t * a1, int64_t a2) {
    // 0x8e0
    return &g11;
}

// Address range: 0x920 - 0x968
int64_t __do_global_dtors_aux(void) {
    unsigned char result = *(char *)&g11; // 0x930
    if (result != 0) {
        // 0x95c
        return result;
    }
    int64_t v1 = 0; // 0x940
    if (*(int64_t *)0x10fb8 != 0) {
        // 0x944
        v1 = function_710(*(int64_t *)((int64_t)&g10 + 64));
    }
    // 0x950
    deregister_tm_clones(v1);
    *(char *)&g11 = 1;
    // 0x95c
    return 1;
}

// Address range: 0x968 - 0x998
int64_t frame_dummy(void) {
    // 0x968
    if (g3 == 0 || g9 == 0) {
        // 0x978
        return register_tm_clones(&g3, 0);
    }
    // 0x98c
    return _Jv_RegisterClasses(&g3, g9);
}

// Address range: 0x998 - 0x9a0
int64_t function_998(int64_t a1, int64_t a2) {
    // 0x998
    int64_t v1; // 0x998
    return register_tm_clones((int64_t *)v1, v1);
}

// Address range: 0x9a0 - 0xa18
int64_t __libc_csu_init(void) {
    // 0x9a0
    int64_t v1; // 0x9a0
    int64_t result = _init(v1); // 0x9d4
    if ((int64_t)&g2 - (int64_t)&g1 >> 3 == 0) {
        // 0xa04
        return result;
    }
    // 0x9e4
    return v1 & 0xffffffff;
}

// Address range: 0xa18 - 0xa1c
int64_t __libc_csu_fini(void) {
    // 0xa18
    int64_t result; // 0xa18
    return result;
}

// Address range: 0xa1c - 0xa2c
int64_t _fini(int64_t a1) {
    // 0xa1c
    int64_t result; // 0xa1c
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int64_t __cxa_finalize(void);
// int64_t __gmon_start__(void);
// int __libc_start_main(int *(main)(int, char **, char **), int argc, char ** ubp_av, void(* init)(void), void(* fini)(void), void(* rtld_fini)(void), void(* stack_end));
// int64_t _ITM_deregisterTMCloneTable(int64_t * a1, int64_t a2);
// int64_t _Jv_RegisterClasses(int64_t * a1, int64_t a2);
// void abort(void);
// int printf(const char * restrict format, ...);
// int puts(const char * s);
// int scanf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (6.3.0)
// Detected functions: 19


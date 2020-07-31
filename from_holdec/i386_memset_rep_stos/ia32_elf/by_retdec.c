//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int32_t i386_memset_backward_b(int32_t a1, int32_t a2, int32_t a3);
int32_t i386_memset_backward_l(int32_t a1, int32_t a2, int32_t a3);
int32_t i386_memset_backward_w(int32_t a1, uint32_t a2, int32_t a3);
int32_t i386_memset_both_b(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t i386_memset_both_l(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t i386_memset_both_w(int32_t a1, uint32_t a2, int32_t a3, int32_t a4);
int32_t i386_memset_forward_b(int32_t a1, int32_t a2, int32_t a3);
int32_t i386_memset_forward_l(int32_t a1, int32_t a2, int32_t a3);
int32_t i386_memset_forward_w(int32_t a1, uint32_t a2, int32_t a3);
int32_t print(void);

// --------------------- Global Variables ---------------------

int32_t g1 = 0x642500; // 0x804a012
int32_t g2 = 0; // 0x804c020
char * g3; // 0x804c028
int32_t g4 = 0; // 0x804c02b
int32_t g5 = 0; // 0x804c02c
int32_t g6 = 0; // 0x804c02f
int32_t g7 = 0; // 0x804c030
int32_t g8 = 0; // 0x804c032
int32_t g9 = 0; // 0x804c034
int32_t g10 = 0; // 0x804c036
int32_t g11 = 0; // 0x804c038
int32_t g12 = 0; // 0x804c03c
int32_t g13 = 0; // 0x804c040
int32_t g14 = 0; // 0x804c044
int32_t g15;

// ------------------------ Functions -------------------------

// Address range: 0x8049080 - 0x804942f
int main(int argc, char ** argv) {
    // 0x8049080
    int32_t v1; // bp-32, 0x8049080
    int32_t v2 = &v1; // 0x8049097
    int32_t * v3 = (int32_t *)(v2 - 12);
    int32_t * v4 = (int32_t *)(v2 - 16);
    uint32_t v5 = 0;
    int32_t v6 = v5 + 1; // 0x80490a7
    *v3 = v5 - 2 * v5 / 10;
    *v4 = (int32_t)"%d";
    printf((char *)&g15);
    while (v6 != 30) {
        // 0x80490a0
        v5 = v6;
        v6 = v5 + 1;
        *v3 = v5 - 2 * v5 / 10;
        *v4 = (int32_t)"%d";
        printf((char *)&g15);
    }
    // 0x80490c9
    *v4 = (int32_t)&g1;
    puts((char *)&g15);
    *v4 = (int32_t)"initial";
    *(int16_t *)&g14 = 0x5f5f;
    g3 = (char *)0x5f5f5f5f;
    g5 = 0x5f5f5f5f;
    g7 = 0x5f5f5f5f;
    g9 = 0x5f5f5f5f;
    g11 = 0x5f5f5f5f;
    g12 = 0x5f5f5f5f;
    g13 = 0x5f5f5f5f;
    print();
    int32_t * v7 = (int32_t *)(v2 - 8); // 0x8049140
    *v7 = 5;
    *v3 = 120;
    *v4 = (int32_t)&g4;
    i386_memset_forward_b((int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"5 'x' from 3";
    print();
    *v7 = 3;
    *v3 = 0x2928;
    *v4 = (int32_t)&g8;
    i386_memset_forward_w((int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"3 '()' from 10";
    print();
    *v7 = 2;
    *v3 = 0x3e62613c;
    *v4 = (int32_t)&g12;
    i386_memset_forward_l((int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"2 '<ab>' from 20";
    print();
    *v4 = (int32_t)"reset for following backward tests";
    *(int16_t *)&g14 = 0x5f5f;
    g3 = (char *)0x5f5f5f5f;
    g5 = 0x5f5f5f5f;
    g7 = 0x5f5f5f5f;
    g9 = 0x5f5f5f5f;
    g11 = 0x5f5f5f5f;
    g12 = 0x5f5f5f5f;
    g13 = 0x5f5f5f5f;
    print();
    *v7 = 5;
    *v3 = 120;
    *v4 = (int32_t)&g6;
    i386_memset_backward_b((int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"5 'x' from 3";
    print();
    *v7 = 3;
    *v3 = 0x2928;
    *v4 = (int32_t)&g10;
    i386_memset_backward_w((int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"3 '()' from 10";
    print();
    *v7 = 2;
    *v3 = 0x3e62613c;
    *v4 = (int32_t)&g13;
    i386_memset_backward_l((int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"2 '<ab>' from 20";
    print();
    *v4 = (int32_t)"reset for following bi directional tests";
    *(int16_t *)&g14 = 0x5f5f;
    g3 = (char *)0x5f5f5f5f;
    g5 = 0x5f5f5f5f;
    g7 = 0x5f5f5f5f;
    g9 = 0x5f5f5f5f;
    g11 = 0x5f5f5f5f;
    g12 = 0x5f5f5f5f;
    g13 = 0x5f5f5f5f;
    print();
    int32_t * v8 = (int32_t *)(v2 - 20); // 0x80492b3
    *v8 = 0;
    int32_t * v9 = (int32_t *)(v2 - 24); // 0x80492b5
    *v9 = 5;
    int32_t * v10 = (int32_t *)(v2 - 28); // 0x80492b7
    *v10 = 120;
    int32_t * v11 = (int32_t *)(v2 - 32); // 0x80492b9
    *v11 = (int32_t)&g4;
    i386_memset_both_b((int32_t)&g15, (int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"5 'x' from 3";
    print();
    *v8 = 1;
    *v9 = 5;
    *v10 = 121;
    *v11 = (int32_t)&g6;
    i386_memset_both_b((int32_t)&g15, (int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"5 'y' from 3";
    print();
    *v4 = (int32_t)"reset for following bi directional tests";
    *(int16_t *)&g14 = 0x5f5f;
    g3 = (char *)0x5f5f5f5f;
    g5 = 0x5f5f5f5f;
    g7 = 0x5f5f5f5f;
    g9 = 0x5f5f5f5f;
    g11 = 0x5f5f5f5f;
    g12 = 0x5f5f5f5f;
    g13 = 0x5f5f5f5f;
    print();
    *v8 = 0;
    *v9 = 3;
    *v10 = 0x2928;
    *v11 = (int32_t)&g8;
    i386_memset_both_w((int32_t)&g15, (int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"3 '()' from 10";
    print();
    *v8 = 1;
    *v9 = 3;
    *v10 = 0x7d7b;
    *v11 = (int32_t)&g10;
    i386_memset_both_w((int32_t)&g15, (int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"3 '{}' from 10";
    print();
    *v4 = (int32_t)"reset for following bi directional tests";
    *(int16_t *)&g14 = 0x5f5f;
    g3 = (char *)0x5f5f5f5f;
    g5 = 0x5f5f5f5f;
    g7 = 0x5f5f5f5f;
    g9 = 0x5f5f5f5f;
    g11 = 0x5f5f5f5f;
    g12 = 0x5f5f5f5f;
    g13 = 0x5f5f5f5f;
    print();
    *v8 = 0;
    *v9 = 2;
    *v10 = 0x3e62613c;
    *v11 = (int32_t)&g12;
    i386_memset_both_l((int32_t)&g15, (int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"2 '<ab>' from 20";
    print();
    *v8 = 1;
    *v9 = 2;
    *v10 = 0x5d42415b;
    *v11 = (int32_t)&g13;
    i386_memset_both_l((int32_t)&g15, (int32_t)&g15, (int32_t)&g15, (int32_t)&g15);
    *v4 = (int32_t)"2 '[AB]' from 20";
    print();
    return 0;
}

// Address range: 0x8049550 - 0x8049597
int32_t print(void) {
    // 0x8049550
    int32_t v1; // bp-12, 0x8049550
    int32_t v2 = &v1; // 0x8049553
    int32_t * v3 = (int32_t *)(v2 - 12);
    int32_t * v4 = (int32_t *)(v2 - 16);
    int32_t v5 = 0;
    int32_t v6 = v5 + 1; // 0x804956a
    *v3 = g2;
    *v4 = (int32_t)*(char *)(v5 + (int32_t)&g3);
    putc((int32_t)&g15, (struct _IO_FILE *)&g15);
    while (v6 != 30) {
        // 0x8049560
        v5 = v6;
        v6 = v5 + 1;
        *v3 = g2;
        *v4 = (int32_t)*(char *)(v5 + (int32_t)&g3);
        putc((int32_t)&g15, (struct _IO_FILE *)&g15);
    }
    // 0x8049581
    *v3 = *(int32_t *)(v2 + 16);
    *v4 = (int32_t)" : %s\n";
    return printf((char *)&g15);
}

// Address range: 0x80495a0 - 0x80495b7
int32_t i386_memset_forward_b(int32_t a1, int32_t a2, int32_t a3) {
    // 0x80495a0
    __asm_rep_stosb_memset((char *)a1, (char)a2, a3);
    return 0;
}

// Address range: 0x80495c0 - 0x80495d8
int32_t i386_memset_forward_w(int32_t a1, uint32_t a2, int32_t a3) {
    // 0x80495c0
    __asm_rep_stosd_memset((char *)a1, a2 % 0x10000, a3);
    return 0;
}

// Address range: 0x80495e0 - 0x80495f6
int32_t i386_memset_forward_l(int32_t a1, int32_t a2, int32_t a3) {
    // 0x80495e0
    __asm_rep_stosd_memset((char *)a1, a2, a3);
    return 0;
}

// Address range: 0x8049600 - 0x8049617
int32_t i386_memset_backward_b(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8049600
    __asm_rep_stosb_memset((char *)a1, (char)a2, a3);
    return 0;
}

// Address range: 0x8049620 - 0x8049638
int32_t i386_memset_backward_w(int32_t a1, uint32_t a2, int32_t a3) {
    // 0x8049620
    __asm_rep_stosd_memset((char *)a1, a2 % 0x10000, a3);
    return 0;
}

// Address range: 0x8049640 - 0x8049656
int32_t i386_memset_backward_l(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8049640
    __asm_rep_stosd_memset((char *)a1, a2, a3);
    return 0;
}

// Address range: 0x8049660 - 0x8049680
int32_t i386_memset_both_b(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x8049660
    __asm_rep_stosb_memset((char *)a1, (char)a2, a3);
    return 0;
}

// Address range: 0x8049680 - 0x80496a1
int32_t i386_memset_both_w(int32_t a1, uint32_t a2, int32_t a3, int32_t a4) {
    // 0x8049680
    __asm_rep_stosd_memset((char *)a1, a2 % 0x10000, a3);
    return 0;
}

// Address range: 0x80496b0 - 0x80496cf
int32_t i386_memset_both_l(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x80496b0
    __asm_rep_stosd_memset((char *)a1, a2, a3);
    return 0;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int putc(int c, FILE * stream);
// int puts(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (8.3.1)
// Detected functions: 11


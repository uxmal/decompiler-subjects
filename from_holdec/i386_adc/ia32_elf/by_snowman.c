
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t printf = 0x8049046;

void fun_8049040(uint32_t ecx, int32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9) {
    goto printf;
}

void fun_8049327(int32_t a1, void** a2, int32_t a3) {
    return;
}

int32_t __libc_start_main = 0x8049056;

void fun_8049050(int32_t a1, int16_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __libc_start_main(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 0x804c018;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = __libc_start_main(0x804c018, v2);
        return eax3;
    }
}

uint32_t add(unsigned char a1, unsigned char a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;
    uint32_t edx6;
    unsigned char tmp8_7;
    uint1_t cf8;
    int32_t edx9;

    eax5 = a1;
    edx6 = a2;
    tmp8_7 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax5) + *reinterpret_cast<signed char*>(&edx6));
    cf8 = reinterpret_cast<uint1_t>(tmp8_7 < *reinterpret_cast<unsigned char*>(&eax5));
    *reinterpret_cast<unsigned char*>(&eax5) = tmp8_7;
    edx9 = 0;
    *reinterpret_cast<unsigned char*>(&edx9) = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx9) + 1) = cf8;
    return (eax5 & 0xff) + (edx9 << 16);
}

uint32_t adc_clear(unsigned char a1, unsigned char a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;
    uint32_t edx6;
    unsigned char tmp8_7;
    uint1_t cf8;
    int32_t edx9;

    eax5 = a1;
    edx6 = a2;
    tmp8_7 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax5) + *reinterpret_cast<signed char*>(&edx6))));
    cf8 = reinterpret_cast<uint1_t>(tmp8_7 < *reinterpret_cast<unsigned char*>(&eax5));
    *reinterpret_cast<unsigned char*>(&eax5) = tmp8_7;
    edx9 = 0;
    *reinterpret_cast<unsigned char*>(&edx9) = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx9) + 1) = cf8;
    return (eax5 & 0xff) + (edx9 << 16);
}

uint32_t adc_set(uint32_t ecx, unsigned char a2, unsigned char a3, uint32_t a4, uint32_t a5) {
    uint32_t eax6;
    uint32_t edx7;
    unsigned char tmp8_8;
    uint1_t cf9;
    int32_t edx10;

    eax6 = a2;
    edx7 = a3;
    tmp8_8 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax6) + *reinterpret_cast<signed char*>(&edx7)) + 1);
    cf9 = reinterpret_cast<uint1_t>(tmp8_8 < *reinterpret_cast<unsigned char*>(&eax6));
    *reinterpret_cast<unsigned char*>(&eax6) = tmp8_8;
    edx10 = 0;
    *reinterpret_cast<unsigned char*>(&edx10) = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx10) + 1) = cf9;
    return (eax6 & 0xff) + (edx10 << 16);
}

uint32_t adc_simu(uint32_t ecx, uint32_t a2, unsigned char a3, unsigned char a4, uint32_t a5) {
    uint32_t esi6;
    uint32_t edx7;
    unsigned char tmp8_8;
    uint1_t cf9;
    uint32_t ecx10;
    unsigned char tmp8_11;
    uint32_t ebx12;
    uint32_t ebx13;
    uint32_t eax14;
    uint32_t eax15;
    uint32_t ebx16;
    uint32_t ecx17;
    uint32_t ecx18;
    uint32_t edx19;

    esi6 = 1;
    edx7 = a2;
    tmp8_8 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) + a3);
    cf9 = reinterpret_cast<uint1_t>(tmp8_8 < *reinterpret_cast<unsigned char*>(&edx7));
    *reinterpret_cast<unsigned char*>(&edx7) = tmp8_8;
    ecx10 = edx7;
    tmp8_11 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx10) + a4);
    *reinterpret_cast<unsigned char*>(&ebx12) = reinterpret_cast<uint1_t>(tmp8_11 < *reinterpret_cast<unsigned char*>(&ecx10));
    ebx13 = a4;
    eax14 = a2;
    if (!cf9) {
        esi6 = ebx12 & 1;
    }
    *reinterpret_cast<unsigned char*>(&eax14) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax14) >> 7);
    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) >> 7);
    eax15 = tmp8_11;
    *reinterpret_cast<unsigned char*>(&ecx10) = reinterpret_cast<unsigned char>(tmp8_11 >> 7);
    *reinterpret_cast<unsigned char*>(&ebx13) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ebx13) >> 7 == *reinterpret_cast<unsigned char*>(&edx7));
    ebx16 = a3;
    ecx17 = eax14;
    ecx18 = (ecx10 ^ edx7) & ebx13;
    *reinterpret_cast<unsigned char*>(&ebx16) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ebx16) >> 7 == *reinterpret_cast<unsigned char*>(&ecx17));
    edx19 = (edx7 ^ eax14) & ebx16;
    if (*reinterpret_cast<signed char*>(&ecx18) != *reinterpret_cast<signed char*>(&edx19)) {
        eax15 = eax15 + 0x10000;
    }
    if (esi6) {
        eax15 = eax15 + 0x1000000;
    }
    return eax15;
}

void fun_8049002() {
    uint48_t v1;
    int16_t ds2;
    int32_t eax3;
    int32_t ebx4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    eax3 = *reinterpret_cast<int32_t*>(ebx4 + 0x2ff3 - 4);
    if (eax3) {
        eax3();
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

int32_t main();

void fun_80492f2() {
    uint48_t v1;
    int16_t ds2;
    void* esp3;
    void** v4;
    int32_t edx5;
    int32_t eax6;
    int32_t ebx7;
    int32_t ebx8;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 4);
    v4 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(esp3) & 0xfffffff0) - 4 - 4);
    fun_8049327(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2cfc;
    fun_8049050(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2ab0, ebx7 - 0x2a50, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_8049332() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_80493d2() {
    uint48_t v1;
    int16_t ds2;
    int1_t zf3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    zf3 = __TMC_END__ == 0;
    if (!zf3) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        deregister_tm_clones();
        __TMC_END__ = 1;
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void fun_8049402() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        __libc_start_main(0x804c018, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void _init();

void fun_8049552() {
    uint64_t v1;
    int16_t ds2;
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t v6;
    int32_t esi7;
    int32_t edi8;
    int32_t esi9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x2aa3;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804956f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_80495b2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_80495ba() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804903c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8049377() {
}

void fun_80493c4() {
}

void fun_80493f1() {
}

uint32_t carry(int32_t a1, unsigned char a2) {
    int32_t eax3;
    uint32_t edx4;

    eax3 = a1;
    edx4 = a2 + eax3;
    return static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) > *reinterpret_cast<unsigned char*>(&edx4))));
}

void fun_80495ad() {
}

int32_t g804c008 = 0;

void fun_8049046() {
    goto g804c008;
}

void fun_8049056() {
    goto 0x8049030;
}

void fun_8049381() {
}

void fun_80493c9() {
}

void fun_80493f9() {
}

uint32_t fun_8049424(uint32_t a1, int32_t a2) {
    int32_t edx3;
    uint32_t ecx4;
    uint32_t eax5;

    edx3 = a2;
    ecx4 = a1;
    eax5 = a1 + edx3;
    *reinterpret_cast<unsigned char*>(&ecx4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx4) >> 7);
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax5) >> 7);
    return (eax5 ^ ecx4) & static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx3) >> 7 == *reinterpret_cast<unsigned char*>(&ecx4))));
}

int32_t main() {
    uint32_t edi1;
    uint32_t esi2;
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t eax7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t eax11;
    uint32_t ecx12;
    uint32_t ebx13;
    uint32_t v14;
    uint32_t v15;
    uint32_t eax16;
    uint32_t v17;
    uint32_t eax18;
    uint32_t v19;
    uint32_t eax20;
    uint32_t v21;
    uint32_t ecx22;
    uint32_t eax23;
    uint32_t eax24;
    uint32_t edx25;
    uint32_t ecx26;
    uint32_t eax27;
    uint32_t eax28;
    uint32_t edx29;
    uint32_t ecx30;
    uint32_t eax31;
    uint32_t edx32;
    uint32_t ebx33;
    uint32_t ecx34;
    uint32_t ecx35;
    uint32_t eax36;
    uint32_t ecx37;
    uint32_t eax38;

    edi1 = 0;
    do {
        esi2 = 0;
        do {
            v3 = esi2;
            v4 = edi1;
            eax7 = add(*reinterpret_cast<unsigned char*>(&v4), *reinterpret_cast<unsigned char*>(&v3), v5, v6);
            v8 = eax7;
            v9 = esi2;
            v10 = edi1;
            eax11 = adc_clear(*reinterpret_cast<unsigned char*>(&v10), *reinterpret_cast<unsigned char*>(&v9), v5, v6);
            ecx12 = v10;
            ebx13 = eax11;
            v14 = esi2;
            v15 = edi1;
            eax16 = adc_set(ecx12, *reinterpret_cast<unsigned char*>(&v15), *reinterpret_cast<unsigned char*>(&v14), v5, v6);
            v17 = esi2;
            eax18 = adc_simu(ecx12, edi1, *reinterpret_cast<unsigned char*>(&v17), 1, v6);
            v5 = 0;
            v19 = esi2;
            eax20 = adc_simu(ecx12, edi1, *reinterpret_cast<unsigned char*>(&v19), 0, v6);
            v21 = eax20;
            if (v8 != ebx13) {
                fun_8049040(ecx12, "%3d = 0x%2x %3d = 0x%2x ->", edi1, edi1, esi2, esi2, v19, 0, v6);
                ecx22 = reinterpret_cast<uint32_t>("  ");
                if (v8 & 0x1000000) {
                    ecx22 = reinterpret_cast<uint32_t>("CF");
                }
                eax23 = reinterpret_cast<uint32_t>("  ");
                if (v8 & 0x10000) {
                    eax23 = reinterpret_cast<uint32_t>("OF");
                }
                fun_8049040(ecx22, "add=(%3d,%s,%s) ", static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v8)), eax23, ecx22, eax18, eax16, v21, v8);
                eax24 = reinterpret_cast<uint32_t>("  ");
                ecx12 = reinterpret_cast<uint32_t>("  ");
                if (ebx13 & 0x1000000) {
                    eax24 = reinterpret_cast<uint32_t>("CF");
                }
                edx25 = reinterpret_cast<uint32_t>("OF");
                if (!(ebx13 & 0x10000)) {
                    edx25 = reinterpret_cast<uint32_t>("  ");
                }
                v6 = eax24;
                v5 = edx25;
                v19 = *reinterpret_cast<unsigned char*>(&ebx13);
                fun_8049040("  ", "adc_clear=(%3d,%s,%s)\n", v19, v5, v6, eax18, eax16, v21, v8);
            }
            if (ebx13 != v21) {
                fun_8049040(ecx12, "x=(%3d/0x%2x)   y=(%3d/0x%2x) ->", edi1, edi1, esi2, esi2, v19, v5, v6);
                ecx26 = reinterpret_cast<uint32_t>("  ");
                if (v21 & 0x1000000) {
                    ecx26 = reinterpret_cast<uint32_t>("CF");
                }
                eax27 = reinterpret_cast<uint32_t>("  ");
                if (v21 & 0x10000) {
                    eax27 = reinterpret_cast<uint32_t>("OF");
                }
                fun_8049040(ecx26, "adc_clear simu=(%3d,%s,%s) ", static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v21)), eax27, ecx26, eax18, eax16, v21, v8);
                eax28 = reinterpret_cast<uint32_t>("  ");
                if (ebx13 & 0x1000000) {
                    eax28 = reinterpret_cast<uint32_t>("CF");
                }
                edx29 = reinterpret_cast<uint32_t>("OF");
                if (!(ebx13 & 0x10000)) {
                    edx29 = reinterpret_cast<uint32_t>("  ");
                }
                v6 = eax28;
                v5 = edx29;
                v19 = *reinterpret_cast<unsigned char*>(&ebx13);
                fun_8049040("  ", "adc_clear=(%3d,%s,%s)\n", v19, v5, v6, eax18, eax16, v21, v8);
            }
            if (eax16 != eax18) {
                fun_8049040(eax18, "x=(%3d/0x%2x)   y=(%3d/0x%2x) ->", edi1, edi1, esi2, esi2, v19, v5, v6);
                ecx30 = v8;
                eax31 = reinterpret_cast<uint32_t>("  ");
                edx32 = reinterpret_cast<uint32_t>("  ");
                if (ecx30 & 0x1000000) {
                    edx32 = reinterpret_cast<uint32_t>("CF");
                }
                ebx33 = reinterpret_cast<uint32_t>("OF");
                if (ecx30 & 0x10000) {
                    eax31 = reinterpret_cast<uint32_t>("OF");
                }
                fun_8049040(ecx30, "add=(%3d,%s,%s) ", static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ecx30)), eax31, edx32, eax18, eax16, v21, v8);
                ecx34 = reinterpret_cast<uint32_t>("  ");
                if (eax16 & 0x1000000) {
                    ecx34 = reinterpret_cast<uint32_t>("CF");
                }
                ecx35 = eax16;
                eax36 = reinterpret_cast<uint32_t>("  ");
                if (eax16 & 0x10000) {
                    eax36 = reinterpret_cast<uint32_t>("OF");
                }
                fun_8049040(ecx35, "adc_set=(%3d,%s,%s) ", static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ecx35)), eax36, ecx34, eax18, eax16, v21, v8);
                ecx37 = eax18;
                eax38 = reinterpret_cast<uint32_t>("  ");
                if (ecx37 & 0x1000000) {
                    eax38 = reinterpret_cast<uint32_t>("CF");
                }
                if (!(ecx37 & 0x10000)) {
                    ebx33 = reinterpret_cast<uint32_t>("  ");
                }
                v6 = eax38;
                v5 = ebx33;
                fun_8049040(ecx37, "adc_set simu=(%3d,%s,%s)\n", static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ecx37)), v5, v6, eax18, eax16, v21, v8);
            }
            ++esi2;
        } while (esi2 != 0x100);
        ++edi1;
    } while (edi1 != 0x100);
    return 0;
}

void fun_8049452() {
}

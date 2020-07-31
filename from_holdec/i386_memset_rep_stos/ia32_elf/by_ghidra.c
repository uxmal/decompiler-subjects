typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef enum Elf_ProgramHeaderType_x86 {
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType_x86;

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_08049030(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int putc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = putc(__c,__stream);
  return iVar1;
}



undefined4 main(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    printf("%d",uVar1 % 10);
    uVar1 = uVar2;
  } while (uVar2 != 0x1e);
  puts("");
  buffer._28_2_ = 0x5f5f;
  buffer._0_4_ = 0x5f5f5f5f;
  buffer._4_4_ = 0x5f5f5f5f;
  buffer._8_4_ = 0x5f5f5f5f;
  buffer._12_4_ = 0x5f5f5f5f;
  buffer._16_4_ = 0x5f5f5f5f;
  buffer._20_4_ = 0x5f5f5f5f;
  buffer._24_4_ = 0x5f5f5f5f;
  print("initial");
  i386_memset_forward_b(0x804c02b,0x78,5);
  print("5 \'x\' from 3");
  i386_memset_forward_w(0x804c032,0x2928,3);
  print("3 \'()\' from 10");
  i386_memset_forward_l(0x804c03c,0x3e62613c,2);
  print("2 \'<ab>\' from 20");
  buffer._28_2_ = 0x5f5f;
  buffer._0_4_ = 0x5f5f5f5f;
  buffer._4_4_ = 0x5f5f5f5f;
  buffer._8_4_ = 0x5f5f5f5f;
  buffer._12_4_ = 0x5f5f5f5f;
  buffer._16_4_ = 0x5f5f5f5f;
  buffer._20_4_ = 0x5f5f5f5f;
  buffer._24_4_ = 0x5f5f5f5f;
  print("reset for following backward tests");
  i386_memset_backward_b(0x804c02f,0x78,5);
  print("5 \'x\' from 3");
  i386_memset_backward_w(0x804c036,0x2928,3);
  print("3 \'()\' from 10");
  i386_memset_backward_l(0x804c040,0x3e62613c,2);
  print("2 \'<ab>\' from 20");
  buffer._28_2_ = 0x5f5f;
  buffer._0_4_ = 0x5f5f5f5f;
  buffer._4_4_ = 0x5f5f5f5f;
  buffer._8_4_ = 0x5f5f5f5f;
  buffer._12_4_ = 0x5f5f5f5f;
  buffer._16_4_ = 0x5f5f5f5f;
  buffer._20_4_ = 0x5f5f5f5f;
  buffer._24_4_ = 0x5f5f5f5f;
  print("reset for following bi directional tests");
  i386_memset_both_b(0x804c02b,0x78,5,0);
  print("5 \'x\' from 3");
  i386_memset_both_b(0x804c02f,0x79,5,1);
  print("5 \'y\' from 3");
  buffer._28_2_ = 0x5f5f;
  buffer._0_4_ = 0x5f5f5f5f;
  buffer._4_4_ = 0x5f5f5f5f;
  buffer._8_4_ = 0x5f5f5f5f;
  buffer._12_4_ = 0x5f5f5f5f;
  buffer._16_4_ = 0x5f5f5f5f;
  buffer._20_4_ = 0x5f5f5f5f;
  buffer._24_4_ = 0x5f5f5f5f;
  print("reset for following bi directional tests");
  i386_memset_both_w(0x804c032,0x2928,3,0);
  print("3 \'()\' from 10");
  i386_memset_both_w(0x804c036,0x7d7b,3,1);
  print("3 \'{}\' from 10");
  buffer._28_2_ = 0x5f5f;
  buffer._0_4_ = 0x5f5f5f5f;
  buffer._4_4_ = 0x5f5f5f5f;
  buffer._8_4_ = 0x5f5f5f5f;
  buffer._12_4_ = 0x5f5f5f5f;
  buffer._16_4_ = 0x5f5f5f5f;
  buffer._20_4_ = 0x5f5f5f5f;
  buffer._24_4_ = 0x5f5f5f5f;
  print("reset for following bi directional tests");
  i386_memset_both_l(0x804c03c,0x3e62613c,2,0);
  print("2 \'<ab>\' from 20");
  i386_memset_both_l(0x804c040,0x5d42415b,2,1);
  print("2 \'[AB]\' from 20");
  return 0;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



int _annobin_init_c(void *param_1,void *param_2)

{
  int in_EAX;
  
  return in_EAX;
}



int _dl_relocate_static_pie(void *param_1,void *param_2)

{
  int in_EAX;
  
  return in_EAX;
}



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0804949c)
// WARNING: Removing unreachable block (ram,0x080494a5)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x080494e8)
// WARNING: Removing unreachable block (ram,0x080494f1)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6844 == '\0') {
    deregister_tm_clones();
    completed_6844 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



void print(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    pcVar1 = buffer + iVar2;
    iVar2 = iVar2 + 1;
    putc((int)*pcVar1,stdout);
  } while (iVar2 != 0x1e);
  printf(" : %s\n",param_1);
  return;
}



undefined4 i386_memset_forward_b(undefined *param_1,undefined param_2,int param_3)

{
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return 0;
}



undefined4 i386_memset_forward_w(undefined2 *param_1,undefined2 param_2,int param_3)

{
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return 0;
}



undefined4 i386_memset_forward_l(undefined4 *param_1,undefined4 param_2,int param_3)

{
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return 0;
}



undefined4 i386_memset_backward_b(undefined *param_1,undefined param_2,int param_3)

{
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    *param_1 = param_2;
    param_1 = param_1 + -1;
  }
  return 0;
}



undefined4 i386_memset_backward_w(undefined2 *param_1,undefined2 param_2,int param_3)

{
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    *param_1 = param_2;
    param_1 = param_1 + -1;
  }
  return 0;
}



undefined4 i386_memset_backward_l(undefined4 *param_1,undefined4 param_2,int param_3)

{
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    *param_1 = param_2;
    param_1 = param_1 + -1;
  }
  return 0;
}



undefined4 i386_memset_both_b(undefined *param_1,undefined param_2,int param_3,int param_4)

{
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    *param_1 = param_2;
    param_1 = param_1 + (uint)(param_4 != 0) * -2 + 1;
  }
  return 0;
}



undefined4 i386_memset_both_w(undefined2 *param_1,undefined2 param_2,int param_3,int param_4)

{
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    *param_1 = param_2;
    param_1 = param_1 + (uint)(param_4 != 0) * 0x7ffffffe + 1;
  }
  return 0;
}



undefined4 i386_memset_both_l(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    *param_1 = param_2;
    param_1 = param_1 + (uint)(param_4 != 0) * 0x3ffffffe + 1;
  }
  return 0;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int __libc_csu_init(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  iVar2 = 0;
  do {
    iVar1 = (*(code *)(&__frame_dummy_init_array_entry)[iVar2])(param_1,param_2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 1);
  return iVar1;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _fini(void)

{
  return;
}



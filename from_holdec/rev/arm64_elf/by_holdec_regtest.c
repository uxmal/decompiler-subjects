// Decompiled by holdec

// address: 00000fc0.0
// full-signature: func(main, return=[<int(undef, 8),null,unknown>], parameter=[<int(undef, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
d8 main(d4 argc, d1** argv)
{
  reg_var9 = UNDEF;
  reg_var8 = UNDEF;
  reg_var13 = UNDEF;
  reg_var17 = UNDEF;
  reg_var18 = UNDEF;
  reg_var6 = LOAD(stdin);
  (void) setlocale(6, "");
  (void) bindtextdomain("util-linux", "/usr/share/locale");
  (void) textdomain("util-linux");
  (void) F_00001740();
  (void) signal(2, &g_0x00001570);
  (void) signal(15, &g_0x00001570);
  reg_b = getopt_long(argc, argv, "Vh", &g_0x0001fc28, 0);
  if(reg_b == -1) goto L4;
  goto L397;

// calls     [6, 53]
// called    [0]
// deep-calls     {6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 53, 54, 62, 63, 65, 67, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 336, 337, 338, 340, 341, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 384, 393, 400, 412, 424, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 460, 461, 462, 463, 464, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 61}
// startStackOffset -128
// modifiedAddresses  [ALL]
L4:
  reg_d = SIGNED_EXTEND(LOAD(g_0x0001ffb8));
  reg_e = malloc(0x8000);
  reg_var4 = argv + reg_d * 8;
  if(reg_e != 0) goto L6;
  goto L53;

// calls     [9, 12]
// called    [4]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 61}
// startStackOffset -128
// modifiedAddresses  [ADDR(g_0x00020010)]
L6:
  reg_var2 = LOAD(argv + reg_d * 8);
  reg_var1 = 0x2000;
  reg_var3 = 0x2000;
  reg_var5 = 0;
  reg_var7 = &g_0x00001788;
  (void) STORE(&buffer_addr, reg_e);
  if(reg_var2 == 0) goto L12;
  goto L9;

// calls     [11, 47]
// called    [6, 40]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  [ALL]
L9:
  reg_q = fopen64(reg_var2, "r");
  reg_var6 = reg_q;
  if(reg_q != 0) goto L11;
  goto L47;

// calls     [12]
// called    [9]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  []
L11:
  reg_var7 = LOAD(reg_var4);
  reg_var4 += 8;
  goto L12;

// calls     [344]
// called    [6, 11]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  []
L12:
  reg_Bb = stdout;
  goto L344;

// calls     [43, 350]
// called    [305]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  []
L18:
  reg_var11 = UNSIGNED_EXTEND(reg_var8) * 4;
  reg_var10 = reg_var11 + -4;
  if(LOAD(reg_var10 + reg_var9) == 10) goto L43;
  goto L350;

// calls     [9, 42]
// called    [39, 47]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  []
L40:
  reg_var2 = LOAD(reg_var4);
  if(reg_var2 == 0) goto L42;
  goto L9;

// calls     [63]
// called    [40]
// deep-calls     {63}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  [ALL]
L42:
  (void) free(buffer_addr);
  reg_result = UNSIGNED_EXTEND(reg_var5);
  goto L63;

// calls     [44]
// called    [18]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  []
L43:
  reg_var16 = reg_var1;
  goto L44;

// calls     [31]
// called    [43, 311, 477]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  [ADD(LOAD(ADDR(g_0x00020010)), reg_pp_222)]
L44:
  reg_var12--;
  reg_var1 = reg_var16;
  reg_var3 = NARROW(reg_var1);
  (void) STORE(reg_var11 + buffer_addr, 0);
  goto L31;

// calls     [40]
// called    [9]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  [ALL]
L47:
  reg_Dp = dcgettext(reg_q, "cannot open %s", 5);
  reg_Dq = reg_var4;
  reg_var5 = 1;
  reg_var4 += 8;
  (void) warn(reg_Dp, NARROW(LOAD(reg_Dq)));
  goto L40;

// calls     [44]
// called    [30]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// modifiedAddresses  null
L477:
  reg_var16 = reg_var1;
  goto L44;

// calls     [39, 46]
// called    [305]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  [ALL]
L36:
  reg_Cs = ferror(reg_var6);
  if(reg_Cs != 0) {
    reg_var5 = 1;
    (void) warn("%s", NARROW(reg_var7));
  }
  (void) fclose(reg_var6);
  goto L40;

// calls     [30, 45]
// called    [311]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// modifiedAddresses  null
L354:
  if(reg_var21 != 0) {
    reg_var1 = reg_var17;
    reg_var3 = NARROW(reg_var1);
  }
  if(LOAD(reg_var13 + buffer_addr) == 10) goto L477;
  goto L31;

// calls     [338]
// called    [4]
// deep-calls     {54, 63, 67, 336, 337, 338, 340, 341, 384, 424, 460, 461, 462, 463, 464, 502, 503, 504, 505, 506, 507}
// deep-called    {0, 4, 61}
// startStackOffset -128
// modifiedAddresses  [ALL]
L53:
  (void) err(1, "cannot allocate %zu bytes", 0x8000);
  // not reached
  goto L63;

// calls     [326]
// called    [311]
// deep-calls     {49, 63, 65, 324, 325, 326, 328, 329, 372, 412, 448, 449, 450, 451, 452, 490, 491, 492, 493, 494, 495}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  [ALL]
L48:
  (void) err(1, "cannot allocate %zu bytes", reg_var18 * 8);
  // not reached
  goto L63;

// calls     [430]
// called    [12, 35]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// modifiedAddresses  null
L344:
  while(1) {
    reg_Be = fgetws(buffer_addr, reg_var3, reg_var6);
    if(reg_Be == 0) {
      reg_var20 = 1;
      break;
    }
    reg_Bf = buffer_addr;
    reg_Bg = wcslen(buffer_addr);
    reg_var12 = UNSIGNED_EXTEND(reg_Bg);
    if(reg_var12 != 0) {
      reg_var20 = 0;
      reg_var9 = reg_Bf;
      reg_var8 = reg_Bg;
      break;
    }
  }
  if(reg_var20 == 0) goto L18;
  goto L36;

// calls     [2, 51, 55]
// called    [0]
// deep-calls     {2, 3, 51, 52, 55, 56, 57, 58, 63, 64, 66, 318, 319, 320, 322, 323, 330, 331, 332, 334, 335, 366, 378, 406, 418, 434, 442, 443, 444, 445, 446, 454, 455, 456, 457, 458, 484, 485, 486, 487, 488, 489, 496, 497, 498, 499, 500, 501}
// deep-called    {0, 61}
// modifiedAddresses  null
L397:
  if(reg_b == 86) {
    reg_c = dcgettext("", "%s from %s\n", 5);
    (void) __printf_chk(1, reg_c, NARROW(LOAD(g_0x0001fff0)));
    (void) exit(0);
    // not reached
  } else if(reg_b == 104) {
    reg_Dw = LOAD(stdout);
    reg_Dx = dcgettext("", "Usage: %s [options] [file ...]\n", 5);
    (void) __fprintf_chk(reg_Dw, 1, reg_Dx, NARROW(LOAD(g_0x0001fff0)));
    (void) fputc(10, reg_Dw);
    reg_Dy = dcgettext("", "Reverse lines characterwise.\n", 5);
    (void) fputs(reg_Dy, reg_Dw);
    reg_Ea = dcgettext("", "\nOptions:\n", 5);
    (void) fputs(reg_Ea, reg_Dw);
    reg_Eb = dcgettext("", " -h, --help     display this help and exit\n", 5);
    (void) fputs(reg_Eb, reg_Dw);
    reg_Ec = dcgettext("", " -V, --version  output version information and exit\n", 5);
    (void) fputs(reg_Ec, reg_Dw);
    reg_Ed = dcgettext("", "\nFor more details see %s.\n", 5);
    (void) __fprintf_chk(reg_Dw, 1, reg_Ed, NARROW(&g_0x000018c8));
    if(reg_Dw == LOAD(stderr)) {
      reg_var19 = 1;
      reg_result = 1;
    } else {
      reg_var19 = 0;
      reg_result = 0;
    }
    (void) exit(reg_var19);
  } else {
    reg_Du = LOAD(stderr);
    reg_Dv = dcgettext("", "Try '%s --help' for more information.\n", 5);
    (void) __fprintf_chk(reg_Du, 1, reg_Dv, NARROW(LOAD(g_0x0001fff0)));
    (void) exit(1);
    // not reached
  }
  goto L63;

// calls     [393]
// called    [18]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// modifiedAddresses  null
L350:
  while(1) {
    reg_Cc = buffer_addr;
    reg_Cd = feof(reg_var6);
    if(reg_Cd != 0) {
      reg_var21 = 0;
      reg_var13 = reg_var10;
      break;
    }
    reg_Bm = realloc(reg_Cc, NARROW(reg_var1) * 8);
    reg_var16 = reg_var1 * 2;
    if(reg_var1 * 8 != 0 && reg_Bm == 0) {
      reg_var21 = 3;
      reg_var18 = reg_var1;
      break;
    }
    (void) STORE(&buffer_addr, reg_Bm);
    reg_Bo = fgetws(reg_Bm + reg_var11, reg_var3, reg_var6);
    if(reg_Bo == 0) {
      reg_var21 = 2;
      reg_var17 = reg_var16;
      break;
    }
    reg_Bp = buffer_addr;
    reg_Bq = wcslen(buffer_addr);
    reg_var11 = UNSIGNED_EXTEND(reg_Bq) * 4;
    reg_var12 = UNSIGNED_EXTEND(reg_Bq);
    reg_var10 = reg_var11 + -4;
    if(LOAD(reg_Bp + reg_var10) == 10) {
      reg_var21 = 1;
      break;
    }
    reg_var1 = reg_var16;
    reg_var3 = NARROW(reg_var1);
  }
  if(reg_var21 == 1) goto L44;
  if(reg_var21 != 0 && reg_var21 != 2) goto L48;
  goto L354;

// calls     [33, 35]
// called    [30, 44]
// deep-calls     {9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 62, 63, 65, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 324, 325, 326, 328, 329, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 372, 393, 400, 412, 430, 436, 437, 438, 439, 440, 448, 449, 450, 451, 452, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 490, 491, 492, 493, 494, 495, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// deep-called    {0, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 43, 44, 45, 46, 47, 61, 62, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 393, 400, 430, 436, 437, 438, 439, 440, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// startStackOffset -128
// modifiedAddresses  []
L31:
  reg_Ck = buffer_addr;
  if(reg_var12 / 2 != 0) {
    reg_var15 = reg_Ck;
    reg_var14 = reg_Ck + reg_var12 * 4;
    do {
      reg_Cp = LOAD(reg_var15);
      (void) STORE(reg_var15, LOAD(reg_var14 + -4));
      reg_var15 += 4;
      (void) STORE(reg_var14 + -4, reg_Cp);
      reg_var14 += -4;
    } while(reg_var15 != reg_Ck + (reg_var12 & 0x7ffffffffffffffe) * 2);
  }
  (void) fputws(reg_Ck, LOAD(reg_Bb));
  goto L344;

// is exit block
// calls     []
// called    [42, 329, 341, 434]
// deep-calls     {}
// deep-called    {0, 2, 3, 4, 6, 9, 11, 12, 14, 16, 18, 19, 23, 25, 26, 27, 30, 31, 33, 34, 35, 36, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 51, 52, 53, 54, 55, 56, 57, 58, 61, 62, 64, 65, 66, 67, 99, 100, 138, 139, 140, 141, 305, 311, 312, 313, 314, 316, 317, 318, 319, 320, 322, 323, 324, 325, 326, 328, 329, 330, 331, 332, 334, 335, 336, 337, 338, 340, 341, 342, 343, 344, 346, 347, 348, 349, 350, 352, 353, 354, 360, 366, 372, 378, 384, 393, 397, 400, 406, 412, 418, 424, 430, 434, 436, 437, 438, 439, 440, 442, 443, 444, 445, 446, 448, 449, 450, 451, 452, 454, 455, 456, 457, 458, 460, 461, 462, 463, 464, 466, 467, 468, 469, 470, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519}
// modifiedAddresses  null
L63:
  return reg_result;
}


/* { dg-do compile } */
/* { dg-options "-O2 -w" } */
/* { dg-final { scan-assembler-times "il\t.3,4611" 1 } } */
/* { dg-final { scan-assembler-times "il\t.3,4627" 25 } } */
/* { dg-final { scan-assembler-times "il\t.3,515" 3 } } */
/* { dg-final { scan-assembler-times "il\t.3,787" 1 } } */

#define MAKE_USHORT(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,aA,aB,aC,aD,aE,aF) ((unsigned short)(a2 << 8 | a3))

unsigned short cbd_0() { return MAKE_USHORT( 0x03, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_1() { return MAKE_USHORT( 0x10, 0x03, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_2() { return MAKE_USHORT( 0x10, 0x11, 0x03, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_3() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x03, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_4() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x03, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_5() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x03, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_6() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x03, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_7() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x03, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_8() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x03, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_9() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x03, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_a() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x03, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_b() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x03, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_c() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x03, 0x1D, 0x1E, 0x1F); }
unsigned short cbd_d() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x03, 0x1E, 0x1F); }
unsigned short cbd_e() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x03, 0x1F); }
unsigned short cbd_f() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x03); }
unsigned short chd_0() { return MAKE_USHORT( 0x02, 0x03, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short chd_2() { return MAKE_USHORT( 0x10, 0x11, 0x02, 0x03, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short chd_4() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x02, 0x03, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short chd_6() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x02, 0x03, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short chd_8() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x02, 0x03, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short chd_a() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x02, 0x03, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short chd_c() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x02, 0x03, 0x1E, 0x1F); }
unsigned short chd_e() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x02, 0x03); }
unsigned short cwd_0() { return MAKE_USHORT( 0x00, 0x01, 0x02, 0x03, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cwd_4() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x00, 0x01, 0x02, 0x03, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cwd_8() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x00, 0x01, 0x02, 0x03, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cwd_c() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x00, 0x01, 0x02, 0x03); }
unsigned short cdd_0() { return MAKE_USHORT( 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F); }
unsigned short cdd_8() { return MAKE_USHORT( 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07); }


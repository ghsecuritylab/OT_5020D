
#ifndef AUDIO_ACF_DEFAULT_H 
#define AUDIO_ACF_DEFAULT_H 
#define BES_LOUDNESS_HSF_COEFF \
0x7ECFC13, 0xF02A3B36, 0x7E8CA23, 0x7EABC14F,     \
0x7EB4F0C, 0xF02DF36C, 0x7E6BF36, 0x7E8DC16C,     \
0x7E385A3, 0xF03F3A7B, 0x7DD4311, 0x7E01C1F4,     \
0x7DA1709, 0xF054253E, 0x7D1C95A, 0x7D56C298,     \
0x7D6C2CA, 0xF05B867F, 0x7CDBD5F, 0x7D19C2D1,     \
0x7C751CD, 0xF07DBC74, 0x7BAFE48, 0x7BFEC3DA,     \
0x7B4AD39, 0xF0A6FF57, 0x7A46980, 0x7AA5C515,     \
0x7AE1CEE, 0xF0B5836B, 0x79C79B1, 0x7A2BC583,     \
0x78FC91E, 0xF0F882BF, 0x777E4BF, 0x77F0C777
#define BES_LOUDNESS_BPF_COEFF \
0x3F498462, 0x3CD97B9D, 0xC3DD0000,     \
0x3F3984CF, 0x3C947B30, 0xC4310000,     \
0x3EF286DD, 0x3B577922, 0xC5B50000,     \
0x3E9D8985, 0x39E1767A, 0xC7800000,     \
0x3E808A80, 0x395F757F, 0xC8200000,     \
0x3DFB8F56, 0x371370A9, 0xCAF00000,     \
    \
 0x43EB8BF7, 0x34357408, 0xC7DF0000,     \
0x443E8D57, 0x333B72A8, 0xC8860000,     \
0x45B69458, 0x2ECF6BA7, 0xCB790000,     \
0x47699E0B, 0x29B261F4, 0xCEE40000,     \
0x47FDA1BF, 0x27F35E40, 0xD00E0000,     \
0x4A91B481, 0x20324B7E, 0xD53C0000,     \
    \
 0x4769C128, 0x29B23ED7, 0xCEE40000,     \
0x47FDCA1D, 0x27F335E2, 0xD00E0000,     \
0x4A91F589, 0x20320A76, 0xD53C0000,     \
0x4D7526A1, 0x177DD95E, 0xDB0C0000,     \
0x4E6E351E, 0x1491CAE1, 0xDCFF0000,     \
0x52A858C5, 0x7DAA73A, 0xE57D0000,     \
    \
 0x4769E2B9, 0x29B21D46, 0xCEE40000,     \
0x47FDEFB5, 0x27F3104A, 0xD00E0000,     \
0x4A9128DB, 0x2032D724, 0xD53C0000,     \
0x4D75576C, 0x177DA893, 0xDB0C0000,     \
0x4E6E5ECE, 0x1491A131, 0xDCFF0000,     \
0x52A84000, 0x7DABFFF, 0xE57D0000
#define BES_LOUDNESS_DRC_FORGET_TABLE \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0
#define BES_LOUDNESS_WS_GAIN_MAX  0x0 
#define BES_LOUDNESS_WS_GAIN_MIN  0x0 
#define BES_LOUDNESS_FILTER_FIRST  0x0 
#define BES_LOUDNESS_GAIN_MAP_IN \
0xFFFFFFD5, 0xFFFFFFDA, 0xFFFFFFE8, 0xFFFFFFFB, 0x6
#define BES_LOUDNESS_GAIN_MAP_OUT \
0x6, 0xE, 0xE, 0x1, 0xFFFFFFFD
#endif 

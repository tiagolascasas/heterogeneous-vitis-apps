#include "cluster.h"
void cluster(int *accl_width, int *accl_height, float *accl_data, int *sData_width, int *sData_height,
                         float *sData_data, int *ones_width, int *ones_height, float *ones_data, int *quat_width,
                         int *quat_height, float *quat_data, float *STDDEV_ACCL, int *vel_width, int *vel_height,
                         float *vel_data, int *pos_width, int *pos_height, float *pos_data, float *acclTimeInterval,
                         int *n, float *M_STDDEV_POS, float *M_STDDEV_VEL, float *memregion_56_size9999992);
void cluster(int *accl_width, int *accl_height, float *accl_data, int *sData_width, int *sData_height,
                         float *sData_data, int *ones_width, int *ones_height, float *ones_data, int *quat_width,
                         int *quat_height, float *quat_data, float *STDDEV_ACCL, int *vel_width, int *vel_height,
                         float *vel_data, int *pos_width, int *pos_height, float *pos_data, float *acclTimeInterval,
                         int *n, float *M_STDDEV_POS, float *M_STDDEV_VEL, float *memregion_56_size9999992)
{
#pragma HLS INTERFACE m_axi port=accl_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=accl_width bundle=control
#pragma HLS INTERFACE m_axi port=accl_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=accl_height bundle=control
#pragma HLS INTERFACE m_axi port=accl_data bundle=gmem1 offset=slave
#pragma HLS INTERFACE s_axilite port=accl_data bundle=control
#pragma HLS INTERFACE m_axi port=sData_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=sData_width bundle=control
#pragma HLS INTERFACE m_axi port=sData_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=sData_height bundle=control
#pragma HLS INTERFACE m_axi port=sData_data bundle=gmem1 offset=slave
#pragma HLS INTERFACE s_axilite port=sData_data bundle=control
#pragma HLS INTERFACE m_axi port=ones_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=ones_width bundle=control
#pragma HLS INTERFACE m_axi port=ones_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=ones_height bundle=control
#pragma HLS INTERFACE m_axi port=ones_data bundle=gmem2 offset=slave
#pragma HLS INTERFACE s_axilite port=ones_data bundle=control
#pragma HLS INTERFACE m_axi port=quat_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=quat_width bundle=control
#pragma HLS INTERFACE m_axi port=quat_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=quat_height bundle=control
#pragma HLS INTERFACE m_axi port=quat_data bundle=gmem2 offset=slave
#pragma HLS INTERFACE s_axilite port=quat_data bundle=control
#pragma HLS INTERFACE s_axilite port=STDDEV_ACCL bundle=control
#pragma HLS INTERFACE m_axi port=vel_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=vel_width bundle=control
#pragma HLS INTERFACE m_axi port=vel_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=vel_height bundle=control
#pragma HLS INTERFACE m_axi port=vel_data bundle=gmem3 offset=slave
#pragma HLS INTERFACE s_axilite port=vel_data bundle=control
#pragma HLS INTERFACE m_axi port=pos_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=pos_width bundle=control
#pragma HLS INTERFACE m_axi port=pos_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=pos_height bundle=control
#pragma HLS INTERFACE m_axi port=pos_data bundle=gmem3 offset=slave
#pragma HLS INTERFACE s_axilite port=pos_data bundle=control
#pragma HLS INTERFACE s_axilite port=acclTimeInterval bundle=control
#pragma HLS INTERFACE s_axilite port=n bundle=control
#pragma HLS INTERFACE s_axilite port=M_STDDEV_POS bundle=control
#pragma HLS INTERFACE s_axilite port=M_STDDEV_VEL bundle=control
#pragma HLS INTERFACE m_axi port=memregion_56_size9999992 bundle=gmem4 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_56_size9999992 bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control
    float local_ones_data[2000];
#pragma HLS bind_storage variable = local_ones_data type = RAM_2P impl = BRAM
    memcpy(local_ones_data, ones_data, 8000);
    float local_sData_data[8];
#pragma HLS bind_storage variable = local_sData_data type = RAM_2P impl = BRAM
    memcpy(local_sData_data, sData_data, 32);
    float local_M_STDDEV_VEL;
    local_M_STDDEV_VEL = *M_STDDEV_VEL;
    float local_M_STDDEV_POS;
    local_M_STDDEV_POS = *M_STDDEV_POS;
    int local_n;
    local_n = *n;
    float local_acclTimeInterval;
    local_acclTimeInterval = *acclTimeInterval;
    float local_STDDEV_ACCL;
    local_STDDEV_ACCL = *STDDEV_ACCL;
    int local_ones_height;
    local_ones_height = *ones_height;
    int local_ones_width;
    local_ones_width = *ones_width;
    int local_sData_height;
    local_sData_height = *sData_height;
    int local_sData_width;
    local_sData_width = *sData_width;
    float memregion_122_size32000[8000];
#pragma HLS bind_storage variable = memregion_122_size32000 type = RAM_2P impl = BRAM
    float memregion_119_size32000[8000];
#pragma HLS bind_storage variable = memregion_119_size32000 type = RAM_2P impl = BRAM
    float memregion_116_size32000[8000];
#pragma HLS bind_storage variable = memregion_116_size32000 type = RAM_2P impl = BRAM
    float memregion_113_size32000[8000];
#pragma HLS bind_storage variable = memregion_113_size32000 type = RAM_2P impl = BRAM
    float memregion_107_size32000[8000];
#pragma HLS bind_storage variable = memregion_107_size32000 type = RAM_2P impl = BRAM
    float memregion_95_size32000[8000];
#pragma HLS bind_storage variable = memregion_95_size32000 type = RAM_2P impl = BRAM
    float memregion_92_size32000[8000];
#pragma HLS bind_storage variable = memregion_92_size32000 type = RAM_2P impl = BRAM
    float memregion_89_size32000[8000];
#pragma HLS bind_storage variable = memregion_89_size32000 type = RAM_2P impl = BRAM
    float memregion_86_size32000[8000];
#pragma HLS bind_storage variable = memregion_86_size32000 type = RAM_2P impl = BRAM
    float memregion_80_size32000[8000];
#pragma HLS bind_storage variable = memregion_80_size32000 type = RAM_2P impl = BRAM
    float memregion_65_size32000[8000];
#pragma HLS bind_storage variable = memregion_65_size32000 type = RAM_2P impl = BRAM
    float memregion_26_size32000[8000];
#pragma HLS bind_storage variable = memregion_26_size32000 type = RAM_2P impl = BRAM
    float memregion_23_size32000[8000];
#pragma HLS bind_storage variable = memregion_23_size32000 type = RAM_2P impl = BRAM
    float memregion_20_size32000[8000];
#pragma HLS bind_storage variable = memregion_20_size32000 type = RAM_2P impl = BRAM
    float memregion_17_size32000[8000];
#pragma HLS bind_storage variable = memregion_17_size32000 type = RAM_2P impl = BRAM
    float memregion_149_size24000[6000];
#pragma HLS bind_storage variable = memregion_149_size24000 type = RAM_2P impl = BRAM
    float memregion_146_size24000[6000];
#pragma HLS bind_storage variable = memregion_146_size24000 type = RAM_2P impl = BRAM
    float memregion_143_size24000[6000];
#pragma HLS bind_storage variable = memregion_143_size24000 type = RAM_2P impl = BRAM
    float memregion_140_size24000[6000];
#pragma HLS bind_storage variable = memregion_140_size24000 type = RAM_2P impl = BRAM
    float memregion_137_size24000[6000];
#pragma HLS bind_storage variable = memregion_137_size24000 type = RAM_2P impl = BRAM
    float memregion_134_size24000[6000];
#pragma HLS bind_storage variable = memregion_134_size24000 type = RAM_2P impl = BRAM
    float memregion_131_size24000[6000];
#pragma HLS bind_storage variable = memregion_131_size24000 type = RAM_2P impl = BRAM
    float memregion_128_size24000[6000];
#pragma HLS bind_storage variable = memregion_128_size24000 type = RAM_2P impl = BRAM
    float memregion_125_size24000[6000];
#pragma HLS bind_storage variable = memregion_125_size24000 type = RAM_2P impl = BRAM
    float memregion_104_size24000[6000];
#pragma HLS bind_storage variable = memregion_104_size24000 type = RAM_2P impl = BRAM
    float memregion_101_size24000[6000];
#pragma HLS bind_storage variable = memregion_101_size24000 type = RAM_2P impl = BRAM
    float memregion_98_size24000[6000];
#pragma HLS bind_storage variable = memregion_98_size24000 type = RAM_2P impl = BRAM
    float memregion_77_size24000[6000];
#pragma HLS bind_storage variable = memregion_77_size24000 type = RAM_2P impl = BRAM
    float memregion_74_size24000[6000];
#pragma HLS bind_storage variable = memregion_74_size24000 type = RAM_2P impl = BRAM
    float memregion_71_size24000[6000];
#pragma HLS bind_storage variable = memregion_71_size24000 type = RAM_2P impl = BRAM
    float memregion_68_size24000[6000];
#pragma HLS bind_storage variable = memregion_68_size24000 type = RAM_2P impl = BRAM
    float memregion_44_size24000[6000];
#pragma HLS bind_storage variable = memregion_44_size24000 type = RAM_2P impl = BRAM
    float memregion_41_size24000[6000];
#pragma HLS bind_storage variable = memregion_41_size24000 type = RAM_2P impl = BRAM
    float memregion_35_size24000[6000];
#pragma HLS bind_storage variable = memregion_35_size24000 type = RAM_2P impl = BRAM
    float memregion_29_size24000[6000];
#pragma HLS bind_storage variable = memregion_29_size24000 type = RAM_2P impl = BRAM
    float memregion_11_size24000[6000];
#pragma HLS bind_storage variable = memregion_11_size24000 type = RAM_2P impl = BRAM
    float memregion_110_size8000[2000];
#pragma HLS bind_storage variable = memregion_110_size8000 type = RAM_2P impl = BRAM
    float memregion_83_size8000[2000];
#pragma HLS bind_storage variable = memregion_83_size8000 type = RAM_2P impl = BRAM
    int memregion_62_size8000[2000];
#pragma HLS bind_storage variable = memregion_62_size8000 type = RAM_2P impl = BRAM
    float memregion_59_size8000[2000];
#pragma HLS bind_storage variable = memregion_59_size8000 type = RAM_2P impl = BRAM
    float memregion_50_size8000[2000];
#pragma HLS bind_storage variable = memregion_50_size8000 type = RAM_2P impl = BRAM
    float memregion_47_size8000[2000];
#pragma HLS bind_storage variable = memregion_47_size8000 type = RAM_2P impl = BRAM
    float memregion_38_size8000[2000];
#pragma HLS bind_storage variable = memregion_38_size8000 type = RAM_2P impl = BRAM
    float memregion_14_size8000[2000];
#pragma HLS bind_storage variable = memregion_14_size8000 type = RAM_2P impl = BRAM
    float memregion_32_size36[9];
#pragma HLS bind_storage variable = memregion_32_size36 type = RAM_2P impl = BRAM
    int memregion_148_size4;
    int memregion_147_size4;
    int memregion_145_size4;
    int memregion_144_size4;
    int memregion_142_size4;
    int memregion_141_size4;
    int memregion_139_size4;
    int memregion_138_size4;
    int memregion_136_size4;
    int memregion_135_size4;
    int memregion_133_size4;
    int memregion_132_size4;
    int memregion_130_size4;
    int memregion_129_size4;
    int memregion_127_size4;
    int memregion_126_size4;
    int memregion_124_size4;
    int memregion_123_size4;
    int memregion_121_size4;
    int memregion_120_size4;
    int memregion_118_size4;
    int memregion_117_size4;
    int memregion_115_size4;
    int memregion_114_size4;
    int memregion_112_size4;
    int memregion_111_size4;
    int memregion_109_size4;
    int memregion_108_size4;
    int memregion_106_size4;
    int memregion_105_size4;
    int memregion_103_size4;
    int memregion_102_size4;
    int memregion_100_size4;
    int memregion_99_size4;
    int memregion_97_size4;
    int memregion_96_size4;
    int memregion_94_size4;
    int memregion_93_size4;
    int memregion_91_size4;
    int memregion_90_size4;
    int memregion_88_size4;
    int memregion_87_size4;
    int memregion_85_size4;
    int memregion_84_size4;
    int memregion_82_size4;
    int memregion_81_size4;
    int memregion_79_size4;
    int memregion_78_size4;
    int memregion_76_size4;
    int memregion_75_size4;
    int memregion_73_size4;
    int memregion_72_size4;
    int memregion_70_size4;
    int memregion_69_size4;
    int memregion_67_size4;
    int memregion_66_size4;
    int memregion_64_size4;
    int memregion_63_size4;
    int memregion_61_size4;
    int memregion_60_size4;
    int memregion_58_size4;
    int memregion_57_size4;
    int memregion_55_size4;
    int memregion_54_size4;
    float memregion_53_size4;
    int memregion_52_size4;
    int memregion_51_size4;
    int memregion_49_size4;
    int memregion_48_size4;
    int memregion_46_size4;
    int memregion_45_size4;
    int memregion_43_size4;
    int memregion_42_size4;
    int memregion_40_size4;
    int memregion_39_size4;
    int memregion_37_size4;
    int memregion_36_size4;
    int memregion_34_size4;
    int memregion_33_size4;
    int memregion_31_size4;
    int memregion_30_size4;
    int memregion_28_size4;
    int memregion_27_size4;
    int memregion_25_size4;
    int memregion_24_size4;
    int memregion_22_size4;
    int memregion_21_size4;
    int memregion_19_size4;
    int memregion_18_size4;
    int memregion_16_size4;
    int memregion_15_size4;
    int memregion_13_size4;
    int memregion_12_size4;
    int memregion_10_size4;
    int memregion_9_size4;
    float memregion_8_size12[3];
    int memregion_7_size4;
    int memregion_6_size4;
    float memregion_5_size12[3];
    int memregion_4_size4;
    int memregion_3_size4;
#pragma clava bram_usage = 8 max_bram = 1824 bytes_per_bram = 2048
    int *gtemp_width;
    int *gtemp_height;
    float *gtemp_data;
#pragma clava param = sData_height type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = sData_width type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = sData_data type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 32
#pragma clava param = ones_height type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = ones_width type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = ones_data type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 8000
#pragma clava param = quat_height type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 4
#pragma clava param = quat_width type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 4
#pragma clava param = quat_data type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 32000
#pragma clava param = STDDEV_ACCL type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = vel_height type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 4
#pragma clava param = vel_width type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 4
#pragma clava param = vel_data type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 24000
#pragma clava param = pos_height type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 4
#pragma clava param = pos_width type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 4
#pragma clava param = pos_data type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 24000
#pragma clava param = acclTimeInterval type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = n type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = M_STDDEV_POS type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = M_STDDEV_VEL type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = accl_height type = WRAPPED_STRUCT_POINTER in = NONE out = LIVEOUT_USEDLATER size = 4
#pragma clava param = accl_width type = WRAPPED_STRUCT_POINTER in = NONE out = LIVEOUT_USEDLATER size = 4
#pragma clava param = accl_data type = WRAPPED_STRUCT_POINTER in = NONE out = LIVEOUT_USEDLATER size = 24000
    int *gravity_width;
    int *gravity_height;
    float *gravity_data;
    int *w_width;
    int *w_height;
    float *w_data;
    int *t_width;
    int *t_height;
    float *t_data;
    int *_scope6_s_width;
    int *_scope6_s_height;
    float *_scope6_s_data;
    int *_scope6_is_width;
    int *_scope6_is_height;
    float *_scope6_is_data;
    int _scope6_i;
    // cluster_fSetArray_rep25(): begin inline
    int i_i9;
    int j_i9;
    int *out_i9_width;
    int *out_i9_height;
    float *out_i9_data;
    // cluster_fMallocHandle_rep47(): begin inline
    int i_i61;
    int j_i61;
    int *out_i61_width;
    int *out_i61_height;
    float *out_i61_data;
    out_i61_width = &memregion_3_size4;
    out_i61_height = &memregion_4_size4;
    out_i61_data = memregion_5_size12;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    int _lit16 = 1;
    int _lit17 = 3;
    // cluster_fMallocHandle_out1_rep67(): begin inline
    (*out_i61_height) = _lit16;
    (*out_i61_width) = _lit17;
    out_i9_width = out_i61_width;
    out_i9_height = out_i61_height;
    out_i9_data = out_i61_data;
    // cluster_fMallocHandle_out1_rep67(): end inline
    // cluster_fMallocHandle_rep47(): end inline
    int _lit2 = 1;
    int _lit3 = 3;
    int _lit4 = 0;
    // cluster_fSetArray_out1_rep9(): begin inline
    for (i_i9 = 0; i_i9 < _lit2; i_i9++)
    {
#pragma HLS loop_tripcount max = 1
        for (j_i9 = 0; j_i9 < _lit3; j_i9++)
        {
            int __idxExpr20 = i_i9 * (*out_i9_width) + j_i9;
#pragma HLS loop_tripcount max = 3
            out_i9_data[__idxExpr20] = _lit4;
        }
    }
    t_width = out_i9_width;
    t_height = out_i9_height;
    t_data = out_i9_data;
    // cluster_fSetArray_out1_rep9(): end inline
    // cluster_fSetArray_rep25(): end inline
    // cluster_updateState_out7_out1(): begin inline
    t_data[2] = -9.8;
    // cluster_updateState_out7_out1(): end inline
    // cluster_fDeepCopyRange_rep6(): begin inline
    int cols_i11;
    int rows_i11;
    int *out_i11_width;
    int *out_i11_height;
    float *out_i11_data;
    int k_i11;
    int j_i11;
    int i_i11;
    int _lit7 = 1;
    int _lit8 = 0;
    int _lit9 = 3;
    int _lit10 = 0;
    // cluster_fDeepCopyRange_out0_rep1(): begin inline
    rows_i11 = _lit7 + _lit8;
    cols_i11 = _lit9 + _lit10;
    // cluster_fDeepCopyRange_out0_rep1(): end inline
    // cluster_fMallocHandle_rep2(): begin inline
    int i_i64;
    int j_i64;
    int *out_i64_width;
    int *out_i64_height;
    float *out_i64_data;
    out_i64_width = &memregion_6_size4;
    out_i64_height = &memregion_7_size4;
    out_i64_data = memregion_8_size12;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    int _lit18 = 1;
    int _lit19 = 3;
    // cluster_fMallocHandle_out1_rep19(): begin inline
    (*out_i64_height) = _lit18;
    (*out_i64_width) = _lit19;
    out_i11_width = out_i64_width;
    out_i11_height = out_i64_height;
    out_i11_data = out_i64_data;
    // cluster_fMallocHandle_out1_rep19(): end inline
    // cluster_fMallocHandle_rep2(): end inline
    int _lit5 = 0;
    int _lit6 = 0;
    // cluster_fDeepCopyRange_out1_rep1(): begin inline
    k_i11 = 0;
    for (i_i11 = _lit5; i_i11 < rows_i11; i_i11++)
    {
#pragma HLS loop_tripcount max = 1
        for (j_i11 = _lit6; j_i11 < cols_i11; j_i11++)
        {
            int __idxExpr21 = i_i11 * (local_sData_width) + j_i11;
#pragma HLS loop_tripcount max = 3
            out_i11_data[k_i11++] = local_sData_data[__idxExpr21];
        }
    }
    memcpy(accl_width, out_i11_width, 4);
    memcpy(accl_height, out_i11_height, 4);
    memcpy(accl_data, out_i11_data, 12);
    /*24000*/
    // cluster_fDeepCopyRange_out1_rep1(): end inline
    // cluster_fDeepCopyRange_rep6(): end inline
    // cluster_fMtimes_rep6(): begin inline
    float temp_i12;
    int k_i12;
    int j_i12;
    int i_i12;
    int n_i12;
    int p_i12;
    int m_i12;
    int *out_i12_width;
    int *out_i12_height;
    float *out_i12_data;
    // cluster_fMtimes_out0_rep2(): begin inline
    int p1_i66;
    m_i12 = (local_ones_height);
    p_i12 = (local_ones_width);
    p1_i66 = (*t_height);
    n_i12 = (*t_width);
    // cluster_fMtimes_out0_rep2(): end inline
    // cluster_fMallocHandle_rep23(): begin inline
    int i_i67;
    int j_i67;
    int *out_i67_width;
    int *out_i67_height;
    float *out_i67_data;
    out_i67_width = &memregion_9_size4;
    out_i67_height = &memregion_10_size4;
    out_i67_data = memregion_11_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep29(): begin inline
    (*out_i67_height) = m_i12;
    (*out_i67_width) = n_i12;
    out_i12_width = out_i67_width;
    out_i12_height = out_i67_height;
    out_i12_data = out_i67_data;
    // cluster_fMallocHandle_out1_rep29(): end inline
    // cluster_fMallocHandle_rep23(): end inline
    // cluster_fMtimes_out1_rep2(): begin inline
    for (i_i12 = 0; i_i12 < m_i12; i_i12++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i12 = 0; j_i12 < n_i12; j_i12++)
        {
#pragma HLS loop_tripcount max = 3
            temp_i12 = 0;
            for (k_i12 = 0; k_i12 < p_i12; k_i12++)
            {
                int __idxExpr22 = k_i12 * (*t_width) + j_i12;
                int __idxExpr23 = i_i12 * (local_ones_width) + k_i12;
#pragma HLS loop_tripcount max = 1
                temp_i12 = temp_i12 + t_data[__idxExpr22] * local_ones_data[__idxExpr23];
            }
            int __idxExpr24 = i_i12 * (*out_i12_width) + j_i12;
            out_i12_data[__idxExpr24] = temp_i12;
        }
    }
    gtemp_width = out_i12_width;
    gtemp_height = out_i12_height;
    gtemp_data = out_i12_data;
    int *retVec_i13_width;
    int *retVec_i13_height;
    float *retVec_i13_data;
    // cluster_fMtimes_out1_rep2(): end inline
    // cluster_fMtimes_rep6(): end inline
    // cluster_quatRot_rep1(): begin inline
    int *temp1_i13_width;
    int *temp1_i13_height;
    float *temp1_i13_data;
    int *temp_i13_width;
    int *temp_i13_height;
    float *temp_i13_data;
    int *vQuat_i13_width;
    int *vQuat_i13_height;
    float *vQuat_i13_data;
    int *tv_i13_width;
    int *tv_i13_height;
    float *tv_i13_data;
    int cols_i13;
    int rows_i13;
    int k_i13;
    int j_i13;
    int i_i13;
    int nr_i13;
    int *ret_i13_width;
    int *ret_i13_height;
    float *ret_i13_data;
    // cluster_quatRot_out0_rep3(): begin inline
    nr_i13 = (*gtemp_height);
    // cluster_quatRot_out0_rep3(): end inline
    // cluster_fSetArray_rep90(): begin inline
    int i_i70;
    int j_i70;
    int *out_i70_width;
    int *out_i70_height;
    float *out_i70_data;
    // cluster_fMallocHandle_rep173(): begin inline
    int i_i196;
    int j_i196;
    int *out_i196_width;
    int *out_i196_height;
    float *out_i196_data;
    out_i196_width = &memregion_12_size4;
    out_i196_height = &memregion_13_size4;
    out_i196_data = memregion_14_size8000;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    int _lit45 = 1;
    // cluster_fMallocHandle_out1_rep194(): begin inline
    (*out_i196_height) = nr_i13;
    (*out_i196_width) = _lit45;
    out_i70_width = out_i196_width;
    out_i70_height = out_i196_height;
    out_i70_data = out_i196_data;
    // cluster_fMallocHandle_out1_rep194(): end inline
    // cluster_fMallocHandle_rep173(): end inline
    int _lit20 = 1;
    int _lit21 = 0;
    // cluster_fSetArray_out1_rep99(): begin inline
    for (i_i70 = 0; i_i70 < nr_i13; i_i70++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i70 = 0; j_i70 < _lit20; j_i70++)
        {
            int __idxExpr25 = i_i70 * (*out_i70_width) + j_i70;
#pragma HLS loop_tripcount max = 1
            out_i70_data[__idxExpr25] = _lit21;
        }
    }
    tv_i13_width = out_i70_width;
    tv_i13_height = out_i70_height;
    tv_i13_data = out_i70_data;
    // cluster_fSetArray_out1_rep99(): end inline
    // cluster_fSetArray_rep90(): end inline
    // cluster_fHorzcat_rep5(): begin inline
    int c_2_i71;
    int c_1_i71;
    int k_i71;
    int j_i71;
    int i_i71;
    int cols_i71;
    int rows_i71;
    int *out_i71_width;
    int *out_i71_height;
    float *out_i71_data;
    int *out__i198_width;
    int *out__i198_height;
    float *out__i198_data;
    // cluster_fHorzcat_out0_rep5(): begin inline
    int *c_i198_width;
    int *c_i198_height;
    float *c_i198_data;
    int r_3_i198;
    int c_3_i198;
    int r_1_i198;
    rows_i71 = 0;
    cols_i71 = 0;
    r_1_i198 = (*tv_i13_height);
    c_1_i71 = (*tv_i13_width);
    cols_i71 = cols_i71 + c_1_i71;
    c_2_i71 = (*gtemp_width);
    cols_i71 = cols_i71 + c_2_i71;
    rows_i71 = r_1_i198;
    // cluster_fHorzcat_out0_rep5(): end inline
    // cluster_fMallocHandle_rep179(): begin inline
    int i_i199;
    int j_i199;
    int *out_i199_width;
    int *out_i199_height;
    float *out_i199_data;
    out_i199_width = &memregion_15_size4;
    out_i199_height = &memregion_16_size4;
    out_i199_data = memregion_17_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    // cluster_fMallocHandle_out1_rep201(): begin inline
    (*out_i199_height) = rows_i71;
    (*out_i199_width) = cols_i71;
    out_i71_width = out_i199_width;
    out_i71_height = out_i199_height;
    out_i71_data = out_i199_data;
    // cluster_fMallocHandle_out1_rep201(): end inline
    // cluster_fMallocHandle_rep179(): end inline
    // cluster_fHorzcat_out1_rep5(): begin inline
    for (i_i71 = 0; i_i71 < rows_i71; i_i71++)
    {
#pragma HLS loop_tripcount max = 2000
        k_i71 = 0;
        for (j_i71 = 0; j_i71 < c_1_i71; j_i71++)
        {
            int __idxExpr26 = i_i71 * (*out_i71_width) + k_i71;
            int __idxExpr27 = i_i71 * (*tv_i13_width) + j_i71;
#pragma HLS loop_tripcount max = 1
            out_i71_data[__idxExpr26] = tv_i13_data[__idxExpr27];
            k_i71++;
        }
        for (j_i71 = 0; j_i71 < c_2_i71; j_i71++)
        {
            int __idxExpr28 = i_i71 * (*out_i71_width) + k_i71;
            int __idxExpr29 = i_i71 * (*gtemp_width) + j_i71;
#pragma HLS loop_tripcount max = 3
            out_i71_data[__idxExpr28] = gtemp_data[__idxExpr29];
            k_i71++;
        }
    }
    vQuat_i13_width = out_i71_width;
    vQuat_i13_height = out_i71_height;
    vQuat_i13_data = out_i71_data;
    // cluster_fHorzcat_out1_rep5(): end inline
    // cluster_fHorzcat_rep5(): end inline
    // cluster_quatMul_rep7(): begin inline
    int k_i72;
    int j_i72;
    int i_i72;
    int *ret_i72_width;
    int *ret_i72_height;
    float *ret_i72_data;
    int rb_i72;
    int ra_i72;
    // cluster_quatMul_out0_rep7(): begin inline
    int ca_i201;
    int cb_i201;
    k_i72 = 0;
    ra_i72 = (*quat_height);
    ca_i201 = (*quat_width);
    rb_i72 = (*vQuat_i13_height);
    cb_i201 = (*vQuat_i13_width);
    // cluster_quatMul_out0_rep7(): end inline
    // cluster_fSetArray_rep110(): begin inline
    int i_i202;
    int j_i202;
    int *out_i202_width;
    int *out_i202_height;
    float *out_i202_data;
    // cluster_fMallocHandle_rep206(): begin inline
    int i_i318;
    int j_i318;
    int *out_i318_width;
    int *out_i318_height;
    float *out_i318_data;
    out_i318_width = &memregion_18_size4;
    out_i318_height = &memregion_19_size4;
    out_i318_data = memregion_20_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    int _lit83 = 4;
    // cluster_fMallocHandle_out1_rep229(): begin inline
    (*out_i318_height) = ra_i72;
    (*out_i318_width) = _lit83;
    out_i202_width = out_i318_width;
    out_i202_height = out_i318_height;
    out_i202_data = out_i318_data;
    // cluster_fMallocHandle_out1_rep229(): end inline
    // cluster_fMallocHandle_rep206(): end inline
    int _lit46 = 4;
    int _lit47 = 0;
    // cluster_fSetArray_out1_rep126(): begin inline
    for (i_i202 = 0; i_i202 < ra_i72; i_i202++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i202 = 0; j_i202 < _lit46; j_i202++)
        {
            int __idxExpr30 = i_i202 * (*out_i202_width) + j_i202;
#pragma HLS loop_tripcount max = 4
            out_i202_data[__idxExpr30] = _lit47;
        }
    }
    ret_i72_width = out_i202_width;
    ret_i72_height = out_i202_height;
    ret_i72_data = out_i202_data;
    // cluster_fSetArray_out1_rep126(): end inline
    // cluster_fSetArray_rep110(): end inline
    // cluster_quatMul_out1_rep7(): begin inline
    j_i72 = 0;
    for (i_i72 = 0; i_i72 < ra_i72; i_i72++)
    {
#pragma HLS loop_tripcount max = 2000
        float ai0_i203;
        float ai1_i203;
        float ai2_i203;
        float ai3_i203;
        float bj0_i203;
        float bj1_i203;
        float bj2_i203;
        float bj3_i203;
        int decomp_0_renamed_73_i203;
        k_i72 = 0;
        int __idxExpr31 = i_i72 * (*quat_width) + 0;
        ai0_i203 = quat_data[__idxExpr31];
        int __idxExpr32 = i_i72 * (*quat_width) + 1;
        ai1_i203 = quat_data[__idxExpr32];
        int __idxExpr33 = i_i72 * (*quat_width) + 2;
        ai2_i203 = quat_data[__idxExpr33];
        int __idxExpr34 = i_i72 * (*quat_width) + 3;
        ai3_i203 = quat_data[__idxExpr34];
        int __idxExpr35 = j_i72 * (*vQuat_i13_width) + 0;
        bj0_i203 = vQuat_i13_data[__idxExpr35];
        int __idxExpr36 = j_i72 * (*vQuat_i13_width) + 1;
        bj1_i203 = vQuat_i13_data[__idxExpr36];
        int __idxExpr37 = j_i72 * (*vQuat_i13_width) + 2;
        bj2_i203 = vQuat_i13_data[__idxExpr37];
        int __idxExpr38 = j_i72 * (*vQuat_i13_width) + 3;
        bj3_i203 = vQuat_i13_data[__idxExpr38];
        int __idxExpr39 = i_i72 * (*ret_i72_width) + (k_i72++);
        ret_i72_data[__idxExpr39] =
            ai0_i203 * bj0_i203 - ai1_i203 * bj1_i203 - ai2_i203 * bj2_i203 - ai3_i203 * bj3_i203;
        int __idxExpr40 = i_i72 * (*ret_i72_width) + (k_i72++);
        ret_i72_data[__idxExpr40] =
            ai0_i203 * bj1_i203 + ai1_i203 * bj0_i203 + ai2_i203 * bj3_i203 - ai3_i203 * bj2_i203;
        int __idxExpr41 = i_i72 * (*ret_i72_width) + (k_i72++);
        ret_i72_data[__idxExpr41] =
            ai0_i203 * bj2_i203 - ai1_i203 * bj3_i203 + ai2_i203 * bj0_i203 + ai3_i203 * bj1_i203;
        int __idxExpr42 = i_i72 * (*ret_i72_width) + (k_i72++);
        ret_i72_data[__idxExpr42] =
            ai0_i203 * bj3_i203 + ai1_i203 * bj2_i203 - ai2_i203 * bj1_i203 + ai3_i203 * bj0_i203;
        decomp_0_renamed_73_i203 = rb_i72 == ra_i72;
        if (decomp_0_renamed_73_i203)
        {
            j_i72++;
        }
    }
    temp_i13_width = ret_i72_width;
    temp_i13_height = ret_i72_height;
    temp_i13_data = ret_i72_data;
    // cluster_quatMul_out1_rep7(): end inline
    // cluster_quatMul_rep7(): end inline
    // cluster_quatConj_rep7(): begin inline
    int k_i73;
    int i_i73;
    int rows_i73;
    int *retQuat_i73_width;
    int *retQuat_i73_height;
    float *retQuat_i73_data;
    // cluster_quatConj_out0_rep7(): begin inline
    int cols_i204;
    int j_i204;
    rows_i73 = (*quat_height);
    cols_i204 = (*quat_width);
    // cluster_quatConj_out0_rep7(): end inline
    // cluster_fSetArray_rep116(): begin inline
    int i_i205;
    int j_i205;
    int *out_i205_width;
    int *out_i205_height;
    float *out_i205_data;
    // cluster_fMallocHandle_rep213(): begin inline
    int i_i320;
    int j_i320;
    int *out_i320_width;
    int *out_i320_height;
    float *out_i320_data;
    out_i320_width = &memregion_21_size4;
    out_i320_height = &memregion_22_size4;
    out_i320_data = memregion_23_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    int _lit84 = 4;
    // cluster_fMallocHandle_out1_rep237(): begin inline
    (*out_i320_height) = rows_i73;
    (*out_i320_width) = _lit84;
    out_i205_width = out_i320_width;
    out_i205_height = out_i320_height;
    out_i205_data = out_i320_data;
    // cluster_fMallocHandle_out1_rep237(): end inline
    // cluster_fMallocHandle_rep213(): end inline
    int _lit48 = 4;
    int _lit49 = 0;
    // cluster_fSetArray_out1_rep133(): begin inline
    for (i_i205 = 0; i_i205 < rows_i73; i_i205++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i205 = 0; j_i205 < _lit48; j_i205++)
        {
            int __idxExpr43 = i_i205 * (*out_i205_width) + j_i205;
#pragma HLS loop_tripcount max = 4
            out_i205_data[__idxExpr43] = _lit49;
        }
    }
    retQuat_i73_width = out_i205_width;
    retQuat_i73_height = out_i205_height;
    retQuat_i73_data = out_i205_data;
    // cluster_fSetArray_out1_rep133(): end inline
    // cluster_fSetArray_rep116(): end inline
    // cluster_quatConj_out1_rep7(): begin inline
    for (i_i73 = 0; i_i73 < rows_i73; i_i73++)
    {
#pragma HLS loop_tripcount max = 2000
        k_i73 = 0;
        int __idxExpr44 = i_i73 * (*retQuat_i73_width) + (k_i73++);
        int __idxExpr45 = i_i73 * (*quat_width) + 0;
        retQuat_i73_data[__idxExpr44] = quat_data[__idxExpr45];
        int __idxExpr46 = i_i73 * (*retQuat_i73_width) + (k_i73++);
        int __idxExpr47 = i_i73 * (*quat_width) + 1;
        retQuat_i73_data[__idxExpr46] = -quat_data[__idxExpr47];
        int __idxExpr48 = i_i73 * (*retQuat_i73_width) + (k_i73++);
        int __idxExpr49 = i_i73 * (*quat_width) + 2;
        retQuat_i73_data[__idxExpr48] = -quat_data[__idxExpr49];
        int __idxExpr50 = i_i73 * (*retQuat_i73_width) + k_i73;
        int __idxExpr51 = i_i73 * (*quat_width) + 3;
        retQuat_i73_data[__idxExpr50] = -quat_data[__idxExpr51];
    }
    temp1_i13_width = retQuat_i73_width;
    temp1_i13_height = retQuat_i73_height;
    temp1_i13_data = retQuat_i73_data;
    // cluster_quatConj_out1_rep7(): end inline
    // cluster_quatConj_rep7(): end inline
    // cluster_quatMul_rep12(): begin inline
    int k_i74;
    int j_i74;
    int i_i74;
    int *ret_i74_width;
    int *ret_i74_height;
    float *ret_i74_data;
    int rb_i74;
    int ra_i74;
    // cluster_quatMul_out0_rep13(): begin inline
    int ca_i207;
    int cb_i207;
    k_i74 = 0;
    ra_i74 = (*temp_i13_height);
    ca_i207 = (*temp_i13_width);
    rb_i74 = (*temp1_i13_height);
    cb_i207 = (*temp1_i13_width);
    // cluster_quatMul_out0_rep13(): end inline
    // cluster_fSetArray_rep122(): begin inline
    int i_i208;
    int j_i208;
    int *out_i208_width;
    int *out_i208_height;
    float *out_i208_data;
    // cluster_fMallocHandle_rep220(): begin inline
    int i_i322;
    int j_i322;
    int *out_i322_width;
    int *out_i322_height;
    float *out_i322_data;
    out_i322_width = &memregion_24_size4;
    out_i322_height = &memregion_25_size4;
    out_i322_data = memregion_26_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    int _lit85 = 4;
    // cluster_fMallocHandle_out1_rep245(): begin inline
    (*out_i322_height) = ra_i74;
    (*out_i322_width) = _lit85;
    out_i208_width = out_i322_width;
    out_i208_height = out_i322_height;
    out_i208_data = out_i322_data;
    // cluster_fMallocHandle_out1_rep245(): end inline
    // cluster_fMallocHandle_rep220(): end inline
    int _lit50 = 4;
    int _lit51 = 0;
    // cluster_fSetArray_out1_rep140(): begin inline
    for (i_i208 = 0; i_i208 < ra_i74; i_i208++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i208 = 0; j_i208 < _lit50; j_i208++)
        {
            int __idxExpr52 = i_i208 * (*out_i208_width) + j_i208;
#pragma HLS loop_tripcount max = 4
            out_i208_data[__idxExpr52] = _lit51;
        }
    }
    ret_i74_width = out_i208_width;
    ret_i74_height = out_i208_height;
    ret_i74_data = out_i208_data;
    // cluster_fSetArray_out1_rep140(): end inline
    // cluster_fSetArray_rep122(): end inline
    // cluster_quatMul_out1_rep13(): begin inline
    j_i74 = 0;
    for (i_i74 = 0; i_i74 < ra_i74; i_i74++)
    {
#pragma HLS loop_tripcount max = 2000
        float ai0_i209;
        float ai1_i209;
        float ai2_i209;
        float ai3_i209;
        float bj0_i209;
        float bj1_i209;
        float bj2_i209;
        float bj3_i209;
        int decomp_0_renamed_74_i209;
        k_i74 = 0;
        int __idxExpr53 = i_i74 * (*temp_i13_width) + 0;
        ai0_i209 = temp_i13_data[__idxExpr53];
        int __idxExpr54 = i_i74 * (*temp_i13_width) + 1;
        ai1_i209 = temp_i13_data[__idxExpr54];
        int __idxExpr55 = i_i74 * (*temp_i13_width) + 2;
        ai2_i209 = temp_i13_data[__idxExpr55];
        int __idxExpr56 = i_i74 * (*temp_i13_width) + 3;
        ai3_i209 = temp_i13_data[__idxExpr56];
        int __idxExpr57 = j_i74 * (*temp1_i13_width) + 0;
        bj0_i209 = temp1_i13_data[__idxExpr57];
        int __idxExpr58 = j_i74 * (*temp1_i13_width) + 1;
        bj1_i209 = temp1_i13_data[__idxExpr58];
        int __idxExpr59 = j_i74 * (*temp1_i13_width) + 2;
        bj2_i209 = temp1_i13_data[__idxExpr59];
        int __idxExpr60 = j_i74 * (*temp1_i13_width) + 3;
        bj3_i209 = temp1_i13_data[__idxExpr60];
        int __idxExpr61 = i_i74 * (*ret_i74_width) + (k_i74++);
        ret_i74_data[__idxExpr61] =
            ai0_i209 * bj0_i209 - ai1_i209 * bj1_i209 - ai2_i209 * bj2_i209 - ai3_i209 * bj3_i209;
        int __idxExpr62 = i_i74 * (*ret_i74_width) + (k_i74++);
        ret_i74_data[__idxExpr62] =
            ai0_i209 * bj1_i209 + ai1_i209 * bj0_i209 + ai2_i209 * bj3_i209 - ai3_i209 * bj2_i209;
        int __idxExpr63 = i_i74 * (*ret_i74_width) + (k_i74++);
        ret_i74_data[__idxExpr63] =
            ai0_i209 * bj2_i209 - ai1_i209 * bj3_i209 + ai2_i209 * bj0_i209 + ai3_i209 * bj1_i209;
        int __idxExpr64 = i_i74 * (*ret_i74_width) + (k_i74++);
        ret_i74_data[__idxExpr64] =
            ai0_i209 * bj3_i209 + ai1_i209 * bj2_i209 - ai2_i209 * bj1_i209 + ai3_i209 * bj0_i209;
        decomp_0_renamed_74_i209 = rb_i74 == ra_i74;
        if (decomp_0_renamed_74_i209)
        {
            j_i74++;
        }
    }
    retVec_i13_width = ret_i74_width;
    retVec_i13_height = ret_i74_height;
    retVec_i13_data = ret_i74_data;
    // cluster_quatMul_out1_rep13(): end inline
    // cluster_quatMul_rep12(): end inline
    // cluster_quatRot_out1_rep3(): begin inline
    rows_i13 = (*retVec_i13_height);
    cols_i13 = (*retVec_i13_width);
    // cluster_quatRot_out1_rep3(): end inline
    // cluster_fSetArray_rep95(): begin inline
    int i_i76;
    int j_i76;
    int *out_i76_width;
    int *out_i76_height;
    float *out_i76_data;
    // cluster_fMallocHandle_rep185(): begin inline
    int i_i210;
    int j_i210;
    int *out_i210_width;
    int *out_i210_height;
    float *out_i210_data;
    out_i210_width = &memregion_27_size4;
    out_i210_height = &memregion_28_size4;
    out_i210_data = memregion_29_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    int _lit52 = 3;
    // cluster_fMallocHandle_out1_rep208(): begin inline
    (*out_i210_height) = rows_i13;
    (*out_i210_width) = _lit52;
    out_i76_width = out_i210_width;
    out_i76_height = out_i210_height;
    out_i76_data = out_i210_data;
    // cluster_fMallocHandle_out1_rep208(): end inline
    // cluster_fMallocHandle_rep185(): end inline
    int _lit22 = 3;
    int _lit23 = 0;
    // cluster_fSetArray_out1_rep105(): begin inline
    for (i_i76 = 0; i_i76 < rows_i13; i_i76++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i76 = 0; j_i76 < _lit22; j_i76++)
        {
            int __idxExpr65 = i_i76 * (*out_i76_width) + j_i76;
#pragma HLS loop_tripcount max = 3
            out_i76_data[__idxExpr65] = _lit23;
        }
    }
    ret_i13_width = out_i76_width;
    ret_i13_height = out_i76_height;
    ret_i13_data = out_i76_data;
    // cluster_fSetArray_out1_rep105(): end inline
    // cluster_fSetArray_rep95(): end inline
    // cluster_quatRot_out2_rep3(): begin inline
    for (i_i13 = 0; i_i13 < rows_i13; i_i13++)
    {
#pragma HLS loop_tripcount max = 2000
        k_i13 = 0;
        for (j_i13 = 1; j_i13 < 4; j_i13++)
        {
            int __idxExpr66 = i_i13 * (*ret_i13_width) + k_i13;
            int __idxExpr67 = i_i13 * (*retVec_i13_width) + j_i13;
#pragma HLS loop_tripcount max = 3
            ret_i13_data[__idxExpr66] = retVec_i13_data[__idxExpr67];
            k_i13++;
        }
    }
    // cluster_quatRot_out2_rep3(): end inline
    // cluster_fFreeHandle_rep138(): begin inline
    int decomp_0_renamed_26_i78;
    // cluster_fFreeHandle_out0_rep147(): begin inline
    decomp_0_renamed_26_i78 = tv_i13_data != nullptr;
    // cluster_fFreeHandle_out0_rep147(): end inline
    if (decomp_0_renamed_26_i78)
    {
        // free(tv_i13_data);
    }
    // cluster_fFreeHandle_rep138(): end inline
    // cluster_fFreeHandle_rep143(): begin inline
    int decomp_0_renamed_27_i79;
    // cluster_fFreeHandle_out0_rep153(): begin inline
    decomp_0_renamed_27_i79 = vQuat_i13_data != nullptr;
    // cluster_fFreeHandle_out0_rep153(): end inline
    if (decomp_0_renamed_27_i79)
    {
        // free(vQuat_i13_data);
    }
    // cluster_fFreeHandle_rep143(): end inline
    // cluster_fFreeHandle_rep148(): begin inline
    int decomp_0_renamed_28_i80;
    // cluster_fFreeHandle_out0_rep159(): begin inline
    decomp_0_renamed_28_i80 = temp_i13_data != nullptr;
    // cluster_fFreeHandle_out0_rep159(): end inline
    if (decomp_0_renamed_28_i80)
    {
        // free(temp_i13_data);
    }
    // cluster_fFreeHandle_rep148(): end inline
    // cluster_fFreeHandle_rep153(): begin inline
    int decomp_0_renamed_29_i81;
    // cluster_fFreeHandle_out0_rep165(): begin inline
    decomp_0_renamed_29_i81 = temp1_i13_data != nullptr;
    // cluster_fFreeHandle_out0_rep165(): end inline
    if (decomp_0_renamed_29_i81)
    {
        // free(temp1_i13_data);
    }
    // cluster_fFreeHandle_rep153(): end inline
    // cluster_fFreeHandle_rep158(): begin inline
    int decomp_0_renamed_30_i82;
    // cluster_fFreeHandle_out0_rep171(): begin inline
    decomp_0_renamed_30_i82 = retVec_i13_data != nullptr;
    // cluster_fFreeHandle_out0_rep171(): end inline
    if (decomp_0_renamed_30_i82)
    {
        // free(retVec_i13_data);
    }
    gravity_width = ret_i13_width;
    gravity_height = ret_i13_height;
    gravity_data = ret_i13_data;
    // cluster_fFreeHandle_rep158(): end inline
    // cluster_quatRot_rep1(): end inline
    // cluster_fFreeHandle_rep49(): begin inline
    int decomp_0_renamed_3_i14;
    // cluster_fFreeHandle_out0_rep37(): begin inline
    decomp_0_renamed_3_i14 = gtemp_data != nullptr;
    // cluster_fFreeHandle_out0_rep37(): end inline
    if (decomp_0_renamed_3_i14)
    {
        // free(gtemp_data);
    }
    // cluster_fFreeHandle_rep49(): end inline
    // cluster_fFreeHandle_rep50(): begin inline
    int decomp_0_renamed_4_i15;
    // cluster_fFreeHandle_out0_rep36(): begin inline
    decomp_0_renamed_4_i15 = t_data != nullptr;
    // cluster_fFreeHandle_out0_rep36(): end inline
    if (decomp_0_renamed_4_i15)
    {
        // free(t_data);
    }
    // cluster_fFreeHandle_rep50(): end inline
    // cluster_fSetArray_rep26(): begin inline
    int i_i16;
    int j_i16;
    int *out_i16_width;
    int *out_i16_height;
    float *out_i16_data;
    // cluster_fMallocHandle_rep46(): begin inline
    int i_i85;
    int j_i85;
    int *out_i85_width;
    int *out_i85_height;
    float *out_i85_data;
    out_i85_width = &memregion_30_size4;
    out_i85_height = &memregion_31_size4;
    out_i85_data = memregion_32_size36;
#pragma clava malloc_size max = 44 min = 44 avg = 44
    int _lit24 = 3;
    int _lit25 = 3;
    // cluster_fMallocHandle_out1_rep68(): begin inline
    (*out_i85_height) = _lit24;
    (*out_i85_width) = _lit25;
    out_i16_width = out_i85_width;
    out_i16_height = out_i85_height;
    out_i16_data = out_i85_data;
    // cluster_fMallocHandle_out1_rep68(): end inline
    // cluster_fMallocHandle_rep46(): end inline
    int _lit11 = 3;
    int _lit12 = 3;
    int _lit13 = 0;
    // cluster_fSetArray_out1_rep8(): begin inline
    for (i_i16 = 0; i_i16 < _lit11; i_i16++)
    {
#pragma HLS loop_tripcount max = 3
        for (j_i16 = 0; j_i16 < _lit12; j_i16++)
        {
            int __idxExpr68 = i_i16 * (*out_i16_width) + j_i16;
#pragma HLS loop_tripcount max = 3
            out_i16_data[__idxExpr68] = _lit13;
        }
    }
    t_width = out_i16_width;
    t_height = out_i16_height;
    t_data = out_i16_data;
    // cluster_fSetArray_out1_rep8(): end inline
    // cluster_fSetArray_rep26(): end inline
    // cluster_updateState_out7_out2(): begin inline
    int _scope5_i_i17;
    t_data[0] = 1;
    t_data[4] = 1;
    t_data[8] = 1;
    for (_scope5_i_i17 = 0; _scope5_i_i17 < ((*t_height) * (*t_width)); _scope5_i_i17++)
    {
#pragma HLS loop_tripcount max = 9
        t_data[_scope5_i_i17] = t_data[_scope5_i_i17] / (local_STDDEV_ACCL);
    }
    // cluster_updateState_out7_out2(): end inline
    // cluster_mcl_rep3(): begin inline
    int i_i18;
    int j_i18;
    int *retW_i18_width;
    int *retW_i18_height;
    float *retW_i18_data;
    int *retX_i18_width;
    int *retX_i18_height;
    float *retX_i18_data;
    int *sum_i18_width;
    int *sum_i18_height;
    float *sum_i18_data;
    float sumVal_i18;
    int decomp_2_renamed_0_i18;
    // cluster_fDeepCopy_rep8(): begin inline
    int cols_i87;
    int rows_i87;
    int *out_i87_width;
    int *out_i87_height;
    float *out_i87_data;
    int j_i87;
    int i_i87;
    // cluster_fDeepCopy_out0_rep12(): begin inline
    rows_i87 = (*gravity_height);
    cols_i87 = (*gravity_width);
    // cluster_fDeepCopy_out0_rep12(): end inline
    // cluster_fMallocHandle_rep106(): begin inline
    int i_i219;
    int j_i219;
    int *out_i219_width;
    int *out_i219_height;
    float *out_i219_data;
    out_i219_width = &memregion_33_size4;
    out_i219_height = &memregion_34_size4;
    out_i219_data = memregion_35_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep113(): begin inline
    (*out_i219_height) = rows_i87;
    (*out_i219_width) = cols_i87;
    out_i87_width = out_i219_width;
    out_i87_height = out_i219_height;
    out_i87_data = out_i219_data;
    // cluster_fMallocHandle_out1_rep113(): end inline
    // cluster_fMallocHandle_rep106(): end inline
    // cluster_fDeepCopy_out1_rep12(): begin inline
    for (i_i87 = 0; i_i87 < rows_i87; i_i87++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i87 = 0; j_i87 < cols_i87; j_i87++)
        {
            int __idxExpr69 = i_i87 * (*out_i87_width) + j_i87;
            int __idxExpr70 = i_i87 * (*gravity_width) + j_i87;
#pragma HLS loop_tripcount max = 3
            out_i87_data[__idxExpr69] = gravity_data[__idxExpr70];
        }
    }
    retX_i18_width = out_i87_width;
    retX_i18_height = out_i87_height;
    retX_i18_data = out_i87_data;
    // cluster_fDeepCopy_out1_rep12(): end inline
    // cluster_fDeepCopy_rep8(): end inline
    // cluster_get3DGaussianProb_rep1(): begin inline
    float pi_i88;
    int *t_i88_width;
    int *t_i88_height;
    float *t_i88_data;
    int j_i88;
    int i_i88;
    int n_channel_i88;
    int n_data_i88;
    float temp_i88;
    int *mt_i88_width;
    int *mt_i88_height;
    float *mt_i88_data;
    int *temp2_i88_width;
    int *temp2_i88_height;
    float *temp2_i88_data;
    int *diff_i88_width;
    int *diff_i88_height;
    float *diff_i88_data;
    int *p_i88_width;
    int *p_i88_height;
    float *p_i88_data;
    int *temp1_i221_width;
    int *temp1_i221_height;
    float *temp1_i221_data;
    // cluster_get3DGaussianProb_out0_rep4(): begin inline
    int k_i221;
    pi_i88 = 3.1412;
    n_data_i88 = (*retX_i18_height);
    n_channel_i88 = (*retX_i18_width);
    // cluster_get3DGaussianProb_out0_rep4(): end inline
    // cluster_fSetArray_rep43(): begin inline
    int i_i222;
    int j_i222;
    int *out_i222_width;
    int *out_i222_height;
    float *out_i222_data;
    // cluster_fMallocHandle_rep110(): begin inline
    int i_i326;
    int j_i326;
    int *out_i326_width;
    int *out_i326_height;
    float *out_i326_data;
    out_i326_width = &memregion_36_size4;
    out_i326_height = &memregion_37_size4;
    out_i326_data = memregion_38_size8000;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    int _lit86 = 1;
    // cluster_fMallocHandle_out1_rep123(): begin inline
    (*out_i326_height) = n_data_i88;
    (*out_i326_width) = _lit86;
    out_i222_width = out_i326_width;
    out_i222_height = out_i326_height;
    out_i222_data = out_i326_data;
    // cluster_fMallocHandle_out1_rep123(): end inline
    // cluster_fMallocHandle_rep110(): end inline
    int _lit53 = 1;
    int _lit54 = 1;
    // cluster_fSetArray_out1_rep43(): begin inline
    for (i_i222 = 0; i_i222 < n_data_i88; i_i222++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i222 = 0; j_i222 < _lit53; j_i222++)
        {
            int __idxExpr71 = i_i222 * (*out_i222_width) + j_i222;
#pragma HLS loop_tripcount max = 1
            out_i222_data[__idxExpr71] = _lit54;
        }
    }
    t_i88_width = out_i222_width;
    t_i88_height = out_i222_height;
    t_i88_data = out_i222_data;
    // cluster_fSetArray_out1_rep43(): end inline
    // cluster_fSetArray_rep43(): end inline
    // cluster_fMtimes_rep12(): begin inline
    float temp_i223;
    int k_i223;
    int j_i223;
    int i_i223;
    int n_i223;
    int p_i223;
    int m_i223;
    int *out_i223_width;
    int *out_i223_height;
    float *out_i223_data;
    // cluster_fMtimes_out0_rep11(): begin inline
    int p1_i328;
    m_i223 = (*t_i88_height);
    p_i223 = (*t_i88_width);
    p1_i328 = (*accl_height);
    n_i223 = (*accl_width);
    // cluster_fMtimes_out0_rep11(): end inline
    // cluster_fMallocHandle_rep117(): begin inline
    int i_i329;
    int j_i329;
    int *out_i329_width;
    int *out_i329_height;
    float *out_i329_data;
    out_i329_width = &memregion_39_size4;
    out_i329_height = &memregion_40_size4;
    out_i329_data = memregion_41_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep131(): begin inline
    (*out_i329_height) = m_i223;
    (*out_i329_width) = n_i223;
    out_i223_width = out_i329_width;
    out_i223_height = out_i329_height;
    out_i223_data = out_i329_data;
    // cluster_fMallocHandle_out1_rep131(): end inline
    // cluster_fMallocHandle_rep117(): end inline
    // cluster_fMtimes_out1_rep11(): begin inline
    for (i_i223 = 0; i_i223 < m_i223; i_i223++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i223 = 0; j_i223 < n_i223; j_i223++)
        {
#pragma HLS loop_tripcount max = 3
            temp_i223 = 0;
            for (k_i223 = 0; k_i223 < p_i223; k_i223++)
            {
                int __idxExpr72 = k_i223 * (*accl_width) + j_i223;
                int __idxExpr73 = i_i223 * (*t_i88_width) + k_i223;
#pragma HLS loop_tripcount max = 1
                temp_i223 = temp_i223 + accl_data[__idxExpr72] * t_i88_data[__idxExpr73];
            }
            int __idxExpr74 = i_i223 * (*out_i223_width) + j_i223;
            out_i223_data[__idxExpr74] = temp_i223;
        }
    }
    mt_i88_width = out_i223_width;
    mt_i88_height = out_i223_height;
    mt_i88_data = out_i223_data;
    // cluster_fMtimes_out1_rep11(): end inline
    // cluster_fMtimes_rep12(): end inline
    // cluster_fMinus_rep4(): begin inline
    int cols_i224;
    int rows_i224;
    int i_i224;
    int *c_i224_width;
    int *c_i224_height;
    float *c_i224_data;
    // cluster_fMinus_out0_rep3(): begin inline
    int j_i331;
    rows_i224 = (*retX_i18_height);
    cols_i224 = (*retX_i18_width);
    // cluster_fMinus_out0_rep3(): end inline
    // cluster_fMallocHandle_rep79(): begin inline
    int i_i332;
    int j_i332;
    int *out_i332_width;
    int *out_i332_height;
    float *out_i332_data;
    out_i332_width = &memregion_42_size4;
    out_i332_height = &memregion_43_size4;
    out_i332_data = memregion_44_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep86(): begin inline
    (*out_i332_height) = rows_i224;
    (*out_i332_width) = cols_i224;
    c_i224_width = out_i332_width;
    c_i224_height = out_i332_height;
    c_i224_data = out_i332_data;
    // cluster_fMallocHandle_out1_rep86(): end inline
    // cluster_fMallocHandle_rep79(): end inline
    // cluster_fMinus_out1_rep3(): begin inline
    for (i_i224 = 0; i_i224 < (rows_i224 * cols_i224); i_i224++)
    {
#pragma HLS loop_tripcount max = 6000
        c_i224_data[i_i224] = retX_i18_data[i_i224] - mt_i88_data[i_i224];
    }
    diff_i88_width = c_i224_width;
    diff_i88_height = c_i224_height;
    diff_i88_data = c_i224_data;
    // cluster_fMinus_out1_rep3(): end inline
    // cluster_fMinus_rep4(): end inline
    // cluster_fSetArray_rep49(): begin inline
    int i_i225;
    int j_i225;
    int *out_i225_width;
    int *out_i225_height;
    float *out_i225_data;
    // cluster_fMallocHandle_rep124(): begin inline
    int i_i334;
    int j_i334;
    int *out_i334_width;
    int *out_i334_height;
    float *out_i334_data;
    out_i334_width = &memregion_45_size4;
    out_i334_height = &memregion_46_size4;
    out_i334_data = memregion_47_size8000;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    int _lit87 = 1;
    // cluster_fMallocHandle_out1_rep139(): begin inline
    (*out_i334_height) = (*diff_i88_height);
    (*out_i334_width) = _lit87;
    out_i225_width = out_i334_width;
    out_i225_height = out_i334_height;
    out_i225_data = out_i334_data;
    // cluster_fMallocHandle_out1_rep139(): end inline
    // cluster_fMallocHandle_rep124(): end inline
    int _lit55 = 1;
    int _lit56 = 0;
    // cluster_fSetArray_out1_rep50(): begin inline
    for (i_i225 = 0; i_i225 < (*diff_i88_height); i_i225++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i225 = 0; j_i225 < _lit55; j_i225++)
        {
            int __idxExpr75 = i_i225 * (*out_i225_width) + j_i225;
#pragma HLS loop_tripcount max = 1
            out_i225_data[__idxExpr75] = _lit56;
        }
    }
    p_i88_width = out_i225_width;
    p_i88_height = out_i225_height;
    p_i88_data = out_i225_data;
    // cluster_fSetArray_out1_rep50(): end inline
    // cluster_fSetArray_rep49(): end inline
    // cluster_get3DGaussianProb_out1_rep4(): begin inline
    temp_i88 = sqrt(1.0 / (pow(2 * pi_i88, n_channel_i88)));
    int *out_i227_width;
    int *out_i227_height;
    float *out_i227_data;
    // cluster_get3DGaussianProb_out1_rep4(): end inline
    // cluster_randWrapper_rep4(): begin inline
    float seed_i227;
    int i_i227;
    int j_i227;
    // cluster_fSetArray_rep56(): begin inline
    int i_i336;
    int j_i336;
    int *out_i336_width;
    int *out_i336_height;
    float *out_i336_data;
    // cluster_fMallocHandle_rep134(): begin inline
    int i_i381;
    int j_i381;
    int *out_i381_width;
    int *out_i381_height;
    float *out_i381_data;
    out_i381_width = &memregion_48_size4;
    out_i381_height = &memregion_49_size4;
    out_i381_data = memregion_50_size8000;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    int _lit100 = 1;
    // cluster_fMallocHandle_out1_rep148(): begin inline
    (*out_i381_height) = (*diff_i88_height);
    (*out_i381_width) = _lit100;
    out_i336_width = out_i381_width;
    out_i336_height = out_i381_height;
    out_i336_data = out_i381_data;
    // cluster_fMallocHandle_out1_rep148(): end inline
    // cluster_fMallocHandle_rep134(): end inline
    int _lit88 = 1;
    int _lit89 = 0;
    // cluster_fSetArray_out1_rep60(): begin inline
    for (i_i336 = 0; i_i336 < (*diff_i88_height); i_i336++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i336 = 0; j_i336 < _lit88; j_i336++)
        {
            int __idxExpr76 = i_i336 * (*out_i336_width) + j_i336;
#pragma HLS loop_tripcount max = 1
            out_i336_data[__idxExpr76] = _lit89;
        }
    }
    out_i227_width = out_i336_width;
    out_i227_height = out_i336_height;
    out_i227_data = out_i336_data;
    // cluster_fSetArray_out1_rep60(): end inline
    // cluster_fSetArray_rep56(): end inline
    int _lit57 = 1;
    // cluster_randWrapper_out1_rep5(): begin inline
    seed_i227 = 0.9;
    for (i_i227 = 0; i_i227 < (*diff_i88_height); i_i227++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i227 = 0; j_i227 < _lit57; j_i227++)
        {
#pragma HLS loop_tripcount max = 1
            int decomp_0_renamed_107_i337;
            decomp_0_renamed_107_i337 = i_i227 < j_i227;
            if (decomp_0_renamed_107_i337)
            {
                int __idxExpr77 = i_i227 * (*out_i227_width) + j_i227;
                out_i227_data[__idxExpr77] = seed_i227 * ((i_i227 + 1.0) / (j_i227 + 1.0));
            }
            else
            {
                int __idxExpr78 = i_i227 * (*out_i227_width) + j_i227;
                out_i227_data[__idxExpr78] = seed_i227 * ((j_i227 + 1.0) / (i_i227 + 1.0));
            }
        }
    }
    temp2_i88_width = out_i227_width;
    temp2_i88_height = out_i227_height;
    temp2_i88_data = out_i227_data;
    // cluster_randWrapper_out1_rep5(): end inline
    // cluster_randWrapper_rep4(): end inline
    // cluster_get3DGaussianProb_out2_rep4(): begin inline
    j_i88 = ((*temp2_i88_height) * (*temp2_i88_width));
    for (i_i88 = 0; i_i88 < j_i88; i_i88++)
    {
#pragma HLS loop_tripcount max = 2000
        float temp2i_i228;
        temp2i_i228 = temp2_i88_data[i_i88];
        temp2i_i228 = exp(-0.5 * temp2i_i228);
        p_i88_data[i_i88] = temp2i_i228 * temp_i88;
    }
    // cluster_get3DGaussianProb_out2_rep4(): end inline
    // cluster_fFreeHandle_rep90(): begin inline
    int decomp_0_renamed_80_i229;
    // cluster_fFreeHandle_out0_rep89(): begin inline
    decomp_0_renamed_80_i229 = t_i88_data != nullptr;
    // cluster_fFreeHandle_out0_rep89(): end inline
    if (decomp_0_renamed_80_i229)
    {
        // free(t_i88_data);
    }
    // cluster_fFreeHandle_rep90(): end inline
    // cluster_fFreeHandle_rep96(): begin inline
    int decomp_0_renamed_81_i230;
    // cluster_fFreeHandle_out0_rep96(): begin inline
    decomp_0_renamed_81_i230 = temp2_i88_data != nullptr;
    // cluster_fFreeHandle_out0_rep96(): end inline
    if (decomp_0_renamed_81_i230)
    {
        // free(temp2_i88_data);
    }
    // cluster_fFreeHandle_rep96(): end inline
    // cluster_fFreeHandle_rep102(): begin inline
    int decomp_0_renamed_82_i231;
    // cluster_fFreeHandle_out0_rep103(): begin inline
    decomp_0_renamed_82_i231 = mt_i88_data != nullptr;
    // cluster_fFreeHandle_out0_rep103(): end inline
    if (decomp_0_renamed_82_i231)
    {
        // free(mt_i88_data);
    }
    // cluster_fFreeHandle_rep102(): end inline
    // cluster_fFreeHandle_rep108(): begin inline
    int decomp_0_renamed_83_i232;
    // cluster_fFreeHandle_out0_rep110(): begin inline
    decomp_0_renamed_83_i232 = diff_i88_data != nullptr;
    // cluster_fFreeHandle_out0_rep110(): end inline
    if (decomp_0_renamed_83_i232)
    {
        // free(diff_i88_data);
    }
    retW_i18_width = p_i88_width;
    retW_i18_height = p_i88_height;
    retW_i18_data = p_i88_data;
    // cluster_fFreeHandle_rep108(): end inline
    // cluster_get3DGaussianProb_rep1(): end inline
    // cluster_fSum_rep1(): begin inline
    int Rcols_i89;
    float temp_i89;
    int j_i89;
    int i_i89;
    int cols_i89;
    int rows_i89;
    int *outMat_i89_width;
    int *outMat_i89_height;
    float *outMat_i89_data;
    // cluster_fSum_out0_rep4(): begin inline
    int k_i233;
    int newRow_i233;
    int newCols_i233;
    int decomp_0_renamed_84_i233;
    int decomp_1_renamed_1_i233;
    int decomp_2_renamed_3_i233;
    rows_i89 = (*retW_i18_height);
    cols_i89 = (*retW_i18_width);
    decomp_0_renamed_84_i233 = cols_i89 == 1;
    decomp_1_renamed_1_i233 = rows_i89 == 1;
    decomp_2_renamed_3_i233 = decomp_0_renamed_84_i233 || decomp_1_renamed_1_i233;
    if (decomp_2_renamed_3_i233)
    {
        Rcols_i89 = 1;
    }
    else
    {
        Rcols_i89 = cols_i89;
    }
    // cluster_fSum_out0_rep4(): end inline
    // cluster_fSetArray_rep65(): begin inline
    int i_i234;
    int j_i234;
    int *out_i234_width;
    int *out_i234_height;
    float *out_i234_data;
    // cluster_fMallocHandle_rep142(): begin inline
    int i_i342;
    int j_i342;
    int *out_i342_width;
    int *out_i342_height;
    float *out_i342_data;
    out_i342_width = &memregion_51_size4;
    out_i342_height = &memregion_52_size4;
    out_i342_data = &memregion_53_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
    int _lit90 = 1;
    // cluster_fMallocHandle_out1_rep159(): begin inline
    (*out_i342_height) = _lit90;
    (*out_i342_width) = Rcols_i89;
    out_i234_width = out_i342_width;
    out_i234_height = out_i342_height;
    out_i234_data = out_i342_data;
    // cluster_fMallocHandle_out1_rep159(): end inline
    // cluster_fMallocHandle_rep142(): end inline
    int _lit58 = 1;
    int _lit59 = 0;
    // cluster_fSetArray_out1_rep68(): begin inline
    for (i_i234 = 0; i_i234 < _lit58; i_i234++)
    {
#pragma HLS loop_tripcount max = 1
        for (j_i234 = 0; j_i234 < Rcols_i89; j_i234++)
        {
            int __idxExpr79 = i_i234 * (*out_i234_width) + j_i234;
#pragma HLS loop_tripcount max = 1
            out_i234_data[__idxExpr79] = _lit59;
        }
    }
    outMat_i89_width = out_i234_width;
    outMat_i89_height = out_i234_height;
    outMat_i89_data = out_i234_data;
    // cluster_fSetArray_out1_rep68(): end inline
    // cluster_fSetArray_rep65(): end inline
    // cluster_fSum_out1_rep4(): begin inline
    int decomp_3_renamed_0_i235;
    decomp_3_renamed_0_i235 = cols_i89 == 1;
    if (decomp_3_renamed_0_i235)
    {
        temp_i89 = 0;
        for (j_i89 = 0; j_i89 < rows_i89; j_i89++)
        {
            int __idxExpr80 = j_i89 * (*retW_i18_width) + 0;
#pragma HLS loop_tripcount max = 2000
            temp_i89 = temp_i89 + retW_i18_data[__idxExpr80];
        }
        outMat_i89_data[0] = temp_i89;
    }
    else
    {
        int decomp_4_renamed_0_i235;
        decomp_4_renamed_0_i235 = rows_i89 == 1;
        if (decomp_4_renamed_0_i235)
        {
            temp_i89 = 0;
            // Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount directive even if it has
            // static bounds
            outMat_i89_data[0] = temp_i89;
        }
        else
        {
            // Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount directive even if it has
            // static bounds
        }
    }
    sum_i18_width = outMat_i89_width;
    sum_i18_height = outMat_i89_height;
    sum_i18_data = outMat_i89_data;
    // cluster_fSum_out1_rep4(): end inline
    // cluster_fSum_rep1(): end inline
    // cluster_mcl_out1_rep1(): begin inline
    int decomp_0_renamed_33_i90;
    int decomp_1_renamed_0_i90;
    decomp_0_renamed_33_i90 = (*sum_i18_height) == 1;
    decomp_1_renamed_0_i90 = (*sum_i18_width) == 1;
    decomp_2_renamed_0_i18 = decomp_0_renamed_33_i90 && decomp_1_renamed_0_i90;
    // cluster_mcl_out1_rep1(): end inline
    if (decomp_2_renamed_0_i18)
    {
        // cluster_mcl_out2_rep1(): begin inline
        sumVal_i18 = sum_i18_data[0];
        for (i_i18 = 0; i_i18 < (*retW_i18_height); i_i18++)
        {
#pragma HLS loop_tripcount max = 2000
            for (j_i18 = 0; j_i18 < (*retW_i18_width); j_i18++)
            {
                int __idxExpr81 = i_i18 * (*retW_i18_width) + j_i18;
                int __idxExpr82 = i_i18 * (*retW_i18_width) + j_i18;
#pragma HLS loop_tripcount max = 1
                retW_i18_data[__idxExpr81] = retW_i18_data[__idxExpr82] / sumVal_i18;
            }
        }
        // cluster_mcl_out2_rep1(): end inline
    }
    else
    {
        // cluster_fMdivide_rep1(): begin inline
        int decomp_2_renamed_2_i92;
        int cols_i92;
        int rows_i92;
        int i_i92;
        int *c_i92_width;
        int *c_i92_height;
        float *c_i92_data;
        // cluster_fMdivide_out0_rep4(): begin inline
        int j_i236;
        int decomp_0_renamed_85_i236;
        int decomp_1_renamed_2_i236;
        rows_i92 = (*retW_i18_height);
        cols_i92 = (*retW_i18_width);
        decomp_0_renamed_85_i236 = rows_i92 != (*sum_i18_height);
        decomp_1_renamed_2_i236 = cols_i92 != (*sum_i18_width);
        decomp_2_renamed_2_i92 = decomp_0_renamed_85_i236 || decomp_1_renamed_2_i236;
        // cluster_fMdivide_out0_rep4(): end inline
        if (decomp_2_renamed_2_i92)
        {
            int *__rtr_val_0_i92_width;
            int *__rtr_val_0_i92_height;
            float *__rtr_val_0_i92_data;
            int __rtr_flag_0_i92;
            __rtr_flag_0_i92 = 0;
            // cluster_fMdivide_out1_rep4(): begin inline
            printf("fMDivide Mismatch = \nrows: %d\t%d\ncols: %d\t%d\n", rows_i92, (*sum_i18_height), cols_i92,
                   (*sum_i18_width));
            __rtr_val_0_i92_width = nullptr;
            __rtr_val_0_i92_height = nullptr;
            __rtr_val_0_i92_data = nullptr;
            __rtr_flag_0_i92 = 1;
            // cluster_fMdivide_out1_rep4(): end inline
            if (__rtr_flag_0_i92)
            {
                retW_i18_width = __rtr_val_0_i92_width;
                retW_i18_height = __rtr_val_0_i92_height;
                retW_i18_data = __rtr_val_0_i92_data;
                goto end_inline_i92;
            }
        }
        // cluster_fMallocHandle_rep88(): begin inline
        int i_i238;
        int j_i238;
        int *out_i238_width;
        int *out_i238_height;
        float *out_i238_data;
        out_i238_width = &memregion_54_size4;
        out_i238_height = &memregion_55_size4;
        out_i238_data = memregion_56_size9999992;
        // cluster_fMallocHandle_out1_rep92(): begin inline
        (*out_i238_height) = rows_i92;
        (*out_i238_width) = cols_i92;
        c_i92_width = out_i238_width;
        c_i92_height = out_i238_height;
        c_i92_data = out_i238_data;
        retW_i18_width = c_i92_width;
        retW_i18_height = c_i92_height;
        retW_i18_data = c_i92_data;
    // cluster_fMallocHandle_out1_rep92(): end inline
    // cluster_fMallocHandle_rep88(): end inline
    // cluster_fMdivide_out2_rep4(): begin inline
    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount directive even if it has
    //  static bounds
    // cluster_fMdivide_out2_rep4(): end inline
    end_inline_i92:;
        // cluster_fMdivide_rep1(): end inline
    }
    // cluster_fFreeHandle_rep111(): begin inline
    int decomp_0_renamed_34_i93;
    // cluster_fFreeHandle_out0_rep119(): begin inline
    decomp_0_renamed_34_i93 = retX_i18_data != nullptr;
    // cluster_fFreeHandle_out0_rep119(): end inline
    if (decomp_0_renamed_34_i93)
    {
        // free(retX_i18_data);
    }
    // cluster_fFreeHandle_rep111(): end inline
    // cluster_fFreeHandle_rep116(): begin inline
    int decomp_0_renamed_35_i94;
    // cluster_fFreeHandle_out0_rep125(): begin inline
    decomp_0_renamed_35_i94 = sum_i18_data != nullptr;
    // cluster_fFreeHandle_out0_rep125(): end inline
    if (decomp_0_renamed_35_i94)
    {
        // free(sum_i18_data);
    }
    w_width = retW_i18_width;
    w_height = retW_i18_height;
    w_data = retW_i18_data;
    // cluster_fFreeHandle_rep116(): end inline
    // cluster_mcl_rep3(): end inline
    // cluster_generateSample_rep3(): begin inline
    int rows_i19;
    int cols_i19;
    int i_i19;
    int j_i19;
    int index_i19;
    int *sampleXId_i19_width;
    int *sampleXId_i19_height;
    int *sampleXId_i19_data;
    int *retQuat_i19_width;
    int *retQuat_i19_height;
    float *retQuat_i19_data;
    int *retVel_i19_width;
    int *retVel_i19_height;
    float *retVel_i19_data;
    int *retPos_i19_width;
    int *retPos_i19_height;
    float *retPos_i19_data;
    int decomp_0_renamed_5_i19;
    // cluster_weightedSample_rep1(): begin inline
    int j_i95;
    int i_i95;
    int n_i95;
    int *seed_i95_width;
    int *seed_i95_height;
    float *seed_i95_data;
    int *bin_i95_width;
    int *bin_i95_height;
    int *bin_i95_data;
    // cluster_weightedSample_out0_rep4(): begin inline
    n_i95 = (*w_height);
    int *out_i243_width;
    int *out_i243_height;
    float *out_i243_data;
    // cluster_weightedSample_out0_rep4(): end inline
    // cluster_randWrapper_rep13(): begin inline
    float seed_i243;
    int i_i243;
    int j_i243;
    // cluster_fSetArray_rep103(): begin inline
    int i_i345;
    int j_i345;
    int *out_i345_width;
    int *out_i345_height;
    float *out_i345_data;
    // cluster_fMallocHandle_rep199(): begin inline
    int i_i384;
    int j_i384;
    int *out_i384_width;
    int *out_i384_height;
    float *out_i384_data;
    out_i384_width = &memregion_57_size4;
    out_i384_height = &memregion_58_size4;
    out_i384_data = memregion_59_size8000;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    int _lit101 = 1;
    // cluster_fMallocHandle_out1_rep220(): begin inline
    (*out_i384_height) = n_i95;
    (*out_i384_width) = _lit101;
    out_i345_width = out_i384_width;
    out_i345_height = out_i384_height;
    out_i345_data = out_i384_data;
    // cluster_fMallocHandle_out1_rep220(): end inline
    // cluster_fMallocHandle_rep199(): end inline
    int _lit91 = 1;
    int _lit92 = 0;
    // cluster_fSetArray_out1_rep119(): begin inline
    for (i_i345 = 0; i_i345 < n_i95; i_i345++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i345 = 0; j_i345 < _lit91; j_i345++)
        {
            int __idxExpr83 = i_i345 * (*out_i345_width) + j_i345;
#pragma HLS loop_tripcount max = 1
            out_i345_data[__idxExpr83] = _lit92;
        }
    }
    out_i243_width = out_i345_width;
    out_i243_height = out_i345_height;
    out_i243_data = out_i345_data;
    // cluster_fSetArray_out1_rep119(): end inline
    // cluster_fSetArray_rep103(): end inline
    int _lit60 = 1;
    // cluster_randWrapper_out1_rep12(): begin inline
    seed_i243 = 0.9;
    for (i_i243 = 0; i_i243 < n_i95; i_i243++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i243 = 0; j_i243 < _lit60; j_i243++)
        {
#pragma HLS loop_tripcount max = 1
            int decomp_0_renamed_112_i346;
            decomp_0_renamed_112_i346 = i_i243 < j_i243;
            if (decomp_0_renamed_112_i346)
            {
                int __idxExpr84 = i_i243 * (*out_i243_width) + j_i243;
                out_i243_data[__idxExpr84] = seed_i243 * ((i_i243 + 1.0) / (j_i243 + 1.0));
            }
            else
            {
                int __idxExpr85 = i_i243 * (*out_i243_width) + j_i243;
                out_i243_data[__idxExpr85] = seed_i243 * ((j_i243 + 1.0) / (i_i243 + 1.0));
            }
        }
    }
    seed_i95_width = out_i243_width;
    seed_i95_height = out_i243_height;
    seed_i95_data = out_i243_data;
    // cluster_randWrapper_out1_rep12(): end inline
    // cluster_randWrapper_rep13(): end inline
    // cluster_iSetArray_rep7(): begin inline
    int i_i244;
    int j_i244;
    int *out_i244_width;
    int *out_i244_height;
    int *out_i244_data;
    // cluster_iMallocHandle_rep2(): begin inline
    int i_i347;
    int j_i347;
    int *out_i347_width;
    int *out_i347_height;
    int *out_i347_data;
    out_i347_width = &memregion_60_size4;
    out_i347_height = &memregion_61_size4;
    out_i347_data = memregion_62_size8000;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    int _lit93 = 1;
    // cluster_iMallocHandle_out1_rep8(): begin inline
    (*out_i347_height) = n_i95;
    (*out_i347_width) = _lit93;
    out_i244_width = out_i347_width;
    out_i244_height = out_i347_height;
    out_i244_data = out_i347_data;
    // cluster_iMallocHandle_out1_rep8(): end inline
    // cluster_iMallocHandle_rep2(): end inline
    int _lit61 = 1;
    int _lit62 = 0;
    // cluster_iSetArray_out1_rep2(): begin inline
    for (i_i244 = 0; i_i244 < n_i95; i_i244++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i244 = 0; j_i244 < _lit61; j_i244++)
        {
            int __idxExpr86 = i_i244 * (*out_i244_width) + j_i244;
#pragma HLS loop_tripcount max = 1
            out_i244_data[__idxExpr86] = _lit62;
        }
    }
    bin_i95_width = out_i244_width;
    bin_i95_height = out_i244_height;
    bin_i95_data = out_i244_data;
    // cluster_iSetArray_out1_rep2(): end inline
    // cluster_iSetArray_rep7(): end inline
    // cluster_weightedSample_out1_rep4(): begin inline
    for (i_i95 = 0; i_i95 < n_i95; i_i95++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i95 = 0; j_i95 < n_i95; j_i95++)
        {
#pragma HLS loop_tripcount max = 2000
            int decomp_0_renamed_88_i245;
            decomp_0_renamed_88_i245 = seed_i95_data[j_i95] > 0;
            if (decomp_0_renamed_88_i245)
            {
                bin_i95_data[j_i95] = bin_i95_data[j_i95] + 1;
            }
        }
        for (j_i95 = 0; j_i95 < n_i95; j_i95++)
        {
#pragma HLS loop_tripcount max = 2000
            seed_i95_data[j_i95] = seed_i95_data[j_i95] - w_data[i_i95];
        }
    }
    // free(seed_i95_data);
    sampleXId_i19_width = bin_i95_width;
    sampleXId_i19_height = bin_i95_height;
    sampleXId_i19_data = bin_i95_data;
    // cluster_weightedSample_out1_rep4(): end inline
    // cluster_weightedSample_rep1(): end inline
    // cluster_generateSample_out1_rep1(): begin inline
    rows_i19 = (*sampleXId_i19_height);
    cols_i19 = (*sampleXId_i19_width);
    decomp_0_renamed_5_i19 = cols_i19 > 1;
    // cluster_generateSample_out1_rep1(): end inline
    if (decomp_0_renamed_5_i19)
    {
        printf("ERROR: Cols more than 1.. Handle this case \n");
    }
    // cluster_fSetArray_rep68(): begin inline
    int i_i97;
    int j_i97;
    int *out_i97_width;
    int *out_i97_height;
    float *out_i97_data;
    // cluster_fMallocHandle_rep151(): begin inline
    int i_i246;
    int j_i246;
    int *out_i246_width;
    int *out_i246_height;
    float *out_i246_data;
    out_i246_width = &memregion_63_size4;
    out_i246_height = &memregion_64_size4;
    out_i246_data = memregion_65_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    // cluster_fMallocHandle_out1_rep164(): begin inline
    (*out_i246_height) = (*quat_height);
    (*out_i246_width) = (*quat_width);
    out_i97_width = out_i246_width;
    out_i97_height = out_i246_height;
    out_i97_data = out_i246_data;
    // cluster_fMallocHandle_out1_rep164(): end inline
    // cluster_fMallocHandle_rep151(): end inline
    int _lit26 = 0;
    // cluster_fSetArray_out1_rep77(): begin inline
    for (i_i97 = 0; i_i97 < (*quat_height); i_i97++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i97 = 0; j_i97 < (*quat_width); j_i97++)
        {
            int __idxExpr87 = i_i97 * (*out_i97_width) + j_i97;
#pragma HLS loop_tripcount max = 4
            out_i97_data[__idxExpr87] = _lit26;
        }
    }
    retQuat_i19_width = out_i97_width;
    retQuat_i19_height = out_i97_height;
    retQuat_i19_data = out_i97_data;
    // cluster_fSetArray_out1_rep77(): end inline
    // cluster_fSetArray_rep68(): end inline
    // cluster_fSetArray_rep73(): begin inline
    int i_i98;
    int j_i98;
    int *out_i98_width;
    int *out_i98_height;
    float *out_i98_data;
    // cluster_fMallocHandle_rep157(): begin inline
    int i_i248;
    int j_i248;
    int *out_i248_width;
    int *out_i248_height;
    float *out_i248_data;
    out_i248_width = &memregion_66_size4;
    out_i248_height = &memregion_67_size4;
    out_i248_data = memregion_68_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep171(): begin inline
    (*out_i248_height) = (*vel_height);
    (*out_i248_width) = (*vel_width);
    out_i98_width = out_i248_width;
    out_i98_height = out_i248_height;
    out_i98_data = out_i248_data;
    // cluster_fMallocHandle_out1_rep171(): end inline
    // cluster_fMallocHandle_rep157(): end inline
    int _lit27 = 0;
    // cluster_fSetArray_out1_rep83(): begin inline
    for (i_i98 = 0; i_i98 < (*vel_height); i_i98++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i98 = 0; j_i98 < (*vel_width); j_i98++)
        {
            int __idxExpr88 = i_i98 * (*out_i98_width) + j_i98;
#pragma HLS loop_tripcount max = 3
            out_i98_data[__idxExpr88] = _lit27;
        }
    }
    retVel_i19_width = out_i98_width;
    retVel_i19_height = out_i98_height;
    retVel_i19_data = out_i98_data;
    // cluster_fSetArray_out1_rep83(): end inline
    // cluster_fSetArray_rep73(): end inline
    // cluster_fSetArray_rep78(): begin inline
    int i_i99;
    int j_i99;
    int *out_i99_width;
    int *out_i99_height;
    float *out_i99_data;
    // cluster_fMallocHandle_rep163(): begin inline
    int i_i250;
    int j_i250;
    int *out_i250_width;
    int *out_i250_height;
    float *out_i250_data;
    out_i250_width = &memregion_69_size4;
    out_i250_height = &memregion_70_size4;
    out_i250_data = memregion_71_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep178(): begin inline
    (*out_i250_height) = (*pos_height);
    (*out_i250_width) = (*pos_width);
    out_i99_width = out_i250_width;
    out_i99_height = out_i250_height;
    out_i99_data = out_i250_data;
    // cluster_fMallocHandle_out1_rep178(): end inline
    // cluster_fMallocHandle_rep163(): end inline
    int _lit28 = 0;
    // cluster_fSetArray_out1_rep89(): begin inline
    for (i_i99 = 0; i_i99 < (*pos_height); i_i99++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i99 = 0; j_i99 < (*pos_width); j_i99++)
        {
            int __idxExpr89 = i_i99 * (*out_i99_width) + j_i99;
#pragma HLS loop_tripcount max = 3
            out_i99_data[__idxExpr89] = _lit28;
        }
    }
    retPos_i19_width = out_i99_width;
    retPos_i19_height = out_i99_height;
    retPos_i19_data = out_i99_data;
    // cluster_fSetArray_out1_rep89(): end inline
    // cluster_fSetArray_rep78(): end inline
    // cluster_generateSample_out2_rep1(): begin inline
    for (i_i19 = 0; i_i19 < rows_i19; i_i19++)
    {
#pragma HLS loop_tripcount max = 2000
        index_i19 = sampleXId_i19_data[i_i19] - 1;
        for (j_i19 = 0; j_i19 < (*quat_width); j_i19++)
        {
            int __idxExpr90 = i_i19 * (*retQuat_i19_width) + j_i19;
            int __idxExpr91 = index_i19 * (*quat_width) + j_i19;
#pragma HLS loop_tripcount max = 4
            retQuat_i19_data[__idxExpr90] = quat_data[__idxExpr91];
        }
    }
    for (i_i19 = 0; i_i19 < rows_i19; i_i19++)
    {
#pragma HLS loop_tripcount max = 2000
        index_i19 = sampleXId_i19_data[i_i19] - 1;
        for (j_i19 = 0; j_i19 < (*vel_width); j_i19++)
        {
            int __idxExpr92 = i_i19 * (*retVel_i19_width) + j_i19;
            int __idxExpr93 = index_i19 * (*vel_width) + j_i19;
#pragma HLS loop_tripcount max = 3
            retVel_i19_data[__idxExpr92] = vel_data[__idxExpr93];
        }
    }
    for (i_i19 = 0; i_i19 < rows_i19; i_i19++)
    {
#pragma HLS loop_tripcount max = 2000
        index_i19 = sampleXId_i19_data[i_i19] - 1;
        for (j_i19 = 0; j_i19 < (*pos_width); j_i19++)
        {
            int __idxExpr94 = i_i19 * (*retPos_i19_width) + j_i19;
            int __idxExpr95 = index_i19 * (*pos_width) + j_i19;
#pragma HLS loop_tripcount max = 3
            retPos_i19_data[__idxExpr94] = pos_data[__idxExpr95];
        }
    }
    for (i_i19 = 0; i_i19 < (*quat_height); i_i19++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i19 = 0; j_i19 < (*quat_width); j_i19++)
        {
            int __idxExpr96 = i_i19 * (*quat_width) + j_i19;
            int __idxExpr97 = i_i19 * (*retQuat_i19_width) + j_i19;
#pragma HLS loop_tripcount max = 4
            quat_data[__idxExpr96] = retQuat_i19_data[__idxExpr97];
        }
    }
    for (i_i19 = 0; i_i19 < (*vel_height); i_i19++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i19 = 0; j_i19 < (*vel_width); j_i19++)
        {
            int __idxExpr98 = i_i19 * (*vel_width) + j_i19;
            int __idxExpr99 = i_i19 * (*retVel_i19_width) + j_i19;
#pragma HLS loop_tripcount max = 3
            vel_data[__idxExpr98] = retVel_i19_data[__idxExpr99];
        }
    }
    for (i_i19 = 0; i_i19 < (*pos_height); i_i19++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i19 = 0; j_i19 < (*pos_width); j_i19++)
        {
            int __idxExpr100 = i_i19 * (*pos_width) + j_i19;
            int __idxExpr101 = i_i19 * (*retPos_i19_width) + j_i19;
#pragma HLS loop_tripcount max = 3
            pos_data[__idxExpr100] = retPos_i19_data[__idxExpr101];
        }
    }
    // cluster_generateSample_out2_rep1(): end inline
    // cluster_fFreeHandle_rep121(): begin inline
    int decomp_0_renamed_37_i101;
    // cluster_fFreeHandle_out0_rep131(): begin inline
    decomp_0_renamed_37_i101 = retQuat_i19_data != nullptr;
    // cluster_fFreeHandle_out0_rep131(): end inline
    if (decomp_0_renamed_37_i101)
    {
        // free(retQuat_i19_data);
    }
    // cluster_fFreeHandle_rep121(): end inline
    // cluster_fFreeHandle_rep126(): begin inline
    int decomp_0_renamed_38_i102;
    // cluster_fFreeHandle_out0_rep137(): begin inline
    decomp_0_renamed_38_i102 = retVel_i19_data != nullptr;
    // cluster_fFreeHandle_out0_rep137(): end inline
    if (decomp_0_renamed_38_i102)
    {
        // free(retVel_i19_data);
    }
    // cluster_fFreeHandle_rep126(): end inline
    // cluster_fFreeHandle_rep131(): begin inline
    int decomp_0_renamed_39_i103;
    // cluster_fFreeHandle_out0_rep143(): begin inline
    decomp_0_renamed_39_i103 = retPos_i19_data != nullptr;
    // cluster_fFreeHandle_out0_rep143(): end inline
    if (decomp_0_renamed_39_i103)
    {
        // free(retPos_i19_data);
    }
    // cluster_fFreeHandle_rep131(): end inline
    // cluster_iFreeHandle_rep1(): begin inline
    int decomp_0_renamed_40_i104;
    // cluster_iFreeHandle_out0_rep7(): begin inline
    decomp_0_renamed_40_i104 = sampleXId_i19_data != nullptr;
    // cluster_iFreeHandle_out0_rep7(): end inline
    if (decomp_0_renamed_40_i104)
    {
        // free(sampleXId_i19_data);
    }
    // cluster_iFreeHandle_rep1(): end inline
    // cluster_generateSample_rep3(): end inline
    // cluster_fFreeHandle_rep51(): begin inline
    int decomp_0_renamed_6_i20;
    // cluster_fFreeHandle_out0_rep35(): begin inline
    decomp_0_renamed_6_i20 = t_data != nullptr;
    // cluster_fFreeHandle_out0_rep35(): end inline
    if (decomp_0_renamed_6_i20)
    {
        // free(t_data);
    }
    // cluster_fFreeHandle_rep51(): end inline
    // cluster_fMtimes_rep7(): begin inline
    float temp_i21;
    int k_i21;
    int j_i21;
    int i_i21;
    int n_i21;
    int p_i21;
    int m_i21;
    int *out_i21_width;
    int *out_i21_height;
    float *out_i21_data;
    // cluster_fMtimes_out0_rep1(): begin inline
    int p1_i106;
    m_i21 = (local_ones_height);
    p_i21 = (local_ones_width);
    p1_i106 = (*accl_height);
    n_i21 = (*accl_width);
    // cluster_fMtimes_out0_rep1(): end inline
    // cluster_fMallocHandle_rep22(): begin inline
    int i_i107;
    int j_i107;
    int *out_i107_width;
    int *out_i107_height;
    float *out_i107_data;
    out_i107_width = &memregion_72_size4;
    out_i107_height = &memregion_73_size4;
    out_i107_data = memregion_74_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep30(): begin inline
    (*out_i107_height) = m_i21;
    (*out_i107_width) = n_i21;
    out_i21_width = out_i107_width;
    out_i21_height = out_i107_height;
    out_i21_data = out_i107_data;
    // cluster_fMallocHandle_out1_rep30(): end inline
    // cluster_fMallocHandle_rep22(): end inline
    // cluster_fMtimes_out1_rep1(): begin inline
    for (i_i21 = 0; i_i21 < m_i21; i_i21++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i21 = 0; j_i21 < n_i21; j_i21++)
        {
#pragma HLS loop_tripcount max = 3
            temp_i21 = 0;
            for (k_i21 = 0; k_i21 < p_i21; k_i21++)
            {
                int __idxExpr102 = k_i21 * (*accl_width) + j_i21;
                int __idxExpr103 = i_i21 * (local_ones_width) + k_i21;
#pragma HLS loop_tripcount max = 1
                temp_i21 = temp_i21 + accl_data[__idxExpr102] * local_ones_data[__idxExpr103];
            }
            int __idxExpr104 = i_i21 * (*out_i21_width) + j_i21;
            out_i21_data[__idxExpr104] = temp_i21;
        }
    }
    t_width = out_i21_width;
    t_height = out_i21_height;
    t_data = out_i21_data;
    // cluster_fMtimes_out1_rep1(): end inline
    // cluster_fMtimes_rep7(): end inline
    // cluster_fFreeHandle_rep52(): begin inline
    int decomp_0_renamed_7_i22;
    // cluster_fFreeHandle_out0_rep34(): begin inline
    decomp_0_renamed_7_i22 = accl_data != nullptr;
    // cluster_fFreeHandle_out0_rep34(): end inline
    if (decomp_0_renamed_7_i22)
    {
        // free(accl_data);
    }
    // cluster_fFreeHandle_rep52(): end inline
    // cluster_fMinus_rep6(): begin inline
    int cols_i23;
    int rows_i23;
    int i_i23;
    int *c_i23_width;
    int *c_i23_height;
    float *c_i23_data;
    // cluster_fMinus_out0_rep1(): begin inline
    int j_i110;
    rows_i23 = (*t_height);
    cols_i23 = (*t_width);
    // cluster_fMinus_out0_rep1(): end inline
    // cluster_fMallocHandle_rep77(): begin inline
    int i_i111;
    int j_i111;
    int *out_i111_width;
    int *out_i111_height;
    float *out_i111_data;
    out_i111_width = &memregion_75_size4;
    out_i111_height = &memregion_76_size4;
    out_i111_data = memregion_77_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep88(): begin inline
    (*out_i111_height) = rows_i23;
    (*out_i111_width) = cols_i23;
    c_i23_width = out_i111_width;
    c_i23_height = out_i111_height;
    c_i23_data = out_i111_data;
    // cluster_fMallocHandle_out1_rep88(): end inline
    // cluster_fMallocHandle_rep77(): end inline
    // cluster_fMinus_out1_rep1(): begin inline
    for (i_i23 = 0; i_i23 < (rows_i23 * cols_i23); i_i23++)
    {
#pragma HLS loop_tripcount max = 6000
        c_i23_data[i_i23] = t_data[i_i23] - gravity_data[i_i23];
    }
    memcpy(accl_width, c_i23_width, 4);
    memcpy(accl_height, c_i23_height, 4);
    memcpy(accl_data, c_i23_data, 24000);
    // cluster_fMinus_out1_rep1(): end inline
    // cluster_fMinus_rep6(): end inline
    // cluster_fFreeHandle_rep53(): begin inline
    int decomp_0_renamed_8_i24;
    // cluster_fFreeHandle_out0_rep33(): begin inline
    decomp_0_renamed_8_i24 = w_data != nullptr;
    // cluster_fFreeHandle_out0_rep33(): end inline
    if (decomp_0_renamed_8_i24)
    {
        // free(w_data);
    }
    // cluster_fFreeHandle_rep53(): end inline
    // cluster_fFreeHandle_rep54(): begin inline
    int decomp_0_renamed_9_i25;
    // cluster_fFreeHandle_out0_rep32(): begin inline
    decomp_0_renamed_9_i25 = gravity_data != nullptr;
    // cluster_fFreeHandle_out0_rep32(): end inline
    if (decomp_0_renamed_9_i25)
    {
        // free(gravity_data);
    }
    // cluster_fFreeHandle_rep54(): end inline
    // cluster_fFreeHandle_rep55(): begin inline
    int decomp_0_renamed_10_i26;
    // cluster_fFreeHandle_out0_rep31(): begin inline
    decomp_0_renamed_10_i26 = t_data != nullptr;
    // cluster_fFreeHandle_out0_rep31(): end inline
    if (decomp_0_renamed_10_i26)
    {
        // free(t_data);
    }
    // cluster_fFreeHandle_rep55(): end inline
    // cluster_quatConj_rep2(): begin inline
    int k_i27;
    int i_i27;
    int rows_i27;
    int *retQuat_i27_width;
    int *retQuat_i27_height;
    float *retQuat_i27_data;
    // cluster_quatConj_out0_rep2(): begin inline
    int cols_i116;
    int j_i116;
    rows_i27 = (*quat_height);
    cols_i116 = (*quat_width);
    // cluster_quatConj_out0_rep2(): end inline
    // cluster_fSetArray_rep84(): begin inline
    int i_i117;
    int j_i117;
    int *out_i117_width;
    int *out_i117_height;
    float *out_i117_data;
    // cluster_fMallocHandle_rep168(): begin inline
    int i_i258;
    int j_i258;
    int *out_i258_width;
    int *out_i258_height;
    float *out_i258_data;
    out_i258_width = &memregion_78_size4;
    out_i258_height = &memregion_79_size4;
    out_i258_data = memregion_80_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    int _lit63 = 4;
    // cluster_fMallocHandle_out1_rep186(): begin inline
    (*out_i258_height) = rows_i27;
    (*out_i258_width) = _lit63;
    out_i117_width = out_i258_width;
    out_i117_height = out_i258_height;
    out_i117_data = out_i258_data;
    // cluster_fMallocHandle_out1_rep186(): end inline
    // cluster_fMallocHandle_rep168(): end inline
    int _lit29 = 4;
    int _lit30 = 0;
    // cluster_fSetArray_out1_rep94(): begin inline
    for (i_i117 = 0; i_i117 < rows_i27; i_i117++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i117 = 0; j_i117 < _lit29; j_i117++)
        {
            int __idxExpr105 = i_i117 * (*out_i117_width) + j_i117;
#pragma HLS loop_tripcount max = 4
            out_i117_data[__idxExpr105] = _lit30;
        }
    }
    retQuat_i27_width = out_i117_width;
    retQuat_i27_height = out_i117_height;
    retQuat_i27_data = out_i117_data;
    // cluster_fSetArray_out1_rep94(): end inline
    // cluster_fSetArray_rep84(): end inline
    // cluster_quatConj_out1_rep2(): begin inline
    for (i_i27 = 0; i_i27 < rows_i27; i_i27++)
    {
#pragma HLS loop_tripcount max = 2000
        k_i27 = 0;
        int __idxExpr106 = i_i27 * (*retQuat_i27_width) + (k_i27++);
        int __idxExpr107 = i_i27 * (*quat_width) + 0;
        retQuat_i27_data[__idxExpr106] = quat_data[__idxExpr107];
        int __idxExpr108 = i_i27 * (*retQuat_i27_width) + (k_i27++);
        int __idxExpr109 = i_i27 * (*quat_width) + 1;
        retQuat_i27_data[__idxExpr108] = -quat_data[__idxExpr109];
        int __idxExpr110 = i_i27 * (*retQuat_i27_width) + (k_i27++);
        int __idxExpr111 = i_i27 * (*quat_width) + 2;
        retQuat_i27_data[__idxExpr110] = -quat_data[__idxExpr111];
        int __idxExpr112 = i_i27 * (*retQuat_i27_width) + k_i27;
        int __idxExpr113 = i_i27 * (*quat_width) + 3;
        retQuat_i27_data[__idxExpr112] = -quat_data[__idxExpr113];
    }
    _scope6_is_width = retQuat_i27_width;
    _scope6_is_height = retQuat_i27_height;
    _scope6_is_data = retQuat_i27_data;
    int *retVec_i28_width;
    int *retVec_i28_height;
    float *retVec_i28_data;
    // cluster_quatConj_out1_rep2(): end inline
    // cluster_quatConj_rep2(): end inline
    // cluster_quatRot_rep2(): begin inline
    int *temp1_i28_width;
    int *temp1_i28_height;
    float *temp1_i28_data;
    int *temp_i28_width;
    int *temp_i28_height;
    float *temp_i28_data;
    int *vQuat_i28_width;
    int *vQuat_i28_height;
    float *vQuat_i28_data;
    int *tv_i28_width;
    int *tv_i28_height;
    float *tv_i28_data;
    int cols_i28;
    int rows_i28;
    int k_i28;
    int j_i28;
    int i_i28;
    int nr_i28;
    int *ret_i28_width;
    int *ret_i28_height;
    float *ret_i28_data;
    // cluster_quatRot_out0_rep2(): begin inline
    nr_i28 = (*vel_height);
    // cluster_quatRot_out0_rep2(): end inline
    // cluster_fSetArray_rep89(): begin inline
    int i_i120;
    int j_i120;
    int *out_i120_width;
    int *out_i120_height;
    float *out_i120_data;
    // cluster_fMallocHandle_rep174(): begin inline
    int i_i260;
    int j_i260;
    int *out_i260_width;
    int *out_i260_height;
    float *out_i260_data;
    out_i260_width = &memregion_81_size4;
    out_i260_height = &memregion_82_size4;
    out_i260_data = memregion_83_size8000;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    int _lit64 = 1;
    // cluster_fMallocHandle_out1_rep193(): begin inline
    (*out_i260_height) = nr_i28;
    (*out_i260_width) = _lit64;
    out_i120_width = out_i260_width;
    out_i120_height = out_i260_height;
    out_i120_data = out_i260_data;
    // cluster_fMallocHandle_out1_rep193(): end inline
    // cluster_fMallocHandle_rep174(): end inline
    int _lit31 = 1;
    int _lit32 = 0;
    // cluster_fSetArray_out1_rep100(): begin inline
    for (i_i120 = 0; i_i120 < nr_i28; i_i120++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i120 = 0; j_i120 < _lit31; j_i120++)
        {
            int __idxExpr114 = i_i120 * (*out_i120_width) + j_i120;
#pragma HLS loop_tripcount max = 1
            out_i120_data[__idxExpr114] = _lit32;
        }
    }
    tv_i28_width = out_i120_width;
    tv_i28_height = out_i120_height;
    tv_i28_data = out_i120_data;
    // cluster_fSetArray_out1_rep100(): end inline
    // cluster_fSetArray_rep89(): end inline
    // cluster_fHorzcat_rep4(): begin inline
    int c_2_i121;
    int c_1_i121;
    int k_i121;
    int j_i121;
    int i_i121;
    int cols_i121;
    int rows_i121;
    int *out_i121_width;
    int *out_i121_height;
    float *out_i121_data;
    int *out__i262_width;
    int *out__i262_height;
    float *out__i262_data;
    // cluster_fHorzcat_out0_rep6(): begin inline
    int *c_i262_width;
    int *c_i262_height;
    float *c_i262_data;
    int r_3_i262;
    int c_3_i262;
    int r_1_i262;
    rows_i121 = 0;
    cols_i121 = 0;
    r_1_i262 = (*tv_i28_height);
    c_1_i121 = (*tv_i28_width);
    cols_i121 = cols_i121 + c_1_i121;
    c_2_i121 = (*vel_width);
    cols_i121 = cols_i121 + c_2_i121;
    rows_i121 = r_1_i262;
    // cluster_fHorzcat_out0_rep6(): end inline
    // cluster_fMallocHandle_rep180(): begin inline
    int i_i263;
    int j_i263;
    int *out_i263_width;
    int *out_i263_height;
    float *out_i263_data;
    out_i263_width = &memregion_84_size4;
    out_i263_height = &memregion_85_size4;
    out_i263_data = memregion_86_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    // cluster_fMallocHandle_out1_rep200(): begin inline
    (*out_i263_height) = rows_i121;
    (*out_i263_width) = cols_i121;
    out_i121_width = out_i263_width;
    out_i121_height = out_i263_height;
    out_i121_data = out_i263_data;
    // cluster_fMallocHandle_out1_rep200(): end inline
    // cluster_fMallocHandle_rep180(): end inline
    // cluster_fHorzcat_out1_rep6(): begin inline
    for (i_i121 = 0; i_i121 < rows_i121; i_i121++)
    {
#pragma HLS loop_tripcount max = 2000
        k_i121 = 0;
        for (j_i121 = 0; j_i121 < c_1_i121; j_i121++)
        {
            int __idxExpr115 = i_i121 * (*out_i121_width) + k_i121;
            int __idxExpr116 = i_i121 * (*tv_i28_width) + j_i121;
#pragma HLS loop_tripcount max = 1
            out_i121_data[__idxExpr115] = tv_i28_data[__idxExpr116];
            k_i121++;
        }
        for (j_i121 = 0; j_i121 < c_2_i121; j_i121++)
        {
            int __idxExpr117 = i_i121 * (*out_i121_width) + k_i121;
            int __idxExpr118 = i_i121 * (*vel_width) + j_i121;
#pragma HLS loop_tripcount max = 3
            out_i121_data[__idxExpr117] = vel_data[__idxExpr118];
            k_i121++;
        }
    }
    vQuat_i28_width = out_i121_width;
    vQuat_i28_height = out_i121_height;
    vQuat_i28_data = out_i121_data;
    // cluster_fHorzcat_out1_rep6(): end inline
    // cluster_fHorzcat_rep4(): end inline
    // cluster_quatMul_rep6(): begin inline
    int k_i122;
    int j_i122;
    int i_i122;
    int *ret_i122_width;
    int *ret_i122_height;
    float *ret_i122_data;
    int rb_i122;
    int ra_i122;
    // cluster_quatMul_out0_rep8(): begin inline
    int ca_i265;
    int cb_i265;
    k_i122 = 0;
    ra_i122 = (*_scope6_is_height);
    ca_i265 = (*_scope6_is_width);
    rb_i122 = (*vQuat_i28_height);
    cb_i265 = (*vQuat_i28_width);
    // cluster_quatMul_out0_rep8(): end inline
    // cluster_fSetArray_rep111(): begin inline
    int i_i266;
    int j_i266;
    int *out_i266_width;
    int *out_i266_height;
    float *out_i266_data;
    // cluster_fMallocHandle_rep205(): begin inline
    int i_i355;
    int j_i355;
    int *out_i355_width;
    int *out_i355_height;
    float *out_i355_data;
    out_i355_width = &memregion_87_size4;
    out_i355_height = &memregion_88_size4;
    out_i355_data = memregion_89_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    int _lit94 = 4;
    // cluster_fMallocHandle_out1_rep230(): begin inline
    (*out_i355_height) = ra_i122;
    (*out_i355_width) = _lit94;
    out_i266_width = out_i355_width;
    out_i266_height = out_i355_height;
    out_i266_data = out_i355_data;
    // cluster_fMallocHandle_out1_rep230(): end inline
    // cluster_fMallocHandle_rep205(): end inline
    int _lit65 = 4;
    int _lit66 = 0;
    // cluster_fSetArray_out1_rep125(): begin inline
    for (i_i266 = 0; i_i266 < ra_i122; i_i266++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i266 = 0; j_i266 < _lit65; j_i266++)
        {
            int __idxExpr119 = i_i266 * (*out_i266_width) + j_i266;
#pragma HLS loop_tripcount max = 4
            out_i266_data[__idxExpr119] = _lit66;
        }
    }
    ret_i122_width = out_i266_width;
    ret_i122_height = out_i266_height;
    ret_i122_data = out_i266_data;
    // cluster_fSetArray_out1_rep125(): end inline
    // cluster_fSetArray_rep111(): end inline
    // cluster_quatMul_out1_rep8(): begin inline
    j_i122 = 0;
    for (i_i122 = 0; i_i122 < ra_i122; i_i122++)
    {
#pragma HLS loop_tripcount max = 2000
        float ai0_i267;
        float ai1_i267;
        float ai2_i267;
        float ai3_i267;
        float bj0_i267;
        float bj1_i267;
        float bj2_i267;
        float bj3_i267;
        int decomp_0_renamed_93_i267;
        k_i122 = 0;
        int __idxExpr120 = i_i122 * (*_scope6_is_width) + 0;
        ai0_i267 = _scope6_is_data[__idxExpr120];
        int __idxExpr121 = i_i122 * (*_scope6_is_width) + 1;
        ai1_i267 = _scope6_is_data[__idxExpr121];
        int __idxExpr122 = i_i122 * (*_scope6_is_width) + 2;
        ai2_i267 = _scope6_is_data[__idxExpr122];
        int __idxExpr123 = i_i122 * (*_scope6_is_width) + 3;
        ai3_i267 = _scope6_is_data[__idxExpr123];
        int __idxExpr124 = j_i122 * (*vQuat_i28_width) + 0;
        bj0_i267 = vQuat_i28_data[__idxExpr124];
        int __idxExpr125 = j_i122 * (*vQuat_i28_width) + 1;
        bj1_i267 = vQuat_i28_data[__idxExpr125];
        int __idxExpr126 = j_i122 * (*vQuat_i28_width) + 2;
        bj2_i267 = vQuat_i28_data[__idxExpr126];
        int __idxExpr127 = j_i122 * (*vQuat_i28_width) + 3;
        bj3_i267 = vQuat_i28_data[__idxExpr127];
        int __idxExpr128 = i_i122 * (*ret_i122_width) + (k_i122++);
        ret_i122_data[__idxExpr128] =
            ai0_i267 * bj0_i267 - ai1_i267 * bj1_i267 - ai2_i267 * bj2_i267 - ai3_i267 * bj3_i267;
        int __idxExpr129 = i_i122 * (*ret_i122_width) + (k_i122++);
        ret_i122_data[__idxExpr129] =
            ai0_i267 * bj1_i267 + ai1_i267 * bj0_i267 + ai2_i267 * bj3_i267 - ai3_i267 * bj2_i267;
        int __idxExpr130 = i_i122 * (*ret_i122_width) + (k_i122++);
        ret_i122_data[__idxExpr130] =
            ai0_i267 * bj2_i267 - ai1_i267 * bj3_i267 + ai2_i267 * bj0_i267 + ai3_i267 * bj1_i267;
        int __idxExpr131 = i_i122 * (*ret_i122_width) + (k_i122++);
        ret_i122_data[__idxExpr131] =
            ai0_i267 * bj3_i267 + ai1_i267 * bj2_i267 - ai2_i267 * bj1_i267 + ai3_i267 * bj0_i267;
        decomp_0_renamed_93_i267 = rb_i122 == ra_i122;
        if (decomp_0_renamed_93_i267)
        {
            j_i122++;
        }
    }
    temp_i28_width = ret_i122_width;
    temp_i28_height = ret_i122_height;
    temp_i28_data = ret_i122_data;
    // cluster_quatMul_out1_rep8(): end inline
    // cluster_quatMul_rep6(): end inline
    // cluster_quatConj_rep6(): begin inline
    int k_i123;
    int i_i123;
    int rows_i123;
    int *retQuat_i123_width;
    int *retQuat_i123_height;
    float *retQuat_i123_data;
    // cluster_quatConj_out0_rep8(): begin inline
    int cols_i268;
    int j_i268;
    rows_i123 = (*_scope6_is_height);
    cols_i268 = (*_scope6_is_width);
    // cluster_quatConj_out0_rep8(): end inline
    // cluster_fSetArray_rep117(): begin inline
    int i_i269;
    int j_i269;
    int *out_i269_width;
    int *out_i269_height;
    float *out_i269_data;
    // cluster_fMallocHandle_rep212(): begin inline
    int i_i357;
    int j_i357;
    int *out_i357_width;
    int *out_i357_height;
    float *out_i357_data;
    out_i357_width = &memregion_90_size4;
    out_i357_height = &memregion_91_size4;
    out_i357_data = memregion_92_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    int _lit95 = 4;
    // cluster_fMallocHandle_out1_rep238(): begin inline
    (*out_i357_height) = rows_i123;
    (*out_i357_width) = _lit95;
    out_i269_width = out_i357_width;
    out_i269_height = out_i357_height;
    out_i269_data = out_i357_data;
    // cluster_fMallocHandle_out1_rep238(): end inline
    // cluster_fMallocHandle_rep212(): end inline
    int _lit67 = 4;
    int _lit68 = 0;
    // cluster_fSetArray_out1_rep132(): begin inline
    for (i_i269 = 0; i_i269 < rows_i123; i_i269++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i269 = 0; j_i269 < _lit67; j_i269++)
        {
            int __idxExpr132 = i_i269 * (*out_i269_width) + j_i269;
#pragma HLS loop_tripcount max = 4
            out_i269_data[__idxExpr132] = _lit68;
        }
    }
    retQuat_i123_width = out_i269_width;
    retQuat_i123_height = out_i269_height;
    retQuat_i123_data = out_i269_data;
    // cluster_fSetArray_out1_rep132(): end inline
    // cluster_fSetArray_rep117(): end inline
    // cluster_quatConj_out1_rep8(): begin inline
    for (i_i123 = 0; i_i123 < rows_i123; i_i123++)
    {
#pragma HLS loop_tripcount max = 2000
        k_i123 = 0;
        int __idxExpr133 = i_i123 * (*retQuat_i123_width) + (k_i123++);
        int __idxExpr134 = i_i123 * (*_scope6_is_width) + 0;
        retQuat_i123_data[__idxExpr133] = _scope6_is_data[__idxExpr134];
        int __idxExpr135 = i_i123 * (*retQuat_i123_width) + (k_i123++);
        int __idxExpr136 = i_i123 * (*_scope6_is_width) + 1;
        retQuat_i123_data[__idxExpr135] = -_scope6_is_data[__idxExpr136];
        int __idxExpr137 = i_i123 * (*retQuat_i123_width) + (k_i123++);
        int __idxExpr138 = i_i123 * (*_scope6_is_width) + 2;
        retQuat_i123_data[__idxExpr137] = -_scope6_is_data[__idxExpr138];
        int __idxExpr139 = i_i123 * (*retQuat_i123_width) + k_i123;
        int __idxExpr140 = i_i123 * (*_scope6_is_width) + 3;
        retQuat_i123_data[__idxExpr139] = -_scope6_is_data[__idxExpr140];
    }
    temp1_i28_width = retQuat_i123_width;
    temp1_i28_height = retQuat_i123_height;
    temp1_i28_data = retQuat_i123_data;
    // cluster_quatConj_out1_rep8(): end inline
    // cluster_quatConj_rep6(): end inline
    // cluster_quatMul_rep11(): begin inline
    int k_i124;
    int j_i124;
    int i_i124;
    int *ret_i124_width;
    int *ret_i124_height;
    float *ret_i124_data;
    int rb_i124;
    int ra_i124;
    // cluster_quatMul_out0_rep14(): begin inline
    int ca_i271;
    int cb_i271;
    k_i124 = 0;
    ra_i124 = (*temp_i28_height);
    ca_i271 = (*temp_i28_width);
    rb_i124 = (*temp1_i28_height);
    cb_i271 = (*temp1_i28_width);
    // cluster_quatMul_out0_rep14(): end inline
    // cluster_fSetArray_rep123(): begin inline
    int i_i272;
    int j_i272;
    int *out_i272_width;
    int *out_i272_height;
    float *out_i272_data;
    // cluster_fMallocHandle_rep219(): begin inline
    int i_i359;
    int j_i359;
    int *out_i359_width;
    int *out_i359_height;
    float *out_i359_data;
    out_i359_width = &memregion_93_size4;
    out_i359_height = &memregion_94_size4;
    out_i359_data = memregion_95_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    int _lit96 = 4;
    // cluster_fMallocHandle_out1_rep246(): begin inline
    (*out_i359_height) = ra_i124;
    (*out_i359_width) = _lit96;
    out_i272_width = out_i359_width;
    out_i272_height = out_i359_height;
    out_i272_data = out_i359_data;
    // cluster_fMallocHandle_out1_rep246(): end inline
    // cluster_fMallocHandle_rep219(): end inline
    int _lit69 = 4;
    int _lit70 = 0;
    // cluster_fSetArray_out1_rep139(): begin inline
    for (i_i272 = 0; i_i272 < ra_i124; i_i272++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i272 = 0; j_i272 < _lit69; j_i272++)
        {
            int __idxExpr141 = i_i272 * (*out_i272_width) + j_i272;
#pragma HLS loop_tripcount max = 4
            out_i272_data[__idxExpr141] = _lit70;
        }
    }
    ret_i124_width = out_i272_width;
    ret_i124_height = out_i272_height;
    ret_i124_data = out_i272_data;
    // cluster_fSetArray_out1_rep139(): end inline
    // cluster_fSetArray_rep123(): end inline
    // cluster_quatMul_out1_rep14(): begin inline
    j_i124 = 0;
    for (i_i124 = 0; i_i124 < ra_i124; i_i124++)
    {
#pragma HLS loop_tripcount max = 2000
        float ai0_i273;
        float ai1_i273;
        float ai2_i273;
        float ai3_i273;
        float bj0_i273;
        float bj1_i273;
        float bj2_i273;
        float bj3_i273;
        int decomp_0_renamed_94_i273;
        k_i124 = 0;
        int __idxExpr142 = i_i124 * (*temp_i28_width) + 0;
        ai0_i273 = temp_i28_data[__idxExpr142];
        int __idxExpr143 = i_i124 * (*temp_i28_width) + 1;
        ai1_i273 = temp_i28_data[__idxExpr143];
        int __idxExpr144 = i_i124 * (*temp_i28_width) + 2;
        ai2_i273 = temp_i28_data[__idxExpr144];
        int __idxExpr145 = i_i124 * (*temp_i28_width) + 3;
        ai3_i273 = temp_i28_data[__idxExpr145];
        int __idxExpr146 = j_i124 * (*temp1_i28_width) + 0;
        bj0_i273 = temp1_i28_data[__idxExpr146];
        int __idxExpr147 = j_i124 * (*temp1_i28_width) + 1;
        bj1_i273 = temp1_i28_data[__idxExpr147];
        int __idxExpr148 = j_i124 * (*temp1_i28_width) + 2;
        bj2_i273 = temp1_i28_data[__idxExpr148];
        int __idxExpr149 = j_i124 * (*temp1_i28_width) + 3;
        bj3_i273 = temp1_i28_data[__idxExpr149];
        int __idxExpr150 = i_i124 * (*ret_i124_width) + (k_i124++);
        ret_i124_data[__idxExpr150] =
            ai0_i273 * bj0_i273 - ai1_i273 * bj1_i273 - ai2_i273 * bj2_i273 - ai3_i273 * bj3_i273;
        int __idxExpr151 = i_i124 * (*ret_i124_width) + (k_i124++);
        ret_i124_data[__idxExpr151] =
            ai0_i273 * bj1_i273 + ai1_i273 * bj0_i273 + ai2_i273 * bj3_i273 - ai3_i273 * bj2_i273;
        int __idxExpr152 = i_i124 * (*ret_i124_width) + (k_i124++);
        ret_i124_data[__idxExpr152] =
            ai0_i273 * bj2_i273 - ai1_i273 * bj3_i273 + ai2_i273 * bj0_i273 + ai3_i273 * bj1_i273;
        int __idxExpr153 = i_i124 * (*ret_i124_width) + (k_i124++);
        ret_i124_data[__idxExpr153] =
            ai0_i273 * bj3_i273 + ai1_i273 * bj2_i273 - ai2_i273 * bj1_i273 + ai3_i273 * bj0_i273;
        decomp_0_renamed_94_i273 = rb_i124 == ra_i124;
        if (decomp_0_renamed_94_i273)
        {
            j_i124++;
        }
    }
    retVec_i28_width = ret_i124_width;
    retVec_i28_height = ret_i124_height;
    retVec_i28_data = ret_i124_data;
    // cluster_quatMul_out1_rep14(): end inline
    // cluster_quatMul_rep11(): end inline
    // cluster_quatRot_out1_rep2(): begin inline
    rows_i28 = (*retVec_i28_height);
    cols_i28 = (*retVec_i28_width);
    // cluster_quatRot_out1_rep2(): end inline
    // cluster_fSetArray_rep94(): begin inline
    int i_i126;
    int j_i126;
    int *out_i126_width;
    int *out_i126_height;
    float *out_i126_data;
    // cluster_fMallocHandle_rep186(): begin inline
    int i_i274;
    int j_i274;
    int *out_i274_width;
    int *out_i274_height;
    float *out_i274_data;
    out_i274_width = &memregion_96_size4;
    out_i274_height = &memregion_97_size4;
    out_i274_data = memregion_98_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    int _lit71 = 3;
    // cluster_fMallocHandle_out1_rep207(): begin inline
    (*out_i274_height) = rows_i28;
    (*out_i274_width) = _lit71;
    out_i126_width = out_i274_width;
    out_i126_height = out_i274_height;
    out_i126_data = out_i274_data;
    // cluster_fMallocHandle_out1_rep207(): end inline
    // cluster_fMallocHandle_rep186(): end inline
    int _lit33 = 3;
    int _lit34 = 0;
    // cluster_fSetArray_out1_rep106(): begin inline
    for (i_i126 = 0; i_i126 < rows_i28; i_i126++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i126 = 0; j_i126 < _lit33; j_i126++)
        {
            int __idxExpr154 = i_i126 * (*out_i126_width) + j_i126;
#pragma HLS loop_tripcount max = 3
            out_i126_data[__idxExpr154] = _lit34;
        }
    }
    ret_i28_width = out_i126_width;
    ret_i28_height = out_i126_height;
    ret_i28_data = out_i126_data;
    // cluster_fSetArray_out1_rep106(): end inline
    // cluster_fSetArray_rep94(): end inline
    // cluster_quatRot_out2_rep2(): begin inline
    for (i_i28 = 0; i_i28 < rows_i28; i_i28++)
    {
#pragma HLS loop_tripcount max = 2000
        k_i28 = 0;
        for (j_i28 = 1; j_i28 < 4; j_i28++)
        {
            int __idxExpr155 = i_i28 * (*ret_i28_width) + k_i28;
            int __idxExpr156 = i_i28 * (*retVec_i28_width) + j_i28;
#pragma HLS loop_tripcount max = 3
            ret_i28_data[__idxExpr155] = retVec_i28_data[__idxExpr156];
            k_i28++;
        }
    }
    // cluster_quatRot_out2_rep2(): end inline
    // cluster_fFreeHandle_rep137(): begin inline
    int decomp_0_renamed_46_i128;
    // cluster_fFreeHandle_out0_rep148(): begin inline
    decomp_0_renamed_46_i128 = tv_i28_data != nullptr;
    // cluster_fFreeHandle_out0_rep148(): end inline
    if (decomp_0_renamed_46_i128)
    {
        // free(tv_i28_data);
    }
    // cluster_fFreeHandle_rep137(): end inline
    // cluster_fFreeHandle_rep142(): begin inline
    int decomp_0_renamed_47_i129;
    // cluster_fFreeHandle_out0_rep154(): begin inline
    decomp_0_renamed_47_i129 = vQuat_i28_data != nullptr;
    // cluster_fFreeHandle_out0_rep154(): end inline
    if (decomp_0_renamed_47_i129)
    {
        // free(vQuat_i28_data);
    }
    // cluster_fFreeHandle_rep142(): end inline
    // cluster_fFreeHandle_rep147(): begin inline
    int decomp_0_renamed_48_i130;
    // cluster_fFreeHandle_out0_rep160(): begin inline
    decomp_0_renamed_48_i130 = temp_i28_data != nullptr;
    // cluster_fFreeHandle_out0_rep160(): end inline
    if (decomp_0_renamed_48_i130)
    {
        // free(temp_i28_data);
    }
    // cluster_fFreeHandle_rep147(): end inline
    // cluster_fFreeHandle_rep152(): begin inline
    int decomp_0_renamed_49_i131;
    // cluster_fFreeHandle_out0_rep166(): begin inline
    decomp_0_renamed_49_i131 = temp1_i28_data != nullptr;
    // cluster_fFreeHandle_out0_rep166(): end inline
    if (decomp_0_renamed_49_i131)
    {
        // free(temp1_i28_data);
    }
    // cluster_fFreeHandle_rep152(): end inline
    // cluster_fFreeHandle_rep157(): begin inline
    int decomp_0_renamed_50_i132;
    // cluster_fFreeHandle_out0_rep172(): begin inline
    decomp_0_renamed_50_i132 = retVec_i28_data != nullptr;
    // cluster_fFreeHandle_out0_rep172(): end inline
    if (decomp_0_renamed_50_i132)
    {
        // free(retVec_i28_data);
    }
    _scope6_s_width = ret_i28_width;
    _scope6_s_height = ret_i28_height;
    _scope6_s_data = ret_i28_data;
    // cluster_fFreeHandle_rep157(): end inline
    // cluster_quatRot_rep2(): end inline
    // cluster_fFreeHandle_rep56(): begin inline
    int decomp_0_renamed_11_i29;
    // cluster_fFreeHandle_out0_rep30(): begin inline
    decomp_0_renamed_11_i29 = _scope6_is_data != nullptr;
    // cluster_fFreeHandle_out0_rep30(): end inline
    if (decomp_0_renamed_11_i29)
    {
        // free(_scope6_is_data);
    }
    // cluster_fFreeHandle_rep56(): end inline
    // cluster_updateState_out7_out4(): begin inline
    for (_scope6_i = 0; _scope6_i < ((*_scope6_s_height) * (*_scope6_s_width)); _scope6_i++)
    {
#pragma HLS loop_tripcount max = 6000
        _scope6_s_data[_scope6_i] = _scope6_s_data[_scope6_i] * (local_acclTimeInterval); //+(1/2);
    }
    // cluster_updateState_out7_out4(): end inline
    // cluster_fPlus_rep0(): begin inline
    int cols_i31;
    int rows_i31;
    int i_i31;
    int *c_i31_width;
    int *c_i31_height;
    float *c_i31_data;
    // cluster_fPlus_out0_rep5(): begin inline
    int j_i134;
    rows_i31 = (*pos_height);
    cols_i31 = (*pos_width);
    // cluster_fPlus_out0_rep5(): end inline
    // cluster_fMallocHandle_rep95(): begin inline
    int i_i135;
    int j_i135;
    int *out_i135_width;
    int *out_i135_height;
    float *out_i135_data;
    out_i135_width = &memregion_99_size4;
    out_i135_height = &memregion_100_size4;
    out_i135_data = memregion_101_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep98(): begin inline
    (*out_i135_height) = rows_i31;
    (*out_i135_width) = cols_i31;
    c_i31_width = out_i135_width;
    c_i31_height = out_i135_height;
    c_i31_data = out_i135_data;
    // cluster_fMallocHandle_out1_rep98(): end inline
    // cluster_fMallocHandle_rep95(): end inline
    // cluster_fPlus_out1_rep5(): begin inline
    for (i_i31 = 0; i_i31 < (rows_i31 * cols_i31); i_i31++)
    {
#pragma HLS loop_tripcount max = 6000
        c_i31_data[i_i31] = pos_data[i_i31] + _scope6_s_data[i_i31];
    }
    _scope6_is_width = c_i31_width;
    _scope6_is_height = c_i31_height;
    _scope6_is_data = c_i31_data;
    // cluster_fPlus_out1_rep5(): end inline
    // cluster_fPlus_rep0(): end inline
    // cluster_fFreeHandle_rep57(): begin inline
    int decomp_0_renamed_12_i32;
    // cluster_fFreeHandle_out0_rep29(): begin inline
    decomp_0_renamed_12_i32 = pos_data != nullptr;
    // cluster_fFreeHandle_out0_rep29(): end inline
    if (decomp_0_renamed_12_i32)
    {
        // free(pos_data);
    }
    // cluster_fFreeHandle_rep57(): end inline
    // cluster_fDeepCopy_rep4(): begin inline
    int cols_i33;
    int rows_i33;
    int *out_i33_width;
    int *out_i33_height;
    float *out_i33_data;
    int j_i33;
    int i_i33;
    // cluster_fDeepCopy_out0_rep3(): begin inline
    rows_i33 = (*_scope6_is_height);
    cols_i33 = (*_scope6_is_width);
    // cluster_fDeepCopy_out0_rep3(): end inline
    // cluster_fMallocHandle_rep33(): begin inline
    int i_i139;
    int j_i139;
    int *out_i139_width;
    int *out_i139_height;
    float *out_i139_data;
    out_i139_width = &memregion_102_size4;
    out_i139_height = &memregion_103_size4;
    out_i139_data = memregion_104_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep37(): begin inline
    (*out_i139_height) = rows_i33;
    (*out_i139_width) = cols_i33;
    out_i33_width = out_i139_width;
    out_i33_height = out_i139_height;
    out_i33_data = out_i139_data;
    // cluster_fMallocHandle_out1_rep37(): end inline
    // cluster_fMallocHandle_rep33(): end inline
    // cluster_fDeepCopy_out1_rep3(): begin inline
    for (i_i33 = 0; i_i33 < rows_i33; i_i33++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i33 = 0; j_i33 < cols_i33; j_i33++)
        {
            int __idxExpr157 = i_i33 * (*out_i33_width) + j_i33;
            int __idxExpr158 = i_i33 * (*_scope6_is_width) + j_i33;
#pragma HLS loop_tripcount max = 3
            out_i33_data[__idxExpr157] = _scope6_is_data[__idxExpr158];
        }
    }
    memcpy(pos_width, out_i33_width, 4);
    memcpy(pos_height, out_i33_height, 4);
    memcpy(pos_data, out_i33_data, 24000);
    // cluster_fDeepCopy_out1_rep3(): end inline
    // cluster_fDeepCopy_rep4(): end inline
    // cluster_fFreeHandle_rep58(): begin inline
    int decomp_0_renamed_13_i34;
    // cluster_fFreeHandle_out0_rep28(): begin inline
    decomp_0_renamed_13_i34 = _scope6_is_data != nullptr;
    // cluster_fFreeHandle_out0_rep28(): end inline
    if (decomp_0_renamed_13_i34)
    {
        // free(_scope6_is_data);
    }
    // cluster_fFreeHandle_rep58(): end inline
    // cluster_fFreeHandle_rep59(): begin inline
    int decomp_0_renamed_14_i35;
    // cluster_fFreeHandle_out0_rep27(): begin inline
    decomp_0_renamed_14_i35 = _scope6_s_data != nullptr;
    // cluster_fFreeHandle_out0_rep27(): end inline
    if (decomp_0_renamed_14_i35)
    {
        // free(_scope6_s_data);
    }
    // cluster_fFreeHandle_rep59(): end inline
    // cluster_quatConj_rep3(): begin inline
    int k_i36;
    int i_i36;
    int rows_i36;
    int *retQuat_i36_width;
    int *retQuat_i36_height;
    float *retQuat_i36_data;
    // cluster_quatConj_out0_rep1(): begin inline
    int cols_i143;
    int j_i143;
    rows_i36 = (*quat_height);
    cols_i143 = (*quat_width);
    // cluster_quatConj_out0_rep1(): end inline
    // cluster_fSetArray_rep83(): begin inline
    int i_i144;
    int j_i144;
    int *out_i144_width;
    int *out_i144_height;
    float *out_i144_data;
    // cluster_fMallocHandle_rep169(): begin inline
    int i_i283;
    int j_i283;
    int *out_i283_width;
    int *out_i283_height;
    float *out_i283_data;
    out_i283_width = &memregion_105_size4;
    out_i283_height = &memregion_106_size4;
    out_i283_data = memregion_107_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    int _lit72 = 4;
    // cluster_fMallocHandle_out1_rep185(): begin inline
    (*out_i283_height) = rows_i36;
    (*out_i283_width) = _lit72;
    out_i144_width = out_i283_width;
    out_i144_height = out_i283_height;
    out_i144_data = out_i283_data;
    // cluster_fMallocHandle_out1_rep185(): end inline
    // cluster_fMallocHandle_rep169(): end inline
    int _lit35 = 4;
    int _lit36 = 0;
    // cluster_fSetArray_out1_rep95(): begin inline
    for (i_i144 = 0; i_i144 < rows_i36; i_i144++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i144 = 0; j_i144 < _lit35; j_i144++)
        {
            int __idxExpr159 = i_i144 * (*out_i144_width) + j_i144;
#pragma HLS loop_tripcount max = 4
            out_i144_data[__idxExpr159] = _lit36;
        }
    }
    retQuat_i36_width = out_i144_width;
    retQuat_i36_height = out_i144_height;
    retQuat_i36_data = out_i144_data;
    // cluster_fSetArray_out1_rep95(): end inline
    // cluster_fSetArray_rep83(): end inline
    // cluster_quatConj_out1_rep1(): begin inline
    for (i_i36 = 0; i_i36 < rows_i36; i_i36++)
    {
#pragma HLS loop_tripcount max = 2000
        k_i36 = 0;
        int __idxExpr160 = i_i36 * (*retQuat_i36_width) + (k_i36++);
        int __idxExpr161 = i_i36 * (*quat_width) + 0;
        retQuat_i36_data[__idxExpr160] = quat_data[__idxExpr161];
        int __idxExpr162 = i_i36 * (*retQuat_i36_width) + (k_i36++);
        int __idxExpr163 = i_i36 * (*quat_width) + 1;
        retQuat_i36_data[__idxExpr162] = -quat_data[__idxExpr163];
        int __idxExpr164 = i_i36 * (*retQuat_i36_width) + (k_i36++);
        int __idxExpr165 = i_i36 * (*quat_width) + 2;
        retQuat_i36_data[__idxExpr164] = -quat_data[__idxExpr165];
        int __idxExpr166 = i_i36 * (*retQuat_i36_width) + k_i36;
        int __idxExpr167 = i_i36 * (*quat_width) + 3;
        retQuat_i36_data[__idxExpr166] = -quat_data[__idxExpr167];
    }
    _scope6_is_width = retQuat_i36_width;
    _scope6_is_height = retQuat_i36_height;
    _scope6_is_data = retQuat_i36_data;
    int *retVec_i37_width;
    int *retVec_i37_height;
    float *retVec_i37_data;
    // cluster_quatConj_out1_rep1(): end inline
    // cluster_quatConj_rep3(): end inline
    // cluster_quatRot_rep3(): begin inline
    int *temp1_i37_width;
    int *temp1_i37_height;
    float *temp1_i37_data;
    int *temp_i37_width;
    int *temp_i37_height;
    float *temp_i37_data;
    int *vQuat_i37_width;
    int *vQuat_i37_height;
    float *vQuat_i37_data;
    int *tv_i37_width;
    int *tv_i37_height;
    float *tv_i37_data;
    int cols_i37;
    int rows_i37;
    int k_i37;
    int j_i37;
    int i_i37;
    int nr_i37;
    int *ret_i37_width;
    int *ret_i37_height;
    float *ret_i37_data;
    // cluster_quatRot_out0_rep1(): begin inline
    nr_i37 = (*accl_height);
    // cluster_quatRot_out0_rep1(): end inline
    // cluster_fSetArray_rep88(): begin inline
    int i_i147;
    int j_i147;
    int *out_i147_width;
    int *out_i147_height;
    float *out_i147_data;
    // cluster_fMallocHandle_rep175(): begin inline
    int i_i285;
    int j_i285;
    int *out_i285_width;
    int *out_i285_height;
    float *out_i285_data;
    out_i285_width = &memregion_108_size4;
    out_i285_height = &memregion_109_size4;
    out_i285_data = memregion_110_size8000;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    int _lit73 = 1;
    // cluster_fMallocHandle_out1_rep192(): begin inline
    (*out_i285_height) = nr_i37;
    (*out_i285_width) = _lit73;
    out_i147_width = out_i285_width;
    out_i147_height = out_i285_height;
    out_i147_data = out_i285_data;
    // cluster_fMallocHandle_out1_rep192(): end inline
    // cluster_fMallocHandle_rep175(): end inline
    int _lit37 = 1;
    int _lit38 = 0;
    // cluster_fSetArray_out1_rep101(): begin inline
    for (i_i147 = 0; i_i147 < nr_i37; i_i147++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i147 = 0; j_i147 < _lit37; j_i147++)
        {
            int __idxExpr168 = i_i147 * (*out_i147_width) + j_i147;
#pragma HLS loop_tripcount max = 1
            out_i147_data[__idxExpr168] = _lit38;
        }
    }
    tv_i37_width = out_i147_width;
    tv_i37_height = out_i147_height;
    tv_i37_data = out_i147_data;
    // cluster_fSetArray_out1_rep101(): end inline
    // cluster_fSetArray_rep88(): end inline
    // cluster_fHorzcat_rep3(): begin inline
    int c_2_i148;
    int c_1_i148;
    int k_i148;
    int j_i148;
    int i_i148;
    int cols_i148;
    int rows_i148;
    int *out_i148_width;
    int *out_i148_height;
    float *out_i148_data;
    int *out__i287_width;
    int *out__i287_height;
    float *out__i287_data;
    // cluster_fHorzcat_out0_rep7(): begin inline
    int *c_i287_width;
    int *c_i287_height;
    float *c_i287_data;
    int r_3_i287;
    int c_3_i287;
    int r_1_i287;
    rows_i148 = 0;
    cols_i148 = 0;
    r_1_i287 = (*tv_i37_height);
    c_1_i148 = (*tv_i37_width);
    cols_i148 = cols_i148 + c_1_i148;
    c_2_i148 = (*accl_width);
    cols_i148 = cols_i148 + c_2_i148;
    rows_i148 = r_1_i287;
    // cluster_fHorzcat_out0_rep7(): end inline
    // cluster_fMallocHandle_rep181(): begin inline
    int i_i288;
    int j_i288;
    int *out_i288_width;
    int *out_i288_height;
    float *out_i288_data;
    out_i288_width = &memregion_111_size4;
    out_i288_height = &memregion_112_size4;
    out_i288_data = memregion_113_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    // cluster_fMallocHandle_out1_rep199(): begin inline
    (*out_i288_height) = rows_i148;
    (*out_i288_width) = cols_i148;
    out_i148_width = out_i288_width;
    out_i148_height = out_i288_height;
    out_i148_data = out_i288_data;
    // cluster_fMallocHandle_out1_rep199(): end inline
    // cluster_fMallocHandle_rep181(): end inline
    // cluster_fHorzcat_out1_rep7(): begin inline
    for (i_i148 = 0; i_i148 < rows_i148; i_i148++)
    {
#pragma HLS loop_tripcount max = 2000
        k_i148 = 0;
        for (j_i148 = 0; j_i148 < c_1_i148; j_i148++)
        {
            int __idxExpr169 = i_i148 * (*out_i148_width) + k_i148;
            int __idxExpr170 = i_i148 * (*tv_i37_width) + j_i148;
#pragma HLS loop_tripcount max = 1
            out_i148_data[__idxExpr169] = tv_i37_data[__idxExpr170];
            k_i148++;
        }
        for (j_i148 = 0; j_i148 < c_2_i148; j_i148++)
        {
            int __idxExpr171 = i_i148 * (*out_i148_width) + k_i148;
            int __idxExpr172 = i_i148 * (*accl_width) + j_i148;
#pragma HLS loop_tripcount max = 3
            out_i148_data[__idxExpr171] = accl_data[__idxExpr172];
            k_i148++;
        }
    }
    vQuat_i37_width = out_i148_width;
    vQuat_i37_height = out_i148_height;
    vQuat_i37_data = out_i148_data;
    // cluster_fHorzcat_out1_rep7(): end inline
    // cluster_fHorzcat_rep3(): end inline
    // cluster_quatMul_rep5(): begin inline
    int k_i149;
    int j_i149;
    int i_i149;
    int *ret_i149_width;
    int *ret_i149_height;
    float *ret_i149_data;
    int rb_i149;
    int ra_i149;
    // cluster_quatMul_out0_rep9(): begin inline
    int ca_i290;
    int cb_i290;
    k_i149 = 0;
    ra_i149 = (*_scope6_is_height);
    ca_i290 = (*_scope6_is_width);
    rb_i149 = (*vQuat_i37_height);
    cb_i290 = (*vQuat_i37_width);
    // cluster_quatMul_out0_rep9(): end inline
    // cluster_fSetArray_rep112(): begin inline
    int i_i291;
    int j_i291;
    int *out_i291_width;
    int *out_i291_height;
    float *out_i291_data;
    // cluster_fMallocHandle_rep204(): begin inline
    int i_i365;
    int j_i365;
    int *out_i365_width;
    int *out_i365_height;
    float *out_i365_data;
    out_i365_width = &memregion_114_size4;
    out_i365_height = &memregion_115_size4;
    out_i365_data = memregion_116_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    int _lit97 = 4;
    // cluster_fMallocHandle_out1_rep231(): begin inline
    (*out_i365_height) = ra_i149;
    (*out_i365_width) = _lit97;
    out_i291_width = out_i365_width;
    out_i291_height = out_i365_height;
    out_i291_data = out_i365_data;
    // cluster_fMallocHandle_out1_rep231(): end inline
    // cluster_fMallocHandle_rep204(): end inline
    int _lit74 = 4;
    int _lit75 = 0;
    // cluster_fSetArray_out1_rep124(): begin inline
    for (i_i291 = 0; i_i291 < ra_i149; i_i291++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i291 = 0; j_i291 < _lit74; j_i291++)
        {
            int __idxExpr173 = i_i291 * (*out_i291_width) + j_i291;
#pragma HLS loop_tripcount max = 4
            out_i291_data[__idxExpr173] = _lit75;
        }
    }
    ret_i149_width = out_i291_width;
    ret_i149_height = out_i291_height;
    ret_i149_data = out_i291_data;
    // cluster_fSetArray_out1_rep124(): end inline
    // cluster_fSetArray_rep112(): end inline
    // cluster_quatMul_out1_rep9(): begin inline
    j_i149 = 0;
    for (i_i149 = 0; i_i149 < ra_i149; i_i149++)
    {
#pragma HLS loop_tripcount max = 2000
        float ai0_i292;
        float ai1_i292;
        float ai2_i292;
        float ai3_i292;
        float bj0_i292;
        float bj1_i292;
        float bj2_i292;
        float bj3_i292;
        int decomp_0_renamed_100_i292;
        k_i149 = 0;
        int __idxExpr174 = i_i149 * (*_scope6_is_width) + 0;
        ai0_i292 = _scope6_is_data[__idxExpr174];
        int __idxExpr175 = i_i149 * (*_scope6_is_width) + 1;
        ai1_i292 = _scope6_is_data[__idxExpr175];
        int __idxExpr176 = i_i149 * (*_scope6_is_width) + 2;
        ai2_i292 = _scope6_is_data[__idxExpr176];
        int __idxExpr177 = i_i149 * (*_scope6_is_width) + 3;
        ai3_i292 = _scope6_is_data[__idxExpr177];
        int __idxExpr178 = j_i149 * (*vQuat_i37_width) + 0;
        bj0_i292 = vQuat_i37_data[__idxExpr178];
        int __idxExpr179 = j_i149 * (*vQuat_i37_width) + 1;
        bj1_i292 = vQuat_i37_data[__idxExpr179];
        int __idxExpr180 = j_i149 * (*vQuat_i37_width) + 2;
        bj2_i292 = vQuat_i37_data[__idxExpr180];
        int __idxExpr181 = j_i149 * (*vQuat_i37_width) + 3;
        bj3_i292 = vQuat_i37_data[__idxExpr181];
        int __idxExpr182 = i_i149 * (*ret_i149_width) + (k_i149++);
        ret_i149_data[__idxExpr182] =
            ai0_i292 * bj0_i292 - ai1_i292 * bj1_i292 - ai2_i292 * bj2_i292 - ai3_i292 * bj3_i292;
        int __idxExpr183 = i_i149 * (*ret_i149_width) + (k_i149++);
        ret_i149_data[__idxExpr183] =
            ai0_i292 * bj1_i292 + ai1_i292 * bj0_i292 + ai2_i292 * bj3_i292 - ai3_i292 * bj2_i292;
        int __idxExpr184 = i_i149 * (*ret_i149_width) + (k_i149++);
        ret_i149_data[__idxExpr184] =
            ai0_i292 * bj2_i292 - ai1_i292 * bj3_i292 + ai2_i292 * bj0_i292 + ai3_i292 * bj1_i292;
        int __idxExpr185 = i_i149 * (*ret_i149_width) + (k_i149++);
        ret_i149_data[__idxExpr185] =
            ai0_i292 * bj3_i292 + ai1_i292 * bj2_i292 - ai2_i292 * bj1_i292 + ai3_i292 * bj0_i292;
        decomp_0_renamed_100_i292 = rb_i149 == ra_i149;
        if (decomp_0_renamed_100_i292)
        {
            j_i149++;
        }
    }
    temp_i37_width = ret_i149_width;
    temp_i37_height = ret_i149_height;
    temp_i37_data = ret_i149_data;
    // cluster_quatMul_out1_rep9(): end inline
    // cluster_quatMul_rep5(): end inline
    // cluster_quatConj_rep5(): begin inline
    int k_i150;
    int i_i150;
    int rows_i150;
    int *retQuat_i150_width;
    int *retQuat_i150_height;
    float *retQuat_i150_data;
    // cluster_quatConj_out0_rep9(): begin inline
    int cols_i293;
    int j_i293;
    rows_i150 = (*_scope6_is_height);
    cols_i293 = (*_scope6_is_width);
    // cluster_quatConj_out0_rep9(): end inline
    // cluster_fSetArray_rep118(): begin inline
    int i_i294;
    int j_i294;
    int *out_i294_width;
    int *out_i294_height;
    float *out_i294_data;
    // cluster_fMallocHandle_rep211(): begin inline
    int i_i367;
    int j_i367;
    int *out_i367_width;
    int *out_i367_height;
    float *out_i367_data;
    out_i367_width = &memregion_117_size4;
    out_i367_height = &memregion_118_size4;
    out_i367_data = memregion_119_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    int _lit98 = 4;
    // cluster_fMallocHandle_out1_rep239(): begin inline
    (*out_i367_height) = rows_i150;
    (*out_i367_width) = _lit98;
    out_i294_width = out_i367_width;
    out_i294_height = out_i367_height;
    out_i294_data = out_i367_data;
    // cluster_fMallocHandle_out1_rep239(): end inline
    // cluster_fMallocHandle_rep211(): end inline
    int _lit76 = 4;
    int _lit77 = 0;
    // cluster_fSetArray_out1_rep131(): begin inline
    for (i_i294 = 0; i_i294 < rows_i150; i_i294++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i294 = 0; j_i294 < _lit76; j_i294++)
        {
            int __idxExpr186 = i_i294 * (*out_i294_width) + j_i294;
#pragma HLS loop_tripcount max = 4
            out_i294_data[__idxExpr186] = _lit77;
        }
    }
    retQuat_i150_width = out_i294_width;
    retQuat_i150_height = out_i294_height;
    retQuat_i150_data = out_i294_data;
    // cluster_fSetArray_out1_rep131(): end inline
    // cluster_fSetArray_rep118(): end inline
    // cluster_quatConj_out1_rep9(): begin inline
    for (i_i150 = 0; i_i150 < rows_i150; i_i150++)
    {
#pragma HLS loop_tripcount max = 2000
        k_i150 = 0;
        int __idxExpr187 = i_i150 * (*retQuat_i150_width) + (k_i150++);
        int __idxExpr188 = i_i150 * (*_scope6_is_width) + 0;
        retQuat_i150_data[__idxExpr187] = _scope6_is_data[__idxExpr188];
        int __idxExpr189 = i_i150 * (*retQuat_i150_width) + (k_i150++);
        int __idxExpr190 = i_i150 * (*_scope6_is_width) + 1;
        retQuat_i150_data[__idxExpr189] = -_scope6_is_data[__idxExpr190];
        int __idxExpr191 = i_i150 * (*retQuat_i150_width) + (k_i150++);
        int __idxExpr192 = i_i150 * (*_scope6_is_width) + 2;
        retQuat_i150_data[__idxExpr191] = -_scope6_is_data[__idxExpr192];
        int __idxExpr193 = i_i150 * (*retQuat_i150_width) + k_i150;
        int __idxExpr194 = i_i150 * (*_scope6_is_width) + 3;
        retQuat_i150_data[__idxExpr193] = -_scope6_is_data[__idxExpr194];
    }
    temp1_i37_width = retQuat_i150_width;
    temp1_i37_height = retQuat_i150_height;
    temp1_i37_data = retQuat_i150_data;
    // cluster_quatConj_out1_rep9(): end inline
    // cluster_quatConj_rep5(): end inline
    // cluster_quatMul_rep10(): begin inline
    int k_i151;
    int j_i151;
    int i_i151;
    int *ret_i151_width;
    int *ret_i151_height;
    float *ret_i151_data;
    int rb_i151;
    int ra_i151;
    // cluster_quatMul_out0_rep15(): begin inline
    int ca_i296;
    int cb_i296;
    k_i151 = 0;
    ra_i151 = (*temp_i37_height);
    ca_i296 = (*temp_i37_width);
    rb_i151 = (*temp1_i37_height);
    cb_i296 = (*temp1_i37_width);
    // cluster_quatMul_out0_rep15(): end inline
    // cluster_fSetArray_rep124(): begin inline
    int i_i297;
    int j_i297;
    int *out_i297_width;
    int *out_i297_height;
    float *out_i297_data;
    // cluster_fMallocHandle_rep218(): begin inline
    int i_i369;
    int j_i369;
    int *out_i369_width;
    int *out_i369_height;
    float *out_i369_data;
    out_i369_width = &memregion_120_size4;
    out_i369_height = &memregion_121_size4;
    out_i369_data = memregion_122_size32000;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    int _lit99 = 4;
    // cluster_fMallocHandle_out1_rep247(): begin inline
    (*out_i369_height) = ra_i151;
    (*out_i369_width) = _lit99;
    out_i297_width = out_i369_width;
    out_i297_height = out_i369_height;
    out_i297_data = out_i369_data;
    // cluster_fMallocHandle_out1_rep247(): end inline
    // cluster_fMallocHandle_rep218(): end inline
    int _lit78 = 4;
    int _lit79 = 0;
    // cluster_fSetArray_out1_rep138(): begin inline
    for (i_i297 = 0; i_i297 < ra_i151; i_i297++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i297 = 0; j_i297 < _lit78; j_i297++)
        {
            int __idxExpr195 = i_i297 * (*out_i297_width) + j_i297;
#pragma HLS loop_tripcount max = 4
            out_i297_data[__idxExpr195] = _lit79;
        }
    }
    ret_i151_width = out_i297_width;
    ret_i151_height = out_i297_height;
    ret_i151_data = out_i297_data;
    // cluster_fSetArray_out1_rep138(): end inline
    // cluster_fSetArray_rep124(): end inline
    // cluster_quatMul_out1_rep15(): begin inline
    j_i151 = 0;
    for (i_i151 = 0; i_i151 < ra_i151; i_i151++)
    {
#pragma HLS loop_tripcount max = 2000
        float ai0_i298;
        float ai1_i298;
        float ai2_i298;
        float ai3_i298;
        float bj0_i298;
        float bj1_i298;
        float bj2_i298;
        float bj3_i298;
        int decomp_0_renamed_101_i298;
        k_i151 = 0;
        int __idxExpr196 = i_i151 * (*temp_i37_width) + 0;
        ai0_i298 = temp_i37_data[__idxExpr196];
        int __idxExpr197 = i_i151 * (*temp_i37_width) + 1;
        ai1_i298 = temp_i37_data[__idxExpr197];
        int __idxExpr198 = i_i151 * (*temp_i37_width) + 2;
        ai2_i298 = temp_i37_data[__idxExpr198];
        int __idxExpr199 = i_i151 * (*temp_i37_width) + 3;
        ai3_i298 = temp_i37_data[__idxExpr199];
        int __idxExpr200 = j_i151 * (*temp1_i37_width) + 0;
        bj0_i298 = temp1_i37_data[__idxExpr200];
        int __idxExpr201 = j_i151 * (*temp1_i37_width) + 1;
        bj1_i298 = temp1_i37_data[__idxExpr201];
        int __idxExpr202 = j_i151 * (*temp1_i37_width) + 2;
        bj2_i298 = temp1_i37_data[__idxExpr202];
        int __idxExpr203 = j_i151 * (*temp1_i37_width) + 3;
        bj3_i298 = temp1_i37_data[__idxExpr203];
        int __idxExpr204 = i_i151 * (*ret_i151_width) + (k_i151++);
        ret_i151_data[__idxExpr204] =
            ai0_i298 * bj0_i298 - ai1_i298 * bj1_i298 - ai2_i298 * bj2_i298 - ai3_i298 * bj3_i298;
        int __idxExpr205 = i_i151 * (*ret_i151_width) + (k_i151++);
        ret_i151_data[__idxExpr205] =
            ai0_i298 * bj1_i298 + ai1_i298 * bj0_i298 + ai2_i298 * bj3_i298 - ai3_i298 * bj2_i298;
        int __idxExpr206 = i_i151 * (*ret_i151_width) + (k_i151++);
        ret_i151_data[__idxExpr206] =
            ai0_i298 * bj2_i298 - ai1_i298 * bj3_i298 + ai2_i298 * bj0_i298 + ai3_i298 * bj1_i298;
        int __idxExpr207 = i_i151 * (*ret_i151_width) + (k_i151++);
        ret_i151_data[__idxExpr207] =
            ai0_i298 * bj3_i298 + ai1_i298 * bj2_i298 - ai2_i298 * bj1_i298 + ai3_i298 * bj0_i298;
        decomp_0_renamed_101_i298 = rb_i151 == ra_i151;
        if (decomp_0_renamed_101_i298)
        {
            j_i151++;
        }
    }
    retVec_i37_width = ret_i151_width;
    retVec_i37_height = ret_i151_height;
    retVec_i37_data = ret_i151_data;
    // cluster_quatMul_out1_rep15(): end inline
    // cluster_quatMul_rep10(): end inline
    // cluster_quatRot_out1_rep1(): begin inline
    rows_i37 = (*retVec_i37_height);
    cols_i37 = (*retVec_i37_width);
    // cluster_quatRot_out1_rep1(): end inline
    // cluster_fSetArray_rep93(): begin inline
    int i_i153;
    int j_i153;
    int *out_i153_width;
    int *out_i153_height;
    float *out_i153_data;
    // cluster_fMallocHandle_rep187(): begin inline
    int i_i299;
    int j_i299;
    int *out_i299_width;
    int *out_i299_height;
    float *out_i299_data;
    out_i299_width = &memregion_123_size4;
    out_i299_height = &memregion_124_size4;
    out_i299_data = memregion_125_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    int _lit80 = 3;
    // cluster_fMallocHandle_out1_rep206(): begin inline
    (*out_i299_height) = rows_i37;
    (*out_i299_width) = _lit80;
    out_i153_width = out_i299_width;
    out_i153_height = out_i299_height;
    out_i153_data = out_i299_data;
    // cluster_fMallocHandle_out1_rep206(): end inline
    // cluster_fMallocHandle_rep187(): end inline
    int _lit39 = 3;
    int _lit40 = 0;
    // cluster_fSetArray_out1_rep107(): begin inline
    for (i_i153 = 0; i_i153 < rows_i37; i_i153++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i153 = 0; j_i153 < _lit39; j_i153++)
        {
            int __idxExpr208 = i_i153 * (*out_i153_width) + j_i153;
#pragma HLS loop_tripcount max = 3
            out_i153_data[__idxExpr208] = _lit40;
        }
    }
    ret_i37_width = out_i153_width;
    ret_i37_height = out_i153_height;
    ret_i37_data = out_i153_data;
    // cluster_fSetArray_out1_rep107(): end inline
    // cluster_fSetArray_rep93(): end inline
    // cluster_quatRot_out2_rep1(): begin inline
    for (i_i37 = 0; i_i37 < rows_i37; i_i37++)
    {
#pragma HLS loop_tripcount max = 2000
        k_i37 = 0;
        for (j_i37 = 1; j_i37 < 4; j_i37++)
        {
            int __idxExpr209 = i_i37 * (*ret_i37_width) + k_i37;
            int __idxExpr210 = i_i37 * (*retVec_i37_width) + j_i37;
#pragma HLS loop_tripcount max = 3
            ret_i37_data[__idxExpr209] = retVec_i37_data[__idxExpr210];
            k_i37++;
        }
    }
    // cluster_quatRot_out2_rep1(): end inline
    // cluster_fFreeHandle_rep136(): begin inline
    int decomp_0_renamed_55_i155;
    // cluster_fFreeHandle_out0_rep149(): begin inline
    decomp_0_renamed_55_i155 = tv_i37_data != nullptr;
    // cluster_fFreeHandle_out0_rep149(): end inline
    if (decomp_0_renamed_55_i155)
    {
        // free(tv_i37_data);
    }
    // cluster_fFreeHandle_rep136(): end inline
    // cluster_fFreeHandle_rep141(): begin inline
    int decomp_0_renamed_56_i156;
    // cluster_fFreeHandle_out0_rep155(): begin inline
    decomp_0_renamed_56_i156 = vQuat_i37_data != nullptr;
    // cluster_fFreeHandle_out0_rep155(): end inline
    if (decomp_0_renamed_56_i156)
    {
        // free(vQuat_i37_data);
    }
    // cluster_fFreeHandle_rep141(): end inline
    // cluster_fFreeHandle_rep146(): begin inline
    int decomp_0_renamed_57_i157;
    // cluster_fFreeHandle_out0_rep161(): begin inline
    decomp_0_renamed_57_i157 = temp_i37_data != nullptr;
    // cluster_fFreeHandle_out0_rep161(): end inline
    if (decomp_0_renamed_57_i157)
    {
        // free(temp_i37_data);
    }
    // cluster_fFreeHandle_rep146(): end inline
    // cluster_fFreeHandle_rep151(): begin inline
    int decomp_0_renamed_58_i158;
    // cluster_fFreeHandle_out0_rep167(): begin inline
    decomp_0_renamed_58_i158 = temp1_i37_data != nullptr;
    // cluster_fFreeHandle_out0_rep167(): end inline
    if (decomp_0_renamed_58_i158)
    {
        // free(temp1_i37_data);
    }
    // cluster_fFreeHandle_rep151(): end inline
    // cluster_fFreeHandle_rep156(): begin inline
    int decomp_0_renamed_59_i159;
    // cluster_fFreeHandle_out0_rep173(): begin inline
    decomp_0_renamed_59_i159 = retVec_i37_data != nullptr;
    // cluster_fFreeHandle_out0_rep173(): end inline
    if (decomp_0_renamed_59_i159)
    {
        // free(retVec_i37_data);
    }
    _scope6_s_width = ret_i37_width;
    _scope6_s_height = ret_i37_height;
    _scope6_s_data = ret_i37_data;
    // cluster_fFreeHandle_rep156(): end inline
    // cluster_quatRot_rep3(): end inline
    // cluster_fDeepCopy_rep5(): begin inline
    int cols_i38;
    int rows_i38;
    int *out_i38_width;
    int *out_i38_height;
    float *out_i38_data;
    int j_i38;
    int i_i38;
    // cluster_fDeepCopy_out0_rep2(): begin inline
    rows_i38 = (*_scope6_s_height);
    cols_i38 = (*_scope6_s_width);
    // cluster_fDeepCopy_out0_rep2(): end inline
    // cluster_fMallocHandle_rep32(): begin inline
    int i_i161;
    int j_i161;
    int *out_i161_width;
    int *out_i161_height;
    float *out_i161_data;
    out_i161_width = &memregion_126_size4;
    out_i161_height = &memregion_127_size4;
    out_i161_data = memregion_128_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep38(): begin inline
    (*out_i161_height) = rows_i38;
    (*out_i161_width) = cols_i38;
    out_i38_width = out_i161_width;
    out_i38_height = out_i161_height;
    out_i38_data = out_i161_data;
    // cluster_fMallocHandle_out1_rep38(): end inline
    // cluster_fMallocHandle_rep32(): end inline
    // cluster_fDeepCopy_out1_rep2(): begin inline
    for (i_i38 = 0; i_i38 < rows_i38; i_i38++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i38 = 0; j_i38 < cols_i38; j_i38++)
        {
            int __idxExpr211 = i_i38 * (*out_i38_width) + j_i38;
            int __idxExpr212 = i_i38 * (*_scope6_s_width) + j_i38;
#pragma HLS loop_tripcount max = 3
            out_i38_data[__idxExpr211] = _scope6_s_data[__idxExpr212];
        }
    }
    t_width = out_i38_width;
    t_height = out_i38_height;
    t_data = out_i38_data;
    // cluster_fDeepCopy_out1_rep2(): end inline
    // cluster_fDeepCopy_rep5(): end inline
    // cluster_updateState_out7_out5(): begin inline
    for (_scope6_i = 0; _scope6_i < ((*_scope6_s_height) * (*_scope6_s_width)); _scope6_i++)
    {
#pragma HLS loop_tripcount max = 6000
        t_data[_scope6_i] = 1 / 2 * _scope6_s_data[_scope6_i] * (local_acclTimeInterval) * (local_acclTimeInterval);
    }
    // cluster_updateState_out7_out5(): end inline
    // cluster_fFreeHandle_rep60(): begin inline
    int decomp_0_renamed_15_i40;
    // cluster_fFreeHandle_out0_rep26(): begin inline
    decomp_0_renamed_15_i40 = _scope6_s_data != nullptr;
    // cluster_fFreeHandle_out0_rep26(): end inline
    if (decomp_0_renamed_15_i40)
    {
        // free(_scope6_s_data);
    }
    // cluster_fFreeHandle_rep60(): end inline
    // cluster_fFreeHandle_rep61(): begin inline
    int decomp_0_renamed_16_i41;
    // cluster_fFreeHandle_out0_rep25(): begin inline
    decomp_0_renamed_16_i41 = _scope6_is_data != nullptr;
    // cluster_fFreeHandle_out0_rep25(): end inline
    if (decomp_0_renamed_16_i41)
    {
        // free(_scope6_is_data);
    }
    int *out_i42_width;
    int *out_i42_height;
    float *out_i42_data;
    // cluster_fFreeHandle_rep61(): end inline
    // cluster_randnWrapper_rep0(): begin inline
    float seed_i42;
    int i_i42;
    int j_i42;
    // cluster_fSetArray_rep100(): begin inline
    int i_i165;
    int j_i165;
    int *out_i165_width;
    int *out_i165_height;
    float *out_i165_data;
    // cluster_fMallocHandle_rep190(): begin inline
    int i_i307;
    int j_i307;
    int *out_i307_width;
    int *out_i307_height;
    float *out_i307_data;
    out_i307_width = &memregion_129_size4;
    out_i307_height = &memregion_130_size4;
    out_i307_data = memregion_131_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    int _lit81 = 3;
    // cluster_fMallocHandle_out1_rep215(): begin inline
    (*out_i307_height) = (local_n);
    (*out_i307_width) = _lit81;
    out_i165_width = out_i307_width;
    out_i165_height = out_i307_height;
    out_i165_data = out_i307_data;
    // cluster_fMallocHandle_out1_rep215(): end inline
    // cluster_fMallocHandle_rep190(): end inline
    int _lit41 = 3;
    int _lit42 = 0;
    // cluster_fSetArray_out1_rep110(): begin inline
    for (i_i165 = 0; i_i165 < (local_n); i_i165++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i165 = 0; j_i165 < _lit41; j_i165++)
        {
            int __idxExpr213 = i_i165 * (*out_i165_width) + j_i165;
#pragma HLS loop_tripcount max = 3
            out_i165_data[__idxExpr213] = _lit42;
        }
    }
    out_i42_width = out_i165_width;
    out_i42_height = out_i165_height;
    out_i42_data = out_i165_data;
    // cluster_fSetArray_out1_rep110(): end inline
    // cluster_fSetArray_rep100(): end inline
    int _lit14 = 3;
    // cluster_randnWrapper_out1_rep3(): begin inline
    seed_i42 = 0.9;
    for (i_i42 = 0; i_i42 < (local_n); i_i42++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i42 = 0; j_i42 < _lit14; j_i42++)
        {
#pragma HLS loop_tripcount max = 3
            int decomp_0_renamed_62_i166;
            decomp_0_renamed_62_i166 = i_i42 < j_i42;
            if (decomp_0_renamed_62_i166)
            {
                int __idxExpr214 = i_i42 * (*out_i42_width) + j_i42;
                out_i42_data[__idxExpr214] = seed_i42 * ((i_i42 + 1.0) / (j_i42 + 1.0));
            }
            else
            {
                int __idxExpr215 = i_i42 * (*out_i42_width) + j_i42;
                out_i42_data[__idxExpr215] = seed_i42 * ((j_i42 + 1.0) / (i_i42 + 1.0));
            }
        }
    }
    for (i_i42 = 0; i_i42 < (local_n); i_i42++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i42 = 0; j_i42 < _lit14; j_i42++)
        {
#pragma HLS loop_tripcount max = 3
            float w_i166;
            int __idxExpr216 = i_i42 * (*out_i42_width) + j_i42;
            w_i166 = out_i42_data[__idxExpr216];
            w_i166 = ((-2.0 * log(w_i166)) / w_i166);
            int __idxExpr217 = i_i42 * (*out_i42_width) + j_i42;
            out_i42_data[__idxExpr217] = w_i166;
        }
    }
    _scope6_s_width = out_i42_width;
    _scope6_s_height = out_i42_height;
    _scope6_s_data = out_i42_data;
    // cluster_randnWrapper_out1_rep3(): end inline
    // cluster_randnWrapper_rep0(): end inline
    // cluster_updateState_out7_out6(): begin inline
    for (_scope6_i = 0; _scope6_i < ((*_scope6_s_height) * (*_scope6_s_width)); _scope6_i++)
    {
#pragma HLS loop_tripcount max = 6000
        _scope6_s_data[_scope6_i] = _scope6_s_data[_scope6_i] * (local_M_STDDEV_POS);
    }
    // cluster_updateState_out7_out6(): end inline
    // cluster_fPlus_rep1(): begin inline
    int cols_i44;
    int rows_i44;
    int i_i44;
    int *c_i44_width;
    int *c_i44_height;
    float *c_i44_data;
    // cluster_fPlus_out0_rep4(): begin inline
    int j_i167;
    rows_i44 = (*pos_height);
    cols_i44 = (*pos_width);
    // cluster_fPlus_out0_rep4(): end inline
    // cluster_fMallocHandle_rep94(): begin inline
    int i_i168;
    int j_i168;
    int *out_i168_width;
    int *out_i168_height;
    float *out_i168_data;
    out_i168_width = &memregion_132_size4;
    out_i168_height = &memregion_133_size4;
    out_i168_data = memregion_134_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep99(): begin inline
    (*out_i168_height) = rows_i44;
    (*out_i168_width) = cols_i44;
    c_i44_width = out_i168_width;
    c_i44_height = out_i168_height;
    c_i44_data = out_i168_data;
    // cluster_fMallocHandle_out1_rep99(): end inline
    // cluster_fMallocHandle_rep94(): end inline
    // cluster_fPlus_out1_rep4(): begin inline
    for (i_i44 = 0; i_i44 < (rows_i44 * cols_i44); i_i44++)
    {
#pragma HLS loop_tripcount max = 6000
        c_i44_data[i_i44] = pos_data[i_i44] + t_data[i_i44];
    }
    _scope6_is_width = c_i44_width;
    _scope6_is_height = c_i44_height;
    _scope6_is_data = c_i44_data;
    // cluster_fPlus_out1_rep4(): end inline
    // cluster_fPlus_rep1(): end inline
    // cluster_fFreeHandle_rep62(): begin inline
    int decomp_0_renamed_17_i45;
    // cluster_fFreeHandle_out0_rep24(): begin inline
    decomp_0_renamed_17_i45 = pos_data != nullptr;
    // cluster_fFreeHandle_out0_rep24(): end inline
    if (decomp_0_renamed_17_i45)
    {
        // free(pos_data);
    }
    // cluster_fFreeHandle_rep62(): end inline
    // cluster_fPlus_rep2(): begin inline
    int cols_i46;
    int rows_i46;
    int i_i46;
    int *c_i46_width;
    int *c_i46_height;
    float *c_i46_data;
    // cluster_fPlus_out0_rep3(): begin inline
    int j_i171;
    rows_i46 = (*_scope6_is_height);
    cols_i46 = (*_scope6_is_width);
    // cluster_fPlus_out0_rep3(): end inline
    // cluster_fMallocHandle_rep93(): begin inline
    int i_i172;
    int j_i172;
    int *out_i172_width;
    int *out_i172_height;
    float *out_i172_data;
    out_i172_width = &memregion_135_size4;
    out_i172_height = &memregion_136_size4;
    out_i172_data = memregion_137_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep100(): begin inline
    (*out_i172_height) = rows_i46;
    (*out_i172_width) = cols_i46;
    c_i46_width = out_i172_width;
    c_i46_height = out_i172_height;
    c_i46_data = out_i172_data;
    // cluster_fMallocHandle_out1_rep100(): end inline
    // cluster_fMallocHandle_rep93(): end inline
    // cluster_fPlus_out1_rep3(): begin inline
    for (i_i46 = 0; i_i46 < (rows_i46 * cols_i46); i_i46++)
    {
#pragma HLS loop_tripcount max = 6000
        c_i46_data[i_i46] = _scope6_is_data[i_i46] + _scope6_s_data[i_i46];
    }
    memcpy(pos_width, c_i46_width, 4);
    memcpy(pos_height, c_i46_height, 4);
    memcpy(pos_data, c_i46_data, 24000);
    // cluster_fPlus_out1_rep3(): end inline
    // cluster_fPlus_rep2(): end inline
    // cluster_fFreeHandle_rep63(): begin inline
    int decomp_0_renamed_18_i47;
    // cluster_fFreeHandle_out0_rep23(): begin inline
    decomp_0_renamed_18_i47 = _scope6_s_data != nullptr;
    // cluster_fFreeHandle_out0_rep23(): end inline
    if (decomp_0_renamed_18_i47)
    {
        // free(_scope6_s_data);
    }
    // cluster_fFreeHandle_rep63(): end inline
    // cluster_fFreeHandle_rep64(): begin inline
    int decomp_0_renamed_19_i48;
    // cluster_fFreeHandle_out0_rep22(): begin inline
    decomp_0_renamed_19_i48 = t_data != nullptr;
    // cluster_fFreeHandle_out0_rep22(): end inline
    if (decomp_0_renamed_19_i48)
    {
        // free(t_data);
    }
    // cluster_fFreeHandle_rep64(): end inline
    // cluster_fFreeHandle_rep65(): begin inline
    int decomp_0_renamed_20_i49;
    // cluster_fFreeHandle_out0_rep21(): begin inline
    decomp_0_renamed_20_i49 = _scope6_is_data != nullptr;
    // cluster_fFreeHandle_out0_rep21(): end inline
    if (decomp_0_renamed_20_i49)
    {
        // free(_scope6_is_data);
    }
    // cluster_fFreeHandle_rep65(): end inline
    // cluster_fDeepCopy_rep6(): begin inline
    int cols_i50;
    int rows_i50;
    int *out_i50_width;
    int *out_i50_height;
    float *out_i50_data;
    int j_i50;
    int i_i50;
    // cluster_fDeepCopy_out0_rep1(): begin inline
    rows_i50 = (*accl_height);
    cols_i50 = (*accl_width);
    // cluster_fDeepCopy_out0_rep1(): end inline
    // cluster_fMallocHandle_rep31(): begin inline
    int i_i178;
    int j_i178;
    int *out_i178_width;
    int *out_i178_height;
    float *out_i178_data;
    out_i178_width = &memregion_138_size4;
    out_i178_height = &memregion_139_size4;
    out_i178_data = memregion_140_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep39(): begin inline
    (*out_i178_height) = rows_i50;
    (*out_i178_width) = cols_i50;
    out_i50_width = out_i178_width;
    out_i50_height = out_i178_height;
    out_i50_data = out_i178_data;
    // cluster_fMallocHandle_out1_rep39(): end inline
    // cluster_fMallocHandle_rep31(): end inline
    // cluster_fDeepCopy_out1_rep1(): begin inline
    for (i_i50 = 0; i_i50 < rows_i50; i_i50++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i50 = 0; j_i50 < cols_i50; j_i50++)
        {
            int __idxExpr218 = i_i50 * (*out_i50_width) + j_i50;
            int __idxExpr219 = i_i50 * (*accl_width) + j_i50;
#pragma HLS loop_tripcount max = 3
            out_i50_data[__idxExpr218] = accl_data[__idxExpr219];
        }
    }
    t_width = out_i50_width;
    t_height = out_i50_height;
    t_data = out_i50_data;
    // cluster_fDeepCopy_out1_rep1(): end inline
    // cluster_fDeepCopy_rep6(): end inline
    // cluster_updateState_out7_out7(): begin inline
    for (_scope6_i = 0; _scope6_i < ((*accl_height) * (*accl_width)); _scope6_i++)
    {
#pragma HLS loop_tripcount max = 6000
        t_data[_scope6_i] = accl_data[_scope6_i] * (local_acclTimeInterval);
    }
    // cluster_updateState_out7_out7(): end inline
    // cluster_fPlus_rep3(): begin inline
    int cols_i52;
    int rows_i52;
    int i_i52;
    int *c_i52_width;
    int *c_i52_height;
    float *c_i52_data;
    // cluster_fPlus_out0_rep2(): begin inline
    int j_i180;
    rows_i52 = (*vel_height);
    cols_i52 = (*vel_width);
    // cluster_fPlus_out0_rep2(): end inline
    // cluster_fMallocHandle_rep92(): begin inline
    int i_i181;
    int j_i181;
    int *out_i181_width;
    int *out_i181_height;
    float *out_i181_data;
    out_i181_width = &memregion_141_size4;
    out_i181_height = &memregion_142_size4;
    out_i181_data = memregion_143_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep101(): begin inline
    (*out_i181_height) = rows_i52;
    (*out_i181_width) = cols_i52;
    c_i52_width = out_i181_width;
    c_i52_height = out_i181_height;
    c_i52_data = out_i181_data;
    // cluster_fMallocHandle_out1_rep101(): end inline
    // cluster_fMallocHandle_rep92(): end inline
    // cluster_fPlus_out1_rep2(): begin inline
    for (i_i52 = 0; i_i52 < (rows_i52 * cols_i52); i_i52++)
    {
#pragma HLS loop_tripcount max = 6000
        c_i52_data[i_i52] = vel_data[i_i52] + t_data[i_i52];
    }
    _scope6_is_width = c_i52_width;
    _scope6_is_height = c_i52_height;
    _scope6_is_data = c_i52_data;
    // cluster_fPlus_out1_rep2(): end inline
    // cluster_fPlus_rep3(): end inline
    // cluster_fFreeHandle_rep66(): begin inline
    int decomp_0_renamed_21_i53;
    // cluster_fFreeHandle_out0_rep20(): begin inline
    decomp_0_renamed_21_i53 = accl_data != nullptr;
    // cluster_fFreeHandle_out0_rep20(): end inline
    if (decomp_0_renamed_21_i53)
    {
        // free(accl_data);
    }
    // cluster_fFreeHandle_rep66(): end inline
    // cluster_fFreeHandle_rep67(): begin inline
    int decomp_0_renamed_22_i54;
    // cluster_fFreeHandle_out0_rep19(): begin inline
    decomp_0_renamed_22_i54 = t_data != nullptr;
    // cluster_fFreeHandle_out0_rep19(): end inline
    if (decomp_0_renamed_22_i54)
    {
        // free(t_data);
    }
    int *out_i55_width;
    int *out_i55_height;
    float *out_i55_data;
    // cluster_fFreeHandle_rep67(): end inline
    // cluster_randnWrapper_rep1(): begin inline
    float seed_i55;
    int i_i55;
    int j_i55;
    // cluster_fSetArray_rep99(): begin inline
    int i_i185;
    int j_i185;
    int *out_i185_width;
    int *out_i185_height;
    float *out_i185_data;
    // cluster_fMallocHandle_rep191(): begin inline
    int i_i313;
    int j_i313;
    int *out_i313_width;
    int *out_i313_height;
    float *out_i313_data;
    out_i313_width = &memregion_144_size4;
    out_i313_height = &memregion_145_size4;
    out_i313_data = memregion_146_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    int _lit82 = 3;
    // cluster_fMallocHandle_out1_rep214(): begin inline
    (*out_i313_height) = (local_n);
    (*out_i313_width) = _lit82;
    out_i185_width = out_i313_width;
    out_i185_height = out_i313_height;
    out_i185_data = out_i313_data;
    // cluster_fMallocHandle_out1_rep214(): end inline
    // cluster_fMallocHandle_rep191(): end inline
    int _lit43 = 3;
    int _lit44 = 0;
    // cluster_fSetArray_out1_rep111(): begin inline
    for (i_i185 = 0; i_i185 < (local_n); i_i185++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i185 = 0; j_i185 < _lit43; j_i185++)
        {
            int __idxExpr220 = i_i185 * (*out_i185_width) + j_i185;
#pragma HLS loop_tripcount max = 3
            out_i185_data[__idxExpr220] = _lit44;
        }
    }
    out_i55_width = out_i185_width;
    out_i55_height = out_i185_height;
    out_i55_data = out_i185_data;
    // cluster_fSetArray_out1_rep111(): end inline
    // cluster_fSetArray_rep99(): end inline
    int _lit15 = 3;
    // cluster_randnWrapper_out1_rep2(): begin inline
    seed_i55 = 0.9;
    for (i_i55 = 0; i_i55 < (local_n); i_i55++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i55 = 0; j_i55 < _lit15; j_i55++)
        {
#pragma HLS loop_tripcount max = 3
            int decomp_0_renamed_69_i186;
            decomp_0_renamed_69_i186 = i_i55 < j_i55;
            if (decomp_0_renamed_69_i186)
            {
                int __idxExpr221 = i_i55 * (*out_i55_width) + j_i55;
                out_i55_data[__idxExpr221] = seed_i55 * ((i_i55 + 1.0) / (j_i55 + 1.0));
            }
            else
            {
                int __idxExpr222 = i_i55 * (*out_i55_width) + j_i55;
                out_i55_data[__idxExpr222] = seed_i55 * ((j_i55 + 1.0) / (i_i55 + 1.0));
            }
        }
    }
    for (i_i55 = 0; i_i55 < (local_n); i_i55++)
    {
#pragma HLS loop_tripcount max = 2000
        for (j_i55 = 0; j_i55 < _lit15; j_i55++)
        {
#pragma HLS loop_tripcount max = 3
            float w_i186;
            int __idxExpr223 = i_i55 * (*out_i55_width) + j_i55;
            w_i186 = out_i55_data[__idxExpr223];
            w_i186 = ((-2.0 * log(w_i186)) / w_i186);
            int __idxExpr224 = i_i55 * (*out_i55_width) + j_i55;
            out_i55_data[__idxExpr224] = w_i186;
        }
    }
    _scope6_s_width = out_i55_width;
    _scope6_s_height = out_i55_height;
    _scope6_s_data = out_i55_data;
    // cluster_randnWrapper_out1_rep2(): end inline
    // cluster_randnWrapper_rep1(): end inline
    // cluster_updateState_out7_out8(): begin inline
    for (_scope6_i = 0; _scope6_i < ((*_scope6_s_height) * (*_scope6_s_width)); _scope6_i++)
    {
#pragma HLS loop_tripcount max = 6000
        _scope6_s_data[_scope6_i] = _scope6_s_data[_scope6_i] * (local_M_STDDEV_VEL);
    }
    // cluster_updateState_out7_out8(): end inline
    // cluster_fFreeHandle_rep68(): begin inline
    int decomp_0_renamed_23_i57;
    // cluster_fFreeHandle_out0_rep18(): begin inline
    decomp_0_renamed_23_i57 = vel_data != nullptr;
    // cluster_fFreeHandle_out0_rep18(): end inline
    if (decomp_0_renamed_23_i57)
    {
        // free(vel_data);
    }
    // cluster_fFreeHandle_rep68(): end inline
    // cluster_fPlus_rep4(): begin inline
    int cols_i58;
    int rows_i58;
    int i_i58;
    int *c_i58_width;
    int *c_i58_height;
    float *c_i58_data;
    // cluster_fPlus_out0_rep1(): begin inline
    int j_i188;
    rows_i58 = (*_scope6_is_height);
    cols_i58 = (*_scope6_is_width);
    // cluster_fPlus_out0_rep1(): end inline
    // cluster_fMallocHandle_rep91(): begin inline
    int i_i189;
    int j_i189;
    int *out_i189_width;
    int *out_i189_height;
    float *out_i189_data;
    out_i189_width = &memregion_147_size4;
    out_i189_height = &memregion_148_size4;
    out_i189_data = memregion_149_size24000;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    // cluster_fMallocHandle_out1_rep102(): begin inline
    (*out_i189_height) = rows_i58;
    (*out_i189_width) = cols_i58;
    c_i58_width = out_i189_width;
    c_i58_height = out_i189_height;
    c_i58_data = out_i189_data;
    // cluster_fMallocHandle_out1_rep102(): end inline
    // cluster_fMallocHandle_rep91(): end inline
    // cluster_fPlus_out1_rep1(): begin inline
    for (i_i58 = 0; i_i58 < (rows_i58 * cols_i58); i_i58++)
    {
#pragma HLS loop_tripcount max = 6000
        c_i58_data[i_i58] = _scope6_is_data[i_i58] + _scope6_s_data[i_i58];
    }
    memcpy(vel_width, c_i58_width, 4);
    memcpy(vel_height, c_i58_height, 4);
    memcpy(vel_data, c_i58_data, 24000);
    // cluster_fPlus_out1_rep1(): end inline
    // cluster_fPlus_rep4(): end inline
    // cluster_fFreeHandle_rep69(): begin inline
    int decomp_0_renamed_24_i59;
    // cluster_fFreeHandle_out0_rep17(): begin inline
    decomp_0_renamed_24_i59 = _scope6_is_data != nullptr;
    // cluster_fFreeHandle_out0_rep17(): end inline
    if (decomp_0_renamed_24_i59)
    {
        // free(_scope6_is_data);
    }
    // cluster_fFreeHandle_rep69(): end inline
    // cluster_fFreeHandle_rep70(): begin inline
    int decomp_0_renamed_25_i60;
    // cluster_fFreeHandle_out0_rep16(): begin inline
    decomp_0_renamed_25_i60 = _scope6_s_data != nullptr;
    // cluster_fFreeHandle_out0_rep16(): end inline
    if (decomp_0_renamed_25_i60)
    {
        // free(_scope6_s_data);
    }
    // cluster_fFreeHandle_rep70(): end inline
}

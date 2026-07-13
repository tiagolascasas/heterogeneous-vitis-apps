#include "cluster.h"
void cluster(int *I_width, int *I_height, int *I_data, int in_delta, int *rtr_val_width, int *rtr_val_height,
             int *rtr_val_data, int *memregion_159_size8294400, int *memregion_161_size8294400,
             idx_t *memregion_162_size8294400, idx_t *memregion_163_size8294400, val_t *memregion_164_size8294400,
             int *memregion_165_size8294400, int *memregion_166_size8294400, int *memregion_167_size8294400,
             float *memregion_168_size8294400, int *memregion_169_size8294400, val_t *memregion_170_size8294400,
             idx_t *memregion_171_size8294400, idx_t *memregion_172_size8294400, idx_t *memregion_173_size8294400,
             idx_t *memregion_174_size8294400, int *memregion_175_size8294400, int *memregion_177_size16588804,
             int *memregion_182_size8294400);
void cluster(int *I_width, int *I_height, int *I_data, int in_delta, int *rtr_val_width, int *rtr_val_height,
             int *rtr_val_data, int *memregion_159_size8294400, int *memregion_161_size8294400,
             idx_t *memregion_162_size8294400, idx_t *memregion_163_size8294400, val_t *memregion_164_size8294400,
             int *memregion_165_size8294400, int *memregion_166_size8294400, int *memregion_167_size8294400,
             float *memregion_168_size8294400, int *memregion_169_size8294400, val_t *memregion_170_size8294400,
             idx_t *memregion_171_size8294400, idx_t *memregion_172_size8294400, idx_t *memregion_173_size8294400,
             idx_t *memregion_174_size8294400, int *memregion_175_size8294400, int *memregion_177_size16588804,
             int *memregion_182_size8294400)
{
#pragma HLS INTERFACE m_axi port=I_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=I_width bundle=control
#pragma HLS INTERFACE m_axi port=I_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=I_height bundle=control
#pragma HLS INTERFACE m_axi port=I_data bundle=gmem1 offset=slave
#pragma HLS INTERFACE s_axilite port=I_data bundle=control
#pragma HLS INTERFACE s_axilite port=in_delta bundle=control
#pragma HLS INTERFACE m_axi port=rtr_val_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=rtr_val_width bundle=control
#pragma HLS INTERFACE m_axi port=rtr_val_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=rtr_val_height bundle=control
#pragma HLS INTERFACE m_axi port=rtr_val_data bundle=gmem2 offset=slave
#pragma HLS INTERFACE s_axilite port=rtr_val_data bundle=control
#pragma HLS INTERFACE m_axi port=memregion_159_size8294400 bundle=gmem3 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_159_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_161_size8294400 bundle=gmem4 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_161_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_162_size8294400 bundle=gmem5 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_162_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_163_size8294400 bundle=gmem6 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_163_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_164_size8294400 bundle=gmem7 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_164_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_165_size8294400 bundle=gmem8 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_165_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_166_size8294400 bundle=gmem9 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_166_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_167_size8294400 bundle=gmem10 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_167_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_168_size8294400 bundle=gmem11 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_168_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_169_size8294400 bundle=gmem12 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_169_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_170_size8294400 bundle=gmem13 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_170_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_171_size8294400 bundle=gmem14 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_171_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_172_size8294400 bundle=gmem15 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_172_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_173_size8294400 bundle=gmem16 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_173_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_174_size8294400 bundle=gmem17 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_174_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_175_size8294400 bundle=gmem18 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_175_size8294400 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_177_size16588804 bundle=gmem19 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_177_size16588804 bundle=control
#pragma HLS INTERFACE m_axi port=memregion_182_size8294400 bundle=gmem20 offset=slave
#pragma HLS INTERFACE s_axilite port=memregion_182_size8294400 bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control
    int local_I_height;
    local_I_height = *I_height;
    int local_I_width;
    local_I_width = *I_width;
    int memregion_179_size30244[7561];
#pragma HLS bind_storage variable = memregion_179_size30244 type = RAM_2P impl = BRAM
    int memregion_181_size4;
    int memregion_180_size4;
    int memregion_178_size4;
    int memregion_176_size4;
    int memregion_160_size4;
    int memregion_158_size4;
    int memregion_157_size8[2];
    int memregion_156_size4;
    int memregion_155_size8[2];
    int memregion_154_size4;
    int memregion_153_size8[2];
    int memregion_152_size4;
    int memregion_151_size8[2];
    int memregion_150_size4;
#pragma clava bram_usage = 6 max_bram = 1824 bytes_per_bram = 2048
    int *joins_pt_width;
    int *joins_pt_data;
#pragma clava param = I_height type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = I_width type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = I_data type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 8294400
#pragma clava param = in_delta type = PRIMITIVE in = LIVEIN out = NONE size = 4
#pragma clava param = rtr_val_height type = WRAPPED_STRUCT_POINTER in = NONE out = LIVEOUT_USEDLATER size = 4
#pragma clava param = rtr_val_width type = WRAPPED_STRUCT_POINTER in = NONE out = LIVEOUT_USEDLATER size = 4
#pragma clava param = rtr_val_data type = WRAPPED_STRUCT_POINTER in = NONE out = LIVEOUT_USEDLATER size = 3024
    int gdl;
    int *ell_pt_width;
    int *ell_pt_data;
    int *acc_pt_width;
    int *acc_pt_data;
    int forest_pt_size;
    int pairs_pt_size;
    int regions_pt_size;
    idx_t *regions_pt_parent;
    idx_t *regions_pt_index;
    val_t *regions_pt_value;
    int *regions_pt_area;
    int *regions_pt_area_top;
    int *regions_pt_area_bot;
    float *regions_pt_variation;
    int *regions_pt_maxstable;
    idx_t *forest_pt_parent;
    idx_t *forest_pt_shortcut;
    idx_t *forest_pt_region;
    int *forest_pt_area;
    val_t *pairs_pt_value;
    idx_t *pairs_pt_index;
    int *I_pt_width;
    int *I_pt_height;
    int *I_pt_data;
    int njoins;
    int *dims_width;
    int *dims_data;
    int ndims;
    int nmer;
    int ner;
    int nel;
    int *visited_pt_width;
    int *visited_pt_data;
    int *strides_pt_width;
    int *strides_pt_data;
    int *nsubs_pt_width;
    int *nsubs_pt_data;
    int *subs_pt_width;
    int *subs_pt_data;
    idx_t node_is_void;
    val_t delta;
    int dup_cleanup;
    int bad_cleanup;
    int big_cleanup;
    int small_cleanup;
    int *out_width;
    int *out_height;
    int *out_data;
    int BUCKETS;
    int nout;
    int k;
    idx_t rindex;
    idx_t i;
    int decomp_25;
    int decomp_36;
    int *_scope3_pt_width;
    int *_scope3_pt_height;
    int *_scope3_pt_data;
    int _scope3_j;
    unsigned int _scope1_buckets[256];
    // cluster_mser_out0(): begin inline
    int OUT_REGIONS_i395;
    int OUT_ELL_i395;
    int OUT_PARENTS_i395;
    int OUT_AREA_i395;
    int IN_I_i395;
    int IN_DELTA_i395;
    int verbose_i395;
    rindex = 0;
    nout = 1;
    OUT_REGIONS_i395 = 0;
    OUT_ELL_i395 = 1;
    OUT_PARENTS_i395 = 2;
    OUT_AREA_i395 = 3;
    BUCKETS = 256;
    IN_I_i395 = 0;
    IN_DELTA_i395 = 1;
    verbose_i395 = 1;
    small_cleanup = 1;
    big_cleanup = 1;
    bad_cleanup = 0;
    dup_cleanup = 1;
    node_is_void = 0xffffffff;
    ner = 0;
    nmer = 0;
    njoins = 0;
    delta = 0;
    delta = in_delta;
    nel = (local_I_height) * (local_I_width);
    ndims = 2;
    dims_width = &memregion_150_size4;
    dims_data = memregion_151_size8;
// cluster_mser_out0(): end inline
#pragma clava malloc_size max = 12 min = 12 avg = 12
    I_pt_width = &local_I_width;
    I_pt_height = &local_I_height;
    I_pt_data = I_data;
    // cluster_mser_out1(): begin inline
    dims_data[0] = (local_I_height);
    dims_data[1] = (local_I_width);
    subs_pt_width = &memregion_152_size4;
    subs_pt_data = memregion_153_size8;
    nsubs_pt_width = &memregion_154_size4;
    nsubs_pt_data = memregion_155_size8;
    strides_pt_width = &memregion_156_size4;
    strides_pt_data = memregion_157_size8;
    visited_pt_width = &memregion_158_size4;
    visited_pt_data = memregion_159_size8294400;
    joins_pt_width = &memregion_160_size4;
    joins_pt_data = memregion_161_size8294400;
    regions_pt_parent = memregion_162_size8294400;
    regions_pt_index = memregion_163_size8294400;
    regions_pt_value = memregion_164_size8294400;
    regions_pt_area = memregion_165_size8294400;
    regions_pt_area_top = memregion_166_size8294400;
    regions_pt_area_bot = memregion_167_size8294400;
    regions_pt_variation = memregion_168_size8294400;
    regions_pt_maxstable = memregion_169_size8294400;
// cluster_mser_out1(): end inline
#pragma clava malloc_size max = 12 min = 12 avg = 12
#pragma clava malloc_size max = 12 min = 12 avg = 12
#pragma clava malloc_size max = 12 min = 12 avg = 12
#pragma clava malloc_size max = 8294404 min = 8294404 avg = 8294404
#pragma clava malloc_size max = 8294404 min = 8294404 avg = 8294404
#pragma clava malloc_size max = 66355200 min = 66355200 avg = 66355200
    // cluster_mser_out2(): begin inline
    regions_pt_size = nel;
    pairs_pt_value = memregion_170_size8294400;
    pairs_pt_index = memregion_171_size8294400;
// cluster_mser_out2(): end inline
#pragma clava malloc_size max = 16588800 min = 16588800 avg = 16588800
    // cluster_mser_out3(): begin inline
    pairs_pt_size = nel;
    forest_pt_parent = memregion_172_size8294400;
    forest_pt_shortcut = memregion_173_size8294400;
    forest_pt_region = memregion_174_size8294400;
    forest_pt_area = memregion_175_size8294400;
// cluster_mser_out3(): end inline
#pragma clava malloc_size max = 33177600 min = 33177600 avg = 33177600
    // cluster_mser_out4(): begin inline
    forest_pt_size = nel;
    strides_pt_data[0] = 1;
    for (k = 1; k < ndims; ++k)
    {
#pragma HLS loop_tripcount max = 1
        strides_pt_data[k] = strides_pt_data[k - 1] * dims_data[k - 1];
    }
    // cluster_mser_out4(): end inline
    memset(_scope1_buckets, 0, sizeof(unsigned int) * BUCKETS);
    // cluster_mser_out5(): begin inline
    int decomp_23_renamed_0_i400;
    int decomp_24_renamed_0_i400;
    for (i = 0; i < nel; ++i)
    {
#pragma HLS loop_tripcount max = 2073600
        val_t v_i400;
        v_i400 = I_pt_data[i];
        ++_scope1_buckets[v_i400];
    }
    for (i = 1; i < BUCKETS; ++i)
    {
#pragma HLS loop_tripcount max = 255
        _scope1_buckets[i] = _scope1_buckets[i] + _scope1_buckets[i - 1];
    }
    for (i = nel; i >= 1;)
    {
#pragma HLS loop_tripcount max = 2073600
        val_t v_i400;
        idx_t j_i400;
        v_i400 = I_pt_data[--i];
        j_i400 = --_scope1_buckets[v_i400];
        pairs_pt_value[j_i400] = v_i400;
        pairs_pt_index[j_i400] = i;
    }
    for (i = 0; i < nel; ++i)
    {
#pragma HLS loop_tripcount max = 2073600
        forest_pt_parent[i] = node_is_void;
    }
    gdl = ndims * (ndims + 1) / 2 + ndims;
    for (i = 0; i < nel; ++i)
    {
#pragma HLS loop_tripcount max = 2073600
        idx_t index_i400;
        val_t value_i400;
        idx_t _scope2_temp_i400;
        index_i400 = pairs_pt_index[i];
        value_i400 = pairs_pt_value[i];
        rindex = index_i400;
        forest_pt_parent[index_i400] = index_i400;
        forest_pt_shortcut[index_i400] = index_i400;
        forest_pt_area[index_i400] = 1;
        _scope2_temp_i400 = index_i400;
        for (k = ndims - 1; k >= 0; --k)
        {
#pragma HLS loop_tripcount max = 2
            nsubs_pt_data[k] = -1;
            subs_pt_data[k] = _scope2_temp_i400 / strides_pt_data[k];
            _scope2_temp_i400 = _scope2_temp_i400 % strides_pt_data[k];
        }
        while (1)
        {
#pragma HLS loop_tripcount max = 9
            int good_i400;
            idx_t nindex_i400;
            int exitWhile_i400;
            good_i400 = 1;
            nindex_i400 = 0;
            for (k = 0; k < ndims && good_i400; ++k)
            {
#pragma HLS loop_tripcount max = 2 min = 1
                int temp_i400;
                temp_i400 = nsubs_pt_data[k] + subs_pt_data[k];
                good_i400 = good_i400 & 0 <= temp_i400 && temp_i400 < dims_data[k];
                nindex_i400 = nindex_i400 + temp_i400 * strides_pt_data[k];
            }
            if ((good_i400 && nindex_i400 != index_i400 && forest_pt_parent[nindex_i400] != node_is_void))
            {
                idx_t nrindex_i400;
                idx_t nvisited_i400;
                val_t nrvalue_i400;
                int decomp_0_renamed_113_i400;
                nrindex_i400 = 0;
                nrvalue_i400 = 0;
                nvisited_i400 = 0;
                while (forest_pt_shortcut[rindex] != rindex)
                {
#pragma HLS loop_tripcount max = 1 min = 0
                    visited_pt_data[nvisited_i400++] = rindex;
                    rindex = forest_pt_shortcut[rindex];
                }
                while (nvisited_i400--)
                {
                    unsigned int __idxExpr225 = visited_pt_data[nvisited_i400];
#pragma HLS loop_tripcount max = 1 min = 0
                    forest_pt_shortcut[__idxExpr225] = rindex;
                }
                nrindex_i400 = nindex_i400;
                nvisited_i400 = 0;
                while (forest_pt_shortcut[nrindex_i400] != nrindex_i400)
                {
#pragma HLS loop_tripcount max = 38 min = 0
                    visited_pt_data[nvisited_i400++] = nrindex_i400;
                    nrindex_i400 = forest_pt_shortcut[nrindex_i400];
                }
                while (nvisited_i400--)
                {
                    unsigned int __idxExpr226 = visited_pt_data[nvisited_i400];
#pragma HLS loop_tripcount max = 38 min = 0
                    forest_pt_shortcut[__idxExpr226] = nrindex_i400;
                }
                decomp_0_renamed_113_i400 = rindex != nrindex_i400;
                if (decomp_0_renamed_113_i400)
                {
                    int decomp_1_renamed_3_i400;
                    nrvalue_i400 = I_pt_data[nrindex_i400];
                    decomp_1_renamed_3_i400 = nrvalue_i400 == value_i400;
                    if (decomp_1_renamed_3_i400)
                    {
                        forest_pt_parent[rindex] = nrindex_i400;
                        forest_pt_shortcut[rindex] = nrindex_i400;
                        forest_pt_area[nrindex_i400] = forest_pt_area[nrindex_i400] + forest_pt_area[rindex];
                        joins_pt_data[njoins++] = rindex;
                    }
                    else
                    {
                        int decomp_2_renamed_5_i400;
                        forest_pt_parent[nrindex_i400] = rindex;
                        forest_pt_shortcut[nrindex_i400] = rindex;
                        forest_pt_area[rindex] = forest_pt_area[rindex] + forest_pt_area[nrindex_i400];
                        decomp_2_renamed_5_i400 = nrvalue_i400 != value_i400;
                        if (decomp_2_renamed_5_i400)
                        {
                            forest_pt_region[nrindex_i400] = ner;
                            regions_pt_index[ner] = nrindex_i400;
                            regions_pt_parent[ner] = ner;
                            regions_pt_value[ner] = nrvalue_i400;
                            regions_pt_area[ner] = forest_pt_area[nrindex_i400];
                            regions_pt_area_top[ner] = nel;
                            regions_pt_area_bot[ner] = 0;
                            ++ner;
                        }
                        joins_pt_data[njoins++] = nrindex_i400;
                    }
                }
            }
            k = 0;
            nsubs_pt_data[k] = nsubs_pt_data[k] + 1;
            exitWhile_i400 = 0;
            while (nsubs_pt_data[k] > 1)
            {
#pragma HLS loop_tripcount max = 2 min = 0
                int decomp_3_renamed_1_i400;
                nsubs_pt_data[k++] = -1;
                decomp_3_renamed_1_i400 = k == ndims;
                if (decomp_3_renamed_1_i400)
                {
                    exitWhile_i400 = 1;
                    break;
                }
                nsubs_pt_data[k] = nsubs_pt_data[k] + 1;
            }
            if (exitWhile_i400)
            {
                break;
            }
        }
    }
    forest_pt_region[rindex] = ner;
    regions_pt_index[ner] = rindex;
    regions_pt_parent[ner] = ner;
    regions_pt_value[ner] = I_pt_data[rindex];
    regions_pt_area[ner] = forest_pt_area[rindex];
    regions_pt_area_top[ner] = nel;
    regions_pt_area_bot[ner] = 0;
    ++ner;
    for (i = 0; i < ner; ++i)
    {
#pragma HLS loop_tripcount max = 25050
        idx_t index_i400;
        val_t value_i400;
        idx_t j_i400;
        index_i400 = regions_pt_index[i];
        value_i400 = regions_pt_value[i];
        j_i400 = i;
        while (j_i400 == i)
        {
#pragma HLS loop_tripcount max = 188 min = 1
            idx_t pindex_i400;
            val_t pvalue_i400;
            int decomp_4_renamed_1_i400;
            int decomp_5_renamed_0_i400;
            pindex_i400 = forest_pt_parent[index_i400];
            pvalue_i400 = I_pt_data[pindex_i400];
            decomp_4_renamed_1_i400 = index_i400 == pindex_i400;
            if (decomp_4_renamed_1_i400)
            {
                j_i400 = forest_pt_region[index_i400];
                break;
            }
            decomp_5_renamed_0_i400 = value_i400 < pvalue_i400;
            if (decomp_5_renamed_0_i400)
            {
                j_i400 = forest_pt_region[index_i400];
            }
            index_i400 = pindex_i400;
            value_i400 = pvalue_i400;
        }
        regions_pt_parent[i] = j_i400;
    }
    for (i = 0; i < ner; ++i)
    {
#pragma HLS loop_tripcount max = 25050
        idx_t parent_i400;
        int val0_i400;
        int val1_i400;
        int val_i400;
        idx_t j_i400;
        parent_i400 = regions_pt_parent[i];
        val0_i400 = regions_pt_value[i];
        val1_i400 = regions_pt_value[parent_i400];
        val_i400 = val0_i400;
        j_i400 = i;
        while (1)
        {
#pragma HLS loop_tripcount max = 4 min = 1
            int valp_i400;
            int decomp_6_renamed_0_i400;
            int decomp_7_renamed_0_i400;
            int decomp_8_renamed_0_i400;
            int decomp_9_renamed_0_i400;
            int decomp_10_renamed_0_i400;
            int decomp_11_renamed_0_i400;
            int decomp_12_renamed_0_i400;
            int decomp_13_renamed_0_i400;
            int decomp_14_renamed_0_i400;
            int decomp_15_renamed_0_i400;
            int decomp_16_renamed_0_i400;
            int decomp_17_renamed_0_i400;
            int decomp_18_renamed_0_i400;
            int decomp_19_renamed_0_i400;
            int decomp_20_renamed_0_i400;
            int decomp_21_renamed_0_i400;
            valp_i400 = regions_pt_value[parent_i400];
            decomp_6_renamed_0_i400 = val_i400 - delta;
            decomp_7_renamed_0_i400 = val0_i400 <= decomp_6_renamed_0_i400;
            decomp_8_renamed_0_i400 = val_i400 - delta;
            decomp_9_renamed_0_i400 = decomp_8_renamed_0_i400 < val1_i400;
            decomp_10_renamed_0_i400 = decomp_7_renamed_0_i400 && decomp_9_renamed_0_i400;
            if (decomp_10_renamed_0_i400)
            {
                regions_pt_area_bot[j_i400] = (regions_pt_area_bot[j_i400] > regions_pt_area[i])
                                                  ? regions_pt_area_bot[j_i400]
                                                  : regions_pt_area[i];
            }
            decomp_11_renamed_0_i400 = val0_i400 + delta;
            decomp_12_renamed_0_i400 = val_i400 <= decomp_11_renamed_0_i400;
            decomp_13_renamed_0_i400 = val0_i400 + delta;
            decomp_14_renamed_0_i400 = decomp_13_renamed_0_i400 < valp_i400;
            decomp_15_renamed_0_i400 = decomp_12_renamed_0_i400 && decomp_14_renamed_0_i400;
            if (decomp_15_renamed_0_i400)
            {
                regions_pt_area_top[i] = regions_pt_area[j_i400];
            }
            decomp_16_renamed_0_i400 = val_i400 - delta;
            decomp_17_renamed_0_i400 = val1_i400 <= decomp_16_renamed_0_i400;
            decomp_18_renamed_0_i400 = val0_i400 + delta;
            decomp_19_renamed_0_i400 = decomp_18_renamed_0_i400 < val_i400;
            decomp_20_renamed_0_i400 = decomp_17_renamed_0_i400 && decomp_19_renamed_0_i400;
            if (decomp_20_renamed_0_i400)
            {
                break;
            }
            decomp_21_renamed_0_i400 = j_i400 == parent_i400;
            if (decomp_21_renamed_0_i400)
            {
                break;
            }
            j_i400 = parent_i400;
            parent_i400 = regions_pt_parent[j_i400];
            val_i400 = valp_i400;
        }
    }
    for (i = 0; i < ner; ++i)
    {
#pragma HLS loop_tripcount max = 25050
        int area_i400;
        int area_top_i400;
        int area_bot_i400;
        area_i400 = regions_pt_area[i];
        area_top_i400 = regions_pt_area_top[i];
        area_bot_i400 = regions_pt_area_bot[i];
        regions_pt_variation[i] = (area_top_i400 - area_bot_i400) / (area_i400 * 1.0);
        regions_pt_maxstable[i] = 1;
    }
    nmer = ner;
    for (i = 0; i < ner; ++i)
    {
#pragma HLS loop_tripcount max = 25050
        idx_t parent_i400;
        float var_i400;
        float pvar_i400;
        idx_t loser_i400;
        int decomp_22_renamed_0_i400;
        parent_i400 = regions_pt_parent[i];
        var_i400 = regions_pt_variation[i];
        pvar_i400 = regions_pt_variation[parent_i400];
        decomp_22_renamed_0_i400 = var_i400 < pvar_i400;
        if (decomp_22_renamed_0_i400)
        {
            loser_i400 = parent_i400;
        }
        else
        {
            loser_i400 = i;
        }
        if (regions_pt_maxstable[loser_i400])
        {
            --nmer;
        }
        regions_pt_maxstable[loser_i400] = 0;
    }
    decomp_23_renamed_0_i400 = big_cleanup || small_cleanup;
    decomp_24_renamed_0_i400 = decomp_23_renamed_0_i400 || bad_cleanup;
    decomp_25 = decomp_24_renamed_0_i400 || dup_cleanup;
    // cluster_mser_out5(): end inline
    if (decomp_25)
    {
        // cluster_mser_out6(): begin inline
        int ndup_i401;
        int nbad_i401;
        int nsmall_i401;
        int nbig_i401;
        // cluster_mser_out6_out0(): begin inline
        nbig_i401 = 0;
        nsmall_i401 = 0;
        nbad_i401 = 0;
        ndup_i401 = 0;
        for (i = 0; i < ner; ++i)
        {
#pragma HLS loop_tripcount max = 25050
            int decomp_26_renamed_0_i407;
            int decomp_27_renamed_0_i407;
            int decomp_28_renamed_0_i407;
            int decomp_29_renamed_0_i407;
            int decomp_30_renamed_0_i407;
            int decomp_31_renamed_0_i407;
            int decomp_32_renamed_0_i407;
            if (!regions_pt_maxstable[i])
            {
                continue;
            }
            decomp_26_renamed_0_i407 = regions_pt_variation[i] >= 1.0f;
            decomp_27_renamed_0_i407 = bad_cleanup && decomp_26_renamed_0_i407;
            if (decomp_27_renamed_0_i407)
            {
                ++nbad_i401;
                regions_pt_maxstable[i] = 0;
                --nmer;
                continue;
            }
            decomp_28_renamed_0_i407 = nel / 2;
            decomp_29_renamed_0_i407 = regions_pt_area[i] > decomp_28_renamed_0_i407;
            decomp_30_renamed_0_i407 = big_cleanup && decomp_29_renamed_0_i407;
            if (decomp_30_renamed_0_i407)
            {
                ++nbig_i401;
                regions_pt_maxstable[i] = 0;
                --nmer;
                continue;
            }
            decomp_31_renamed_0_i407 = regions_pt_area[i] < 25;
            decomp_32_renamed_0_i407 = small_cleanup && decomp_31_renamed_0_i407;
            if (decomp_32_renamed_0_i407)
            {
                ++nsmall_i401;
                regions_pt_maxstable[i] = 0;
                --nmer;
                continue;
            }
            if (dup_cleanup)
            {
                idx_t parent_i407;
                int area_i407;
                int parea_i407;
                float change_i407;
                int decomp_33_renamed_0_i407;
                parent_i407 = regions_pt_parent[i];
                decomp_33_renamed_0_i407 = parent_i407 != i;
                if (decomp_33_renamed_0_i407)
                {
                    int decomp_35_renamed_0_i407;
                    while (!regions_pt_maxstable[parent_i407])
                    {
#pragma HLS loop_tripcount max = 21 min = 1
                        idx_t next_i407;
                        int decomp_34_renamed_0_i407;
                        next_i407 = regions_pt_parent[parent_i407];
                        decomp_34_renamed_0_i407 = next_i407 == parent_i407;
                        if (decomp_34_renamed_0_i407)
                        {
                            break;
                        }
                        parent_i407 = next_i407;
                    }
                    area_i407 = regions_pt_area[i];
                    parea_i407 = regions_pt_area[parent_i407];
                    change_i407 = (parea_i407 - area_i407) / (area_i407 * 1.0);
                    decomp_35_renamed_0_i407 = change_i407 < 0.5;
                    if (decomp_35_renamed_0_i407)
                    {
                        ++ndup_i401;
                        regions_pt_maxstable[i] = 0;
                        --nmer;
                        continue;
                    }
                }
            }
        }
        // cluster_mser_out6_out0(): end inline
        if (0)
        {
            printf("  Bad regions:        %d\n", nbad_i401);
            printf("  Small regions:      %d\n", nsmall_i401);
            printf("  Big regions:        %d\n", nbig_i401);
            printf("  Duplicated regions: %d\n", ndup_i401);
        }
        // cluster_mser_out6(): end inline
    }
    int *ell_pt_local__i402_width;
    int *ell_pt_local__i402_data;
    // cluster_mser_out7(): begin inline
    ell_pt_local__i402_width = nullptr;
    ell_pt_local__i402_data = nullptr;
    decomp_36 = nout >= 1;
    // cluster_mser_out7(): end inline
    if (decomp_36)
    {
        // cluster_mser_out8(): begin inline
        int j_i403;
        int index_i403;
        int d_i403;
        // cluster_mser_out8_out0(): begin inline
        int midx_i408;
        midx_i408 = 1;
        for (i = 0; i < ner; ++i)
        {
#pragma HLS loop_tripcount max = 25050
            if (!regions_pt_maxstable[i])
            {
                continue;
            }
            regions_pt_maxstable[i] = midx_i408++;
        }
        acc_pt_width = &memregion_176_size4;
        acc_pt_data = memregion_177_size16588804;
        ell_pt_width = &memregion_178_size4;
        ell_pt_data = memregion_179_size30244;
// cluster_mser_out8_out0(): end inline
#pragma clava malloc_size max = 16588808 min = 16588808 avg = 16588808
#pragma clava malloc_size max = 30248 min = 30248 avg = 30248
        // cluster_mser_out8_out1(): begin inline
        for (d_i403 = 0; d_i403 < (gdl * nmer); d_i403++)
        {
#pragma HLS loop_tripcount max = 3780
            ell_pt_data[d_i403] = 0;
        }
        // cluster_mser_out8_out1(): end inline
        for (d_i403 = 0; d_i403 < gdl; ++d_i403)
        {
#pragma HLS loop_tripcount max = 5
            // cluster_mser_out8_out2(): begin inline
            int decomp_37_renamed_0_i410;
            // cluster_mser_out8_out2_out0(): begin inline
            int counter_i_i412;
            for (counter_i_i412 = 0; counter_i_i412 < ndims; counter_i_i412++)
            {
#pragma HLS loop_tripcount max = 2
                subs_pt_data[counter_i_i412] = 0;
            }
            decomp_37_renamed_0_i410 = d_i403 < ndims;
            // cluster_mser_out8_out2_out0(): end inline
            if (decomp_37_renamed_0_i410)
            {
                // cluster_mser_out8_out2_out1(): begin inline
                for (index_i403 = 0; index_i403 < nel; ++index_i403)
                {
#pragma HLS loop_tripcount max = 2073600
                    // cluster_mser_out8_out2_out1_out0(): begin inline
                    // cluster_mser_out8_out2_out1_out0_out0(): begin inline
                    acc_pt_data[index_i403] = subs_pt_data[d_i403];
                    // cluster_mser_out8_out2_out1_out0_out0(): end inline
                    // cluster_adv_rep0(): begin inline
                    int d_i420;
                    d_i420 = 0;
                    while (d_i420 < ndims)
                    {
#pragma HLS loop_tripcount max = 2
                        int decomp_0_renamed_114_i420;
                        subs_pt_data[d_i420] = subs_pt_data[d_i420] + 1;
                        decomp_0_renamed_114_i420 = subs_pt_data[d_i420] < dims_data[d_i420];
                        if (decomp_0_renamed_114_i420)
                        {
                            goto end_inline_i420;
                        }
                        subs_pt_data[d_i420++] = 0;
                    }
                end_inline_i420:;
                    // cluster_adv_rep0(): end inline
                    // cluster_mser_out8_out2_out1_out0(): end inline
                }
                // cluster_mser_out8_out2_out1(): end inline
            }
            else
            {
                // cluster_mser_out8_out2_out2(): begin inline
                // cluster_mser_out8_out2_out2_out0(): begin inline
                i = d_i403 - ndims;
                j_i403 = 0;
                while (i > j_i403)
                {
#pragma HLS loop_tripcount max = 3 min = 0
                    i = i - j_i403 + 1;
                    j_i403++;
                }
                // cluster_mser_out8_out2_out2_out0(): end inline
                for (index_i403 = 0; index_i403 < nel; ++index_i403)
                {
#pragma HLS loop_tripcount max = 2073600
                    // cluster_mser_out8_out2_out2_out1(): begin inline
                    // cluster_mser_out8_out2_out2_out1_out0(): begin inline
                    acc_pt_data[index_i403] = subs_pt_data[i] * subs_pt_data[j_i403];
                    // cluster_mser_out8_out2_out2_out1_out0(): end inline
                    // cluster_adv_rep1(): begin inline
                    int d_i422;
                    d_i422 = 0;
                    while (d_i422 < ndims)
                    {
#pragma HLS loop_tripcount max = 2
                        int decomp_0_renamed_115_i422;
                        subs_pt_data[d_i422] = subs_pt_data[d_i422] + 1;
                        decomp_0_renamed_115_i422 = subs_pt_data[d_i422] < dims_data[d_i422];
                        if (decomp_0_renamed_115_i422)
                        {
                            goto end_inline_i422;
                        }
                        subs_pt_data[d_i422++] = 0;
                    }
                end_inline_i422:;
                    // cluster_adv_rep1(): end inline
                    // cluster_mser_out8_out2_out2_out1(): end inline
                }
                // cluster_mser_out8_out2_out2(): end inline
            }
            // cluster_mser_out8_out2_out3(): begin inline
            for (i = 0; i < njoins; ++i)
            {
#pragma HLS loop_tripcount max = 2073599
                idx_t index_sref_i415;
                idx_t parent_i415;
                index_sref_i415 = joins_pt_data[i];
                parent_i415 = forest_pt_parent[index_sref_i415];
                acc_pt_data[parent_i415] = acc_pt_data[parent_i415] + acc_pt_data[index_sref_i415];
            }
            for (i = 0; i < ner; ++i)
            {
#pragma HLS loop_tripcount max = 25050
                idx_t region_i415;
                int decomp_38_renamed_0_i415;
                region_i415 = regions_pt_maxstable[i];
                decomp_38_renamed_0_i415 = region_i415 == 0;
                if (decomp_38_renamed_0_i415)
                {
                    region_i415--; // SPeCS: moved this from outside the if condition
                    continue;
                }
                region_i415--;
                idx_t __idxExpr227 = regions_pt_index[i];
                ell_pt_data[d_i403 + gdl * region_i415] = acc_pt_data[__idxExpr227];
            }
            // cluster_mser_out8_out2_out3(): end inline
            // cluster_mser_out8_out2(): end inline
        }
        // free(acc_pt_data);
        // free(ell_pt_data);
        //  cluster_mser_out8(): end inline
    }
    // cluster_mser_out9(): begin inline
    int _scope3_dims_i404[2];
    _scope3_j = 0;
    _scope3_dims_i404[0] = nmer;
    // cluster_mser_out9(): end inline
    // cluster_iMallocHandle(): begin inline
    int i_i405;
    int j_i405;
    int *out_i405_width;
    int *out_i405_height;
    int *out_i405_data;
    out_i405_width = &memregion_180_size4;
    out_i405_height = &memregion_181_size4;
    out_i405_data = memregion_182_size8294400;
#pragma clava malloc_size max = 8294408 min = 3032 avg = 5530616
    int _lit102 = 1;
    // cluster_iMallocHandle_out4(): begin inline
    (*out_i405_height) = _lit102;
    (*out_i405_width) = nmer;
    out_width = out_i405_width;
    out_height = out_i405_height;
    out_data = out_i405_data;
    _scope3_pt_width = out_width;
    _scope3_pt_height = out_height;
    _scope3_pt_data = out_data;
    // cluster_iMallocHandle_out4(): end inline
    // cluster_iMallocHandle(): end inline
    // cluster_mser_out10(): begin inline
    for (i = 0; i < ner; ++i)
    {
#pragma HLS loop_tripcount max = 25050
        if (regions_pt_maxstable[i])
        {
            _scope3_pt_data[_scope3_j++] = regions_pt_index[i] + 1;
        }
    }
    // free(dims_data);
    //  cluster_mser_out10(): end inline
    // free(visited_pt_data);
    // free(strides_pt_data);
    // free(nsubs_pt_data);
    // free(subs_pt_data);
    // free(joins_pt_data);
    memcpy(rtr_val_width, out_width, 4);
    memcpy(rtr_val_height, out_height, 4);
    memcpy(rtr_val_data, out_data, 3024);
}

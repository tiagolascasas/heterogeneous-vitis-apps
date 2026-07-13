#include "cluster.h"
#include <stdint.h>
void cluster(
    int *blurredImage_width, int *blurredImage_height, float *blurredImage_data, int *Ic_width, int *Ic_height,
    int *Ic_data, int *blurred_level1_width, int *blurred_level1_height, float *blurred_level1_data,
    int *blurred_level2_width, int *blurred_level2_height, float *blurred_level2_data, int *features_width,
    int *features_height, float *features_data, int *status_width, int *status_height, int *status_data, int *WINSZ,
    float *accuracy, int *LK_ITER, int *k, int *numFind, int *i, float *memregion_236_size8294400,
    float *memregion_239_size8294400, float *memregion_245_size8294400, float *memregion_251_size4147200,
    float *memregion_254_size2073600, float *memregion_260_size8294400, float *memregion_263_size8294400,
    float *memregion_272_size8294400, float *memregion_275_size8294400, float *memregion_284_size2073600,
    float *memregion_287_size2073600, float *memregion_296_size2073600, float *memregion_299_size2073600);
void cluster(
    int *blurredImage_width, int *blurredImage_height, float *blurredImage_data, int *Ic_width, int *Ic_height,
    int *Ic_data, int *blurred_level1_width, int *blurred_level1_height, float *blurred_level1_data,
    int *blurred_level2_width, int *blurred_level2_height, float *blurred_level2_data, int *features_width,
    int *features_height, float *features_data, int *status_width, int *status_height, int *status_data, int *WINSZ,
    float *accuracy, int *LK_ITER, int *k, int *numFind, int *i, float *memregion_236_size8294400,
    float *memregion_239_size8294400, float *memregion_245_size8294400, float *memregion_251_size4147200,
    float *memregion_254_size2073600, float *memregion_260_size8294400, float *memregion_263_size8294400,
    float *memregion_272_size8294400, float *memregion_275_size8294400, float *memregion_284_size2073600,
    float *memregion_287_size2073600, float *memregion_296_size2073600, float *memregion_299_size2073600)
{
#pragma HLS INTERFACE m_axi port = blurredImage_width bundle = gmem0
#pragma HLS INTERFACE m_axi port = blurredImage_height bundle = gmem0
#pragma HLS INTERFACE m_axi port = blurredImage_data bundle = gmem0
#pragma HLS INTERFACE m_axi port = Ic_width bundle = gmem0
#pragma HLS INTERFACE m_axi port = Ic_height bundle = gmem0
#pragma HLS INTERFACE m_axi port = Ic_data bundle = gmem0
#pragma HLS INTERFACE m_axi port = blurred_level1_width bundle = gmem0
#pragma HLS INTERFACE m_axi port = blurred_level1_height bundle = gmem0
#pragma HLS INTERFACE m_axi port = blurred_level1_data bundle = gmem0
#pragma HLS INTERFACE m_axi port = blurred_level2_width bundle = gmem0
#pragma HLS INTERFACE m_axi port = blurred_level2_height bundle = gmem0
#pragma HLS INTERFACE m_axi port = blurred_level2_data bundle = gmem0
#pragma HLS INTERFACE m_axi port = features_width bundle = gmem0
#pragma HLS INTERFACE m_axi port = features_height bundle = gmem0
#pragma HLS INTERFACE m_axi port = features_data bundle = gmem0
#pragma HLS INTERFACE m_axi port = status_width bundle = gmem0
#pragma HLS INTERFACE m_axi port = status_height bundle = gmem0
#pragma HLS INTERFACE m_axi port = status_data bundle = gmem0
#pragma HLS INTERFACE m_axi port = WINSZ bundle = gmem0
#pragma HLS INTERFACE m_axi port = accuracy bundle = gmem0
#pragma HLS INTERFACE m_axi port = LK_ITER bundle = gmem0
#pragma HLS INTERFACE m_axi port = k bundle = gmem0
#pragma HLS INTERFACE m_axi port = numFind bundle = gmem0
#pragma HLS INTERFACE m_axi port = i bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_236_size8294400 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_239_size8294400 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_245_size8294400 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_251_size4147200 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_254_size2073600 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_260_size8294400 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_263_size8294400 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_272_size8294400 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_275_size8294400 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_284_size2073600 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_287_size2073600 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_296_size2073600 bundle = gmem0
#pragma HLS INTERFACE m_axi port = memregion_299_size2073600 bundle = gmem0
    int local_i;
    local_i = *i;
    int local_numFind;
    local_numFind = *numFind;
    int local_k;
    local_k = *k;
    int local_LK_ITER;
    local_LK_ITER = *LK_ITER;
    float local_accuracy;
    local_accuracy = *accuracy;
    int local_WINSZ;
    local_WINSZ = *WINSZ;
    float memregion_248_size2073600[518400];
#pragma HLS bind_storage variable = memregion_248_size2073600 type = RAM_2P impl = BRAM
    float memregion_341_size36864[9216];
#pragma HLS bind_storage variable = memregion_341_size36864 type = RAM_2P impl = BRAM
    float memregion_338_size36864[9216];
#pragma HLS bind_storage variable = memregion_338_size36864 type = RAM_2P impl = BRAM
    float memregion_335_size36864[9216];
#pragma HLS bind_storage variable = memregion_335_size36864 type = RAM_2P impl = BRAM
    float memregion_332_size36864[9216];
#pragma HLS bind_storage variable = memregion_332_size36864 type = RAM_2P impl = BRAM
    float memregion_329_size36864[9216];
#pragma HLS bind_storage variable = memregion_329_size36864 type = RAM_2P impl = BRAM
    float memregion_326_size36864[9216];
#pragma HLS bind_storage variable = memregion_326_size36864 type = RAM_2P impl = BRAM
    float memregion_323_size36864[9216];
#pragma HLS bind_storage variable = memregion_323_size36864 type = RAM_2P impl = BRAM
    float memregion_320_size36864[9216];
#pragma HLS bind_storage variable = memregion_320_size36864 type = RAM_2P impl = BRAM
    float memregion_350_size40[10];
#pragma HLS bind_storage variable = memregion_350_size40 type = RAM_2P impl = BRAM
    float memregion_347_size40[10];
#pragma HLS bind_storage variable = memregion_347_size40 type = RAM_2P impl = BRAM
    float memregion_344_size40[10];
#pragma HLS bind_storage variable = memregion_344_size40 type = RAM_2P impl = BRAM
    float memregion_308_size40[10];
#pragma HLS bind_storage variable = memregion_308_size40 type = RAM_2P impl = BRAM
    int memregion_349_size4;
    int memregion_348_size4;
    int memregion_346_size4;
    int memregion_345_size4;
    int memregion_343_size4;
    int memregion_342_size4;
    int memregion_340_size4;
    int memregion_339_size4;
    int memregion_337_size4;
    int memregion_336_size4;
    int memregion_334_size4;
    int memregion_333_size4;
    int memregion_331_size4;
    int memregion_330_size4;
    int memregion_328_size4;
    int memregion_327_size4;
    int memregion_325_size4;
    int memregion_324_size4;
    int memregion_322_size4;
    int memregion_321_size4;
    int memregion_319_size4;
    int memregion_318_size4;
    int memregion_317_size20[5];
    int memregion_316_size4;
    int memregion_315_size4;
    float memregion_314_size24[6];
    int memregion_313_size4;
    int memregion_312_size4;
    int memregion_311_size16[4];
    int memregion_310_size4;
    int memregion_309_size4;
    int memregion_307_size4;
    int memregion_306_size4;
    int memregion_305_size12[3];
    int memregion_304_size4;
    int memregion_303_size4;
    int memregion_302_size12[3];
    int memregion_301_size4;
    int memregion_300_size4;
    int memregion_298_size4;
    int memregion_297_size4;
    int memregion_295_size4;
    int memregion_294_size4;
    float memregion_293_size12[3];
    int memregion_292_size4;
    int memregion_291_size4;
    float memregion_290_size12[3];
    int memregion_289_size4;
    int memregion_288_size4;
    int memregion_286_size4;
    int memregion_285_size4;
    int memregion_283_size4;
    int memregion_282_size4;
    int memregion_281_size12[3];
    int memregion_280_size4;
    int memregion_279_size4;
    int memregion_278_size12[3];
    int memregion_277_size4;
    int memregion_276_size4;
    int memregion_274_size4;
    int memregion_273_size4;
    int memregion_271_size4;
    int memregion_270_size4;
    float memregion_269_size12[3];
    int memregion_268_size4;
    int memregion_267_size4;
    float memregion_266_size12[3];
    int memregion_265_size4;
    int memregion_264_size4;
    int memregion_262_size4;
    int memregion_261_size4;
    int memregion_259_size4;
    int memregion_258_size4;
    int memregion_257_size20[5];
    int memregion_256_size4;
    int memregion_255_size4;
    int memregion_253_size4;
    int memregion_252_size4;
    int memregion_250_size4;
    int memregion_249_size4;
    int memregion_247_size4;
    int memregion_246_size4;
    int memregion_244_size4;
    int memregion_243_size4;
    int memregion_242_size20[5];
    int memregion_241_size4;
    int memregion_240_size4;
    int memregion_238_size4;
    int memregion_237_size4;
    int memregion_235_size4;
    int memregion_234_size4;
#pragma clava bram_usage = 16 max_bram = 1824 bytes_per_bram = 2048
    int *previousFrameBlurred_level1_width;
    int *previousFrameBlurred_level1_height;
    float *previousFrameBlurred_level1_data;
#pragma clava param = blurredImage type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = blurredImage type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = blurredImage type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 8294400
#pragma clava param = Ic type = STRUCT_POINTER in = LIVEIN out = NONE size = 4
#pragma clava param = Ic type = STRUCT_POINTER in = LIVEIN out = NONE size = 4
#pragma clava param = Ic type = STRUCT_POINTER in = LIVEIN out = NONE size = 8294400
#pragma clava param = blurred_level1 type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = blurred_level1 type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = blurred_level1 type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 8294400
#pragma clava param = blurred_level2 type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = blurred_level2 type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = blurred_level2 type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 2073600
#pragma clava param = features type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 4
#pragma clava param = features type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 4
#pragma clava param = features type = WRAPPED_STRUCT_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 40
#pragma clava param = WINSZ type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = accuracy type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = LK_ITER type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = k type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = numFind type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = i type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = status type = WRAPPED_STRUCT_POINTER in = NONE out = LIVEOUT size = 4
#pragma clava param = status type = WRAPPED_STRUCT_POINTER in = NONE out = LIVEOUT size = 4
#pragma clava param = status type = WRAPPED_STRUCT_POINTER in = NONE out = LIVEOUT size = 32
    int *previousFrameBlurred_level2_width;
    int *previousFrameBlurred_level2_height;
    float *previousFrameBlurred_level2_data;
    int *verticalEdge_level1_width;
    int *verticalEdge_level1_height;
    float *verticalEdge_level1_data;
    int *horizontalEdge_level1_width;
    int *horizontalEdge_level1_height;
    float *horizontalEdge_level1_data;
    int *verticalEdge_level2_width;
    int *verticalEdge_level2_height;
    float *verticalEdge_level2_data;
    int *horizontalEdge_level2_width;
    int *horizontalEdge_level2_height;
    float *horizontalEdge_level2_data;
    int *newpoints_width;
    int *newpoints_height;
    float *newpoints_data;
    int *np_temp_width;
    int *np_temp_height;
    float *np_temp_data;
    int decomp_0;
    // cluster_imageBlur(): begin inline
    int kernelSum_i916;
    int j_i916;
    int i_i916;
    int endRow_i916;
    int startRow_i916;
    int halfKernel_i916;
    int endCol_i916;
    int startCol_i916;
    int kernelSize_i916;
    int k_i916;
    int *kernel_i916_width;
    int *kernel_i916_height;
    int *kernel_i916_data;
    float temp_i916;
    int *tempOut_i916_width;
    int *tempOut_i916_height;
    float *tempOut_i916_data;
    int *imageOut_i916_width;
    int *imageOut_i916_height;
    float *imageOut_i916_data;
    int cols_i916;
    int rows_i916;
    // cluster_imageBlur_out6(): begin inline
    rows_i916 = (*Ic_height);
    cols_i916 = (*Ic_width);
    // cluster_imageBlur_out6(): end inline
    // cluster_fSetArray_rep53(): begin inline
    int i_i945;
    int j_i945;
    int *out_i945_width;
    int *out_i945_height;
    float *out_i945_data;
    // cluster_fMallocHandle_rep171(): begin inline
    int i_i1033;
    int j_i1033;
    int *out_i1033_width;
    int *out_i1033_height;
    float *out_i1033_data;
    out_i1033_width = &memregion_234_size4;
    out_i1033_height = &memregion_235_size4;
    out_i1033_data = memregion_236_size8294400;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    // cluster_fMallocHandle_out22_rep16(): begin inline
    (*out_i1033_height) = rows_i916;
    (*out_i1033_width) = cols_i916;
    out_i945_width = out_i1033_width;
    out_i945_height = out_i1033_height;
    out_i945_data = out_i1033_data;
    // cluster_fMallocHandle_out22_rep16(): end inline
    // cluster_fMallocHandle_rep171(): end inline
    int _lit156 = 0;
    // cluster_fSetArray_out22_rep7(): begin inline
    for (i_i945 = 0; i_i945 < rows_i916; i_i945++)
    {
#pragma HLS loop_tripcount max = 1080
        for (j_i945 = 0; j_i945 < cols_i916; j_i945++)
        {
            int __idxExpr282 = i_i945 * (*out_i945_width) + j_i945;
#pragma HLS loop_tripcount max = 1920
            out_i945_data[__idxExpr282] = _lit156;
        }
    }
    imageOut_i916_width = out_i945_width;
    imageOut_i916_height = out_i945_height;
    imageOut_i916_data = out_i945_data;
    // cluster_fSetArray_out22_rep7(): end inline
    // cluster_fSetArray_rep53(): end inline
    // cluster_fSetArray_rep54(): begin inline
    int i_i946;
    int j_i946;
    int *out_i946_width;
    int *out_i946_height;
    float *out_i946_data;
    // cluster_fMallocHandle_rep170(): begin inline
    int i_i1035;
    int j_i1035;
    int *out_i1035_width;
    int *out_i1035_height;
    float *out_i1035_data;
    out_i1035_width = &memregion_237_size4;
    out_i1035_height = &memregion_238_size4;
    out_i1035_data = memregion_239_size8294400;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    // cluster_fMallocHandle_out22_rep17(): begin inline
    (*out_i1035_height) = rows_i916;
    (*out_i1035_width) = cols_i916;
    out_i946_width = out_i1035_width;
    out_i946_height = out_i1035_height;
    out_i946_data = out_i1035_data;
    // cluster_fMallocHandle_out22_rep17(): end inline
    // cluster_fMallocHandle_rep170(): end inline
    int _lit157 = 0;
    // cluster_fSetArray_out22_rep6(): begin inline
    for (i_i946 = 0; i_i946 < rows_i916; i_i946++)
    {
#pragma HLS loop_tripcount max = 1080
        for (j_i946 = 0; j_i946 < cols_i916; j_i946++)
        {
            int __idxExpr283 = i_i946 * (*out_i946_width) + j_i946;
#pragma HLS loop_tripcount max = 1920
            out_i946_data[__idxExpr283] = _lit157;
        }
    }
    tempOut_i916_width = out_i946_width;
    tempOut_i916_height = out_i946_height;
    tempOut_i916_data = out_i946_data;
    // cluster_fSetArray_out22_rep6(): end inline
    // cluster_fSetArray_rep54(): end inline
    // cluster_iMallocHandle_rep70(): begin inline
    int i_i947;
    int j_i947;
    int *out_i947_width;
    int *out_i947_height;
    int *out_i947_data;
    out_i947_width = &memregion_240_size4;
    out_i947_height = &memregion_241_size4;
    out_i947_data = memregion_242_size20;
#pragma clava malloc_size max = 28 min = 28 avg = 28
    int _lit158 = 1;
    int _lit159 = 5;
    // cluster_iMallocHandle_out29_rep3(): begin inline
    (*out_i947_height) = _lit158;
    (*out_i947_width) = _lit159;
    kernel_i916_width = out_i947_width;
    kernel_i916_height = out_i947_height;
    kernel_i916_data = out_i947_data;
    // cluster_iMallocHandle_out29_rep3(): end inline
    // cluster_iMallocHandle_rep70(): end inline
    // cluster_imageBlur_out7(): begin inline
    kernel_i916_data[0] = 1;
    kernel_i916_data[1] = 4;
    kernel_i916_data[2] = 6;
    kernel_i916_data[3] = 4;
    kernel_i916_data[4] = 1;
    kernelSize_i916 = 5;
    kernelSum_i916 = 16;
    startCol_i916 = 2;
    endCol_i916 = cols_i916 - 2;
    halfKernel_i916 = 2;
    startRow_i916 = 2;
    endRow_i916 = rows_i916 - 2;
    for (i_i916 = startRow_i916; i_i916 < endRow_i916; i_i916++)
    {
#pragma HLS loop_tripcount max = 1076
        for (j_i916 = startCol_i916; j_i916 < endCol_i916; j_i916++)
        {
#pragma HLS loop_tripcount max = 1916
            temp_i916 = 0;
            for (k_i916 = -halfKernel_i916; k_i916 <= halfKernel_i916; k_i916++)
            {
                int __idxExpr284 = i_i916 * (*Ic_width) + (j_i916 + k_i916);
#pragma HLS loop_tripcount max = 5
                temp_i916 = temp_i916 + Ic_data[__idxExpr284] * kernel_i916_data[k_i916 + halfKernel_i916];
            }
            int __idxExpr285 = i_i916 * (*tempOut_i916_width) + j_i916;
            tempOut_i916_data[__idxExpr285] = temp_i916 / kernelSum_i916;
        }
    }
    for (i_i916 = startRow_i916; i_i916 < endRow_i916; i_i916++)
    {
#pragma HLS loop_tripcount max = 1076
        for (j_i916 = startCol_i916; j_i916 < endCol_i916; j_i916++)
        {
#pragma HLS loop_tripcount max = 1916
            temp_i916 = 0;
            for (k_i916 = -halfKernel_i916; k_i916 <= halfKernel_i916; k_i916++)
            {
                int __idxExpr286 = (i_i916 + k_i916) * (*tempOut_i916_width) + j_i916;
#pragma HLS loop_tripcount max = 5
                temp_i916 = temp_i916 + tempOut_i916_data[__idxExpr286] * kernel_i916_data[k_i916 + halfKernel_i916];
            }
            int __idxExpr287 = i_i916 * (*imageOut_i916_width) + j_i916;
            imageOut_i916_data[__idxExpr287] = temp_i916 / kernelSum_i916;
        }
    }
    // cluster_imageBlur_out7(): end inline
    // cluster_fFreeHandle_rep116(): begin inline
    int decomp_0_renamed_254_i949;
    // cluster_fFreeHandle_out17_rep24(): begin inline
    decomp_0_renamed_254_i949 = tempOut_i916_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep24(): end inline
    if (decomp_0_renamed_254_i949)
    {
        // free(tempOut_i916_data);
    }
    // cluster_fFreeHandle_rep116(): end inline
    // cluster_iFreeHandle_rep41(): begin inline
    int decomp_0_renamed_255_i950;
    // cluster_iFreeHandle_out17_rep5(): begin inline
    decomp_0_renamed_255_i950 = kernel_i916_data != ((void *)0);
    // cluster_iFreeHandle_out17_rep5(): end inline
    if (decomp_0_renamed_255_i950)
    {
        // free(kernel_i916_data);
    }
    memcpy(blurredImage_width, imageOut_i916_width, 4);
    memcpy(blurredImage_height, imageOut_i916_height, 4);
    memcpy(blurredImage_data, imageOut_i916_data, 8294400);
    // cluster_iFreeHandle_rep41(): end inline
    // cluster_imageBlur(): end inline
    // cluster_fDeepCopy_rep15(): begin inline
    int cols_i917;
    int rows_i917;
    int *out_i917_width;
    int *out_i917_height;
    float *out_i917_data;
    int j_i917;
    int i_i917;
    // cluster_fDeepCopy_out18_rep4(): begin inline
    rows_i917 = (*blurred_level1_height);
    cols_i917 = (*blurred_level1_width);
    // cluster_fDeepCopy_out18_rep4(): end inline
    // cluster_fMallocHandle_rep191(): begin inline
    int i_i952;
    int j_i952;
    int *out_i952_width;
    int *out_i952_height;
    float *out_i952_data;
    out_i952_width = &memregion_243_size4;
    out_i952_height = &memregion_244_size4;
    out_i952_data = memregion_245_size8294400;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    // cluster_fMallocHandle_out22_rep41(): begin inline
    (*out_i952_height) = rows_i917;
    (*out_i952_width) = cols_i917;
    out_i917_width = out_i952_width;
    out_i917_height = out_i952_height;
    out_i917_data = out_i952_data;
    // cluster_fMallocHandle_out22_rep41(): end inline
    // cluster_fMallocHandle_rep191(): end inline
    // cluster_fDeepCopy_out19_rep4(): begin inline
    for (i_i917 = 0; i_i917 < rows_i917; i_i917++)
    {
#pragma HLS loop_tripcount max = 1080
        for (j_i917 = 0; j_i917 < cols_i917; j_i917++)
        {
            int __idxExpr288 = i_i917 * (*out_i917_width) + j_i917;
            int __idxExpr289 = i_i917 * (*blurred_level1_width) + j_i917;
#pragma HLS loop_tripcount max = 1920
            out_i917_data[__idxExpr288] = blurred_level1_data[__idxExpr289];
        }
    }
    previousFrameBlurred_level1_width = out_i917_width;
    previousFrameBlurred_level1_height = out_i917_height;
    previousFrameBlurred_level1_data = out_i917_data;
    // cluster_fDeepCopy_out19_rep4(): end inline
    // cluster_fDeepCopy_rep15(): end inline
    // cluster_fDeepCopy_rep16(): begin inline
    int cols_i918;
    int rows_i918;
    int *out_i918_width;
    int *out_i918_height;
    float *out_i918_data;
    int j_i918;
    int i_i918;
    // cluster_fDeepCopy_out18_rep3(): begin inline
    rows_i918 = (*blurred_level2_height);
    cols_i918 = (*blurred_level2_width);
    // cluster_fDeepCopy_out18_rep3(): end inline
    // cluster_fMallocHandle_rep190(): begin inline
    int i_i955;
    int j_i955;
    int *out_i955_width;
    int *out_i955_height;
    float *out_i955_data;
    out_i955_width = &memregion_246_size4;
    out_i955_height = &memregion_247_size4;
    out_i955_data = memregion_248_size2073600;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    // cluster_fMallocHandle_out22_rep42(): begin inline
    (*out_i955_height) = rows_i918;
    (*out_i955_width) = cols_i918;
    out_i918_width = out_i955_width;
    out_i918_height = out_i955_height;
    out_i918_data = out_i955_data;
    // cluster_fMallocHandle_out22_rep42(): end inline
    // cluster_fMallocHandle_rep190(): end inline
    // cluster_fDeepCopy_out19_rep3(): begin inline
    for (i_i918 = 0; i_i918 < rows_i918; i_i918++)
    {
#pragma HLS loop_tripcount max = 540
        for (j_i918 = 0; j_i918 < cols_i918; j_i918++)
        {
            int __idxExpr290 = i_i918 * (*out_i918_width) + j_i918;
            int __idxExpr291 = i_i918 * (*blurred_level2_width) + j_i918;
#pragma HLS loop_tripcount max = 960
            out_i918_data[__idxExpr290] = blurred_level2_data[__idxExpr291];
        }
    }
    previousFrameBlurred_level2_width = out_i918_width;
    previousFrameBlurred_level2_height = out_i918_height;
    previousFrameBlurred_level2_data = out_i918_data;
    // cluster_fDeepCopy_out19_rep3(): end inline
    // cluster_fDeepCopy_rep16(): end inline
    // cluster_fFreeHandle_rep119(): begin inline
    int decomp_0_renamed_240_i919;
    // cluster_fFreeHandle_out17_rep21(): begin inline
    decomp_0_renamed_240_i919 = blurred_level1_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep21(): end inline
    if (decomp_0_renamed_240_i919)
    {
        // free(blurred_level1_data);
    }
    // cluster_fFreeHandle_rep119(): end inline
    // cluster_fFreeHandle_rep120(): begin inline
    int decomp_0_renamed_241_i920;
    // cluster_fFreeHandle_out17_rep20(): begin inline
    decomp_0_renamed_241_i920 = blurred_level2_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep20(): end inline
    if (decomp_0_renamed_241_i920)
    {
        // free(blurred_level2_data);
    }
    *blurred_level1_width = *blurredImage_width;
    *blurred_level1_height = *blurredImage_height;
    *blurred_level1_data = *blurredImage_data;
    int *temp_i922_width;
    int *temp_i922_height;
    float *temp_i922_data;
    // cluster_fFreeHandle_rep120(): end inline
    // cluster_trackFeaturesPyramidalLK_out0(): begin inline
    // cluster_trackFeaturesPyramidalLK_out0(): end inline
    // cluster_imageResize(): begin inline
    int outputCols_i922;
    int outputRows_i922;
    int kernelSum_i922;
    int j_i922;
    int i_i922;
    int endRow_i922;
    int startRow_i922;
    int halfKernel_i922;
    int endCol_i922;
    int startCol_i922;
    int kernelSize_i922;
    float tempVal_i922;
    int *kernel_i922_width;
    int *kernel_i922_height;
    int *kernel_i922_data;
    int *imageOut_i922_width;
    int *imageOut_i922_height;
    float *imageOut_i922_data;
    int cols_i922;
    int rows_i922;
    int k_i922;
    int m_i922;
    // cluster_imageResize_out0(): begin inline
    rows_i922 = (*blurredImage_height);
    cols_i922 = (*blurredImage_width);
    outputRows_i922 = floor((rows_i922 + 1) / 2);
    outputCols_i922 = floor((cols_i922 + 1) / 2);
    // cluster_imageResize_out0(): end inline
    // cluster_fSetArray_rep55(): begin inline
    int i_i960;
    int j_i960;
    int *out_i960_width;
    int *out_i960_height;
    float *out_i960_data;
    // cluster_fMallocHandle_rep169(): begin inline
    int i_i1042;
    int j_i1042;
    int *out_i1042_width;
    int *out_i1042_height;
    float *out_i1042_data;
    out_i1042_width = &memregion_249_size4;
    out_i1042_height = &memregion_250_size4;
    out_i1042_data = memregion_251_size4147200;
#pragma clava malloc_size max = 4147208 min = 4147208 avg = 4147208
    // cluster_fMallocHandle_out22_rep18(): begin inline
    (*out_i1042_height) = rows_i922;
    (*out_i1042_width) = outputCols_i922;
    out_i960_width = out_i1042_width;
    out_i960_height = out_i1042_height;
    out_i960_data = out_i1042_data;
    // cluster_fMallocHandle_out22_rep18(): end inline
    // cluster_fMallocHandle_rep169(): end inline
    int _lit160 = 0;
    // cluster_fSetArray_out22_rep5(): begin inline
    for (i_i960 = 0; i_i960 < rows_i922; i_i960++)
    {
#pragma HLS loop_tripcount max = 1080
        for (j_i960 = 0; j_i960 < outputCols_i922; j_i960++)
        {
            int __idxExpr292 = i_i960 * (*out_i960_width) + j_i960;
#pragma HLS loop_tripcount max = 960
            out_i960_data[__idxExpr292] = _lit160;
        }
    }
    temp_i922_width = out_i960_width;
    temp_i922_height = out_i960_height;
    temp_i922_data = out_i960_data;
    // cluster_fSetArray_out22_rep5(): end inline
    // cluster_fSetArray_rep55(): end inline
    // cluster_fSetArray_rep56(): begin inline
    int i_i961;
    int j_i961;
    int *out_i961_width;
    int *out_i961_height;
    float *out_i961_data;
    // cluster_fMallocHandle_rep168(): begin inline
    int i_i1044;
    int j_i1044;
    int *out_i1044_width;
    int *out_i1044_height;
    float *out_i1044_data;
    out_i1044_width = &memregion_252_size4;
    out_i1044_height = &memregion_253_size4;
    out_i1044_data = memregion_254_size2073600;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    // cluster_fMallocHandle_out22_rep19(): begin inline
    (*out_i1044_height) = outputRows_i922;
    (*out_i1044_width) = outputCols_i922;
    out_i961_width = out_i1044_width;
    out_i961_height = out_i1044_height;
    out_i961_data = out_i1044_data;
    // cluster_fMallocHandle_out22_rep19(): end inline
    // cluster_fMallocHandle_rep168(): end inline
    int _lit161 = 0;
    // cluster_fSetArray_out22_rep4(): begin inline
    for (i_i961 = 0; i_i961 < outputRows_i922; i_i961++)
    {
#pragma HLS loop_tripcount max = 540
        for (j_i961 = 0; j_i961 < outputCols_i922; j_i961++)
        {
            int __idxExpr293 = i_i961 * (*out_i961_width) + j_i961;
#pragma HLS loop_tripcount max = 960
            out_i961_data[__idxExpr293] = _lit161;
        }
    }
    imageOut_i922_width = out_i961_width;
    imageOut_i922_height = out_i961_height;
    imageOut_i922_data = out_i961_data;
    // cluster_fSetArray_out22_rep4(): end inline
    // cluster_fSetArray_rep56(): end inline
    // cluster_iMallocHandle_rep71(): begin inline
    int i_i962;
    int j_i962;
    int *out_i962_width;
    int *out_i962_height;
    int *out_i962_data;
    out_i962_width = &memregion_255_size4;
    out_i962_height = &memregion_256_size4;
    out_i962_data = memregion_257_size20;
#pragma clava malloc_size max = 28 min = 28 avg = 28
    int _lit162 = 1;
    int _lit163 = 5;
    // cluster_iMallocHandle_out29_rep2(): begin inline
    (*out_i962_height) = _lit162;
    (*out_i962_width) = _lit163;
    kernel_i922_width = out_i962_width;
    kernel_i922_height = out_i962_height;
    kernel_i922_data = out_i962_data;
    // cluster_iMallocHandle_out29_rep2(): end inline
    // cluster_iMallocHandle_rep71(): end inline
    // cluster_imageResize_out1(): begin inline
    kernel_i922_data[0] = 1;
    kernel_i922_data[1] = 4;
    kernel_i922_data[2] = 6;
    kernel_i922_data[3] = 4;
    kernel_i922_data[4] = 1;
    kernelSize_i922 = 5;
    kernelSum_i922 = 16;
    startCol_i922 = 2;
    endCol_i922 = cols_i922 - 2;
    halfKernel_i922 = 2;
    startRow_i922 = 2;
    endRow_i922 = rows_i922 - 2;
    for (i_i922 = startRow_i922; i_i922 < endRow_i922; i_i922++)
    {
#pragma HLS loop_tripcount max = 1076
        m_i922 = 0;
        for (j_i922 = startCol_i922; j_i922 < endCol_i922; j_i922 = j_i922 + 2)
        {
#pragma HLS loop_tripcount max = 958
            tempVal_i922 = 0;
            for (k_i922 = -halfKernel_i922; k_i922 <= halfKernel_i922; k_i922++)
            {
                int __idxExpr294 = i_i922 * (*blurredImage_width) + (j_i922 + k_i922);
#pragma HLS loop_tripcount max = 5
                tempVal_i922 =
                    tempVal_i922 + blurredImage_data[__idxExpr294] * kernel_i922_data[k_i922 + halfKernel_i922];
            }
            int __idxExpr295 = i_i922 * (*temp_i922_width) + m_i922;
            temp_i922_data[__idxExpr295] = tempVal_i922 / kernelSum_i922;
            m_i922 = m_i922 + 1;
        }
    }
    m_i922 = 0;
    for (i_i922 = startRow_i922; i_i922 < endRow_i922; i_i922 = i_i922 + 2)
    {
#pragma HLS loop_tripcount max = 538
        for (j_i922 = 0; j_i922 < outputCols_i922; j_i922++)
        {
#pragma HLS loop_tripcount max = 960
            tempVal_i922 = 0;
            for (k_i922 = -halfKernel_i922; k_i922 <= halfKernel_i922; k_i922++)
            {
                int __idxExpr296 = (i_i922 + k_i922) * (*temp_i922_width) + j_i922;
#pragma HLS loop_tripcount max = 5
                tempVal_i922 = tempVal_i922 + temp_i922_data[__idxExpr296] * kernel_i922_data[k_i922 + halfKernel_i922];
            }
            int __idxExpr297 = m_i922 * (*imageOut_i922_width) + j_i922;
            imageOut_i922_data[__idxExpr297] = (tempVal_i922 / kernelSum_i922);
        }
        m_i922 = m_i922 + 1;
    }
    // cluster_imageResize_out1(): end inline
    // cluster_fFreeHandle_rep117(): begin inline
    int decomp_0_renamed_258_i964;
    // cluster_fFreeHandle_out17_rep23(): begin inline
    decomp_0_renamed_258_i964 = temp_i922_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep23(): end inline
    if (decomp_0_renamed_258_i964)
    {
        // free(temp_i922_data);
    }
    // cluster_fFreeHandle_rep117(): end inline
    // cluster_iFreeHandle_rep42(): begin inline
    int decomp_0_renamed_259_i965;
    // cluster_iFreeHandle_out17_rep4(): begin inline
    decomp_0_renamed_259_i965 = kernel_i922_data != ((void *)0);
    // cluster_iFreeHandle_out17_rep4(): end inline
    if (decomp_0_renamed_259_i965)
    {
        // free(kernel_i922_data);
    }
    memcpy(blurred_level2_width, imageOut_i922_width, 4);
    memcpy(blurred_level2_height, imageOut_i922_height, 4);
    memcpy(blurred_level2_data, imageOut_i922_data, 2073600);
    int *tempOut_i923_width;
    int *tempOut_i923_height;
    float *tempOut_i923_data;
    // cluster_iFreeHandle_rep42(): end inline
    // cluster_imageResize(): end inline
    // cluster_calcSobel_dX_rep0(): begin inline
    int *imageOut_i923_width;
    int *imageOut_i923_height;
    float *imageOut_i923_data;
    int kernelSum_2_i923;
    int kernelSum_1_i923;
    int k_i923;
    int j_i923;
    int i_i923;
    int endRow_i923;
    int startRow_i923;
    int halfKernel_i923;
    int endCol_i923;
    int startCol_i923;
    int kernelSize_i923;
    float temp_i923;
    int *kernel_2_i923_width;
    int *kernel_2_i923_height;
    float *kernel_2_i923_data;
    int *kernel_1_i923_width;
    int *kernel_1_i923_height;
    float *kernel_1_i923_data;
    int cols_i923;
    int rows_i923;
    // cluster_calcSobel_dX_out0_rep3(): begin inline
    int kernelSum_i966;
    rows_i923 = (*blurred_level1_height);
    cols_i923 = (*blurred_level1_width);
    // cluster_calcSobel_dX_out0_rep3(): end inline
    // cluster_fSetArray_rep63(): begin inline
    int i_i967;
    int j_i967;
    int *out_i967_width;
    int *out_i967_height;
    float *out_i967_data;
    // cluster_fMallocHandle_rep197(): begin inline
    int i_i1049;
    int j_i1049;
    int *out_i1049_width;
    int *out_i1049_height;
    float *out_i1049_data;
    out_i1049_width = &memregion_258_size4;
    out_i1049_height = &memregion_259_size4;
    out_i1049_data = memregion_260_size8294400;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    // cluster_fMallocHandle_out22_rep50(): begin inline
    (*out_i1049_height) = rows_i923;
    (*out_i1049_width) = cols_i923;
    out_i967_width = out_i1049_width;
    out_i967_height = out_i1049_height;
    out_i967_data = out_i1049_data;
    // cluster_fMallocHandle_out22_rep50(): end inline
    // cluster_fMallocHandle_rep197(): end inline
    int _lit164 = 0;
    // cluster_fSetArray_out22_rep19(): begin inline
    for (i_i967 = 0; i_i967 < rows_i923; i_i967++)
    {
#pragma HLS loop_tripcount max = 1080
        for (j_i967 = 0; j_i967 < cols_i923; j_i967++)
        {
            int __idxExpr298 = i_i967 * (*out_i967_width) + j_i967;
#pragma HLS loop_tripcount max = 1920
            out_i967_data[__idxExpr298] = _lit164;
        }
    }
    imageOut_i923_width = out_i967_width;
    imageOut_i923_height = out_i967_height;
    imageOut_i923_data = out_i967_data;
    // cluster_fSetArray_out22_rep19(): end inline
    // cluster_fSetArray_rep63(): end inline
    // cluster_fSetArray_rep67(): begin inline
    int i_i968;
    int j_i968;
    int *out_i968_width;
    int *out_i968_height;
    float *out_i968_data;
    // cluster_fMallocHandle_rep202(): begin inline
    int i_i1051;
    int j_i1051;
    int *out_i1051_width;
    int *out_i1051_height;
    float *out_i1051_data;
    out_i1051_width = &memregion_261_size4;
    out_i1051_height = &memregion_262_size4;
    out_i1051_data = memregion_263_size8294400;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    // cluster_fMallocHandle_out22_rep56(): begin inline
    (*out_i1051_height) = rows_i923;
    (*out_i1051_width) = cols_i923;
    out_i968_width = out_i1051_width;
    out_i968_height = out_i1051_height;
    out_i968_data = out_i1051_data;
    // cluster_fMallocHandle_out22_rep56(): end inline
    // cluster_fMallocHandle_rep202(): end inline
    int _lit165 = 0;
    // cluster_fSetArray_out22_rep24(): begin inline
    for (i_i968 = 0; i_i968 < rows_i923; i_i968++)
    {
#pragma HLS loop_tripcount max = 1080
        for (j_i968 = 0; j_i968 < cols_i923; j_i968++)
        {
            int __idxExpr299 = i_i968 * (*out_i968_width) + j_i968;
#pragma HLS loop_tripcount max = 1920
            out_i968_data[__idxExpr299] = _lit165;
        }
    }
    tempOut_i923_width = out_i968_width;
    tempOut_i923_height = out_i968_height;
    tempOut_i923_data = out_i968_data;
    // cluster_fSetArray_out22_rep24(): end inline
    // cluster_fSetArray_rep67(): end inline
    // cluster_fMallocHandle_rep209(): begin inline
    int i_i969;
    int j_i969;
    int *out_i969_width;
    int *out_i969_height;
    float *out_i969_data;
    out_i969_width = &memregion_264_size4;
    out_i969_height = &memregion_265_size4;
    out_i969_data = memregion_266_size12;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    int _lit166 = 1;
    int _lit167 = 3;
    // cluster_fMallocHandle_out22_rep59(): begin inline
    (*out_i969_height) = _lit166;
    (*out_i969_width) = _lit167;
    kernel_1_i923_width = out_i969_width;
    kernel_1_i923_height = out_i969_height;
    kernel_1_i923_data = out_i969_data;
    // cluster_fMallocHandle_out22_rep59(): end inline
    // cluster_fMallocHandle_rep209(): end inline
    // cluster_fMallocHandle_rep213(): begin inline
    int i_i970;
    int j_i970;
    int *out_i970_width;
    int *out_i970_height;
    float *out_i970_data;
    out_i970_width = &memregion_267_size4;
    out_i970_height = &memregion_268_size4;
    out_i970_data = memregion_269_size12;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    int _lit168 = 1;
    int _lit169 = 3;
    // cluster_fMallocHandle_out22_rep64(): begin inline
    (*out_i970_height) = _lit168;
    (*out_i970_width) = _lit169;
    kernel_2_i923_width = out_i970_width;
    kernel_2_i923_height = out_i970_height;
    kernel_2_i923_data = out_i970_data;
    // cluster_fMallocHandle_out22_rep64(): end inline
    // cluster_fMallocHandle_rep213(): end inline
    // cluster_calcSobel_dX_out1_rep3(): begin inline
    kernel_1_i923_data[0] = 1;
    kernel_1_i923_data[1] = 2;
    kernel_1_i923_data[2] = 1;
    kernelSize_i923 = 3;
    kernelSum_1_i923 = 4;
    kernel_2_i923_data[0] = 1;
    kernel_2_i923_data[1] = 0;
    kernel_2_i923_data[2] = -1;
    kernelSum_2_i923 = 2;
    startCol_i923 = 1;
    endCol_i923 = cols_i923 - 1;
    halfKernel_i923 = 1;
    startRow_i923 = 1;
    endRow_i923 = rows_i923 - 1;
    for (i_i923 = startRow_i923; i_i923 < endRow_i923; i_i923++)
    {
#pragma HLS loop_tripcount max = 1078
        for (j_i923 = startCol_i923; j_i923 < endCol_i923; j_i923++)
        {
#pragma HLS loop_tripcount max = 1918
            temp_i923 = 0;
            for (k_i923 = -halfKernel_i923; k_i923 <= halfKernel_i923; k_i923++)
            {
                int __idxExpr300 = i_i923 * (*blurred_level1_width) + (j_i923 + k_i923);
#pragma HLS loop_tripcount max = 3
                temp_i923 =
                    temp_i923 + blurred_level1_data[__idxExpr300] * kernel_2_i923_data[k_i923 + halfKernel_i923];
            }
            int __idxExpr301 = i_i923 * (*tempOut_i923_width) + j_i923;
            tempOut_i923_data[__idxExpr301] = temp_i923 / kernelSum_2_i923;
        }
    }
    for (i_i923 = startRow_i923; i_i923 < endRow_i923; i_i923++)
    {
#pragma HLS loop_tripcount max = 1078
        for (j_i923 = startCol_i923; j_i923 < endCol_i923; j_i923++)
        {
#pragma HLS loop_tripcount max = 1918
            temp_i923 = 0;
            for (k_i923 = -halfKernel_i923; k_i923 <= halfKernel_i923; k_i923++)
            {
                int __idxExpr302 = (i_i923 + k_i923) * (*tempOut_i923_width) + j_i923;
#pragma HLS loop_tripcount max = 3
                temp_i923 = temp_i923 + tempOut_i923_data[__idxExpr302] * kernel_1_i923_data[k_i923 + halfKernel_i923];
            }
            int __idxExpr303 = i_i923 * (*imageOut_i923_width) + j_i923;
            imageOut_i923_data[__idxExpr303] = temp_i923 / (float)kernelSum_1_i923;
        }
    }
    // cluster_calcSobel_dX_out1_rep3(): end inline
    // cluster_fFreeHandle_rep143(): begin inline
    int decomp_0_renamed_260_i972;
    // cluster_fFreeHandle_out17_rep58(): begin inline
    decomp_0_renamed_260_i972 = tempOut_i923_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep58(): end inline
    if (decomp_0_renamed_260_i972)
    {
        // free(tempOut_i923_data);
    }
    // cluster_fFreeHandle_rep143(): end inline
    // cluster_fFreeHandle_rep147(): begin inline
    int decomp_0_renamed_261_i973;
    // cluster_fFreeHandle_out17_rep63(): begin inline
    decomp_0_renamed_261_i973 = kernel_1_i923_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep63(): end inline
    if (decomp_0_renamed_261_i973)
    {
        // free(kernel_1_i923_data);
    }
    // cluster_fFreeHandle_rep147(): end inline
    // cluster_fFreeHandle_rep151(): begin inline
    int decomp_0_renamed_262_i974;
    // cluster_fFreeHandle_out17_rep68(): begin inline
    decomp_0_renamed_262_i974 = kernel_2_i923_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep68(): end inline
    if (decomp_0_renamed_262_i974)
    {
        // free(kernel_2_i923_data);
    }
    verticalEdge_level1_width = imageOut_i923_width;
    verticalEdge_level1_height = imageOut_i923_height;
    verticalEdge_level1_data = imageOut_i923_data;
    // cluster_fFreeHandle_rep151(): end inline
    // cluster_calcSobel_dX_rep0(): end inline
    // cluster_calcSobel_dY_rep0(): begin inline
    float kernelSum_1_i924;
    int *tempOut_i924_width;
    int *tempOut_i924_height;
    float *tempOut_i924_data;
    int *imageOut_i924_width;
    int *imageOut_i924_height;
    float *imageOut_i924_data;
    int outputCols_i924;
    int outputRows_i924;
    int kernelSum_2_i924;
    int k_i924;
    int j_i924;
    int i_i924;
    int endRow_i924;
    int startRow_i924;
    int halfKernel_i924;
    int endCol_i924;
    int startCol_i924;
    int kernelSize_i924;
    float temp_i924;
    int *kernel_2_i924_width;
    int *kernel_2_i924_height;
    int *kernel_2_i924_data;
    int *kernel_1_i924_width;
    int *kernel_1_i924_height;
    int *kernel_1_i924_data;
    int cols_i924;
    int rows_i924;
    // cluster_calcSobel_dY_out0_rep3(): begin inline
    int kernelSum_i975;
    rows_i924 = (*blurred_level1_height);
    cols_i924 = (*blurred_level1_width);
    outputRows_i924 = rows_i924;
    outputCols_i924 = cols_i924;
    // cluster_calcSobel_dY_out0_rep3(): end inline
    // cluster_fSetArray_rep71(): begin inline
    int i_i976;
    int j_i976;
    int *out_i976_width;
    int *out_i976_height;
    float *out_i976_data;
    // cluster_fMallocHandle_rep215(): begin inline
    int i_i1058;
    int j_i1058;
    int *out_i1058_width;
    int *out_i1058_height;
    float *out_i1058_data;
    out_i1058_width = &memregion_270_size4;
    out_i1058_height = &memregion_271_size4;
    out_i1058_data = memregion_272_size8294400;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    // cluster_fMallocHandle_out22_rep72(): begin inline
    (*out_i1058_height) = outputRows_i924;
    (*out_i1058_width) = outputCols_i924;
    out_i976_width = out_i1058_width;
    out_i976_height = out_i1058_height;
    out_i976_data = out_i1058_data;
    // cluster_fMallocHandle_out22_rep72(): end inline
    // cluster_fMallocHandle_rep215(): end inline
    int _lit170 = 0;
    // cluster_fSetArray_out22_rep29(): begin inline
    for (i_i976 = 0; i_i976 < outputRows_i924; i_i976++)
    {
#pragma HLS loop_tripcount max = 1080
        for (j_i976 = 0; j_i976 < outputCols_i924; j_i976++)
        {
            int __idxExpr304 = i_i976 * (*out_i976_width) + j_i976;
#pragma HLS loop_tripcount max = 1920
            out_i976_data[__idxExpr304] = _lit170;
        }
    }
    imageOut_i924_width = out_i976_width;
    imageOut_i924_height = out_i976_height;
    imageOut_i924_data = out_i976_data;
    // cluster_fSetArray_out22_rep29(): end inline
    // cluster_fSetArray_rep71(): end inline
    // cluster_fSetArray_rep75(): begin inline
    int i_i977;
    int j_i977;
    int *out_i977_width;
    int *out_i977_height;
    float *out_i977_data;
    // cluster_fMallocHandle_rep220(): begin inline
    int i_i1060;
    int j_i1060;
    int *out_i1060_width;
    int *out_i1060_height;
    float *out_i1060_data;
    out_i1060_width = &memregion_273_size4;
    out_i1060_height = &memregion_274_size4;
    out_i1060_data = memregion_275_size8294400;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    // cluster_fMallocHandle_out22_rep78(): begin inline
    (*out_i1060_height) = outputRows_i924;
    (*out_i1060_width) = outputCols_i924;
    out_i977_width = out_i1060_width;
    out_i977_height = out_i1060_height;
    out_i977_data = out_i1060_data;
    // cluster_fMallocHandle_out22_rep78(): end inline
    // cluster_fMallocHandle_rep220(): end inline
    int _lit171 = 0;
    // cluster_fSetArray_out22_rep34(): begin inline
    for (i_i977 = 0; i_i977 < outputRows_i924; i_i977++)
    {
#pragma HLS loop_tripcount max = 1080
        for (j_i977 = 0; j_i977 < outputCols_i924; j_i977++)
        {
            int __idxExpr305 = i_i977 * (*out_i977_width) + j_i977;
#pragma HLS loop_tripcount max = 1920
            out_i977_data[__idxExpr305] = _lit171;
        }
    }
    tempOut_i924_width = out_i977_width;
    tempOut_i924_height = out_i977_height;
    tempOut_i924_data = out_i977_data;
    // cluster_fSetArray_out22_rep34(): end inline
    // cluster_fSetArray_rep75(): end inline
    // cluster_iMallocHandle_rep76(): begin inline
    int i_i978;
    int j_i978;
    int *out_i978_width;
    int *out_i978_height;
    int *out_i978_data;
    out_i978_width = &memregion_276_size4;
    out_i978_height = &memregion_277_size4;
    out_i978_data = memregion_278_size12;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    int _lit172 = 1;
    int _lit173 = 3;
    // cluster_iMallocHandle_out29_rep12(): begin inline
    (*out_i978_height) = _lit172;
    (*out_i978_width) = _lit173;
    kernel_1_i924_width = out_i978_width;
    kernel_1_i924_height = out_i978_height;
    kernel_1_i924_data = out_i978_data;
    // cluster_iMallocHandle_out29_rep12(): end inline
    // cluster_iMallocHandle_rep76(): end inline
    // cluster_iMallocHandle_rep80(): begin inline
    int i_i979;
    int j_i979;
    int *out_i979_width;
    int *out_i979_height;
    int *out_i979_data;
    out_i979_width = &memregion_279_size4;
    out_i979_height = &memregion_280_size4;
    out_i979_data = memregion_281_size12;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    int _lit174 = 1;
    int _lit175 = 3;
    // cluster_iMallocHandle_out29_rep17(): begin inline
    (*out_i979_height) = _lit174;
    (*out_i979_width) = _lit175;
    kernel_2_i924_width = out_i979_width;
    kernel_2_i924_height = out_i979_height;
    kernel_2_i924_data = out_i979_data;
    // cluster_iMallocHandle_out29_rep17(): end inline
    // cluster_iMallocHandle_rep80(): end inline
    // cluster_calcSobel_dY_out1_rep3(): begin inline
    kernel_1_i924_data[0] = 1;
    kernel_1_i924_data[1] = 0;
    kernel_1_i924_data[2] = -1;
    kernelSize_i924 = 3;
    kernelSum_1_i924 = 2.0;
    kernel_2_i924_data[0] = 1;
    kernel_2_i924_data[1] = 2;
    kernel_2_i924_data[2] = 1;
    kernelSum_2_i924 = 4;
    startCol_i924 = 1;
    endCol_i924 = cols_i924 - 1;
    halfKernel_i924 = 1;
    startRow_i924 = 1;
    endRow_i924 = rows_i924 - 1;
    for (i_i924 = startRow_i924; i_i924 < endRow_i924; i_i924++)
    {
#pragma HLS loop_tripcount max = 1078
        for (j_i924 = startCol_i924; j_i924 < endCol_i924; j_i924++)
        {
#pragma HLS loop_tripcount max = 1918
            temp_i924 = 0;
            for (k_i924 = -halfKernel_i924; k_i924 <= halfKernel_i924; k_i924++)
            {
                int __idxExpr306 = (i_i924 + k_i924) * (*blurred_level1_width) + j_i924;
#pragma HLS loop_tripcount max = 3
                temp_i924 =
                    temp_i924 + blurred_level1_data[__idxExpr306] * kernel_1_i924_data[k_i924 + halfKernel_i924];
            }
            int __idxExpr307 = i_i924 * (*tempOut_i924_width) + j_i924;
            tempOut_i924_data[__idxExpr307] = temp_i924 / kernelSum_1_i924;
        }
    }
    for (i_i924 = startRow_i924; i_i924 < endRow_i924; i_i924++)
    {
#pragma HLS loop_tripcount max = 1078
        for (j_i924 = startCol_i924; j_i924 < endCol_i924; j_i924++)
        {
#pragma HLS loop_tripcount max = 1918
            temp_i924 = 0;
            for (k_i924 = -halfKernel_i924; k_i924 <= halfKernel_i924; k_i924++)
            {
                int __idxExpr308 = i_i924 * (*tempOut_i924_width) + (j_i924 + k_i924);
#pragma HLS loop_tripcount max = 3
                temp_i924 = temp_i924 + tempOut_i924_data[__idxExpr308] * kernel_2_i924_data[k_i924 + halfKernel_i924];
            }
            int __idxExpr309 = i_i924 * (*imageOut_i924_width) + j_i924;
            imageOut_i924_data[__idxExpr309] = temp_i924 / (float)kernelSum_2_i924;
        }
    }
    // cluster_calcSobel_dY_out1_rep3(): end inline
    // cluster_fFreeHandle_rep155(): begin inline
    int decomp_0_renamed_263_i981;
    // cluster_fFreeHandle_out17_rep73(): begin inline
    decomp_0_renamed_263_i981 = tempOut_i924_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep73(): end inline
    if (decomp_0_renamed_263_i981)
    {
        // free(tempOut_i924_data);
    }
    // cluster_fFreeHandle_rep155(): end inline
    // cluster_iFreeHandle_rep49(): begin inline
    int decomp_0_renamed_264_i982;
    // cluster_iFreeHandle_out17_rep13(): begin inline
    decomp_0_renamed_264_i982 = kernel_1_i924_data != ((void *)0);
    // cluster_iFreeHandle_out17_rep13(): end inline
    if (decomp_0_renamed_264_i982)
    {
        // free(kernel_1_i924_data);
    }
    // cluster_iFreeHandle_rep49(): end inline
    // cluster_iFreeHandle_rep53(): begin inline
    int decomp_0_renamed_265_i983;
    // cluster_iFreeHandle_out17_rep18(): begin inline
    decomp_0_renamed_265_i983 = kernel_2_i924_data != ((void *)0);
    // cluster_iFreeHandle_out17_rep18(): end inline
    if (decomp_0_renamed_265_i983)
    {
        // free(kernel_2_i924_data);
    }
    horizontalEdge_level1_width = imageOut_i924_width;
    horizontalEdge_level1_height = imageOut_i924_height;
    horizontalEdge_level1_data = imageOut_i924_data;
    int *tempOut_i925_width;
    int *tempOut_i925_height;
    float *tempOut_i925_data;
    // cluster_iFreeHandle_rep53(): end inline
    // cluster_calcSobel_dY_rep0(): end inline
    // cluster_calcSobel_dX_rep1(): begin inline
    int *imageOut_i925_width;
    int *imageOut_i925_height;
    float *imageOut_i925_data;
    int kernelSum_2_i925;
    int kernelSum_1_i925;
    int k_i925;
    int j_i925;
    int i_i925;
    int endRow_i925;
    int startRow_i925;
    int halfKernel_i925;
    int endCol_i925;
    int startCol_i925;
    int kernelSize_i925;
    float temp_i925;
    int *kernel_2_i925_width;
    int *kernel_2_i925_height;
    float *kernel_2_i925_data;
    int *kernel_1_i925_width;
    int *kernel_1_i925_height;
    float *kernel_1_i925_data;
    int cols_i925;
    int rows_i925;
    // cluster_calcSobel_dX_out0_rep2(): begin inline
    int kernelSum_i984;
    rows_i925 = (*blurred_level2_height);
    cols_i925 = (*blurred_level2_width);
    // cluster_calcSobel_dX_out0_rep2(): end inline
    // cluster_fSetArray_rep62(): begin inline
    int i_i985;
    int j_i985;
    int *out_i985_width;
    int *out_i985_height;
    float *out_i985_data;
    // cluster_fMallocHandle_rep198(): begin inline
    int i_i1067;
    int j_i1067;
    int *out_i1067_width;
    int *out_i1067_height;
    float *out_i1067_data;
    out_i1067_width = &memregion_282_size4;
    out_i1067_height = &memregion_283_size4;
    out_i1067_data = memregion_284_size2073600;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    // cluster_fMallocHandle_out22_rep49(): begin inline
    (*out_i1067_height) = rows_i925;
    (*out_i1067_width) = cols_i925;
    out_i985_width = out_i1067_width;
    out_i985_height = out_i1067_height;
    out_i985_data = out_i1067_data;
    // cluster_fMallocHandle_out22_rep49(): end inline
    // cluster_fMallocHandle_rep198(): end inline
    int _lit176 = 0;
    // cluster_fSetArray_out22_rep20(): begin inline
    for (i_i985 = 0; i_i985 < rows_i925; i_i985++)
    {
#pragma HLS loop_tripcount max = 540
        for (j_i985 = 0; j_i985 < cols_i925; j_i985++)
        {
            int __idxExpr310 = i_i985 * (*out_i985_width) + j_i985;
#pragma HLS loop_tripcount max = 960
            out_i985_data[__idxExpr310] = _lit176;
        }
    }
    imageOut_i925_width = out_i985_width;
    imageOut_i925_height = out_i985_height;
    imageOut_i925_data = out_i985_data;
    // cluster_fSetArray_out22_rep20(): end inline
    // cluster_fSetArray_rep62(): end inline
    // cluster_fSetArray_rep66(): begin inline
    int i_i986;
    int j_i986;
    int *out_i986_width;
    int *out_i986_height;
    float *out_i986_data;
    // cluster_fMallocHandle_rep203(): begin inline
    int i_i1069;
    int j_i1069;
    int *out_i1069_width;
    int *out_i1069_height;
    float *out_i1069_data;
    out_i1069_width = &memregion_285_size4;
    out_i1069_height = &memregion_286_size4;
    out_i1069_data = memregion_287_size2073600;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    // cluster_fMallocHandle_out22_rep55(): begin inline
    (*out_i1069_height) = rows_i925;
    (*out_i1069_width) = cols_i925;
    out_i986_width = out_i1069_width;
    out_i986_height = out_i1069_height;
    out_i986_data = out_i1069_data;
    // cluster_fMallocHandle_out22_rep55(): end inline
    // cluster_fMallocHandle_rep203(): end inline
    int _lit177 = 0;
    // cluster_fSetArray_out22_rep25(): begin inline
    for (i_i986 = 0; i_i986 < rows_i925; i_i986++)
    {
#pragma HLS loop_tripcount max = 540
        for (j_i986 = 0; j_i986 < cols_i925; j_i986++)
        {
            int __idxExpr311 = i_i986 * (*out_i986_width) + j_i986;
#pragma HLS loop_tripcount max = 960
            out_i986_data[__idxExpr311] = _lit177;
        }
    }
    tempOut_i925_width = out_i986_width;
    tempOut_i925_height = out_i986_height;
    tempOut_i925_data = out_i986_data;
    // cluster_fSetArray_out22_rep25(): end inline
    // cluster_fSetArray_rep66(): end inline
    // cluster_fMallocHandle_rep208(): begin inline
    int i_i987;
    int j_i987;
    int *out_i987_width;
    int *out_i987_height;
    float *out_i987_data;
    out_i987_width = &memregion_288_size4;
    out_i987_height = &memregion_289_size4;
    out_i987_data = memregion_290_size12;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    int _lit178 = 1;
    int _lit179 = 3;
    // cluster_fMallocHandle_out22_rep60(): begin inline
    (*out_i987_height) = _lit178;
    (*out_i987_width) = _lit179;
    kernel_1_i925_width = out_i987_width;
    kernel_1_i925_height = out_i987_height;
    kernel_1_i925_data = out_i987_data;
    // cluster_fMallocHandle_out22_rep60(): end inline
    // cluster_fMallocHandle_rep208(): end inline
    // cluster_fMallocHandle_rep212(): begin inline
    int i_i988;
    int j_i988;
    int *out_i988_width;
    int *out_i988_height;
    float *out_i988_data;
    out_i988_width = &memregion_291_size4;
    out_i988_height = &memregion_292_size4;
    out_i988_data = memregion_293_size12;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    int _lit180 = 1;
    int _lit181 = 3;
    // cluster_fMallocHandle_out22_rep65(): begin inline
    (*out_i988_height) = _lit180;
    (*out_i988_width) = _lit181;
    kernel_2_i925_width = out_i988_width;
    kernel_2_i925_height = out_i988_height;
    kernel_2_i925_data = out_i988_data;
    // cluster_fMallocHandle_out22_rep65(): end inline
    // cluster_fMallocHandle_rep212(): end inline
    // cluster_calcSobel_dX_out1_rep2(): begin inline
    kernel_1_i925_data[0] = 1;
    kernel_1_i925_data[1] = 2;
    kernel_1_i925_data[2] = 1;
    kernelSize_i925 = 3;
    kernelSum_1_i925 = 4;
    kernel_2_i925_data[0] = 1;
    kernel_2_i925_data[1] = 0;
    kernel_2_i925_data[2] = -1;
    kernelSum_2_i925 = 2;
    startCol_i925 = 1;
    endCol_i925 = cols_i925 - 1;
    halfKernel_i925 = 1;
    startRow_i925 = 1;
    endRow_i925 = rows_i925 - 1;
    for (i_i925 = startRow_i925; i_i925 < endRow_i925; i_i925++)
    {
#pragma HLS loop_tripcount max = 538
        for (j_i925 = startCol_i925; j_i925 < endCol_i925; j_i925++)
        {
#pragma HLS loop_tripcount max = 958
            temp_i925 = 0;
            for (k_i925 = -halfKernel_i925; k_i925 <= halfKernel_i925; k_i925++)
            {
                int __idxExpr312 = i_i925 * (*blurred_level2_width) + (j_i925 + k_i925);
#pragma HLS loop_tripcount max = 3
                temp_i925 =
                    temp_i925 + blurred_level2_data[__idxExpr312] * kernel_2_i925_data[k_i925 + halfKernel_i925];
            }
            int __idxExpr313 = i_i925 * (*tempOut_i925_width) + j_i925;
            tempOut_i925_data[__idxExpr313] = temp_i925 / kernelSum_2_i925;
        }
    }
    for (i_i925 = startRow_i925; i_i925 < endRow_i925; i_i925++)
    {
#pragma HLS loop_tripcount max = 538
        for (j_i925 = startCol_i925; j_i925 < endCol_i925; j_i925++)
        {
#pragma HLS loop_tripcount max = 958
            temp_i925 = 0;
            for (k_i925 = -halfKernel_i925; k_i925 <= halfKernel_i925; k_i925++)
            {
                int __idxExpr314 = (i_i925 + k_i925) * (*tempOut_i925_width) + j_i925;
#pragma HLS loop_tripcount max = 3
                temp_i925 = temp_i925 + tempOut_i925_data[__idxExpr314] * kernel_1_i925_data[k_i925 + halfKernel_i925];
            }
            int __idxExpr315 = i_i925 * (*imageOut_i925_width) + j_i925;
            imageOut_i925_data[__idxExpr315] = temp_i925 / (float)kernelSum_1_i925;
        }
    }
    // cluster_calcSobel_dX_out1_rep2(): end inline
    // cluster_fFreeHandle_rep142(): begin inline
    int decomp_0_renamed_266_i990;
    // cluster_fFreeHandle_out17_rep59(): begin inline
    decomp_0_renamed_266_i990 = tempOut_i925_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep59(): end inline
    if (decomp_0_renamed_266_i990)
    {
        // free(tempOut_i925_data);
    }
    // cluster_fFreeHandle_rep142(): end inline
    // cluster_fFreeHandle_rep146(): begin inline
    int decomp_0_renamed_267_i991;
    // cluster_fFreeHandle_out17_rep64(): begin inline
    decomp_0_renamed_267_i991 = kernel_1_i925_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep64(): end inline
    if (decomp_0_renamed_267_i991)
    {
        // free(kernel_1_i925_data);
    }
    // cluster_fFreeHandle_rep146(): end inline
    // cluster_fFreeHandle_rep150(): begin inline
    int decomp_0_renamed_268_i992;
    // cluster_fFreeHandle_out17_rep69(): begin inline
    decomp_0_renamed_268_i992 = kernel_2_i925_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep69(): end inline
    if (decomp_0_renamed_268_i992)
    {
        // free(kernel_2_i925_data);
    }
    verticalEdge_level2_width = imageOut_i925_width;
    verticalEdge_level2_height = imageOut_i925_height;
    verticalEdge_level2_data = imageOut_i925_data;
    // cluster_fFreeHandle_rep150(): end inline
    // cluster_calcSobel_dX_rep1(): end inline
    // cluster_calcSobel_dY_rep1(): begin inline
    float kernelSum_1_i926;
    int *tempOut_i926_width;
    int *tempOut_i926_height;
    float *tempOut_i926_data;
    int *imageOut_i926_width;
    int *imageOut_i926_height;
    float *imageOut_i926_data;
    int outputCols_i926;
    int outputRows_i926;
    int kernelSum_2_i926;
    int k_i926;
    int j_i926;
    int i_i926;
    int endRow_i926;
    int startRow_i926;
    int halfKernel_i926;
    int endCol_i926;
    int startCol_i926;
    int kernelSize_i926;
    float temp_i926;
    int *kernel_2_i926_width;
    int *kernel_2_i926_height;
    int *kernel_2_i926_data;
    int *kernel_1_i926_width;
    int *kernel_1_i926_height;
    int *kernel_1_i926_data;
    int cols_i926;
    int rows_i926;
    // cluster_calcSobel_dY_out0_rep2(): begin inline
    int kernelSum_i993;
    rows_i926 = (*blurred_level2_height);
    cols_i926 = (*blurred_level2_width);
    outputRows_i926 = rows_i926;
    outputCols_i926 = cols_i926;
    // cluster_calcSobel_dY_out0_rep2(): end inline
    // cluster_fSetArray_rep70(): begin inline
    int i_i994;
    int j_i994;
    int *out_i994_width;
    int *out_i994_height;
    float *out_i994_data;
    // cluster_fMallocHandle_rep216(): begin inline
    int i_i1076;
    int j_i1076;
    int *out_i1076_width;
    int *out_i1076_height;
    float *out_i1076_data;
    out_i1076_width = &memregion_294_size4;
    out_i1076_height = &memregion_295_size4;
    out_i1076_data = memregion_296_size2073600;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    // cluster_fMallocHandle_out22_rep71(): begin inline
    (*out_i1076_height) = outputRows_i926;
    (*out_i1076_width) = outputCols_i926;
    out_i994_width = out_i1076_width;
    out_i994_height = out_i1076_height;
    out_i994_data = out_i1076_data;
    // cluster_fMallocHandle_out22_rep71(): end inline
    // cluster_fMallocHandle_rep216(): end inline
    int _lit182 = 0;
    // cluster_fSetArray_out22_rep30(): begin inline
    for (i_i994 = 0; i_i994 < outputRows_i926; i_i994++)
    {
#pragma HLS loop_tripcount max = 540
        for (j_i994 = 0; j_i994 < outputCols_i926; j_i994++)
        {
            int __idxExpr316 = i_i994 * (*out_i994_width) + j_i994;
#pragma HLS loop_tripcount max = 960
            out_i994_data[__idxExpr316] = _lit182;
        }
    }
    imageOut_i926_width = out_i994_width;
    imageOut_i926_height = out_i994_height;
    imageOut_i926_data = out_i994_data;
    // cluster_fSetArray_out22_rep30(): end inline
    // cluster_fSetArray_rep70(): end inline
    // cluster_fSetArray_rep74(): begin inline
    int i_i995;
    int j_i995;
    int *out_i995_width;
    int *out_i995_height;
    float *out_i995_data;
    // cluster_fMallocHandle_rep221(): begin inline
    int i_i1078;
    int j_i1078;
    int *out_i1078_width;
    int *out_i1078_height;
    float *out_i1078_data;
    out_i1078_width = &memregion_297_size4;
    out_i1078_height = &memregion_298_size4;
    out_i1078_data = memregion_299_size2073600;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    // cluster_fMallocHandle_out22_rep77(): begin inline
    (*out_i1078_height) = outputRows_i926;
    (*out_i1078_width) = outputCols_i926;
    out_i995_width = out_i1078_width;
    out_i995_height = out_i1078_height;
    out_i995_data = out_i1078_data;
    // cluster_fMallocHandle_out22_rep77(): end inline
    // cluster_fMallocHandle_rep221(): end inline
    int _lit183 = 0;
    // cluster_fSetArray_out22_rep35(): begin inline
    for (i_i995 = 0; i_i995 < outputRows_i926; i_i995++)
    {
#pragma HLS loop_tripcount max = 540
        for (j_i995 = 0; j_i995 < outputCols_i926; j_i995++)
        {
            int __idxExpr317 = i_i995 * (*out_i995_width) + j_i995;
#pragma HLS loop_tripcount max = 960
            out_i995_data[__idxExpr317] = _lit183;
        }
    }
    tempOut_i926_width = out_i995_width;
    tempOut_i926_height = out_i995_height;
    tempOut_i926_data = out_i995_data;
    // cluster_fSetArray_out22_rep35(): end inline
    // cluster_fSetArray_rep74(): end inline
    // cluster_iMallocHandle_rep75(): begin inline
    int i_i996;
    int j_i996;
    int *out_i996_width;
    int *out_i996_height;
    int *out_i996_data;
    out_i996_width = &memregion_300_size4;
    out_i996_height = &memregion_301_size4;
    out_i996_data = memregion_302_size12;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    int _lit184 = 1;
    int _lit185 = 3;
    // cluster_iMallocHandle_out29_rep13(): begin inline
    (*out_i996_height) = _lit184;
    (*out_i996_width) = _lit185;
    kernel_1_i926_width = out_i996_width;
    kernel_1_i926_height = out_i996_height;
    kernel_1_i926_data = out_i996_data;
    // cluster_iMallocHandle_out29_rep13(): end inline
    // cluster_iMallocHandle_rep75(): end inline
    // cluster_iMallocHandle_rep79(): begin inline
    int i_i997;
    int j_i997;
    int *out_i997_width;
    int *out_i997_height;
    int *out_i997_data;
    out_i997_width = &memregion_303_size4;
    out_i997_height = &memregion_304_size4;
    out_i997_data = memregion_305_size12;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    int _lit186 = 1;
    int _lit187 = 3;
    // cluster_iMallocHandle_out29_rep18(): begin inline
    (*out_i997_height) = _lit186;
    (*out_i997_width) = _lit187;
    kernel_2_i926_width = out_i997_width;
    kernel_2_i926_height = out_i997_height;
    kernel_2_i926_data = out_i997_data;
    // cluster_iMallocHandle_out29_rep18(): end inline
    // cluster_iMallocHandle_rep79(): end inline
    // cluster_calcSobel_dY_out1_rep2(): begin inline
    kernel_1_i926_data[0] = 1;
    kernel_1_i926_data[1] = 0;
    kernel_1_i926_data[2] = -1;
    kernelSize_i926 = 3;
    kernelSum_1_i926 = 2.0;
    kernel_2_i926_data[0] = 1;
    kernel_2_i926_data[1] = 2;
    kernel_2_i926_data[2] = 1;
    kernelSum_2_i926 = 4;
    startCol_i926 = 1;
    endCol_i926 = cols_i926 - 1;
    halfKernel_i926 = 1;
    startRow_i926 = 1;
    endRow_i926 = rows_i926 - 1;
    for (i_i926 = startRow_i926; i_i926 < endRow_i926; i_i926++)
    {
#pragma HLS loop_tripcount max = 538
        for (j_i926 = startCol_i926; j_i926 < endCol_i926; j_i926++)
        {
#pragma HLS loop_tripcount max = 958
            temp_i926 = 0;
            for (k_i926 = -halfKernel_i926; k_i926 <= halfKernel_i926; k_i926++)
            {
                int __idxExpr318 = (i_i926 + k_i926) * (*blurred_level2_width) + j_i926;
#pragma HLS loop_tripcount max = 3
                temp_i926 =
                    temp_i926 + blurred_level2_data[__idxExpr318] * kernel_1_i926_data[k_i926 + halfKernel_i926];
            }
            int __idxExpr319 = i_i926 * (*tempOut_i926_width) + j_i926;
            tempOut_i926_data[__idxExpr319] = temp_i926 / kernelSum_1_i926;
        }
    }
    for (i_i926 = startRow_i926; i_i926 < endRow_i926; i_i926++)
    {
#pragma HLS loop_tripcount max = 538
        for (j_i926 = startCol_i926; j_i926 < endCol_i926; j_i926++)
        {
#pragma HLS loop_tripcount max = 958
            temp_i926 = 0;
            for (k_i926 = -halfKernel_i926; k_i926 <= halfKernel_i926; k_i926++)
            {
                int __idxExpr320 = i_i926 * (*tempOut_i926_width) + (j_i926 + k_i926);
#pragma HLS loop_tripcount max = 3
                temp_i926 = temp_i926 + tempOut_i926_data[__idxExpr320] * kernel_2_i926_data[k_i926 + halfKernel_i926];
            }
            int __idxExpr321 = i_i926 * (*imageOut_i926_width) + j_i926;
            imageOut_i926_data[__idxExpr321] = temp_i926 / (float)kernelSum_2_i926;
        }
    }
    // cluster_calcSobel_dY_out1_rep2(): end inline
    // cluster_fFreeHandle_rep154(): begin inline
    int decomp_0_renamed_269_i999;
    // cluster_fFreeHandle_out17_rep74(): begin inline
    decomp_0_renamed_269_i999 = tempOut_i926_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep74(): end inline
    if (decomp_0_renamed_269_i999)
    {
        // free(tempOut_i926_data);
    }
    // cluster_fFreeHandle_rep154(): end inline
    // cluster_iFreeHandle_rep48(): begin inline
    int decomp_0_renamed_270_i1000;
    // cluster_iFreeHandle_out17_rep14(): begin inline
    decomp_0_renamed_270_i1000 = kernel_1_i926_data != ((void *)0);
    // cluster_iFreeHandle_out17_rep14(): end inline
    if (decomp_0_renamed_270_i1000)
    {
        // free(kernel_1_i926_data);
    }
    // cluster_iFreeHandle_rep48(): end inline
    // cluster_iFreeHandle_rep52(): begin inline
    int decomp_0_renamed_271_i1001;
    // cluster_iFreeHandle_out17_rep19(): begin inline
    decomp_0_renamed_271_i1001 = kernel_2_i926_data != ((void *)0);
    // cluster_iFreeHandle_out17_rep19(): end inline
    if (decomp_0_renamed_271_i1001)
    {
        // free(kernel_2_i926_data);
    }
    horizontalEdge_level2_width = imageOut_i926_width;
    horizontalEdge_level2_height = imageOut_i926_height;
    horizontalEdge_level2_data = imageOut_i926_data;
    // cluster_iFreeHandle_rep52(): end inline
    // cluster_calcSobel_dY_rep1(): end inline
    // cluster_fSetArray_rep58(): begin inline
    int i_i927;
    int j_i927;
    int *out_i927_width;
    int *out_i927_height;
    float *out_i927_data;
    // cluster_fMallocHandle_rep166(): begin inline
    int i_i1002;
    int j_i1002;
    int *out_i1002_width;
    int *out_i1002_height;
    float *out_i1002_data;
    out_i1002_width = &memregion_306_size4;
    out_i1002_height = &memregion_307_size4;
    out_i1002_data = memregion_308_size40;
#pragma clava malloc_size max = 48 min = 48 avg = 48
    int _lit188 = 2;
    // cluster_fMallocHandle_out22_rep21(): begin inline
    (*out_i1002_height) = _lit188;
    (*out_i1002_width) = (*features_width);
    out_i927_width = out_i1002_width;
    out_i927_height = out_i1002_height;
    out_i927_data = out_i1002_data;
    // cluster_fMallocHandle_out22_rep21(): end inline
    // cluster_fMallocHandle_rep166(): end inline
    int _lit154 = 2;
    int _lit155 = 0;
    // cluster_fSetArray_out22_rep2(): begin inline
    for (i_i927 = 0; i_i927 < _lit154; i_i927++)
    {
#pragma HLS loop_tripcount max = 2
        for (j_i927 = 0; j_i927 < (*features_width); j_i927++)
        {
            int __idxExpr322 = i_i927 * (*out_i927_width) + j_i927;
#pragma HLS loop_tripcount max = 5
            out_i927_data[__idxExpr322] = _lit155;
        }
    }
    newpoints_width = out_i927_width;
    newpoints_height = out_i927_height;
    newpoints_data = out_i927_data;
    // cluster_fSetArray_out22_rep2(): end inline
    // cluster_fSetArray_rep58(): end inline
    // cluster_calcPyrLKTrack(): begin inline
    int idx_i928;
    int level_i928;
    int pLevel_i928;
    int i_i928;
    int j_i928;
    int k_i928;
    int winSizeSq_i928;
    int *valid_i928_width;
    int *valid_i928_height;
    int *valid_i928_data;
    int *rate_i928_width;
    int *rate_i928_height;
    float *rate_i928_data;
    int *iPatch_i928_width;
    int *iPatch_i928_height;
    float *iPatch_i928_data;
    int *jPatch_i928_width;
    int *jPatch_i928_height;
    float *jPatch_i928_data;
    int *iDxPatch_i928_width;
    int *iDxPatch_i928_height;
    float *iDxPatch_i928_data;
    int *iDyPatch_i928_width;
    int *iDyPatch_i928_height;
    float *iDyPatch_i928_data;
    float tr_i928;
    float x_i928;
    float y_i928;
    float dX_i928;
    float dY_i928;
    float c_xx_i928;
    float c_yy_i928;
    float c_xy_i928;
    int imgSize_1_i928;
    int imgSize_2_i928;
    float mX_i928;
    float mY_i928;
    float dIt_i928;
    float eX_i928;
    float eY_i928;
    float c_det_i928;
    int *imgDims_i928_width;
    int *imgDims_i928_height;
    int *imgDims_i928_data;
    // cluster_iMallocHandle_rep63(): begin inline
    int i_i1004;
    int j_i1004;
    int *out_i1004_width;
    int *out_i1004_height;
    int *out_i1004_data;
    out_i1004_width = &memregion_309_size4;
    out_i1004_height = &memregion_310_size4;
    out_i1004_data = memregion_311_size16;
#pragma clava malloc_size max = 24 min = 24 avg = 24
    int _lit189 = 2;
    int _lit190 = 2;
    // cluster_iMallocHandle_out29_rep10(): begin inline
    (*out_i1004_height) = _lit189;
    (*out_i1004_width) = _lit190;
    imgDims_i928_width = out_i1004_width;
    imgDims_i928_height = out_i1004_height;
    imgDims_i928_data = out_i1004_data;
    // cluster_iMallocHandle_out29_rep10(): end inline
    int __idxExpr323 = 0 * (*imgDims_i928_width) + 0;
    // cluster_iMallocHandle_rep63(): end inline
    // cluster_calcPyrLKTrack_out1(): begin inline
    imgDims_i928_data[__idxExpr323] = (*previousFrameBlurred_level1_height);
    int __idxExpr324 = 0 * (*imgDims_i928_width) + 1;
    imgDims_i928_data[__idxExpr324] = (*previousFrameBlurred_level1_width);
    int __idxExpr325 = 1 * (*imgDims_i928_width) + 0;
    imgDims_i928_data[__idxExpr325] = (*previousFrameBlurred_level2_height);
    int __idxExpr326 = 1 * (*imgDims_i928_width) + 1;
    imgDims_i928_data[__idxExpr326] = (*previousFrameBlurred_level2_width);
    pLevel_i928 = 2;
    // cluster_calcPyrLKTrack_out1(): end inline
    // cluster_fMallocHandle_rep159(): begin inline
    int i_i1006;
    int j_i1006;
    int *out_i1006_width;
    int *out_i1006_height;
    float *out_i1006_data;
    out_i1006_width = &memregion_312_size4;
    out_i1006_height = &memregion_313_size4;
    out_i1006_data = memregion_314_size24;
#pragma clava malloc_size max = 32 min = 32 avg = 32
    int _lit191 = 1;
    int _lit192 = 6;
    // cluster_fMallocHandle_out22_rep28(): begin inline
    (*out_i1006_height) = _lit191;
    (*out_i1006_width) = _lit192;
    rate_i928_width = out_i1006_width;
    rate_i928_height = out_i1006_height;
    rate_i928_data = out_i1006_data;
    // cluster_fMallocHandle_out22_rep28(): end inline
    // cluster_fMallocHandle_rep159(): end inline
    // cluster_calcPyrLKTrack_out2(): begin inline
    rate_i928_data[0] = 1;
    rate_i928_data[1] = 0.5;
    rate_i928_data[2] = 0.25;
    rate_i928_data[3] = 0.125;
    rate_i928_data[4] = 0.0625;
    rate_i928_data[5] = 0.03125;
    winSizeSq_i928 = 4 * (local_WINSZ) * (local_WINSZ);
    // cluster_calcPyrLKTrack_out2(): end inline
    // cluster_iSetArray(): begin inline
    int i_i1008;
    int j_i1008;
    int *out_i1008_width;
    int *out_i1008_height;
    int *out_i1008_data;
    // cluster_iMallocHandle_rep69(): begin inline
    int i_i1088;
    int j_i1088;
    int *out_i1088_width;
    int *out_i1088_height;
    int *out_i1088_data;
    out_i1088_width = &memregion_315_size4;
    out_i1088_height = &memregion_316_size4;
    out_i1088_data = memregion_317_size20;
#pragma clava malloc_size max = 28 min = 28 avg = 28
    int _lit197 = 1;
    // cluster_iMallocHandle_out29_rep4(): begin inline
    (*out_i1088_height) = _lit197;
    (*out_i1088_width) = (*features_width);
    out_i1008_width = out_i1088_width;
    out_i1008_height = out_i1088_height;
    out_i1008_data = out_i1088_data;
    // cluster_iMallocHandle_out29_rep4(): end inline
    // cluster_iMallocHandle_rep69(): end inline
    int _lit193 = 1;
    int _lit194 = 1;
    // cluster_iSetArray_out16(): begin inline
    for (i_i1008 = 0; i_i1008 < _lit193; i_i1008++)
    {
#pragma HLS loop_tripcount max = 1
        for (j_i1008 = 0; j_i1008 < (*features_width); j_i1008++)
        {
            int __idxExpr327 = i_i1008 * (*out_i1008_width) + j_i1008;
#pragma HLS loop_tripcount max = 5
            out_i1008_data[__idxExpr327] = _lit194;
        }
    }
    valid_i928_width = out_i1008_width;
    valid_i928_height = out_i1008_height;
    valid_i928_data = out_i1008_data;
    // cluster_iSetArray_out16(): end inline
    // cluster_iSetArray(): end inline
    for (i_i928 = 0; i_i928 < (*features_width); i_i928++)
    {
#pragma HLS loop_tripcount max = 5
        // cluster_calcPyrLKTrack_out3(): begin inline
        // cluster_calcPyrLKTrack_out3_out0(): begin inline
        dX_i928 = 0;
        dY_i928 = 0;
        int __idxExpr328 = 0 * (*features_width) + i_i928;
        x_i928 = features_data[__idxExpr328] * rate_i928_data[pLevel_i928];
        int __idxExpr329 = 1 * (*features_width) + i_i928;
        y_i928 = features_data[__idxExpr329] * rate_i928_data[pLevel_i928];
        c_det_i928 = 0;
        // cluster_calcPyrLKTrack_out3_out0(): end inline
        for (level_i928 = pLevel_i928 - 1; level_i928 >= 0; level_i928--)
        {
#pragma HLS loop_tripcount max = 2
            int __prematureExit12_i1009;
            __prematureExit12_i1009 = 0;
            // cluster_calcPyrLKTrack_out3_out7(): begin inline
            int __prematureExit10_i1091;
            __prematureExit10_i1091 = 0;
            // cluster_calcPyrLKTrack_out3_out6(): begin inline
            int __prematureExit8_i1113;
            __prematureExit8_i1113 = 0;
            // cluster_calcPyrLKTrack_out3_out5(): begin inline
            int __prematureExit4_i1115;
            __prematureExit4_i1115 = 0;
            // cluster_calcPyrLKTrack_out3_out4(): begin inline
            int __prematureExit1_i1116;
            __prematureExit1_i1116 = 0;
            // cluster_calcPyrLKTrack_out3_out3(): begin inline
            int __prematureExit0_i1117;
            __prematureExit0_i1117 = 0;
            // cluster_calcPyrLKTrack_out3_out1(): begin inline
            int decomp_7_renamed_4_i1118;
            int __prematureExit2_i1118;
            __prematureExit2_i1118 = 0;
            int decomp_8_renamed_3_i1118;
            int decomp_9_renamed_3_i1118;
            // cluster_calcPyrLKTrack_out3_out1_out0(): begin inline
            int decomp_0_renamed_305_i1119;
            int decomp_1_renamed_20_i1119;
            int decomp_2_renamed_17_i1119;
            int decomp_3_renamed_5_i1119;
            int decomp_4_renamed_5_i1119;
            int decomp_5_renamed_4_i1119;
            int decomp_6_renamed_4_i1119;
            x_i928 = x_i928 + x_i928;
            y_i928 = y_i928 + y_i928;
            dX_i928 = dX_i928 + dX_i928;
            dY_i928 = dY_i928 + dY_i928;
            int __idxExpr330 = level_i928 * (*imgDims_i928_width) + 0;
            imgSize_1_i928 = imgDims_i928_data[__idxExpr330];
            int __idxExpr331 = level_i928 * (*imgDims_i928_width) + 1;
            imgSize_2_i928 = imgDims_i928_data[__idxExpr331];
            c_xx_i928 = 0;
            c_xy_i928 = 0;
            c_yy_i928 = 0;
            decomp_0_renamed_305_i1119 = (x_i928 - (local_WINSZ)) < 0;
            decomp_1_renamed_20_i1119 = (y_i928 - (local_WINSZ)) < 0;
            decomp_2_renamed_17_i1119 = decomp_0_renamed_305_i1119 || decomp_1_renamed_20_i1119;
            decomp_3_renamed_5_i1119 = (y_i928 + (local_WINSZ) + 1) >= imgSize_1_i928;
            decomp_4_renamed_5_i1119 = decomp_2_renamed_17_i1119 || decomp_3_renamed_5_i1119;
            decomp_5_renamed_4_i1119 = (x_i928 + (local_WINSZ) + 1) >= imgSize_2_i928;
            decomp_6_renamed_4_i1119 = decomp_4_renamed_5_i1119 || decomp_5_renamed_4_i1119;
            if (decomp_6_renamed_4_i1119)
            {
                valid_i928_data[i_i928] = 0;
                __prematureExit0_i1117 = 1;
                __prematureExit2_i1118 = 1;
                goto end_inline_i1119;
            }
            decomp_7_renamed_4_i1118 = level_i928 == 0;
        end_inline_i1119:;
            // cluster_calcPyrLKTrack_out3_out1_out0(): end inline
            int decomp_0_i1118;
            decomp_0_i1118 = __prematureExit2_i1118 == 1;
            if (decomp_0_i1118)
            {
                goto end_inline_i1118;
            }
            if (decomp_7_renamed_4_i1118)
            {
                // cluster_getInterpolatePatch_rep2(): begin inline
                int dstIdxx_i1120;
                int srcIdxx_i1120;
                int dstIdx_i1120;
                int srcIdx_i1120;
                int j_i1120;
                int i_i1120;
                float a22_i1120;
                float a21_i1120;
                float a12_i1120;
                float a11_i1120;
                int *dst_i1120_width;
                int *dst_i1120_height;
                float *dst_i1120_data;
                // cluster_getInterpolatePatch_out0_rep6(): begin inline
                float a_i1136;
                float b_i1136;
                int k_i1136;
                double _d0_0_i1136;
                double _d0_1_i1136;
                double _d1_0_i1136;
                double _d1_1_i1136;
                _d0_0_i1136 = floor(x_i928);
                _d0_1_i1136 = x_i928 - _d0_0_i1136;
                a_i1136 = _d0_1_i1136;
                _d1_0_i1136 = floor(y_i928);
                _d1_1_i1136 = y_i928 - _d1_0_i1136;
                b_i1136 = _d1_1_i1136;
                a11_i1120 = (1 - a_i1136) * (1 - b_i1136);
                a12_i1120 = a_i1136 * (1 - b_i1136);
                a21_i1120 = (1 - a_i1136) * b_i1136;
                a22_i1120 = a_i1136 * b_i1136;
                // cluster_getInterpolatePatch_out0_rep6(): end inline
                // cluster_fSetArray_rep82(): begin inline
                int i_i1137;
                int j_i1137;
                int *out_i1137_width;
                int *out_i1137_height;
                float *out_i1137_data;
                // cluster_fMallocHandle_rep227(): begin inline
                int i_i1161;
                int j_i1161;
                int *out_i1161_width;
                int *out_i1161_height;
                float *out_i1161_data;
                out_i1161_width = &memregion_318_size4;
                out_i1161_height = &memregion_319_size4;
                out_i1161_data = memregion_320_size36864;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
                int _lit211 = 1;
                // cluster_fMallocHandle_out22_rep87(): begin inline
                (*out_i1161_height) = _lit211;
                (*out_i1161_width) = (2 * (local_WINSZ) * 2 * (local_WINSZ));
                out_i1137_width = out_i1161_width;
                out_i1137_height = out_i1161_height;
                out_i1137_data = out_i1161_data;
                // cluster_fMallocHandle_out22_rep87(): end inline
                // cluster_fMallocHandle_rep227(): end inline
                int _lit199 = 1;
                int _lit200 = 0;
                // cluster_fSetArray_out22_rep41(): begin inline
                for (i_i1137 = 0; i_i1137 < _lit199; i_i1137++)
                {
#pragma HLS loop_tripcount max = 1
                    for (j_i1137 = 0; j_i1137 < (2 * (local_WINSZ) * 2 * (local_WINSZ)); j_i1137++)
                    {
                        int __idxExpr332 = i_i1137 * (*out_i1137_width) + j_i1137;
#pragma HLS loop_tripcount max = 9216
                        out_i1137_data[__idxExpr332] = _lit200;
                    }
                }
                dst_i1120_width = out_i1137_width;
                dst_i1120_height = out_i1137_height;
                dst_i1120_data = out_i1137_data;
                // cluster_fSetArray_out22_rep41(): end inline
                // cluster_fSetArray_rep82(): end inline
                // cluster_getInterpolatePatch_out1_rep6(): begin inline
                for (i_i1120 = -(local_WINSZ); i_i1120 < (local_WINSZ); i_i1120++)
                {
#pragma HLS loop_tripcount max = 96
                    double _d2_0_i1138;
                    double _d2_1_i1138;
                    _d2_0_i1138 = floor(y_i928);
                    _d2_1_i1138 = _d2_0_i1138 + i_i1120;
                    srcIdxx_i1120 = _d2_1_i1138;
                    dstIdxx_i1120 = i_i1120 + (local_WINSZ);
                    for (j_i1120 = -(local_WINSZ); j_i1120 < (local_WINSZ); j_i1120++)
                    {
#pragma HLS loop_tripcount max = 96
                        int _d3_0_i1138;
                        double _d3_1_i1138;
                        double _d3_2_i1138;
                        double _d3_3_i1138;
                        _d3_0_i1138 = srcIdxx_i1120 * imgSize_2_i928;
                        _d3_1_i1138 = floor(x_i928);
                        _d3_2_i1138 = _d3_0_i1138 + _d3_1_i1138;
                        _d3_3_i1138 = _d3_2_i1138 + j_i1120;
                        srcIdx_i1120 = _d3_3_i1138;
                        dstIdx_i1120 = dstIdxx_i1120 * 2 * (local_WINSZ) + j_i1120 + (local_WINSZ);
                        dst_i1120_data[dstIdx_i1120] =
                            previousFrameBlurred_level1_data[srcIdx_i1120] * a11_i1120 +
                            previousFrameBlurred_level1_data[srcIdx_i1120 + 1] * a12_i1120 +
                            previousFrameBlurred_level1_data[srcIdx_i1120 + imgSize_2_i928] * a21_i1120 +
                            previousFrameBlurred_level1_data[srcIdx_i1120 + 1 + imgSize_2_i928] * a22_i1120;
                    }
                }
                iPatch_i928_width = dst_i1120_width;
                iPatch_i928_height = dst_i1120_height;
                iPatch_i928_data = dst_i1120_data;
                // cluster_getInterpolatePatch_out1_rep6(): end inline
                // cluster_getInterpolatePatch_rep2(): end inline
                // cluster_getInterpolatePatch_rep3(): begin inline
                int dstIdxx_i1121;
                int srcIdxx_i1121;
                int dstIdx_i1121;
                int srcIdx_i1121;
                int j_i1121;
                int i_i1121;
                float a22_i1121;
                float a21_i1121;
                float a12_i1121;
                float a11_i1121;
                int *dst_i1121_width;
                int *dst_i1121_height;
                float *dst_i1121_data;
                // cluster_getInterpolatePatch_out0_rep5(): begin inline
                float a_i1139;
                float b_i1139;
                int k_i1139;
                double _d0_0_i1139;
                double _d0_1_i1139;
                double _d1_0_i1139;
                double _d1_1_i1139;
                _d0_0_i1139 = floor(x_i928);
                _d0_1_i1139 = x_i928 - _d0_0_i1139;
                a_i1139 = _d0_1_i1139;
                _d1_0_i1139 = floor(y_i928);
                _d1_1_i1139 = y_i928 - _d1_0_i1139;
                b_i1139 = _d1_1_i1139;
                a11_i1121 = (1 - a_i1139) * (1 - b_i1139);
                a12_i1121 = a_i1139 * (1 - b_i1139);
                a21_i1121 = (1 - a_i1139) * b_i1139;
                a22_i1121 = a_i1139 * b_i1139;
                // cluster_getInterpolatePatch_out0_rep5(): end inline
                // cluster_fSetArray_rep81(): begin inline
                int i_i1140;
                int j_i1140;
                int *out_i1140_width;
                int *out_i1140_height;
                float *out_i1140_data;
                // cluster_fMallocHandle_rep228(): begin inline
                int i_i1163;
                int j_i1163;
                int *out_i1163_width;
                int *out_i1163_height;
                float *out_i1163_data;
                out_i1163_width = &memregion_321_size4;
                out_i1163_height = &memregion_322_size4;
                out_i1163_data = memregion_323_size36864;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
                int _lit212 = 1;
                // cluster_fMallocHandle_out22_rep86(): begin inline
                (*out_i1163_height) = _lit212;
                (*out_i1163_width) = (2 * (local_WINSZ) * 2 * (local_WINSZ));
                out_i1140_width = out_i1163_width;
                out_i1140_height = out_i1163_height;
                out_i1140_data = out_i1163_data;
                // cluster_fMallocHandle_out22_rep86(): end inline
                // cluster_fMallocHandle_rep228(): end inline
                int _lit201 = 1;
                int _lit202 = 0;
                // cluster_fSetArray_out22_rep42(): begin inline
                for (i_i1140 = 0; i_i1140 < _lit201; i_i1140++)
                {
#pragma HLS loop_tripcount max = 1
                    for (j_i1140 = 0; j_i1140 < (2 * (local_WINSZ) * 2 * (local_WINSZ)); j_i1140++)
                    {
                        int __idxExpr333 = i_i1140 * (*out_i1140_width) + j_i1140;
#pragma HLS loop_tripcount max = 9216
                        out_i1140_data[__idxExpr333] = _lit202;
                    }
                }
                dst_i1121_width = out_i1140_width;
                dst_i1121_height = out_i1140_height;
                dst_i1121_data = out_i1140_data;
                // cluster_fSetArray_out22_rep42(): end inline
                // cluster_fSetArray_rep81(): end inline
                // cluster_getInterpolatePatch_out1_rep5(): begin inline
                for (i_i1121 = -(local_WINSZ); i_i1121 < (local_WINSZ); i_i1121++)
                {
#pragma HLS loop_tripcount max = 96
                    double _d2_0_i1141;
                    double _d2_1_i1141;
                    _d2_0_i1141 = floor(y_i928);
                    _d2_1_i1141 = _d2_0_i1141 + i_i1121;
                    srcIdxx_i1121 = _d2_1_i1141;
                    dstIdxx_i1121 = i_i1121 + (local_WINSZ);
                    for (j_i1121 = -(local_WINSZ); j_i1121 < (local_WINSZ); j_i1121++)
                    {
#pragma HLS loop_tripcount max = 96
                        int _d3_0_i1141;
                        double _d3_1_i1141;
                        double _d3_2_i1141;
                        double _d3_3_i1141;
                        _d3_0_i1141 = srcIdxx_i1121 * imgSize_2_i928;
                        _d3_1_i1141 = floor(x_i928);
                        _d3_2_i1141 = _d3_0_i1141 + _d3_1_i1141;
                        _d3_3_i1141 = _d3_2_i1141 + j_i1121;
                        srcIdx_i1121 = _d3_3_i1141;
                        dstIdx_i1121 = dstIdxx_i1121 * 2 * (local_WINSZ) + j_i1121 + (local_WINSZ);
                        dst_i1121_data[dstIdx_i1121] =
                            verticalEdge_level1_data[srcIdx_i1121] * a11_i1121 +
                            verticalEdge_level1_data[srcIdx_i1121 + 1] * a12_i1121 +
                            verticalEdge_level1_data[srcIdx_i1121 + imgSize_2_i928] * a21_i1121 +
                            verticalEdge_level1_data[srcIdx_i1121 + 1 + imgSize_2_i928] * a22_i1121;
                    }
                }
                iDxPatch_i928_width = dst_i1121_width;
                iDxPatch_i928_height = dst_i1121_height;
                iDxPatch_i928_data = dst_i1121_data;
                // cluster_getInterpolatePatch_out1_rep5(): end inline
                // cluster_getInterpolatePatch_rep3(): end inline
                // cluster_getInterpolatePatch_rep4(): begin inline
                int dstIdxx_i1122;
                int srcIdxx_i1122;
                int dstIdx_i1122;
                int srcIdx_i1122;
                int j_i1122;
                int i_i1122;
                float a22_i1122;
                float a21_i1122;
                float a12_i1122;
                float a11_i1122;
                int *dst_i1122_width;
                int *dst_i1122_height;
                float *dst_i1122_data;
                // cluster_getInterpolatePatch_out0_rep4(): begin inline
                float a_i1142;
                float b_i1142;
                int k_i1142;
                double _d0_0_i1142;
                double _d0_1_i1142;
                double _d1_0_i1142;
                double _d1_1_i1142;
                _d0_0_i1142 = floor(x_i928);
                _d0_1_i1142 = x_i928 - _d0_0_i1142;
                a_i1142 = _d0_1_i1142;
                _d1_0_i1142 = floor(y_i928);
                _d1_1_i1142 = y_i928 - _d1_0_i1142;
                b_i1142 = _d1_1_i1142;
                a11_i1122 = (1 - a_i1142) * (1 - b_i1142);
                a12_i1122 = a_i1142 * (1 - b_i1142);
                a21_i1122 = (1 - a_i1142) * b_i1142;
                a22_i1122 = a_i1142 * b_i1142;
                // cluster_getInterpolatePatch_out0_rep4(): end inline
                // cluster_fSetArray_rep80(): begin inline
                int i_i1143;
                int j_i1143;
                int *out_i1143_width;
                int *out_i1143_height;
                float *out_i1143_data;
                // cluster_fMallocHandle_rep229(): begin inline
                int i_i1165;
                int j_i1165;
                int *out_i1165_width;
                int *out_i1165_height;
                float *out_i1165_data;
                out_i1165_width = &memregion_324_size4;
                out_i1165_height = &memregion_325_size4;
                out_i1165_data = memregion_326_size36864;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
                int _lit213 = 1;
                // cluster_fMallocHandle_out22_rep85(): begin inline
                (*out_i1165_height) = _lit213;
                (*out_i1165_width) = (2 * (local_WINSZ) * 2 * (local_WINSZ));
                out_i1143_width = out_i1165_width;
                out_i1143_height = out_i1165_height;
                out_i1143_data = out_i1165_data;
                // cluster_fMallocHandle_out22_rep85(): end inline
                // cluster_fMallocHandle_rep229(): end inline
                int _lit203 = 1;
                int _lit204 = 0;
                // cluster_fSetArray_out22_rep43(): begin inline
                for (i_i1143 = 0; i_i1143 < _lit203; i_i1143++)
                {
#pragma HLS loop_tripcount max = 1
                    for (j_i1143 = 0; j_i1143 < (2 * (local_WINSZ) * 2 * (local_WINSZ)); j_i1143++)
                    {
                        int __idxExpr334 = i_i1143 * (*out_i1143_width) + j_i1143;
#pragma HLS loop_tripcount max = 9216
                        out_i1143_data[__idxExpr334] = _lit204;
                    }
                }
                dst_i1122_width = out_i1143_width;
                dst_i1122_height = out_i1143_height;
                dst_i1122_data = out_i1143_data;
                // cluster_fSetArray_out22_rep43(): end inline
                // cluster_fSetArray_rep80(): end inline
                // cluster_getInterpolatePatch_out1_rep4(): begin inline
                for (i_i1122 = -(local_WINSZ); i_i1122 < (local_WINSZ); i_i1122++)
                {
#pragma HLS loop_tripcount max = 96
                    double _d2_0_i1144;
                    double _d2_1_i1144;
                    _d2_0_i1144 = floor(y_i928);
                    _d2_1_i1144 = _d2_0_i1144 + i_i1122;
                    srcIdxx_i1122 = _d2_1_i1144;
                    dstIdxx_i1122 = i_i1122 + (local_WINSZ);
                    for (j_i1122 = -(local_WINSZ); j_i1122 < (local_WINSZ); j_i1122++)
                    {
#pragma HLS loop_tripcount max = 96
                        int _d3_0_i1144;
                        double _d3_1_i1144;
                        double _d3_2_i1144;
                        double _d3_3_i1144;
                        _d3_0_i1144 = srcIdxx_i1122 * imgSize_2_i928;
                        _d3_1_i1144 = floor(x_i928);
                        _d3_2_i1144 = _d3_0_i1144 + _d3_1_i1144;
                        _d3_3_i1144 = _d3_2_i1144 + j_i1122;
                        srcIdx_i1122 = _d3_3_i1144;
                        dstIdx_i1122 = dstIdxx_i1122 * 2 * (local_WINSZ) + j_i1122 + (local_WINSZ);
                        dst_i1122_data[dstIdx_i1122] =
                            horizontalEdge_level1_data[srcIdx_i1122] * a11_i1122 +
                            horizontalEdge_level1_data[srcIdx_i1122 + 1] * a12_i1122 +
                            horizontalEdge_level1_data[srcIdx_i1122 + imgSize_2_i928] * a21_i1122 +
                            horizontalEdge_level1_data[srcIdx_i1122 + 1 + imgSize_2_i928] * a22_i1122;
                    }
                }
                iDyPatch_i928_width = dst_i1122_width;
                iDyPatch_i928_height = dst_i1122_height;
                iDyPatch_i928_data = dst_i1122_data;
                // cluster_getInterpolatePatch_out1_rep4(): end inline
                // cluster_getInterpolatePatch_rep4(): end inline
            }
            // cluster_calcPyrLKTrack_out3_out1_out1(): begin inline
            decomp_8_renamed_3_i1118 = level_i928 == 1;
            // cluster_calcPyrLKTrack_out3_out1_out1(): end inline
            if (decomp_8_renamed_3_i1118)
            {
                // cluster_getInterpolatePatch_rep5(): begin inline
                int dstIdxx_i1124;
                int srcIdxx_i1124;
                int dstIdx_i1124;
                int srcIdx_i1124;
                int j_i1124;
                int i_i1124;
                float a22_i1124;
                float a21_i1124;
                float a12_i1124;
                float a11_i1124;
                int *dst_i1124_width;
                int *dst_i1124_height;
                float *dst_i1124_data;
                // cluster_getInterpolatePatch_out0_rep3(): begin inline
                float a_i1145;
                float b_i1145;
                int k_i1145;
                double _d0_0_i1145;
                double _d0_1_i1145;
                double _d1_0_i1145;
                double _d1_1_i1145;
                _d0_0_i1145 = floor(x_i928);
                _d0_1_i1145 = x_i928 - _d0_0_i1145;
                a_i1145 = _d0_1_i1145;
                _d1_0_i1145 = floor(y_i928);
                _d1_1_i1145 = y_i928 - _d1_0_i1145;
                b_i1145 = _d1_1_i1145;
                a11_i1124 = (1 - a_i1145) * (1 - b_i1145);
                a12_i1124 = a_i1145 * (1 - b_i1145);
                a21_i1124 = (1 - a_i1145) * b_i1145;
                a22_i1124 = a_i1145 * b_i1145;
                // cluster_getInterpolatePatch_out0_rep3(): end inline
                // cluster_fSetArray_rep79(): begin inline
                int i_i1146;
                int j_i1146;
                int *out_i1146_width;
                int *out_i1146_height;
                float *out_i1146_data;
                // cluster_fMallocHandle_rep230(): begin inline
                int i_i1167;
                int j_i1167;
                int *out_i1167_width;
                int *out_i1167_height;
                float *out_i1167_data;
                out_i1167_width = &memregion_327_size4;
                out_i1167_height = &memregion_328_size4;
                out_i1167_data = memregion_329_size36864;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
                int _lit214 = 1;
                // cluster_fMallocHandle_out22_rep84(): begin inline
                (*out_i1167_height) = _lit214;
                (*out_i1167_width) = (2 * (local_WINSZ) * 2 * (local_WINSZ));
                out_i1146_width = out_i1167_width;
                out_i1146_height = out_i1167_height;
                out_i1146_data = out_i1167_data;
                // cluster_fMallocHandle_out22_rep84(): end inline
                // cluster_fMallocHandle_rep230(): end inline
                int _lit205 = 1;
                int _lit206 = 0;
                // cluster_fSetArray_out22_rep44(): begin inline
                for (i_i1146 = 0; i_i1146 < _lit205; i_i1146++)
                {
#pragma HLS loop_tripcount max = 1
                    for (j_i1146 = 0; j_i1146 < (2 * (local_WINSZ) * 2 * (local_WINSZ)); j_i1146++)
                    {
                        int __idxExpr335 = i_i1146 * (*out_i1146_width) + j_i1146;
#pragma HLS loop_tripcount max = 9216
                        out_i1146_data[__idxExpr335] = _lit206;
                    }
                }
                dst_i1124_width = out_i1146_width;
                dst_i1124_height = out_i1146_height;
                dst_i1124_data = out_i1146_data;
                // cluster_fSetArray_out22_rep44(): end inline
                // cluster_fSetArray_rep79(): end inline
                // cluster_getInterpolatePatch_out1_rep3(): begin inline
                for (i_i1124 = -(local_WINSZ); i_i1124 < (local_WINSZ); i_i1124++)
                {
#pragma HLS loop_tripcount max = 96
                    double _d2_0_i1147;
                    double _d2_1_i1147;
                    _d2_0_i1147 = floor(y_i928);
                    _d2_1_i1147 = _d2_0_i1147 + i_i1124;
                    srcIdxx_i1124 = _d2_1_i1147;
                    dstIdxx_i1124 = i_i1124 + (local_WINSZ);
                    for (j_i1124 = -(local_WINSZ); j_i1124 < (local_WINSZ); j_i1124++)
                    {
#pragma HLS loop_tripcount max = 96
                        int _d3_0_i1147;
                        double _d3_1_i1147;
                        double _d3_2_i1147;
                        double _d3_3_i1147;
                        _d3_0_i1147 = srcIdxx_i1124 * imgSize_2_i928;
                        _d3_1_i1147 = floor(x_i928);
                        _d3_2_i1147 = _d3_0_i1147 + _d3_1_i1147;
                        _d3_3_i1147 = _d3_2_i1147 + j_i1124;
                        srcIdx_i1124 = _d3_3_i1147;
                        dstIdx_i1124 = dstIdxx_i1124 * 2 * (local_WINSZ) + j_i1124 + (local_WINSZ);
                        dst_i1124_data[dstIdx_i1124] =
                            previousFrameBlurred_level2_data[srcIdx_i1124] * a11_i1124 +
                            previousFrameBlurred_level2_data[srcIdx_i1124 + 1] * a12_i1124 +
                            previousFrameBlurred_level2_data[srcIdx_i1124 + imgSize_2_i928] * a21_i1124 +
                            previousFrameBlurred_level2_data[srcIdx_i1124 + 1 + imgSize_2_i928] * a22_i1124;
                    }
                }
                iPatch_i928_width = dst_i1124_width;
                iPatch_i928_height = dst_i1124_height;
                iPatch_i928_data = dst_i1124_data;
                // cluster_getInterpolatePatch_out1_rep3(): end inline
                // cluster_getInterpolatePatch_rep5(): end inline
                // cluster_getInterpolatePatch_rep6(): begin inline
                int dstIdxx_i1125;
                int srcIdxx_i1125;
                int dstIdx_i1125;
                int srcIdx_i1125;
                int j_i1125;
                int i_i1125;
                float a22_i1125;
                float a21_i1125;
                float a12_i1125;
                float a11_i1125;
                int *dst_i1125_width;
                int *dst_i1125_height;
                float *dst_i1125_data;
                // cluster_getInterpolatePatch_out0_rep2(): begin inline
                float a_i1148;
                float b_i1148;
                int k_i1148;
                double _d0_0_i1148;
                double _d0_1_i1148;
                double _d1_0_i1148;
                double _d1_1_i1148;
                _d0_0_i1148 = floor(x_i928);
                _d0_1_i1148 = x_i928 - _d0_0_i1148;
                a_i1148 = _d0_1_i1148;
                _d1_0_i1148 = floor(y_i928);
                _d1_1_i1148 = y_i928 - _d1_0_i1148;
                b_i1148 = _d1_1_i1148;
                a11_i1125 = (1 - a_i1148) * (1 - b_i1148);
                a12_i1125 = a_i1148 * (1 - b_i1148);
                a21_i1125 = (1 - a_i1148) * b_i1148;
                a22_i1125 = a_i1148 * b_i1148;
                // cluster_getInterpolatePatch_out0_rep2(): end inline
                // cluster_fSetArray_rep78(): begin inline
                int i_i1149;
                int j_i1149;
                int *out_i1149_width;
                int *out_i1149_height;
                float *out_i1149_data;
                // cluster_fMallocHandle_rep231(): begin inline
                int i_i1169;
                int j_i1169;
                int *out_i1169_width;
                int *out_i1169_height;
                float *out_i1169_data;
                out_i1169_width = &memregion_330_size4;
                out_i1169_height = &memregion_331_size4;
                out_i1169_data = memregion_332_size36864;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
                int _lit215 = 1;
                // cluster_fMallocHandle_out22_rep83(): begin inline
                (*out_i1169_height) = _lit215;
                (*out_i1169_width) = (2 * (local_WINSZ) * 2 * (local_WINSZ));
                out_i1149_width = out_i1169_width;
                out_i1149_height = out_i1169_height;
                out_i1149_data = out_i1169_data;
                // cluster_fMallocHandle_out22_rep83(): end inline
                // cluster_fMallocHandle_rep231(): end inline
                int _lit207 = 1;
                int _lit208 = 0;
                // cluster_fSetArray_out22_rep45(): begin inline
                for (i_i1149 = 0; i_i1149 < _lit207; i_i1149++)
                {
#pragma HLS loop_tripcount max = 1
                    for (j_i1149 = 0; j_i1149 < (2 * (local_WINSZ) * 2 * (local_WINSZ)); j_i1149++)
                    {
                        int __idxExpr336 = i_i1149 * (*out_i1149_width) + j_i1149;
#pragma HLS loop_tripcount max = 9216
                        out_i1149_data[__idxExpr336] = _lit208;
                    }
                }
                dst_i1125_width = out_i1149_width;
                dst_i1125_height = out_i1149_height;
                dst_i1125_data = out_i1149_data;
                // cluster_fSetArray_out22_rep45(): end inline
                // cluster_fSetArray_rep78(): end inline
                // cluster_getInterpolatePatch_out1_rep2(): begin inline
                for (i_i1125 = -(local_WINSZ); i_i1125 < (local_WINSZ); i_i1125++)
                {
#pragma HLS loop_tripcount max = 96
                    double _d2_0_i1150;
                    double _d2_1_i1150;
                    _d2_0_i1150 = floor(y_i928);
                    _d2_1_i1150 = _d2_0_i1150 + i_i1125;
                    srcIdxx_i1125 = _d2_1_i1150;
                    dstIdxx_i1125 = i_i1125 + (local_WINSZ);
                    for (j_i1125 = -(local_WINSZ); j_i1125 < (local_WINSZ); j_i1125++)
                    {
#pragma HLS loop_tripcount max = 96
                        int _d3_0_i1150;
                        double _d3_1_i1150;
                        double _d3_2_i1150;
                        double _d3_3_i1150;
                        _d3_0_i1150 = srcIdxx_i1125 * imgSize_2_i928;
                        _d3_1_i1150 = floor(x_i928);
                        _d3_2_i1150 = _d3_0_i1150 + _d3_1_i1150;
                        _d3_3_i1150 = _d3_2_i1150 + j_i1125;
                        srcIdx_i1125 = _d3_3_i1150;
                        dstIdx_i1125 = dstIdxx_i1125 * 2 * (local_WINSZ) + j_i1125 + (local_WINSZ);
                        dst_i1125_data[dstIdx_i1125] =
                            verticalEdge_level2_data[srcIdx_i1125] * a11_i1125 +
                            verticalEdge_level2_data[srcIdx_i1125 + 1] * a12_i1125 +
                            verticalEdge_level2_data[srcIdx_i1125 + imgSize_2_i928] * a21_i1125 +
                            verticalEdge_level2_data[srcIdx_i1125 + 1 + imgSize_2_i928] * a22_i1125;
                    }
                }
                iDxPatch_i928_width = dst_i1125_width;
                iDxPatch_i928_height = dst_i1125_height;
                iDxPatch_i928_data = dst_i1125_data;
                // cluster_getInterpolatePatch_out1_rep2(): end inline
                // cluster_getInterpolatePatch_rep6(): end inline
                // cluster_getInterpolatePatch_rep7(): begin inline
                int dstIdxx_i1126;
                int srcIdxx_i1126;
                int dstIdx_i1126;
                int srcIdx_i1126;
                int j_i1126;
                int i_i1126;
                float a22_i1126;
                float a21_i1126;
                float a12_i1126;
                float a11_i1126;
                int *dst_i1126_width;
                int *dst_i1126_height;
                float *dst_i1126_data;
                // cluster_getInterpolatePatch_out0_rep1(): begin inline
                float a_i1151;
                float b_i1151;
                int k_i1151;
                double _d0_0_i1151;
                double _d0_1_i1151;
                double _d1_0_i1151;
                double _d1_1_i1151;
                _d0_0_i1151 = floor(x_i928);
                _d0_1_i1151 = x_i928 - _d0_0_i1151;
                a_i1151 = _d0_1_i1151;
                _d1_0_i1151 = floor(y_i928);
                _d1_1_i1151 = y_i928 - _d1_0_i1151;
                b_i1151 = _d1_1_i1151;
                a11_i1126 = (1 - a_i1151) * (1 - b_i1151);
                a12_i1126 = a_i1151 * (1 - b_i1151);
                a21_i1126 = (1 - a_i1151) * b_i1151;
                a22_i1126 = a_i1151 * b_i1151;
                // cluster_getInterpolatePatch_out0_rep1(): end inline
                // cluster_fSetArray_rep77(): begin inline
                int i_i1152;
                int j_i1152;
                int *out_i1152_width;
                int *out_i1152_height;
                float *out_i1152_data;
                // cluster_fMallocHandle_rep232(): begin inline
                int i_i1171;
                int j_i1171;
                int *out_i1171_width;
                int *out_i1171_height;
                float *out_i1171_data;
                out_i1171_width = &memregion_333_size4;
                out_i1171_height = &memregion_334_size4;
                out_i1171_data = memregion_335_size36864;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
                int _lit216 = 1;
                // cluster_fMallocHandle_out22_rep82(): begin inline
                (*out_i1171_height) = _lit216;
                (*out_i1171_width) = (2 * (local_WINSZ) * 2 * (local_WINSZ));
                out_i1152_width = out_i1171_width;
                out_i1152_height = out_i1171_height;
                out_i1152_data = out_i1171_data;
                // cluster_fMallocHandle_out22_rep82(): end inline
                // cluster_fMallocHandle_rep232(): end inline
                int _lit209 = 1;
                int _lit210 = 0;
                // cluster_fSetArray_out22_rep46(): begin inline
                for (i_i1152 = 0; i_i1152 < _lit209; i_i1152++)
                {
#pragma HLS loop_tripcount max = 1
                    for (j_i1152 = 0; j_i1152 < (2 * (local_WINSZ) * 2 * (local_WINSZ)); j_i1152++)
                    {
                        int __idxExpr337 = i_i1152 * (*out_i1152_width) + j_i1152;
#pragma HLS loop_tripcount max = 9216
                        out_i1152_data[__idxExpr337] = _lit210;
                    }
                }
                dst_i1126_width = out_i1152_width;
                dst_i1126_height = out_i1152_height;
                dst_i1126_data = out_i1152_data;
                // cluster_fSetArray_out22_rep46(): end inline
                // cluster_fSetArray_rep77(): end inline
                // cluster_getInterpolatePatch_out1_rep1(): begin inline
                for (i_i1126 = -(local_WINSZ); i_i1126 < (local_WINSZ); i_i1126++)
                {
#pragma HLS loop_tripcount max = 96
                    double _d2_0_i1153;
                    double _d2_1_i1153;
                    _d2_0_i1153 = floor(y_i928);
                    _d2_1_i1153 = _d2_0_i1153 + i_i1126;
                    srcIdxx_i1126 = _d2_1_i1153;
                    dstIdxx_i1126 = i_i1126 + (local_WINSZ);
                    for (j_i1126 = -(local_WINSZ); j_i1126 < (local_WINSZ); j_i1126++)
                    {
#pragma HLS loop_tripcount max = 96
                        int _d3_0_i1153;
                        double _d3_1_i1153;
                        double _d3_2_i1153;
                        double _d3_3_i1153;
                        _d3_0_i1153 = srcIdxx_i1126 * imgSize_2_i928;
                        _d3_1_i1153 = floor(x_i928);
                        _d3_2_i1153 = _d3_0_i1153 + _d3_1_i1153;
                        _d3_3_i1153 = _d3_2_i1153 + j_i1126;
                        srcIdx_i1126 = _d3_3_i1153;
                        dstIdx_i1126 = dstIdxx_i1126 * 2 * (local_WINSZ) + j_i1126 + (local_WINSZ);
                        dst_i1126_data[dstIdx_i1126] =
                            horizontalEdge_level2_data[srcIdx_i1126] * a11_i1126 +
                            horizontalEdge_level2_data[srcIdx_i1126 + 1] * a12_i1126 +
                            horizontalEdge_level2_data[srcIdx_i1126 + imgSize_2_i928] * a21_i1126 +
                            horizontalEdge_level2_data[srcIdx_i1126 + 1 + imgSize_2_i928] * a22_i1126;
                    }
                }
                iDyPatch_i928_width = dst_i1126_width;
                iDyPatch_i928_height = dst_i1126_height;
                iDyPatch_i928_data = dst_i1126_data;
                // cluster_getInterpolatePatch_out1_rep1(): end inline
                // cluster_getInterpolatePatch_rep7(): end inline
            }
            // cluster_calcPyrLKTrack_out3_out1_out2(): begin inline
            for (idx_i928 = 0; idx_i928 < winSizeSq_i928; idx_i928++)
            {
#pragma HLS loop_tripcount max = 9216
                c_xx_i928 = c_xx_i928 + iDxPatch_i928_data[idx_i928] * iDxPatch_i928_data[idx_i928];
                c_xy_i928 = c_xy_i928 + iDxPatch_i928_data[idx_i928] * iDyPatch_i928_data[idx_i928];
                c_yy_i928 = c_yy_i928 + iDyPatch_i928_data[idx_i928] * iDyPatch_i928_data[idx_i928];
            }
            c_det_i928 = (c_xx_i928 * c_yy_i928 - c_xy_i928 * c_xy_i928);
            tr_i928 = c_xx_i928 + c_yy_i928;
            decomp_9_renamed_3_i1118 = (c_det_i928 / (tr_i928 + 0.00001)) < (local_accuracy);
            // cluster_calcPyrLKTrack_out3_out1_out2(): end inline
            if (decomp_9_renamed_3_i1118)
            {
                valid_i928_data[i_i928] = 0;
                // cluster_fFreeHandle_rep96(): begin inline
                int decomp_0_renamed_306_i1128;
                // cluster_fFreeHandle_out17_rep44(): begin inline
                decomp_0_renamed_306_i1128 = iPatch_i928_data != ((void *)0);
                // cluster_fFreeHandle_out17_rep44(): end inline
                if (decomp_0_renamed_306_i1128)
                {
                    // free(iPatch_i928_data);
                }
                // cluster_fFreeHandle_rep96(): end inline
                // cluster_fFreeHandle_rep97(): begin inline
                int decomp_0_renamed_307_i1129;
                // cluster_fFreeHandle_out17_rep43(): begin inline
                decomp_0_renamed_307_i1129 = iDxPatch_i928_data != ((void *)0);
                // cluster_fFreeHandle_out17_rep43(): end inline
                if (decomp_0_renamed_307_i1129)
                {
                    // free(iDxPatch_i928_data);
                }
                // cluster_fFreeHandle_rep97(): end inline
                // cluster_fFreeHandle_rep98(): begin inline
                int decomp_0_renamed_308_i1130;
                // cluster_fFreeHandle_out17_rep42(): begin inline
                decomp_0_renamed_308_i1130 = iDyPatch_i928_data != ((void *)0);
                // cluster_fFreeHandle_out17_rep42(): end inline
                if (decomp_0_renamed_308_i1130)
                {
                    // free(iDyPatch_i928_data);
                }
                // cluster_fFreeHandle_rep98(): end inline
                __prematureExit0_i1117 = 1;
                goto end_inline_i1118;
            }
            // cluster_calcPyrLKTrack_out3_out1_out4(): begin inline
            c_det_i928 = 1 / c_det_i928;
            // cluster_calcPyrLKTrack_out3_out1_out4(): end inline
            for (k_i928 = 0; k_i928 < (local_LK_ITER); k_i928++)
            {
#pragma HLS loop_tripcount max = 20 min = 1
                int __prematureExit13_i1118;
                __prematureExit13_i1118 = 0;
                // cluster_calcPyrLKTrack_out3_out1_out25(): begin inline
                int __prematureExit11_i1132;
                __prematureExit11_i1132 = 0;
                // cluster_calcPyrLKTrack_out3_out1_out20(): begin inline
                int __prematureExit9_i1157;
                __prematureExit9_i1157 = 0;
                // cluster_calcPyrLKTrack_out3_out1_out15(): begin inline
                int __prematureExit5_i1173;
                __prematureExit5_i1173 = 0;
                // cluster_calcPyrLKTrack_out3_out1_out10(): begin inline
                int __prematureExit3_i1180;
                __prematureExit3_i1180 = 0;
                // cluster_calcPyrLKTrack_out3_out1_out5(): begin inline
                int __prematureExit6_i1181;
                __prematureExit6_i1181 = 0;
                int decomp_17_renamed_2_i1181;
                int decomp_18_renamed_3_i1181;
                int __prematureExit7_i1181;
                __prematureExit7_i1181 = 0;
                // cluster_calcPyrLKTrack_out3_out1_out5_out0(): begin inline
                int decomp_10_renamed_3_i1182;
                int decomp_11_renamed_3_i1182;
                int decomp_12_renamed_3_i1182;
                int decomp_13_renamed_3_i1182;
                int decomp_14_renamed_4_i1182;
                int decomp_15_renamed_2_i1182;
                int decomp_16_renamed_2_i1182;
                decomp_10_renamed_3_i1182 = (x_i928 + dX_i928 - (local_WINSZ)) < 0;
                decomp_11_renamed_3_i1182 = (y_i928 + dY_i928 - (local_WINSZ)) < 0;
                decomp_12_renamed_3_i1182 = decomp_10_renamed_3_i1182 || decomp_11_renamed_3_i1182;
                decomp_13_renamed_3_i1182 = (y_i928 + dY_i928 + (local_WINSZ) + 1) >= imgSize_1_i928;
                decomp_14_renamed_4_i1182 = decomp_12_renamed_3_i1182 || decomp_13_renamed_3_i1182;
                decomp_15_renamed_2_i1182 = (x_i928 + dX_i928 + (local_WINSZ) + 1) >= imgSize_2_i928;
                decomp_16_renamed_2_i1182 = decomp_14_renamed_4_i1182 || decomp_15_renamed_2_i1182;
                if (decomp_16_renamed_2_i1182)
                {
                    valid_i928_data[i_i928] = 0;
                    __prematureExit3_i1180 = 1;
                    __prematureExit6_i1181 = 1;
                    goto end_inline_i1182;
                }
                decomp_17_renamed_2_i1181 = level_i928 == 0;
            end_inline_i1182:;
                // cluster_calcPyrLKTrack_out3_out1_out5_out0(): end inline
                int decomp_0_i1181;
                decomp_0_i1181 = __prematureExit6_i1181 == 1;
                if (decomp_0_i1181)
                {
                    goto end_inline_i1181;
                }
                if (decomp_17_renamed_2_i1181)
                {
                    // cluster_getInterpolatePatch_rep0(): begin inline
                    int dstIdxx_i1183;
                    int srcIdxx_i1183;
                    int dstIdx_i1183;
                    int srcIdx_i1183;
                    int j_i1183;
                    int i_i1183;
                    float a22_i1183;
                    float a21_i1183;
                    float a12_i1183;
                    float a11_i1183;
                    int *dst_i1183_width;
                    int *dst_i1183_height;
                    float *dst_i1183_data;
                    // cluster_getInterpolatePatch_out0_rep8(): begin inline
                    float a_i1188;
                    float b_i1188;
                    int k_i1188;
                    double _d0_0_i1188;
                    double _d0_1_i1188;
                    double _d1_0_i1188;
                    double _d1_1_i1188;
                    _d0_0_i1188 = floor((x_i928 + dX_i928));
                    _d0_1_i1188 = (x_i928 + dX_i928) - _d0_0_i1188;
                    a_i1188 = _d0_1_i1188;
                    _d1_0_i1188 = floor((y_i928 + dY_i928));
                    _d1_1_i1188 = (y_i928 + dY_i928) - _d1_0_i1188;
                    b_i1188 = _d1_1_i1188;
                    a11_i1183 = (1 - a_i1188) * (1 - b_i1188);
                    a12_i1183 = a_i1188 * (1 - b_i1188);
                    a21_i1183 = (1 - a_i1188) * b_i1188;
                    a22_i1183 = a_i1188 * b_i1188;
                    // cluster_getInterpolatePatch_out0_rep8(): end inline
                    // cluster_fSetArray_rep84(): begin inline
                    int i_i1189;
                    int j_i1189;
                    int *out_i1189_width;
                    int *out_i1189_height;
                    float *out_i1189_data;
                    // cluster_fMallocHandle_rep225(): begin inline
                    int i_i1197;
                    int j_i1197;
                    int *out_i1197_width;
                    int *out_i1197_height;
                    float *out_i1197_data;
                    out_i1197_width = &memregion_336_size4;
                    out_i1197_height = &memregion_337_size4;
                    out_i1197_data = memregion_338_size36864;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
                    int _lit221 = 1;
                    // cluster_fMallocHandle_out22_rep89(): begin inline
                    (*out_i1197_height) = _lit221;
                    (*out_i1197_width) = (2 * (local_WINSZ) * 2 * (local_WINSZ));
                    out_i1189_width = out_i1197_width;
                    out_i1189_height = out_i1197_height;
                    out_i1189_data = out_i1197_data;
                    // cluster_fMallocHandle_out22_rep89(): end inline
                    // cluster_fMallocHandle_rep225(): end inline
                    int _lit217 = 1;
                    int _lit218 = 0;
                    // cluster_fSetArray_out22_rep39(): begin inline
                    for (i_i1189 = 0; i_i1189 < _lit217; i_i1189++)
                    {
#pragma HLS loop_tripcount max = 1
                        for (j_i1189 = 0; j_i1189 < (2 * (local_WINSZ) * 2 * (local_WINSZ)); j_i1189++)
                        {
                            int __idxExpr338 = i_i1189 * (*out_i1189_width) + j_i1189;
#pragma HLS loop_tripcount max = 9216
                            out_i1189_data[__idxExpr338] = _lit218;
                        }
                    }
                    dst_i1183_width = out_i1189_width;
                    dst_i1183_height = out_i1189_height;
                    dst_i1183_data = out_i1189_data;
                    // cluster_fSetArray_out22_rep39(): end inline
                    // cluster_fSetArray_rep84(): end inline
                    // cluster_getInterpolatePatch_out1_rep8(): begin inline
                    for (i_i1183 = -(local_WINSZ); i_i1183 < (local_WINSZ); i_i1183++)
                    {
#pragma HLS loop_tripcount max = 96
                        double _d2_0_i1190;
                        double _d2_1_i1190;
                        _d2_0_i1190 = floor((y_i928 + dY_i928));
                        _d2_1_i1190 = _d2_0_i1190 + i_i1183;
                        srcIdxx_i1183 = _d2_1_i1190;
                        dstIdxx_i1183 = i_i1183 + (local_WINSZ);
                        for (j_i1183 = -(local_WINSZ); j_i1183 < (local_WINSZ); j_i1183++)
                        {
#pragma HLS loop_tripcount max = 96
                            int _d3_0_i1190;
                            double _d3_1_i1190;
                            double _d3_2_i1190;
                            double _d3_3_i1190;
                            _d3_0_i1190 = srcIdxx_i1183 * imgSize_2_i928;
                            _d3_1_i1190 = floor((x_i928 + dX_i928));
                            _d3_2_i1190 = _d3_0_i1190 + _d3_1_i1190;
                            _d3_3_i1190 = _d3_2_i1190 + j_i1183;
                            srcIdx_i1183 = _d3_3_i1190;
                            dstIdx_i1183 = dstIdxx_i1183 * 2 * (local_WINSZ) + j_i1183 + (local_WINSZ);
                            dst_i1183_data[dstIdx_i1183] =
                                blurred_level1_data[srcIdx_i1183] * a11_i1183 +
                                blurred_level1_data[srcIdx_i1183 + 1] * a12_i1183 +
                                blurred_level1_data[srcIdx_i1183 + imgSize_2_i928] * a21_i1183 +
                                blurred_level1_data[srcIdx_i1183 + 1 + imgSize_2_i928] * a22_i1183;
                        }
                    }
                    jPatch_i928_width = dst_i1183_width;
                    jPatch_i928_height = dst_i1183_height;
                    jPatch_i928_data = dst_i1183_data;
                    // cluster_getInterpolatePatch_out1_rep8(): end inline
                    // cluster_getInterpolatePatch_rep0(): end inline
                }
                // cluster_calcPyrLKTrack_out3_out1_out5_out1(): begin inline
                decomp_18_renamed_3_i1181 = level_i928 == 1;
                // cluster_calcPyrLKTrack_out3_out1_out5_out1(): end inline
                if (decomp_18_renamed_3_i1181)
                {
                    // cluster_getInterpolatePatch_rep1(): begin inline
                    int dstIdxx_i1185;
                    int srcIdxx_i1185;
                    int dstIdx_i1185;
                    int srcIdx_i1185;
                    int j_i1185;
                    int i_i1185;
                    float a22_i1185;
                    float a21_i1185;
                    float a12_i1185;
                    float a11_i1185;
                    int *dst_i1185_width;
                    int *dst_i1185_height;
                    float *dst_i1185_data;
                    // cluster_getInterpolatePatch_out0_rep7(): begin inline
                    float a_i1191;
                    float b_i1191;
                    int k_i1191;
                    double _d0_0_i1191;
                    double _d0_1_i1191;
                    double _d1_0_i1191;
                    double _d1_1_i1191;
                    _d0_0_i1191 = floor((x_i928 + dX_i928));
                    _d0_1_i1191 = (x_i928 + dX_i928) - _d0_0_i1191;
                    a_i1191 = _d0_1_i1191;
                    _d1_0_i1191 = floor((y_i928 + dY_i928));
                    _d1_1_i1191 = (y_i928 + dY_i928) - _d1_0_i1191;
                    b_i1191 = _d1_1_i1191;
                    a11_i1185 = (1 - a_i1191) * (1 - b_i1191);
                    a12_i1185 = a_i1191 * (1 - b_i1191);
                    a21_i1185 = (1 - a_i1191) * b_i1191;
                    a22_i1185 = a_i1191 * b_i1191;
                    // cluster_getInterpolatePatch_out0_rep7(): end inline
                    // cluster_fSetArray_rep83(): begin inline
                    int i_i1192;
                    int j_i1192;
                    int *out_i1192_width;
                    int *out_i1192_height;
                    float *out_i1192_data;
                    // cluster_fMallocHandle_rep226(): begin inline
                    int i_i1199;
                    int j_i1199;
                    int *out_i1199_width;
                    int *out_i1199_height;
                    float *out_i1199_data;
                    out_i1199_width = &memregion_339_size4;
                    out_i1199_height = &memregion_340_size4;
                    out_i1199_data = memregion_341_size36864;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
                    int _lit222 = 1;
                    // cluster_fMallocHandle_out22_rep88(): begin inline
                    (*out_i1199_height) = _lit222;
                    (*out_i1199_width) = (2 * (local_WINSZ) * 2 * (local_WINSZ));
                    out_i1192_width = out_i1199_width;
                    out_i1192_height = out_i1199_height;
                    out_i1192_data = out_i1199_data;
                    // cluster_fMallocHandle_out22_rep88(): end inline
                    // cluster_fMallocHandle_rep226(): end inline
                    int _lit219 = 1;
                    int _lit220 = 0;
                    // cluster_fSetArray_out22_rep40(): begin inline
                    for (i_i1192 = 0; i_i1192 < _lit219; i_i1192++)
                    {
#pragma HLS loop_tripcount max = 1
                        for (j_i1192 = 0; j_i1192 < (2 * (local_WINSZ) * 2 * (local_WINSZ)); j_i1192++)
                        {
                            int __idxExpr339 = i_i1192 * (*out_i1192_width) + j_i1192;
#pragma HLS loop_tripcount max = 9216
                            out_i1192_data[__idxExpr339] = _lit220;
                        }
                    }
                    dst_i1185_width = out_i1192_width;
                    dst_i1185_height = out_i1192_height;
                    dst_i1185_data = out_i1192_data;
                    // cluster_fSetArray_out22_rep40(): end inline
                    // cluster_fSetArray_rep83(): end inline
                    // cluster_getInterpolatePatch_out1_rep7(): begin inline
                    for (i_i1185 = -(local_WINSZ); i_i1185 < (local_WINSZ); i_i1185++)
                    {
#pragma HLS loop_tripcount max = 96
                        double _d2_0_i1193;
                        double _d2_1_i1193;
                        _d2_0_i1193 = floor((y_i928 + dY_i928));
                        _d2_1_i1193 = _d2_0_i1193 + i_i1185;
                        srcIdxx_i1185 = _d2_1_i1193;
                        dstIdxx_i1185 = i_i1185 + (local_WINSZ);
                        for (j_i1185 = -(local_WINSZ); j_i1185 < (local_WINSZ); j_i1185++)
                        {
#pragma HLS loop_tripcount max = 96
                            int _d3_0_i1193;
                            double _d3_1_i1193;
                            double _d3_2_i1193;
                            double _d3_3_i1193;
                            _d3_0_i1193 = srcIdxx_i1185 * imgSize_2_i928;
                            _d3_1_i1193 = floor((x_i928 + dX_i928));
                            _d3_2_i1193 = _d3_0_i1193 + _d3_1_i1193;
                            _d3_3_i1193 = _d3_2_i1193 + j_i1185;
                            srcIdx_i1185 = _d3_3_i1193;
                            dstIdx_i1185 = dstIdxx_i1185 * 2 * (local_WINSZ) + j_i1185 + (local_WINSZ);
                            dst_i1185_data[dstIdx_i1185] =
                                blurred_level2_data[srcIdx_i1185] * a11_i1185 +
                                blurred_level2_data[srcIdx_i1185 + 1] * a12_i1185 +
                                blurred_level2_data[srcIdx_i1185 + imgSize_2_i928] * a21_i1185 +
                                blurred_level2_data[srcIdx_i1185 + 1 + imgSize_2_i928] * a22_i1185;
                        }
                    }
                    jPatch_i928_width = dst_i1185_width;
                    jPatch_i928_height = dst_i1185_height;
                    jPatch_i928_data = dst_i1185_data;
                    // cluster_getInterpolatePatch_out1_rep7(): end inline
                    // cluster_getInterpolatePatch_rep1(): end inline
                }
                // cluster_calcPyrLKTrack_out3_out1_out5_out2(): begin inline
                int decomp_19_renamed_2_i1186;
                // cluster_calcPyrLKTrack_out3_out1_out5_out2_out0(): begin inline
                eX_i928 = 0;
                eY_i928 = 0;
                for (idx_i928 = 0; idx_i928 < winSizeSq_i928; idx_i928++)
                {
#pragma HLS loop_tripcount max = 9216
                    dIt_i928 = iPatch_i928_data[idx_i928] - jPatch_i928_data[idx_i928];
                    eX_i928 = eX_i928 + dIt_i928 * iDxPatch_i928_data[idx_i928];
                    eY_i928 = eY_i928 + dIt_i928 * iDyPatch_i928_data[idx_i928];
                }
                mX_i928 = c_det_i928 * (eX_i928 * c_yy_i928 - eY_i928 * c_xy_i928);
                mY_i928 = c_det_i928 * (-eX_i928 * c_xy_i928 + eY_i928 * c_xx_i928);
                dX_i928 = dX_i928 + mX_i928;
                dY_i928 = dY_i928 + mY_i928;
                decomp_19_renamed_2_i1186 = (mX_i928 * mX_i928 + mY_i928 * mY_i928) < (local_accuracy);
                // cluster_calcPyrLKTrack_out3_out1_out5_out2_out0(): end inline
                if (decomp_19_renamed_2_i1186)
                {
                    // cluster_fFreeHandle_rep94(): begin inline
                    int decomp_0_renamed_319_i1195;
                    // cluster_fFreeHandle_out17_rep46(): begin inline
                    decomp_0_renamed_319_i1195 = jPatch_i928_data != ((void *)0);
                    // cluster_fFreeHandle_out17_rep46(): end inline
                    if (decomp_0_renamed_319_i1195)
                    {
                        // free(jPatch_i928_data);
                    }
                    // cluster_fFreeHandle_rep94(): end inline
                    __prematureExit3_i1180 = 1;
                    __prematureExit7_i1181 = 1;
                    goto end_inline_i1186;
                }
            end_inline_i1186:;
                // cluster_calcPyrLKTrack_out3_out1_out5_out2(): end inline
                int decomp_1_i1181;
                decomp_1_i1181 = __prematureExit7_i1181 == 1;
                if (decomp_1_i1181)
                {
                    goto end_inline_i1181;
                }
                // cluster_fFreeHandle_rep95(): begin inline
                int decomp_0_renamed_318_i1187;
                // cluster_fFreeHandle_out17_rep45(): begin inline
                decomp_0_renamed_318_i1187 = jPatch_i928_data != ((void *)0);
                // cluster_fFreeHandle_out17_rep45(): end inline
                if (decomp_0_renamed_318_i1187)
                {
                    // free(jPatch_i928_data);
                }
            // cluster_fFreeHandle_rep95(): end inline
            end_inline_i1181:;
                // cluster_calcPyrLKTrack_out3_out1_out5(): end inline
                int decomp_0_i1180;
                decomp_0_i1180 = __prematureExit3_i1180 == 1;
                if (decomp_0_i1180)
                {
                    __prematureExit5_i1173 = 1;
                    goto end_inline_i1180;
                }
            end_inline_i1180:;
                // cluster_calcPyrLKTrack_out3_out1_out10(): end inline
                int decomp_0_i1173;
                decomp_0_i1173 = __prematureExit5_i1173 == 1;
                if (decomp_0_i1173)
                {
                    __prematureExit9_i1157 = 1;
                    goto end_inline_i1173;
                }
            end_inline_i1173:;
                // cluster_calcPyrLKTrack_out3_out1_out15(): end inline
                int decomp_0_i1157;
                decomp_0_i1157 = __prematureExit9_i1157 == 1;
                if (decomp_0_i1157)
                {
                    __prematureExit11_i1132 = 1;
                    goto end_inline_i1157;
                }
            end_inline_i1157:;
                // cluster_calcPyrLKTrack_out3_out1_out20(): end inline
                int decomp_0_i1132;
                decomp_0_i1132 = __prematureExit11_i1132 == 1;
                if (decomp_0_i1132)
                {
                    __prematureExit13_i1118 = 1;
                    goto end_inline_i1132;
                }
            end_inline_i1132:;
                // cluster_calcPyrLKTrack_out3_out1_out25(): end inline
                int decomp_1_i1118;
                decomp_1_i1118 = __prematureExit13_i1118 == 1;
                if (decomp_1_i1118)
                {
                    break;
                }
            }
            // cluster_fFreeHandle_rep99(): begin inline
            int decomp_0_renamed_309_i1133;
            // cluster_fFreeHandle_out17_rep41(): begin inline
            decomp_0_renamed_309_i1133 = iPatch_i928_data != ((void *)0);
            // cluster_fFreeHandle_out17_rep41(): end inline
            if (decomp_0_renamed_309_i1133)
            {
                // free(iPatch_i928_data);
            }
            // cluster_fFreeHandle_rep99(): end inline
            // cluster_fFreeHandle_rep100(): begin inline
            int decomp_0_renamed_310_i1134;
            // cluster_fFreeHandle_out17_rep40(): begin inline
            decomp_0_renamed_310_i1134 = iDxPatch_i928_data != ((void *)0);
            // cluster_fFreeHandle_out17_rep40(): end inline
            if (decomp_0_renamed_310_i1134)
            {
                // free(iDxPatch_i928_data);
            }
            // cluster_fFreeHandle_rep100(): end inline
            // cluster_fFreeHandle_rep101(): begin inline
            int decomp_0_renamed_311_i1135;
            // cluster_fFreeHandle_out17_rep39(): begin inline
            decomp_0_renamed_311_i1135 = iDyPatch_i928_data != ((void *)0);
            // cluster_fFreeHandle_out17_rep39(): end inline
            if (decomp_0_renamed_311_i1135)
            {
                // free(iDyPatch_i928_data);
            }
        // cluster_fFreeHandle_rep101(): end inline
        end_inline_i1118:;
            // cluster_calcPyrLKTrack_out3_out1(): end inline
            int decomp_0_i1117;
            decomp_0_i1117 = __prematureExit0_i1117 == 1;
            if (decomp_0_i1117)
            {
                __prematureExit1_i1116 = 1;
                goto end_inline_i1117;
            }
        end_inline_i1117:;
            // cluster_calcPyrLKTrack_out3_out3(): end inline
            int decomp_0_i1116;
            decomp_0_i1116 = __prematureExit1_i1116 == 1;
            if (decomp_0_i1116)
            {
                __prematureExit4_i1115 = 1;
                goto end_inline_i1116;
            }
        end_inline_i1116:;
            // cluster_calcPyrLKTrack_out3_out4(): end inline
            int decomp_0_i1115;
            decomp_0_i1115 = __prematureExit4_i1115 == 1;
            if (decomp_0_i1115)
            {
                __prematureExit8_i1113 = 1;
                goto end_inline_i1115;
            }
        end_inline_i1115:;
            // cluster_calcPyrLKTrack_out3_out5(): end inline
            int decomp_0_i1113;
            decomp_0_i1113 = __prematureExit8_i1113 == 1;
            if (decomp_0_i1113)
            {
                __prematureExit10_i1091 = 1;
                goto end_inline_i1113;
            }
        end_inline_i1113:;
            // cluster_calcPyrLKTrack_out3_out6(): end inline
            int decomp_0_i1091;
            decomp_0_i1091 = __prematureExit10_i1091 == 1;
            if (decomp_0_i1091)
            {
                __prematureExit12_i1009 = 1;
                goto end_inline_i1091;
            }
        end_inline_i1091:;
            // cluster_calcPyrLKTrack_out3_out7(): end inline
            int decomp_0_i1009;
            decomp_0_i1009 = __prematureExit12_i1009 == 1;
            if (decomp_0_i1009)
            {
                break;
            }
        }
        int __idxExpr340 = 0 * (*newpoints_width) + i_i928;
        int __idxExpr341 = 0 * (*features_width) + i_i928;
        // cluster_calcPyrLKTrack_out3_out2(): begin inline
        newpoints_data[__idxExpr340] = features_data[__idxExpr341] + dX_i928;
        int __idxExpr342 = 1 * (*newpoints_width) + i_i928;
        int __idxExpr343 = 1 * (*features_width) + i_i928;
        newpoints_data[__idxExpr342] = features_data[__idxExpr343] + dY_i928;
        // cluster_calcPyrLKTrack_out3_out2(): end inline
        // cluster_calcPyrLKTrack_out3(): end inline
    }
    // cluster_fFreeHandle_rep102(): begin inline
    int decomp_0_renamed_272_i1010;
    // cluster_fFreeHandle_out17_rep38(): begin inline
    decomp_0_renamed_272_i1010 = rate_i928_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep38(): end inline
    if (decomp_0_renamed_272_i1010)
    {
        // free(rate_i928_data);
    }
    // cluster_fFreeHandle_rep102(): end inline
    // cluster_iFreeHandle_rep35(): begin inline
    int decomp_0_renamed_273_i1011;
    // cluster_iFreeHandle_out17_rep11(): begin inline
    decomp_0_renamed_273_i1011 = imgDims_i928_data != ((void *)0);
    // cluster_iFreeHandle_out17_rep11(): end inline
    if (decomp_0_renamed_273_i1011)
    {
        // free(imgDims_i928_data);
    }
    memcpy(status_width, valid_i928_width, 4);
    memcpy(status_height, valid_i928_height, 4);
    memcpy(status_data, valid_i928_data, 32);
    // cluster_iFreeHandle_rep35(): end inline
    // cluster_calcPyrLKTrack(): end inline
    // cluster_fFreeHandle_rep121(): begin inline
    int decomp_0_renamed_242_i929;
    // cluster_fFreeHandle_out17_rep19(): begin inline
    decomp_0_renamed_242_i929 = verticalEdge_level1_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep19(): end inline
    if (decomp_0_renamed_242_i929)
    {
        // free(verticalEdge_level1_data);
    }
    // cluster_fFreeHandle_rep121(): end inline
    // cluster_fFreeHandle_rep122(): begin inline
    int decomp_0_renamed_243_i930;
    // cluster_fFreeHandle_out17_rep18(): begin inline
    decomp_0_renamed_243_i930 = verticalEdge_level2_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep18(): end inline
    if (decomp_0_renamed_243_i930)
    {
        // free(verticalEdge_level2_data);
    }
    // cluster_fFreeHandle_rep122(): end inline
    // cluster_fFreeHandle_rep123(): begin inline
    int decomp_0_renamed_244_i931;
    // cluster_fFreeHandle_out17_rep17(): begin inline
    decomp_0_renamed_244_i931 = horizontalEdge_level1_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep17(): end inline
    if (decomp_0_renamed_244_i931)
    {
        // free(horizontalEdge_level1_data);
    }
    // cluster_fFreeHandle_rep123(): end inline
    // cluster_fFreeHandle_rep124(): begin inline
    int decomp_0_renamed_245_i932;
    // cluster_fFreeHandle_out17_rep16(): begin inline
    decomp_0_renamed_245_i932 = horizontalEdge_level2_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep16(): end inline
    if (decomp_0_renamed_245_i932)
    {
        // free(horizontalEdge_level2_data);
    }
    // cluster_fFreeHandle_rep124(): end inline
    // cluster_fFreeHandle_rep125(): begin inline
    int decomp_0_renamed_246_i933;
    // cluster_fFreeHandle_out17_rep15(): begin inline
    decomp_0_renamed_246_i933 = previousFrameBlurred_level1_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep15(): end inline
    if (decomp_0_renamed_246_i933)
    {
        // free(previousFrameBlurred_level1_data);
    }
    // cluster_fFreeHandle_rep125(): end inline
    // cluster_fFreeHandle_rep126(): begin inline
    int decomp_0_renamed_247_i934;
    // cluster_fFreeHandle_out17_rep14(): begin inline
    decomp_0_renamed_247_i934 = previousFrameBlurred_level2_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep14(): end inline
    if (decomp_0_renamed_247_i934)
    {
        // free(previousFrameBlurred_level2_data);
    }
    // cluster_fFreeHandle_rep126(): end inline
    // cluster_fDeepCopy_rep17(): begin inline
    int cols_i935;
    int rows_i935;
    int *out_i935_width;
    int *out_i935_height;
    float *out_i935_data;
    int j_i935;
    int i_i935;
    // cluster_fDeepCopy_out18_rep2(): begin inline
    rows_i935 = (*newpoints_height);
    cols_i935 = (*newpoints_width);
    // cluster_fDeepCopy_out18_rep2(): end inline
    // cluster_fMallocHandle_rep189(): begin inline
    int i_i1019;
    int j_i1019;
    int *out_i1019_width;
    int *out_i1019_height;
    float *out_i1019_data;
    out_i1019_width = &memregion_342_size4;
    out_i1019_height = &memregion_343_size4;
    out_i1019_data = memregion_344_size40;
#pragma clava malloc_size max = 48 min = 48 avg = 48
    // cluster_fMallocHandle_out22_rep43(): begin inline
    (*out_i1019_height) = rows_i935;
    (*out_i1019_width) = cols_i935;
    out_i935_width = out_i1019_width;
    out_i935_height = out_i1019_height;
    out_i935_data = out_i1019_data;
    // cluster_fMallocHandle_out22_rep43(): end inline
    // cluster_fMallocHandle_rep189(): end inline
    // cluster_fDeepCopy_out19_rep2(): begin inline
    for (i_i935 = 0; i_i935 < rows_i935; i_i935++)
    {
#pragma HLS loop_tripcount max = 2
        for (j_i935 = 0; j_i935 < cols_i935; j_i935++)
        {
            int __idxExpr344 = i_i935 * (*out_i935_width) + j_i935;
            int __idxExpr345 = i_i935 * (*newpoints_width) + j_i935;
#pragma HLS loop_tripcount max = 5
            out_i935_data[__idxExpr344] = newpoints_data[__idxExpr345];
        }
    }
    np_temp_width = out_i935_width;
    np_temp_height = out_i935_height;
    np_temp_data = out_i935_data;
    // cluster_fDeepCopy_out19_rep2(): end inline
    // cluster_fDeepCopy_rep17(): end inline
    // cluster_trackFeaturesPyramidalLK_out1(): begin inline
    decomp_0 = (*status_width) > 0;
    // cluster_trackFeaturesPyramidalLK_out1(): end inline
    if (decomp_0)
    {
        // cluster_trackFeaturesPyramidalLK_out2(): begin inline
        // cluster_trackFeaturesPyramidalLK_out2_out0(): begin inline
        (local_k) = 0;
        (local_numFind) = 0;
        for ((local_i) = 0; (local_i) < (*status_width); (local_i)++)
        {
#pragma HLS loop_tripcount max = 5
            int decomp_1_renamed_19_i1021;
            decomp_1_renamed_19_i1021 = status_data[(local_i)] == 1;
            if (decomp_1_renamed_19_i1021)
            {
                (local_numFind)++;
            }
        }
        // cluster_trackFeaturesPyramidalLK_out2_out0(): end inline
        // cluster_fFreeHandle_rep118(): begin inline
        int decomp_0_renamed_280_i1022;
        // cluster_fFreeHandle_out17_rep22(): begin inline
        decomp_0_renamed_280_i1022 = newpoints_data != ((void *)0);
        // cluster_fFreeHandle_out17_rep22(): end inline
        if (decomp_0_renamed_280_i1022)
        {
            // free(newpoints_data);
        }
        // cluster_fFreeHandle_rep118(): end inline
        // cluster_fSetArray_rep57(): begin inline
        int i_i1023;
        int j_i1023;
        int *out_i1023_width;
        int *out_i1023_height;
        float *out_i1023_data;
        // cluster_fMallocHandle_rep167(): begin inline
        int i_i1097;
        int j_i1097;
        int *out_i1097_width;
        int *out_i1097_height;
        float *out_i1097_data;
        out_i1097_width = &memregion_345_size4;
        out_i1097_height = &memregion_346_size4;
        out_i1097_data = memregion_347_size40;
#pragma clava malloc_size max = 48 min = 40 avg = 46
        int _lit198 = 2;
        // cluster_fMallocHandle_out22_rep20(): begin inline
        (*out_i1097_height) = _lit198;
        (*out_i1097_width) = (local_numFind);
        out_i1023_width = out_i1097_width;
        out_i1023_height = out_i1097_height;
        out_i1023_data = out_i1097_data;
        // cluster_fMallocHandle_out22_rep20(): end inline
        // cluster_fMallocHandle_rep167(): end inline
        int _lit195 = 2;
        int _lit196 = 0;
        // cluster_fSetArray_out22_rep3(): begin inline
        for (i_i1023 = 0; i_i1023 < _lit195; i_i1023++)
        {
#pragma HLS loop_tripcount max = 2
            for (j_i1023 = 0; j_i1023 < (local_numFind); j_i1023++)
            {
                int __idxExpr346 = i_i1023 * (*out_i1023_width) + j_i1023;
#pragma HLS loop_tripcount max = 5 min = 4
                out_i1023_data[__idxExpr346] = _lit196;
            }
        }
        newpoints_width = out_i1023_width;
        newpoints_height = out_i1023_height;
        newpoints_data = out_i1023_data;
        // cluster_fSetArray_out22_rep3(): end inline
        // cluster_fSetArray_rep57(): end inline
        // cluster_trackFeaturesPyramidalLK_out2_out1(): begin inline
        for ((local_i) = 0; (local_i) < (*status_width); (local_i)++)
        {
#pragma HLS loop_tripcount max = 5
            int decomp_2_renamed_16_i1024;
            decomp_2_renamed_16_i1024 = status_data[(local_i)] == 1;
            if (decomp_2_renamed_16_i1024)
            {
                int __idxExpr347 = 0 * (*newpoints_width) + (local_k);
                int __idxExpr348 = 0 * (*np_temp_width) + (local_i);
                newpoints_data[__idxExpr347] = np_temp_data[__idxExpr348];
                int __idxExpr349 = 1 * (*newpoints_width) + ((local_k)++);
                int __idxExpr350 = 1 * (*np_temp_width) + (local_i);
                newpoints_data[__idxExpr349] = np_temp_data[__idxExpr350];
            }
        }
        // cluster_trackFeaturesPyramidalLK_out2_out1(): end inline
        // cluster_trackFeaturesPyramidalLK_out2(): end inline
    }
    // cluster_iFreeHandle_rep43(): begin inline
    int decomp_0_renamed_249_i938;
    // cluster_iFreeHandle_out17_rep3(): begin inline
    decomp_0_renamed_249_i938 = status_data != ((void *)0);
    // cluster_iFreeHandle_out17_rep3(): end inline
    if (decomp_0_renamed_249_i938)
    {
        // free(status_data);
    }
    // cluster_iFreeHandle_rep43(): end inline
    // cluster_iFreeHandle_rep44(): begin inline
    int decomp_0_renamed_250_i939;
    // cluster_iFreeHandle_out17_rep2(): begin inline
    decomp_0_renamed_250_i939 = Ic_data != ((void *)0);
    // cluster_iFreeHandle_out17_rep2(): end inline
    if (decomp_0_renamed_250_i939)
    {
        // free(Ic_data);
    }
    // cluster_iFreeHandle_rep44(): end inline
    // cluster_fFreeHandle_rep127(): begin inline
    int decomp_0_renamed_251_i940;
    // cluster_fFreeHandle_out17_rep13(): begin inline
    decomp_0_renamed_251_i940 = np_temp_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep13(): end inline
    if (decomp_0_renamed_251_i940)
    {
        // free(np_temp_data);
    }
    // cluster_fFreeHandle_rep127(): end inline
    // cluster_fFreeHandle_rep128(): begin inline
    int decomp_0_renamed_252_i941;
    // cluster_fFreeHandle_out17_rep12(): begin inline
    decomp_0_renamed_252_i941 = features_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep12(): end inline
    if (decomp_0_renamed_252_i941)
    {
        // free(features_data);
    }
    // cluster_fFreeHandle_rep128(): end inline
    // cluster_fDeepCopy_rep18(): begin inline
    int cols_i942;
    int rows_i942;
    int *out_i942_width;
    int *out_i942_height;
    float *out_i942_data;
    int j_i942;
    int i_i942;
    // cluster_fDeepCopy_out18_rep1(): begin inline
    rows_i942 = (*newpoints_height);
    cols_i942 = (*newpoints_width);
    // cluster_fDeepCopy_out18_rep1(): end inline
    // cluster_fMallocHandle_rep188(): begin inline
    int i_i1030;
    int j_i1030;
    int *out_i1030_width;
    int *out_i1030_height;
    float *out_i1030_data;
    out_i1030_width = &memregion_348_size4;
    out_i1030_height = &memregion_349_size4;
    out_i1030_data = memregion_350_size40;
#pragma clava malloc_size max = 48 min = 40 avg = 46
    // cluster_fMallocHandle_out22_rep44(): begin inline
    (*out_i1030_height) = rows_i942;
    (*out_i1030_width) = cols_i942;
    out_i942_width = out_i1030_width;
    out_i942_height = out_i1030_height;
    out_i942_data = out_i1030_data;
    // cluster_fMallocHandle_out22_rep44(): end inline
    // cluster_fMallocHandle_rep188(): end inline
    // cluster_fDeepCopy_out19_rep1(): begin inline
    for (i_i942 = 0; i_i942 < rows_i942; i_i942++)
    {
#pragma HLS loop_tripcount max = 2
        for (j_i942 = 0; j_i942 < cols_i942; j_i942++)
        {
            int __idxExpr351 = i_i942 * (*out_i942_width) + j_i942;
            int __idxExpr352 = i_i942 * (*newpoints_width) + j_i942;
#pragma HLS loop_tripcount max = 5 min = 4
            out_i942_data[__idxExpr351] = newpoints_data[__idxExpr352];
        }
    }
    memcpy(features_width, out_i942_width, 4);
    memcpy(features_height, out_i942_height, 4);
    memcpy(features_data, out_i942_data, 40);
    // cluster_fDeepCopy_out19_rep1(): end inline
    // cluster_fDeepCopy_rep18(): end inline
    // cluster_fFreeHandle_rep129(): begin inline
    int decomp_0_renamed_253_i943;
    // cluster_fFreeHandle_out17_rep11(): begin inline
    decomp_0_renamed_253_i943 = newpoints_data != ((void *)0);
    // cluster_fFreeHandle_out17_rep11(): end inline
    if (decomp_0_renamed_253_i943)
    {
        // free(newpoints_data);
    }
    // cluster_fFreeHandle_rep129(): end inline
}

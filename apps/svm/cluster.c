#include "cluster.h"
void cluster(int N, int *trn1_width, int *trn1_height, float *trn1_data, int *trn2_width,
                             int *trn2_height, float *trn2_data, int iterations, float *alpha_b, float *alpha_C,
                             int *alpha_d, int *alpha_dim, float *alpha_eps, int *alpha_a_result_width,
                             int *alpha_a_result_height, float *alpha_a_result_data, int *alpha_b_result_width,
                             int *alpha_b_result_height, float *alpha_b_result_data, int *alpha_X_width,
                             int *alpha_X_height, float *alpha_X_data, float *alpha_tolerance);
void cluster(int N, int *trn1_width, int *trn1_height, float *trn1_data, int *trn2_width,
                             int *trn2_height, float *trn2_data, int iterations, float *alpha_b, float *alpha_C,
                             int *alpha_d, int *alpha_dim, float *alpha_eps, int *alpha_a_result_width,
                             int *alpha_a_result_height, float *alpha_a_result_data, int *alpha_b_result_width,
                             int *alpha_b_result_height, float *alpha_b_result_data, int *alpha_X_width,
                             int *alpha_X_height, float *alpha_X_data, float *alpha_tolerance)
{
#pragma HLS INTERFACE s_axilite port=N bundle=control
#pragma HLS INTERFACE m_axi port=trn1_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=trn1_width bundle=control
#pragma HLS INTERFACE m_axi port=trn1_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=trn1_height bundle=control
#pragma HLS INTERFACE m_axi port=trn1_data bundle=gmem1 offset=slave
#pragma HLS INTERFACE s_axilite port=trn1_data bundle=control
#pragma HLS INTERFACE m_axi port=trn2_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=trn2_width bundle=control
#pragma HLS INTERFACE m_axi port=trn2_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=trn2_height bundle=control
#pragma HLS INTERFACE m_axi port=trn2_data bundle=gmem2 offset=slave
#pragma HLS INTERFACE s_axilite port=trn2_data bundle=control
#pragma HLS INTERFACE s_axilite port=iterations bundle=control
#pragma HLS INTERFACE m_axi port=alpha_b bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_b bundle=control
#pragma HLS INTERFACE m_axi port=alpha_C bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_C bundle=control
#pragma HLS INTERFACE m_axi port=alpha_d bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_d bundle=control
#pragma HLS INTERFACE m_axi port=alpha_dim bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_dim bundle=control
#pragma HLS INTERFACE m_axi port=alpha_eps bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_eps bundle=control
#pragma HLS INTERFACE m_axi port=alpha_a_result_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_a_result_width bundle=control
#pragma HLS INTERFACE m_axi port=alpha_a_result_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_a_result_height bundle=control
#pragma HLS INTERFACE m_axi port=alpha_a_result_data bundle=gmem3 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_a_result_data bundle=control
#pragma HLS INTERFACE m_axi port=alpha_b_result_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_b_result_width bundle=control
#pragma HLS INTERFACE m_axi port=alpha_b_result_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_b_result_height bundle=control
#pragma HLS INTERFACE m_axi port=alpha_b_result_data bundle=gmem3 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_b_result_data bundle=control
#pragma HLS INTERFACE m_axi port=alpha_X_width bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_X_width bundle=control
#pragma HLS INTERFACE m_axi port=alpha_X_height bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_X_height bundle=control
#pragma HLS INTERFACE m_axi port=alpha_X_data bundle=gmem4 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_X_data bundle=control
#pragma HLS INTERFACE m_axi port=alpha_tolerance bundle=gmem0 offset=slave
#pragma HLS INTERFACE s_axilite port=alpha_tolerance bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control
    float memregion_1519_size102400[25600];
#pragma HLS bind_storage variable = memregion_1519_size102400 type = RAM_2P impl = BRAM
    float memregion_1516_size20480[25600];
#pragma HLS bind_storage variable = memregion_1516_size20480 type = RAM_2P impl = BRAM
    float memregion_1513_size10240[2560];
#pragma HLS bind_storage variable = memregion_1513_size10240 type = RAM_2P impl = BRAM
    float memregion_1510_size10240[25600];
#pragma HLS bind_storage variable = memregion_1510_size10240 type = RAM_2P impl = BRAM
    float memregion_1507_size10240[2560];
#pragma HLS bind_storage variable = memregion_1507_size10240 type = RAM_2P impl = BRAM
    float memregion_1501_size4000[1000];
#pragma HLS bind_storage variable = memregion_1501_size4000 type = RAM_2P impl = BRAM
    float memregion_1711_size1024[256];
#pragma HLS bind_storage variable = memregion_1711_size1024 type = RAM_2P impl = BRAM
    float memregion_1708_size1024[256];
#pragma HLS bind_storage variable = memregion_1708_size1024 type = RAM_2P impl = BRAM
    float memregion_1705_size1024[256];
#pragma HLS bind_storage variable = memregion_1705_size1024 type = RAM_2P impl = BRAM
    float memregion_1699_size1024[256];
#pragma HLS bind_storage variable = memregion_1699_size1024 type = RAM_2P impl = BRAM
    float memregion_1693_size1024[256];
#pragma HLS bind_storage variable = memregion_1693_size1024 type = RAM_2P impl = BRAM
    float memregion_1687_size1024[256];
#pragma HLS bind_storage variable = memregion_1687_size1024 type = RAM_2P impl = BRAM
    float memregion_1684_size1024[256];
#pragma HLS bind_storage variable = memregion_1684_size1024 type = RAM_2P impl = BRAM
    float memregion_1681_size1024[256];
#pragma HLS bind_storage variable = memregion_1681_size1024 type = RAM_2P impl = BRAM
    float memregion_1675_size1024[256];
#pragma HLS bind_storage variable = memregion_1675_size1024 type = RAM_2P impl = BRAM
    float memregion_1672_size1024[256];
#pragma HLS bind_storage variable = memregion_1672_size1024 type = RAM_2P impl = BRAM
    float memregion_1669_size1024[256];
#pragma HLS bind_storage variable = memregion_1669_size1024 type = RAM_2P impl = BRAM
    float memregion_1663_size1024[256];
#pragma HLS bind_storage variable = memregion_1663_size1024 type = RAM_2P impl = BRAM
    float memregion_1660_size1024[256];
#pragma HLS bind_storage variable = memregion_1660_size1024 type = RAM_2P impl = BRAM
    float memregion_1657_size1024[256];
#pragma HLS bind_storage variable = memregion_1657_size1024 type = RAM_2P impl = BRAM
    float memregion_1651_size1024[256];
#pragma HLS bind_storage variable = memregion_1651_size1024 type = RAM_2P impl = BRAM
    float memregion_1648_size1024[256];
#pragma HLS bind_storage variable = memregion_1648_size1024 type = RAM_2P impl = BRAM
    float memregion_1645_size1024[256];
#pragma HLS bind_storage variable = memregion_1645_size1024 type = RAM_2P impl = BRAM
    float memregion_1639_size1024[256];
#pragma HLS bind_storage variable = memregion_1639_size1024 type = RAM_2P impl = BRAM
    float memregion_1633_size1024[256];
#pragma HLS bind_storage variable = memregion_1633_size1024 type = RAM_2P impl = BRAM
    float memregion_1627_size1024[256];
#pragma HLS bind_storage variable = memregion_1627_size1024 type = RAM_2P impl = BRAM
    float memregion_1624_size1024[256];
#pragma HLS bind_storage variable = memregion_1624_size1024 type = RAM_2P impl = BRAM
    float memregion_1621_size1024[256];
#pragma HLS bind_storage variable = memregion_1621_size1024 type = RAM_2P impl = BRAM
    float memregion_1615_size1024[256];
#pragma HLS bind_storage variable = memregion_1615_size1024 type = RAM_2P impl = BRAM
    float memregion_1612_size1024[256];
#pragma HLS bind_storage variable = memregion_1612_size1024 type = RAM_2P impl = BRAM
    float memregion_1609_size1024[256];
#pragma HLS bind_storage variable = memregion_1609_size1024 type = RAM_2P impl = BRAM
    float memregion_1603_size1024[256];
#pragma HLS bind_storage variable = memregion_1603_size1024 type = RAM_2P impl = BRAM
    float memregion_1600_size1024[256];
#pragma HLS bind_storage variable = memregion_1600_size1024 type = RAM_2P impl = BRAM
    float memregion_1597_size1024[256];
#pragma HLS bind_storage variable = memregion_1597_size1024 type = RAM_2P impl = BRAM
    float memregion_1591_size1024[256];
#pragma HLS bind_storage variable = memregion_1591_size1024 type = RAM_2P impl = BRAM
    float memregion_1585_size1024[256];
#pragma HLS bind_storage variable = memregion_1585_size1024 type = RAM_2P impl = BRAM
    float memregion_1579_size1024[256];
#pragma HLS bind_storage variable = memregion_1579_size1024 type = RAM_2P impl = BRAM
    float memregion_1576_size1024[256];
#pragma HLS bind_storage variable = memregion_1576_size1024 type = RAM_2P impl = BRAM
    float memregion_1573_size1024[256];
#pragma HLS bind_storage variable = memregion_1573_size1024 type = RAM_2P impl = BRAM
    float memregion_1567_size1024[256];
#pragma HLS bind_storage variable = memregion_1567_size1024 type = RAM_2P impl = BRAM
    float memregion_1564_size1024[256];
#pragma HLS bind_storage variable = memregion_1564_size1024 type = RAM_2P impl = BRAM
    float memregion_1561_size1024[256];
#pragma HLS bind_storage variable = memregion_1561_size1024 type = RAM_2P impl = BRAM
    float memregion_1552_size1024[256];
#pragma HLS bind_storage variable = memregion_1552_size1024 type = RAM_2P impl = BRAM
    float memregion_1549_size1024[256];
#pragma HLS bind_storage variable = memregion_1549_size1024 type = RAM_2P impl = BRAM
    float memregion_1546_size1024[256];
#pragma HLS bind_storage variable = memregion_1546_size1024 type = RAM_2P impl = BRAM
    float memregion_1654_size400[100];
#pragma HLS bind_storage variable = memregion_1654_size400 type = RAM_2P impl = BRAM
    float memregion_1606_size400[100];
#pragma HLS bind_storage variable = memregion_1606_size400 type = RAM_2P impl = BRAM
    float memregion_1558_size400[100];
#pragma HLS bind_storage variable = memregion_1558_size400 type = RAM_2P impl = BRAM
    float memregion_1543_size400[100];
#pragma HLS bind_storage variable = memregion_1543_size400 type = RAM_2P impl = BRAM
    float memregion_1540_size400[100];
#pragma HLS bind_storage variable = memregion_1540_size400 type = RAM_2P impl = BRAM
    float memregion_1537_size400[100];
#pragma HLS bind_storage variable = memregion_1537_size400 type = RAM_2P impl = BRAM
    float memregion_1534_size80[100];
#pragma HLS bind_storage variable = memregion_1534_size80 type = RAM_2P impl = BRAM
    float memregion_1531_size40[100];
#pragma HLS bind_storage variable = memregion_1531_size40 type = RAM_2P impl = BRAM
    float memregion_1528_size40[10];
#pragma HLS bind_storage variable = memregion_1528_size40 type = RAM_2P impl = BRAM
    float memregion_1525_size40[10];
#pragma HLS bind_storage variable = memregion_1525_size40 type = RAM_2P impl = BRAM
    float memregion_1522_size40[10];
#pragma HLS bind_storage variable = memregion_1522_size40 type = RAM_2P impl = BRAM
    float memregion_1504_size40[10];
#pragma HLS bind_storage variable = memregion_1504_size40 type = RAM_2P impl = BRAM
    int memregion_1710_size4;
    int memregion_1709_size4;
    int memregion_1707_size4;
    int memregion_1706_size4;
    int memregion_1704_size4;
    int memregion_1703_size4;
    float memregion_1702_size4;
    int memregion_1701_size4;
    int memregion_1700_size4;
    int memregion_1698_size4;
    int memregion_1697_size4;
    float memregion_1696_size4;
    int memregion_1695_size4;
    int memregion_1694_size4;
    int memregion_1692_size4;
    int memregion_1691_size4;
    float memregion_1690_size4;
    int memregion_1689_size4;
    int memregion_1688_size4;
    int memregion_1686_size4;
    int memregion_1685_size4;
    int memregion_1683_size4;
    int memregion_1682_size4;
    int memregion_1680_size4;
    int memregion_1679_size4;
    float memregion_1678_size4;
    int memregion_1677_size4;
    int memregion_1676_size4;
    int memregion_1674_size4;
    int memregion_1673_size4;
    int memregion_1671_size4;
    int memregion_1670_size4;
    int memregion_1668_size4;
    int memregion_1667_size4;
    float memregion_1666_size4;
    int memregion_1665_size4;
    int memregion_1664_size4;
    int memregion_1662_size4;
    int memregion_1661_size4;
    int memregion_1659_size4;
    int memregion_1658_size4;
    int memregion_1656_size4;
    int memregion_1655_size4;
    int memregion_1653_size4;
    int memregion_1652_size4;
    int memregion_1650_size4;
    int memregion_1649_size4;
    int memregion_1647_size4;
    int memregion_1646_size4;
    int memregion_1644_size4;
    int memregion_1643_size4;
    float memregion_1642_size4;
    int memregion_1641_size4;
    int memregion_1640_size4;
    int memregion_1638_size4;
    int memregion_1637_size4;
    float memregion_1636_size4;
    int memregion_1635_size4;
    int memregion_1634_size4;
    int memregion_1632_size4;
    int memregion_1631_size4;
    float memregion_1630_size4;
    int memregion_1629_size4;
    int memregion_1628_size4;
    int memregion_1626_size4;
    int memregion_1625_size4;
    int memregion_1623_size4;
    int memregion_1622_size4;
    int memregion_1620_size4;
    int memregion_1619_size4;
    float memregion_1618_size4;
    int memregion_1617_size4;
    int memregion_1616_size4;
    int memregion_1614_size4;
    int memregion_1613_size4;
    int memregion_1611_size4;
    int memregion_1610_size4;
    int memregion_1608_size4;
    int memregion_1607_size4;
    int memregion_1605_size4;
    int memregion_1604_size4;
    int memregion_1602_size4;
    int memregion_1601_size4;
    int memregion_1599_size4;
    int memregion_1598_size4;
    int memregion_1596_size4;
    int memregion_1595_size4;
    float memregion_1594_size4;
    int memregion_1593_size4;
    int memregion_1592_size4;
    int memregion_1590_size4;
    int memregion_1589_size4;
    float memregion_1588_size4;
    int memregion_1587_size4;
    int memregion_1586_size4;
    int memregion_1584_size4;
    int memregion_1583_size4;
    float memregion_1582_size4;
    int memregion_1581_size4;
    int memregion_1580_size4;
    int memregion_1578_size4;
    int memregion_1577_size4;
    int memregion_1575_size4;
    int memregion_1574_size4;
    int memregion_1572_size4;
    int memregion_1571_size4;
    float memregion_1570_size4;
    int memregion_1569_size4;
    int memregion_1568_size4;
    int memregion_1566_size4;
    int memregion_1565_size4;
    int memregion_1563_size4;
    int memregion_1562_size4;
    int memregion_1560_size4;
    int memregion_1559_size4;
    int memregion_1557_size4;
    int memregion_1556_size4;
    float memregion_1555_size4;
    int memregion_1554_size4;
    int memregion_1553_size4;
    int memregion_1551_size4;
    int memregion_1550_size4;
    int memregion_1548_size4;
    int memregion_1547_size4;
    int memregion_1545_size4;
    int memregion_1544_size4;
    int memregion_1542_size4;
    int memregion_1541_size4;
    int memregion_1539_size4;
    int memregion_1538_size4;
    int memregion_1536_size4;
    int memregion_1535_size4;
    int memregion_1533_size4;
    int memregion_1532_size4;
    int memregion_1530_size4;
    int memregion_1529_size4;
    int memregion_1527_size4;
    int memregion_1526_size4;
    int memregion_1524_size4;
    int memregion_1523_size4;
    int memregion_1521_size4;
    int memregion_1520_size4;
    int memregion_1518_size4;
    int memregion_1517_size4;
    int memregion_1515_size4;
    int memregion_1514_size4;
    int memregion_1512_size4;
    int memregion_1511_size4;
    int memregion_1509_size4;
    int memregion_1508_size4;
    int memregion_1506_size4;
    int memregion_1505_size4;
    int memregion_1503_size4;
    int memregion_1502_size4;
    int memregion_1500_size4;
    int memregion_1499_size4;
    float memregion_1498_size4;
#pragma clava bram_usage = 214 max_bram = 1824 bytes_per_bram = 2048
#pragma clava param = tolerance type = PRIMITIVE_POINTER in = LIVEOUT out = LIVEOUT_USEDLATER size = 4
#pragma clava param = X type = WRAPPED_STRUCT_POINTER in = LIVEOUT out = LIVEOUT_USEDLATER size = 102400
#pragma clava param = b_result type = WRAPPED_STRUCT_POINTER in = LIVEOUT out = LIVEOUT_USEDLATER size = 40
#pragma clava param = a_result type = WRAPPED_STRUCT_POINTER in = LIVEOUT out = LIVEOUT_USEDLATER size = 4000
#pragma clava param = eps type = PRIMITIVE_POINTER in = LIVEOUT out = LIVEOUT_USEDLATER size = 4
#pragma clava param = dim type = PRIMITIVE_POINTER in = LIVEOUT out = LIVEOUT_USEDLATER size = 4
#pragma clava param = d type = PRIMITIVE_POINTER in = LIVEOUT out = LIVEOUT_USEDLATER size = 4
#pragma clava param = C type = PRIMITIVE_POINTER in = LIVEOUT out = LIVEOUT_USEDLATER size = 4
#pragma clava param = b type = PRIMITIVE_POINTER in = LIVEOUT out = LIVEOUT_USEDLATER size = 4
#pragma clava param = iterations type = PRIMITIVE in = LIVEIN out = NONE size = 4
#pragma clava param = trn2 type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 1497096
#pragma clava param = trn1 type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 2058248
#pragma clava param = N type = PRIMITIVE in = LIVEIN out = NONE size = 4
    float tolerance;
    float C;
    float eps;
    float *b;
    int *a_result_width;
    int *a_result_height;
    float *a_result_data;
    int *b_result_width;
    int *b_result_height;
    float *b_result_data;
    int NumChanged;
    int r;
    int ExamineAll;
    int cnt;
    int d;
    int dim;
    int ret;
    int iter;
    int i;
    int *X_width;
    int *X_height;
    float *X_data;
    int *Y_width;
    int *Y_height;
    float *Y_data;
    int *a_width;
    int *a_height;
    float *a_data;
    int *e_width;
    int *e_height;
    float *e_data;
    b = &memregion_1498_size4;
    // cluster_getAlphaFromTrainSet_out2(): begin inline
    tolerance = 0.001;
    C = 0.05;
    d = -1;
    dim = 256;
    eps = 0.001;
    // cluster_getAlphaFromTrainSet_out2(): end inline
    // cluster_fSetArray_rep2(): begin inline
    int i_i1;
    int j_i1;
    int *out_i1_width;
    int *out_i1_height;
    float *out_i1_data;
    // cluster_fMallocHandle_rep14(): begin inline
    int i_i6;
    int j_i6;
    int *out_i6_width;
    int *out_i6_height;
    float *out_i6_data;
    out_i6_width = &memregion_1499_size4;
    out_i6_height = &memregion_1500_size4;
    out_i6_data = memregion_1501_size4000;
#pragma clava malloc_size max = 4008 min = 4008 avg = 4008
    // cluster_fMallocHandle_out1_rep12(): begin inline
    (*out_i6_height) = iterations;
    (*out_i6_width) = N;
    out_i1_width = out_i6_width;
    out_i1_height = out_i6_height;
    out_i1_data = out_i6_data;
    // cluster_fMallocHandle_out1_rep12(): end inline
    // cluster_fMallocHandle_rep14(): end inline
    int _lit0 = 0;
    // cluster_fSetArray_out1_rep9(): begin inline
    for (i_i1 = 0; i_i1 < iterations; i_i1++)
    {
#pragma HLS loop_tripcount max = 10
        for (j_i1 = 0; j_i1 < N; j_i1++)
        {
            int __idxExpr0 = i_i1 * (*out_i1_width) + j_i1;
#pragma HLS loop_tripcount max = 100
            out_i1_data[__idxExpr0] = _lit0;
        }
    }
    a_result_width = out_i1_width;
    a_result_height = out_i1_height;
    a_result_data = out_i1_data;
    // cluster_fSetArray_out1_rep9(): end inline
    // cluster_fSetArray_rep2(): end inline
    // cluster_fSetArray_rep3(): begin inline
    int i_i2;
    int j_i2;
    int *out_i2_width;
    int *out_i2_height;
    float *out_i2_data;
    // cluster_fMallocHandle_rep13(): begin inline
    int i_i8;
    int j_i8;
    int *out_i8_width;
    int *out_i8_height;
    float *out_i8_data;
    out_i8_width = &memregion_1502_size4;
    out_i8_height = &memregion_1503_size4;
    out_i8_data = memregion_1504_size40;
#pragma clava malloc_size max = 48 min = 48 avg = 48
    int _lit5 = 1;
    // cluster_fMallocHandle_out1_rep13(): begin inline
    (*out_i8_height) = iterations;
    (*out_i8_width) = _lit5;
    out_i2_width = out_i8_width;
    out_i2_height = out_i8_height;
    out_i2_data = out_i8_data;
    // cluster_fMallocHandle_out1_rep13(): end inline
    // cluster_fMallocHandle_rep13(): end inline
    int _lit1 = 1;
    int _lit2 = 0;
    // cluster_fSetArray_out1_rep8(): begin inline
    for (i_i2 = 0; i_i2 < iterations; i_i2++)
    {
#pragma HLS loop_tripcount max = 10
        for (j_i2 = 0; j_i2 < _lit1; j_i2++)
        {
            int __idxExpr1 = i_i2 * (*out_i2_width) + j_i2;
#pragma HLS loop_tripcount max = 1
            out_i2_data[__idxExpr1] = _lit2;
        }
    }
    b_result_width = out_i2_width;
    b_result_height = out_i2_height;
    b_result_data = out_i2_data;
    // cluster_fSetArray_out1_rep8(): end inline
    // cluster_fSetArray_rep3(): end inline
    // cluster_getAlphaFromTrainSet_out3(): begin inline
    ret = 0;
    // cluster_getAlphaFromTrainSet_out3(): end inline
    // cluster_usps_read_partial_rep1(): begin inline
    int decomp_0_renamed_0_i4;
    int *temp1_i4_width;
    int *temp1_i4_height;
    float *temp1_i4_data;
    int *temp_i4_width;
    int *temp_i4_height;
    float *temp_i4_data;
    int n_i4;
    int m_i4;
    int i_i4;
    int *ADD_i4_width;
    int *ADD_i4_height;
    float *ADD_i4_data;
    int *Y_i4_width;
    int *Y_i4_height;
    float *Y_i4_data;
    int *X_i4_width;
    int *X_i4_height;
    float *X_i4_data;
    int *ret_i4_width;
    int *ret_i4_height;
    float *ret_i4_data;
    int _lit4 = 1;
    // cluster_usps_read_partial_out0_rep4(): begin inline
    int j_i10;
    int k_i10;
    decomp_0_renamed_0_i4 = _lit4 == 1;
    // cluster_usps_read_partial_out0_rep4(): end inline
    if (decomp_0_renamed_0_i4)
    {
        // cluster_usps_read_partial_out1_rep4(): begin inline
        for (i_i4 = 0; i_i4 < iterations; i_i4++)
        {
#pragma HLS loop_tripcount max = 10
            // cluster_usps_read_partial_out1_out0_rep2(): begin inline
            int decomp_1_renamed_0_i25;
            // cluster_usps_read_partial_out1_out0_out0_rep5(): begin inline
            decomp_1_renamed_0_i25 = i_i4 == 0;
            // cluster_usps_read_partial_out1_out0_out0_rep5(): end inline
            if (decomp_1_renamed_0_i25)
            {
                // cluster_usps_read_partial_out1_out0_out1_rep5(): begin inline
                // cluster_fMallocHandle_rep29(): begin inline
                int i_i63;
                int j_i63;
                int *out_i63_width;
                int *out_i63_height;
                float *out_i63_data;
                out_i63_width = &memregion_1505_size4;
                out_i63_height = &memregion_1506_size4;
                out_i63_data = memregion_1507_size10240;
#pragma clava malloc_size max = 10248 min = 10248 avg = 10248
                // cluster_fMallocHandle_out1_rep33(): begin inline
                (*out_i63_height) = (N / iterations);
                (*out_i63_width) = (*trn1_width);
                X_i4_width = out_i63_width;
                X_i4_height = out_i63_height;
                X_i4_data = out_i63_data;
                // cluster_fMallocHandle_out1_rep33(): end inline
                // cluster_fMallocHandle_rep29(): end inline
                // cluster_usps_read_partial_out1_out0_out1_out0_rep3(): begin inline
                for (m_i4 = 0; m_i4 < (N / iterations); m_i4++)
                {
#pragma HLS loop_tripcount max = 10
                    for (n_i4 = 0; n_i4 < (*trn1_width); n_i4++)
                    {
                        int __idxExpr2 = m_i4 * (*X_i4_width) + n_i4;
                        int __idxExpr3 = m_i4 * (*trn1_width) + n_i4;
#pragma HLS loop_tripcount max = 256
                        X_i4_data[__idxExpr2] = trn1_data[__idxExpr3];
                    }
                }
                // cluster_usps_read_partial_out1_out0_out1_out0_rep3(): end inline
                // cluster_usps_read_partial_out1_out0_out1_rep5(): end inline
            }
            else
            {
                // cluster_usps_read_partial_out1_out0_out2_rep5(): begin inline
                // cluster_fDeepCopy_rep4(): begin inline
                int cols_i65;
                int rows_i65;
                int *out_i65_width;
                int *out_i65_height;
                float *out_i65_data;
                int j_i65;
                int i_i65;
                // cluster_fDeepCopy_out0_rep16(): begin inline
                rows_i65 = (*X_i4_height);
                cols_i65 = (*X_i4_width);
                // cluster_fDeepCopy_out0_rep16(): end inline
                // cluster_fMallocHandle_rep51(): begin inline
                int i_i93;
                int j_i93;
                int *out_i93_width;
                int *out_i93_height;
                float *out_i93_data;
                out_i93_width = &memregion_1508_size4;
                out_i93_height = &memregion_1509_size4;
                out_i93_data = memregion_1510_size10240;
#pragma clava malloc_size max = 10248 min = 92168 avg = 51208
                // cluster_fMallocHandle_out1_rep42(): begin inline
                (*out_i93_height) = rows_i65;
                (*out_i93_width) = cols_i65;
                out_i65_width = out_i93_width;
                out_i65_height = out_i93_height;
                out_i65_data = out_i93_data;
                // cluster_fMallocHandle_out1_rep42(): end inline
                // cluster_fMallocHandle_rep51(): end inline
                // cluster_fDeepCopy_out1_rep16(): begin inline
                for (i_i65 = 0; i_i65 < rows_i65; i_i65++)
                {
#pragma HLS loop_tripcount max = 90 min = 10
                    for (j_i65 = 0; j_i65 < cols_i65; j_i65++)
                    {
                        int __idxExpr4 = i_i65 * (*out_i65_width) + j_i65;
                        int __idxExpr5 = i_i65 * (*X_i4_width) + j_i65;
#pragma HLS loop_tripcount max = 256
                        out_i65_data[__idxExpr4] = X_i4_data[__idxExpr5];
                    }
                }
                temp_i4_width = out_i65_width;
                temp_i4_height = out_i65_height;
                temp_i4_data = out_i65_data;
                // cluster_fDeepCopy_out1_rep16(): end inline
                // cluster_fDeepCopy_rep4(): end inline
                // cluster_fFreeHandle_rep38(): begin inline
                int decomp_0_renamed_18_i66;
                // cluster_fFreeHandle_out0_rep29(): begin inline
                decomp_0_renamed_18_i66 = X_i4_data != nullptr;
                // cluster_fFreeHandle_out0_rep29(): end inline
                if (decomp_0_renamed_18_i66)
                {
                    // free(X_i4_data);
                }
                // cluster_fFreeHandle_rep38(): end inline
                // cluster_fMallocHandle_rep59(): begin inline
                int i_i67;
                int j_i67;
                int *out_i67_width;
                int *out_i67_height;
                float *out_i67_data;
                out_i67_width = &memregion_1511_size4;
                out_i67_height = &memregion_1512_size4;
                out_i67_data = memregion_1513_size10240;
#pragma clava malloc_size max = 10248 min = 10248 avg = 10248
                // cluster_fMallocHandle_out1_rep65(): begin inline
                (*out_i67_height) = (N / iterations);
                (*out_i67_width) = (*trn2_width);
                temp1_i4_width = out_i67_width;
                temp1_i4_height = out_i67_height;
                temp1_i4_data = out_i67_data;
                // cluster_fMallocHandle_out1_rep65(): end inline
                // cluster_fMallocHandle_rep59(): end inline
                // cluster_usps_read_partial_out1_out0_out2_out0_rep3(): begin inline
                for (m_i4 = 0; m_i4 < (N / iterations); m_i4++)
                {
#pragma HLS loop_tripcount max = 10
                    for (n_i4 = 0; n_i4 < (*trn2_width); n_i4++)
                    {
                        int __idxExpr6 = m_i4 * (*temp1_i4_width) + n_i4;
                        int __idxExpr7 = m_i4 * (*trn2_width) + n_i4;
#pragma HLS loop_tripcount max = 256
                        temp1_i4_data[__idxExpr6] = trn2_data[__idxExpr7];
                    }
                }
                // cluster_usps_read_partial_out1_out0_out2_out0_rep3(): end inline
                // cluster_ffVertcat_rep3(): begin inline
                int k_i69;
                int j_i69;
                int i_i69;
                int row2_i69;
                int col1_i69;
                int row1_i69;
                int *outMatrix_i69_width;
                int *outMatrix_i69_height;
                float *outMatrix_i69_data;
                // cluster_ffVertcat_out0_rep7(): begin inline
                int col2_i97;
                row1_i69 = (*temp_i4_height);
                col1_i69 = (*temp_i4_width);
                row2_i69 = (*temp1_i4_height);
                col2_i97 = (*temp1_i4_width);
                // cluster_ffVertcat_out0_rep7(): end inline
                // cluster_fMallocHandle_rep72(): begin inline
                int i_i98;
                int j_i98;
                int *out_i98_width;
                int *out_i98_height;
                float *out_i98_data;
                out_i98_width = &memregion_1514_size4;
                out_i98_height = &memregion_1515_size4;
                out_i98_data = memregion_1516_size20480;
#pragma clava malloc_size max = 20488 min = 102408 avg = 61448
                // cluster_fMallocHandle_out1_rep73(): begin inline
                (*out_i98_height) = (row1_i69 + row2_i69);
                (*out_i98_width) = col1_i69;
                outMatrix_i69_width = out_i98_width;
                outMatrix_i69_height = out_i98_height;
                outMatrix_i69_data = out_i98_data;
                // cluster_fMallocHandle_out1_rep73(): end inline
                // cluster_fMallocHandle_rep72(): end inline
                // cluster_ffVertcat_out1_rep7(): begin inline
                for (i_i69 = 0; i_i69 < col1_i69; i_i69++)
                {
#pragma HLS loop_tripcount max = 256
                    for (j_i69 = 0; j_i69 < row1_i69; j_i69++)
                    {
                        int __idxExpr8 = j_i69 * (*outMatrix_i69_width) + i_i69;
                        int __idxExpr9 = j_i69 * (*temp_i4_width) + i_i69;
#pragma HLS loop_tripcount max = 90 min = 10
                        outMatrix_i69_data[__idxExpr8] = temp_i4_data[__idxExpr9];
                    }
                    for (k_i69 = 0; k_i69 < row2_i69; k_i69++)
                    {
                        int __idxExpr10 = (k_i69 + row1_i69) * (*outMatrix_i69_width) + i_i69;
                        int __idxExpr11 = k_i69 * (*temp1_i4_width) + i_i69;
#pragma HLS loop_tripcount max = 10
                        outMatrix_i69_data[__idxExpr10] = temp1_i4_data[__idxExpr11];
                    }
                }
                X_i4_width = outMatrix_i69_width;
                X_i4_height = outMatrix_i69_height;
                X_i4_data = outMatrix_i69_data;
                // cluster_ffVertcat_out1_rep7(): end inline
                // cluster_ffVertcat_rep3(): end inline
                // cluster_fFreeHandle_rep39(): begin inline
                int decomp_0_renamed_19_i70;
                // cluster_fFreeHandle_out0_rep28(): begin inline
                decomp_0_renamed_19_i70 = temp_i4_data != nullptr;
                // cluster_fFreeHandle_out0_rep28(): end inline
                if (decomp_0_renamed_19_i70)
                {
                    // free(temp_i4_data);
                }
                // cluster_fFreeHandle_rep39(): end inline
                // cluster_fFreeHandle_rep40(): begin inline
                int decomp_0_renamed_20_i71;
                // cluster_fFreeHandle_out0_rep27(): begin inline
                decomp_0_renamed_20_i71 = temp1_i4_data != nullptr;
                // cluster_fFreeHandle_out0_rep27(): end inline
                if (decomp_0_renamed_20_i71)
                {
                    // free(temp1_i4_data);
                }
                // cluster_fFreeHandle_rep40(): end inline
                // cluster_usps_read_partial_out1_out0_out2_rep5(): end inline
            }
            // cluster_usps_read_partial_out1_out0_rep2(): end inline
        }
        // cluster_fDeepCopy_rep12(): begin inline
        int cols_i26;
        int rows_i26;
        int *out_i26_width;
        int *out_i26_height;
        float *out_i26_data;
        int j_i26;
        int i_i26;
        // cluster_fDeepCopy_out0_rep8(): begin inline
        rows_i26 = (*X_i4_height);
        cols_i26 = (*X_i4_width);
        // cluster_fDeepCopy_out0_rep8(): end inline
        // cluster_fMallocHandle_rep43(): begin inline
        int i_i48;
        int j_i48;
        int *out_i48_width;
        int *out_i48_height;
        float *out_i48_data;
        out_i48_width = &memregion_1517_size4;
        out_i48_height = &memregion_1518_size4;
        out_i48_data = memregion_1519_size102400;
#pragma clava malloc_size max = 102408 min = 102408 avg = 102408
        // cluster_fMallocHandle_out1_rep50(): begin inline
        (*out_i48_height) = rows_i26;
        (*out_i48_width) = cols_i26;
        out_i26_width = out_i48_width;
        out_i26_height = out_i48_height;
        out_i26_data = out_i48_data;
        // cluster_fMallocHandle_out1_rep50(): end inline
        // cluster_fMallocHandle_rep43(): end inline
        // cluster_fDeepCopy_out1_rep8(): begin inline
        for (i_i26 = 0; i_i26 < rows_i26; i_i26++)
        {
#pragma HLS loop_tripcount max = 100
            for (j_i26 = 0; j_i26 < cols_i26; j_i26++)
            {
                int __idxExpr12 = i_i26 * (*out_i26_width) + j_i26;
                int __idxExpr13 = i_i26 * (*X_i4_width) + j_i26;
#pragma HLS loop_tripcount max = 256
                out_i26_data[__idxExpr12] = X_i4_data[__idxExpr13];
            }
        }
        ret_i4_width = out_i26_width;
        ret_i4_height = out_i26_height;
        ret_i4_data = out_i26_data;
        // cluster_fDeepCopy_out1_rep8(): end inline
        // cluster_fDeepCopy_rep12(): end inline
        // cluster_fFreeHandle_rep58(): begin inline
        int decomp_0_renamed_7_i27;
        // cluster_fFreeHandle_out0_rep9(): begin inline
        decomp_0_renamed_7_i27 = X_i4_data != nullptr;
        // cluster_fFreeHandle_out0_rep9(): end inline
        if (decomp_0_renamed_7_i27)
        {
            // free(X_i4_data);
        }
        // cluster_fFreeHandle_rep58(): end inline
        // cluster_usps_read_partial_out1_rep4(): end inline
    }
    else
    {
        int _lit3 = 0;
        // cluster_usps_read_partial_out2_rep4(): begin inline
        //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount directive even if it has
        //  static bounds
        // cluster_fDeepCopy_rep40(): begin inline
        int cols_i28;
        int rows_i28;
        int *out_i28_width;
        int *out_i28_height;
        float *out_i28_data;
        int j_i28;
        int i_i28;
        // cluster_fDeepCopy_out0_rep46(): begin inline
        rows_i28 = (*Y_i4_height);
        cols_i28 = (*Y_i4_width);
        ret_i4_width = out_i28_width;
        ret_i4_height = out_i28_height;
        ret_i4_data = out_i28_data;
        // cluster_fDeepCopy_out0_rep46(): end inline
        //  cluster_fMallocHandle_rep245(rows, cols, &out); // Dead call removed by HLS DCE
        // cluster_fDeepCopy_out1_rep46(): begin inline
        //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount directive even if it has
        //  static bounds
        // cluster_fDeepCopy_out1_rep46(): end inline
        // cluster_fDeepCopy_rep40(): end inline
        // cluster_fFreeHandle_rep95(): begin inline
        int decomp_0_renamed_8_i29;
        // cluster_fFreeHandle_out0_rep102(): begin inline
        decomp_0_renamed_8_i29 = Y_i4_data != nullptr;
        // cluster_fFreeHandle_out0_rep102(): end inline
        if (decomp_0_renamed_8_i29)
        {
            // free(Y_i4_data);
        }
        // cluster_fFreeHandle_rep95(): end inline
        // cluster_usps_read_partial_out2_rep4(): end inline
    }
    X_width = ret_i4_width;
    X_height = ret_i4_height;
    X_data = ret_i4_data;
    // cluster_usps_read_partial_rep1(): end inline
    for (iter = 0; iter < iterations; iter++)
    {
#pragma HLS loop_tripcount max = 10
        // cluster_getAlphaFromTrainSet_out4(): begin inline
        // cluster_usps_read_partial_rep0(): begin inline
        int decomp_0_renamed_2_i13;
        int *temp1_i13_width;
        int *temp1_i13_height;
        float *temp1_i13_data;
        int *temp_i13_width;
        int *temp_i13_height;
        float *temp_i13_data;
        int n_i13;
        int m_i13;
        int i_i13;
        int *ADD_i13_width;
        int *ADD_i13_height;
        float *ADD_i13_data;
        int *Y_i13_width;
        int *Y_i13_height;
        float *Y_i13_data;
        int *X_i13_width;
        int *X_i13_height;
        float *X_i13_data;
        int *ret_i13_width;
        int *ret_i13_height;
        float *ret_i13_data;
        int _lit6 = 0;
        // cluster_usps_read_partial_out0_rep5(): begin inline
        int j_i30;
        int k_i30;
        decomp_0_renamed_2_i13 = _lit6 == 1;
        // cluster_usps_read_partial_out0_rep5(): end inline
        if (decomp_0_renamed_2_i13)
        {
            // cluster_usps_read_partial_out1_rep5(): begin inline
            //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount directive even if it has
            //  static bounds
            // cluster_fDeepCopy_rep11(): begin inline
            int cols_i54;
            int rows_i54;
            int *out_i54_width;
            int *out_i54_height;
            float *out_i54_data;
            int j_i54;
            int i_i54;
            // cluster_fDeepCopy_out0_rep9(): begin inline
            rows_i54 = (*X_i13_height);
            cols_i54 = (*X_i13_width);
            ret_i13_width = out_i54_width;
            ret_i13_height = out_i54_height;
            ret_i13_data = out_i54_data;
            // cluster_fDeepCopy_out0_rep9(): end inline
            //  cluster_fMallocHandle_rep44(rows, cols, &out); // Dead call removed by HLS DCE
            // cluster_fDeepCopy_out1_rep9(): begin inline
            //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount directive even if it has
            //  static bounds
            // cluster_fDeepCopy_out1_rep9(): end inline
            // cluster_fDeepCopy_rep11(): end inline
            // cluster_fFreeHandle_rep57(): begin inline
            int decomp_0_renamed_16_i55;
            // cluster_fFreeHandle_out0_rep10(): begin inline
            decomp_0_renamed_16_i55 = X_i13_data != nullptr;
            // cluster_fFreeHandle_out0_rep10(): end inline
            if (decomp_0_renamed_16_i55)
            {
                // free(X_i13_data);
            }
            // cluster_fFreeHandle_rep57(): end inline
            // cluster_usps_read_partial_out1_rep5(): end inline
        }
        else
        {
            // cluster_usps_read_partial_out2_rep5(): begin inline
            for (i_i13 = 0; i_i13 < iterations; i_i13++)
            {
#pragma HLS loop_tripcount max = 10
                // cluster_usps_read_partial_out2_out0_rep1(): begin inline
                int decomp_2_renamed_0_i56;
                int decomp_4_renamed_1_i56;
                // cluster_usps_read_partial_out2_out0_out0_rep6(): begin inline
                decomp_2_renamed_0_i56 = iter == -1;
                // cluster_usps_read_partial_out2_out0_out0_rep6(): end inline
                if (decomp_2_renamed_0_i56)
                {
                    // cluster_usps_read_partial_out2_out0_out1_rep6(): begin inline
                    // cluster_fSetArray_rep13(): begin inline
                    int i_i102;
                    int j_i102;
                    int *out_i102_width;
                    int *out_i102_height;
                    float *out_i102_data;
                    int _lit13 = 1;
                    ADD_i13_width = out_i102_width;
                    ADD_i13_height = out_i102_height;
                    ADD_i13_data = out_i102_data;
                    // cluster_fMallocHandle_rep83(rows, cols, &out); // Dead call removed by HLS DCE
                    // cluster_fSetArray_out1_rep19(): begin inline
                    // Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount directive even if
                    // it has static bounds
                    // cluster_fSetArray_out1_rep19(): end inline
                    // cluster_fSetArray_rep13(): end inline
                    // cluster_usps_read_partial_out2_out0_out1_rep6(): end inline
                }
                else
                {
                    // cluster_usps_read_partial_out2_out0_out2_rep6(): begin inline
                    int decomp_3_renamed_1_i78;
                    // cluster_usps_read_partial_out2_out0_out2_out0_rep2(): begin inline
                    decomp_3_renamed_1_i78 = i_i13 != iter;
                    // cluster_usps_read_partial_out2_out0_out2_out0_rep2(): end inline
                    if (decomp_3_renamed_1_i78)
                    {
                        // cluster_fSetArray_rep22(): begin inline
                        int i_i104;
                        int j_i104;
                        int *out_i104_width;
                        int *out_i104_height;
                        float *out_i104_data;
                        // cluster_fMallocHandle_rep93(): begin inline
                        int i_i124;
                        int j_i124;
                        int *out_i124_width;
                        int *out_i124_height;
                        float *out_i124_data;
                        out_i124_width = &memregion_1520_size4;
                        out_i124_height = &memregion_1521_size4;
                        out_i124_data = memregion_1522_size40;
#pragma clava malloc_size max = 48 min = 48 avg = 48
                        int _lit17 = 1;
                        // cluster_fMallocHandle_out1_rep95(): begin inline
                        (*out_i124_height) = (N / iterations);
                        (*out_i124_width) = _lit17;
                        out_i104_width = out_i124_width;
                        out_i104_height = out_i124_height;
                        out_i104_data = out_i124_data;
                        // cluster_fMallocHandle_out1_rep95(): end inline
                        // cluster_fMallocHandle_rep93(): end inline
                        int _lit14 = 1;
                        // cluster_fSetArray_out1_rep29(): begin inline
                        for (i_i104 = 0; i_i104 < (N / iterations); i_i104++)
                        {
#pragma HLS loop_tripcount max = 10
                            for (j_i104 = 0; j_i104 < _lit14; j_i104++)
                            {
                                int __idxExpr14 = i_i104 * (*out_i104_width) + j_i104;
#pragma HLS loop_tripcount max = 1
                                out_i104_data[__idxExpr14] = (-1);
                            }
                        }
                        ADD_i13_width = out_i104_width;
                        ADD_i13_height = out_i104_height;
                        ADD_i13_data = out_i104_data;
                        // cluster_fSetArray_out1_rep29(): end inline
                        // cluster_fSetArray_rep22(): end inline
                    }
                    else
                    {
                        // cluster_fSetArray_rep31(): begin inline
                        int i_i105;
                        int j_i105;
                        int *out_i105_width;
                        int *out_i105_height;
                        float *out_i105_data;
                        // cluster_fMallocHandle_rep103(): begin inline
                        int i_i126;
                        int j_i126;
                        int *out_i126_width;
                        int *out_i126_height;
                        float *out_i126_data;
                        out_i126_width = &memregion_1523_size4;
                        out_i126_height = &memregion_1524_size4;
                        out_i126_data = memregion_1525_size40;
#pragma clava malloc_size max = 48 min = 48 avg = 48
                        int _lit18 = 1;
                        // cluster_fMallocHandle_out1_rep106(): begin inline
                        (*out_i126_height) = (N / iterations);
                        (*out_i126_width) = _lit18;
                        out_i105_width = out_i126_width;
                        out_i105_height = out_i126_height;
                        out_i105_data = out_i126_data;
                        // cluster_fMallocHandle_out1_rep106(): end inline
                        // cluster_fMallocHandle_rep103(): end inline
                        int _lit15 = 1;
                        int _lit16 = 1;
                        // cluster_fSetArray_out1_rep39(): begin inline
                        for (i_i105 = 0; i_i105 < (N / iterations); i_i105++)
                        {
#pragma HLS loop_tripcount max = 10
                            for (j_i105 = 0; j_i105 < _lit15; j_i105++)
                            {
                                int __idxExpr15 = i_i105 * (*out_i105_width) + j_i105;
#pragma HLS loop_tripcount max = 1
                                out_i105_data[__idxExpr15] = _lit16;
                            }
                        }
                        ADD_i13_width = out_i105_width;
                        ADD_i13_height = out_i105_height;
                        ADD_i13_data = out_i105_data;
                        // cluster_fSetArray_out1_rep39(): end inline
                        // cluster_fSetArray_rep31(): end inline
                    }
                    // cluster_usps_read_partial_out2_out0_out2_rep6(): end inline
                }
                // cluster_usps_read_partial_out2_out0_out3_rep6(): begin inline
                decomp_4_renamed_1_i56 = i_i13 == 0;
                // cluster_usps_read_partial_out2_out0_out3_rep6(): end inline
                if (decomp_4_renamed_1_i56)
                {
                    // cluster_usps_read_partial_out2_out0_out4_rep6(): begin inline
                    // cluster_fDeepCopy_rep22(): begin inline
                    int cols_i106;
                    int rows_i106;
                    int *out_i106_width;
                    int *out_i106_height;
                    float *out_i106_data;
                    int j_i106;
                    int i_i106;
                    // cluster_fDeepCopy_out0_rep28(): begin inline
                    rows_i106 = (*ADD_i13_height);
                    cols_i106 = (*ADD_i13_width);
                    // cluster_fDeepCopy_out0_rep28(): end inline
                    // cluster_fMallocHandle_rep217(): begin inline
                    int i_i129;
                    int j_i129;
                    int *out_i129_width;
                    int *out_i129_height;
                    float *out_i129_data;
                    out_i129_width = &memregion_1526_size4;
                    out_i129_height = &memregion_1527_size4;
                    out_i129_data = memregion_1528_size40;
#pragma clava malloc_size max = 48 min = 48 avg = 48
                    // cluster_fMallocHandle_out1_rep231(): begin inline
                    (*out_i129_height) = rows_i106;
                    (*out_i129_width) = cols_i106;
                    out_i106_width = out_i129_width;
                    out_i106_height = out_i129_height;
                    out_i106_data = out_i129_data;
                    // cluster_fMallocHandle_out1_rep231(): end inline
                    // cluster_fMallocHandle_rep217(): end inline
                    // cluster_fDeepCopy_out1_rep28(): begin inline
                    for (i_i106 = 0; i_i106 < rows_i106; i_i106++)
                    {
#pragma HLS loop_tripcount max = 10
                        for (j_i106 = 0; j_i106 < cols_i106; j_i106++)
                        {
                            int __idxExpr16 = i_i106 * (*out_i106_width) + j_i106;
                            int __idxExpr17 = i_i106 * (*ADD_i13_width) + j_i106;
#pragma HLS loop_tripcount max = 1
                            out_i106_data[__idxExpr16] = ADD_i13_data[__idxExpr17];
                        }
                    }
                    Y_i13_width = out_i106_width;
                    Y_i13_height = out_i106_height;
                    Y_i13_data = out_i106_data;
                    // cluster_fDeepCopy_out1_rep28(): end inline
                    // cluster_fDeepCopy_rep22(): end inline
                    // cluster_usps_read_partial_out2_out0_out4_rep6(): end inline
                }
                else
                {
                    int *t_i81_width;
                    int *t_i81_height;
                    float *t_i81_data;
                    // cluster_usps_read_partial_out2_out0_out5_rep6(): begin inline
                    // cluster_fDeepCopy_rep31(): begin inline
                    int cols_i107;
                    int rows_i107;
                    int *out_i107_width;
                    int *out_i107_height;
                    float *out_i107_data;
                    int j_i107;
                    int i_i107;
                    // cluster_fDeepCopy_out0_rep38(): begin inline
                    rows_i107 = (*Y_i13_height);
                    cols_i107 = (*Y_i13_width);
                    // cluster_fDeepCopy_out0_rep38(): end inline
                    // cluster_fMallocHandle_rep227(): begin inline
                    int i_i132;
                    int j_i132;
                    int *out_i132_width;
                    int *out_i132_height;
                    float *out_i132_data;
                    out_i132_width = &memregion_1529_size4;
                    out_i132_height = &memregion_1530_size4;
                    out_i132_data = memregion_1531_size40;
#pragma clava malloc_size max = 48 min = 368 avg = 208
                    // cluster_fMallocHandle_out1_rep242(): begin inline
                    (*out_i132_height) = rows_i107;
                    (*out_i132_width) = cols_i107;
                    out_i107_width = out_i132_width;
                    out_i107_height = out_i132_height;
                    out_i107_data = out_i132_data;
                    // cluster_fMallocHandle_out1_rep242(): end inline
                    // cluster_fMallocHandle_rep227(): end inline
                    // cluster_fDeepCopy_out1_rep38(): begin inline
                    for (i_i107 = 0; i_i107 < rows_i107; i_i107++)
                    {
#pragma HLS loop_tripcount max = 90 min = 10
                        for (j_i107 = 0; j_i107 < cols_i107; j_i107++)
                        {
                            int __idxExpr18 = i_i107 * (*out_i107_width) + j_i107;
                            int __idxExpr19 = i_i107 * (*Y_i13_width) + j_i107;
#pragma HLS loop_tripcount max = 1
                            out_i107_data[__idxExpr18] = Y_i13_data[__idxExpr19];
                        }
                    }
                    t_i81_width = out_i107_width;
                    t_i81_height = out_i107_height;
                    t_i81_data = out_i107_data;
                    // cluster_fDeepCopy_out1_rep38(): end inline
                    // cluster_fDeepCopy_rep31(): end inline
                    // cluster_fFreeHandle_rep69(): begin inline
                    int decomp_0_renamed_28_i108;
                    // cluster_fFreeHandle_out0_rep75(): begin inline
                    decomp_0_renamed_28_i108 = Y_i13_data != nullptr;
                    // cluster_fFreeHandle_out0_rep75(): end inline
                    if (decomp_0_renamed_28_i108)
                    {
                        // free(Y_i13_data);
                    }
                    // cluster_fFreeHandle_rep69(): end inline
                    // cluster_ffVertcat_rep12(): begin inline
                    int k_i109;
                    int j_i109;
                    int i_i109;
                    int row2_i109;
                    int col1_i109;
                    int row1_i109;
                    int *outMatrix_i109_width;
                    int *outMatrix_i109_height;
                    float *outMatrix_i109_data;
                    // cluster_ffVertcat_out0_rep18(): begin inline
                    int col2_i135;
                    row1_i109 = (*t_i81_height);
                    col1_i109 = (*t_i81_width);
                    row2_i109 = (*ADD_i13_height);
                    col2_i135 = (*ADD_i13_width);
                    // cluster_ffVertcat_out0_rep18(): end inline
                    // cluster_fMallocHandle_rep237(): begin inline
                    int i_i136;
                    int j_i136;
                    int *out_i136_width;
                    int *out_i136_height;
                    float *out_i136_data;
                    out_i136_width = &memregion_1532_size4;
                    out_i136_height = &memregion_1533_size4;
                    out_i136_data = memregion_1534_size80;
#pragma clava malloc_size max = 88 min = 408 avg = 248
                    // cluster_fMallocHandle_out1_rep253(): begin inline
                    (*out_i136_height) = (row1_i109 + row2_i109);
                    (*out_i136_width) = col1_i109;
                    outMatrix_i109_width = out_i136_width;
                    outMatrix_i109_height = out_i136_height;
                    outMatrix_i109_data = out_i136_data;
                    // cluster_fMallocHandle_out1_rep253(): end inline
                    // cluster_fMallocHandle_rep237(): end inline
                    // cluster_ffVertcat_out1_rep18(): begin inline
                    for (i_i109 = 0; i_i109 < col1_i109; i_i109++)
                    {
#pragma HLS loop_tripcount max = 1
                        for (j_i109 = 0; j_i109 < row1_i109; j_i109++)
                        {
                            int __idxExpr20 = j_i109 * (*outMatrix_i109_width) + i_i109;
                            int __idxExpr21 = j_i109 * (*t_i81_width) + i_i109;
#pragma HLS loop_tripcount max = 90 min = 10
                            outMatrix_i109_data[__idxExpr20] = t_i81_data[__idxExpr21];
                        }
                        for (k_i109 = 0; k_i109 < row2_i109; k_i109++)
                        {
                            int __idxExpr22 = (k_i109 + row1_i109) * (*outMatrix_i109_width) + i_i109;
                            int __idxExpr23 = k_i109 * (*ADD_i13_width) + i_i109;
#pragma HLS loop_tripcount max = 10
                            outMatrix_i109_data[__idxExpr22] = ADD_i13_data[__idxExpr23];
                        }
                    }
                    Y_i13_width = outMatrix_i109_width;
                    Y_i13_height = outMatrix_i109_height;
                    Y_i13_data = outMatrix_i109_data;
                    // cluster_ffVertcat_out1_rep18(): end inline
                    // cluster_ffVertcat_rep12(): end inline
                    // cluster_fFreeHandle_rep78(): begin inline
                    int decomp_0_renamed_29_i110;
                    // cluster_fFreeHandle_out0_rep85(): begin inline
                    decomp_0_renamed_29_i110 = t_i81_data != nullptr;
                    // cluster_fFreeHandle_out0_rep85(): end inline
                    if (decomp_0_renamed_29_i110)
                    {
                        // free(t_i81_data);
                    }
                    // cluster_fFreeHandle_rep78(): end inline
                    // cluster_usps_read_partial_out2_out0_out5_rep6(): end inline
                }
                // cluster_fFreeHandle_rep91(): begin inline
                int decomp_0_renamed_22_i82;
                // cluster_fFreeHandle_out0_rep90(): begin inline
                decomp_0_renamed_22_i82 = ADD_i13_data != nullptr;
                // cluster_fFreeHandle_out0_rep90(): end inline
                if (decomp_0_renamed_22_i82)
                {
                    // free(ADD_i13_data);
                }
                // cluster_fFreeHandle_rep91(): end inline
                // cluster_usps_read_partial_out2_out0_rep1(): end inline
            }
            // cluster_fDeepCopy_rep39(): begin inline
            int cols_i57;
            int rows_i57;
            int *out_i57_width;
            int *out_i57_height;
            float *out_i57_data;
            int j_i57;
            int i_i57;
            // cluster_fDeepCopy_out0_rep47(): begin inline
            rows_i57 = (*Y_i13_height);
            cols_i57 = (*Y_i13_width);
            // cluster_fDeepCopy_out0_rep47(): end inline
            // cluster_fMallocHandle_rep246(): begin inline
            int i_i84;
            int j_i84;
            int *out_i84_width;
            int *out_i84_height;
            float *out_i84_data;
            out_i84_width = &memregion_1535_size4;
            out_i84_height = &memregion_1536_size4;
            out_i84_data = memregion_1537_size400;
#pragma clava malloc_size max = 408 min = 408 avg = 408
            // cluster_fMallocHandle_out1_rep263(): begin inline
            (*out_i84_height) = rows_i57;
            (*out_i84_width) = cols_i57;
            out_i57_width = out_i84_width;
            out_i57_height = out_i84_height;
            out_i57_data = out_i84_data;
            // cluster_fMallocHandle_out1_rep263(): end inline
            // cluster_fMallocHandle_rep246(): end inline
            // cluster_fDeepCopy_out1_rep47(): begin inline
            for (i_i57 = 0; i_i57 < rows_i57; i_i57++)
            {
#pragma HLS loop_tripcount max = 100
                for (j_i57 = 0; j_i57 < cols_i57; j_i57++)
                {
                    int __idxExpr24 = i_i57 * (*out_i57_width) + j_i57;
                    int __idxExpr25 = i_i57 * (*Y_i13_width) + j_i57;
#pragma HLS loop_tripcount max = 1
                    out_i57_data[__idxExpr24] = Y_i13_data[__idxExpr25];
                }
            }
            ret_i13_width = out_i57_width;
            ret_i13_height = out_i57_height;
            ret_i13_data = out_i57_data;
            // cluster_fDeepCopy_out1_rep47(): end inline
            // cluster_fDeepCopy_rep39(): end inline
            // cluster_fFreeHandle_rep94(): begin inline
            int decomp_0_renamed_17_i58;
            // cluster_fFreeHandle_out0_rep103(): begin inline
            decomp_0_renamed_17_i58 = Y_i13_data != nullptr;
            // cluster_fFreeHandle_out0_rep103(): end inline
            if (decomp_0_renamed_17_i58)
            {
                // free(Y_i13_data);
            }
            // cluster_fFreeHandle_rep94(): end inline
            // cluster_usps_read_partial_out2_rep5(): end inline
        }
        Y_width = ret_i13_width;
        Y_height = ret_i13_height;
        Y_data = ret_i13_data;
        // cluster_usps_read_partial_rep0(): end inline
        // cluster_fSetArray_rep0(): begin inline
        int i_i14;
        int j_i14;
        int *out_i14_width;
        int *out_i14_height;
        float *out_i14_data;
        // cluster_fMallocHandle_rep16(): begin inline
        int i_i33;
        int j_i33;
        int *out_i33_width;
        int *out_i33_height;
        float *out_i33_data;
        out_i33_width = &memregion_1538_size4;
        out_i33_height = &memregion_1539_size4;
        out_i33_data = memregion_1540_size400;
#pragma clava malloc_size max = 408 min = 408 avg = 408
        int _lit11 = 1;
        // cluster_fMallocHandle_out1_rep10(): begin inline
        (*out_i33_height) = N;
        (*out_i33_width) = _lit11;
        out_i14_width = out_i33_width;
        out_i14_height = out_i33_height;
        out_i14_data = out_i33_data;
        // cluster_fMallocHandle_out1_rep10(): end inline
        // cluster_fMallocHandle_rep16(): end inline
        int _lit7 = 1;
        int _lit8 = 0;
        // cluster_fSetArray_out1_rep11(): begin inline
        for (i_i14 = 0; i_i14 < N; i_i14++)
        {
#pragma HLS loop_tripcount max = 100
            for (j_i14 = 0; j_i14 < _lit7; j_i14++)
            {
                int __idxExpr26 = i_i14 * (*out_i14_width) + j_i14;
#pragma HLS loop_tripcount max = 1
                out_i14_data[__idxExpr26] = _lit8;
            }
        }
        a_width = out_i14_width;
        a_height = out_i14_height;
        a_data = out_i14_data;
        // cluster_fSetArray_out1_rep11(): end inline
        // cluster_fSetArray_rep0(): end inline
        // cluster_getAlphaFromTrainSet_out4_out0(): begin inline
        b[0] = 0;
        // cluster_getAlphaFromTrainSet_out4_out0(): end inline
        // cluster_fSetArray_rep1(): begin inline
        int i_i16;
        int j_i16;
        int *out_i16_width;
        int *out_i16_height;
        float *out_i16_data;
        // cluster_fMallocHandle_rep15(): begin inline
        int i_i35;
        int j_i35;
        int *out_i35_width;
        int *out_i35_height;
        float *out_i35_data;
        out_i35_width = &memregion_1541_size4;
        out_i35_height = &memregion_1542_size4;
        out_i35_data = memregion_1543_size400;
#pragma clava malloc_size max = 408 min = 408 avg = 408
        int _lit12 = 1;
        // cluster_fMallocHandle_out1_rep11(): begin inline
        (*out_i35_height) = N;
        (*out_i35_width) = _lit12;
        out_i16_width = out_i35_width;
        out_i16_height = out_i35_height;
        out_i16_data = out_i35_data;
        // cluster_fMallocHandle_out1_rep11(): end inline
        // cluster_fMallocHandle_rep15(): end inline
        int _lit9 = 1;
        int _lit10 = 0;
        // cluster_fSetArray_out1_rep10(): begin inline
        for (i_i16 = 0; i_i16 < N; i_i16++)
        {
#pragma HLS loop_tripcount max = 100
            for (j_i16 = 0; j_i16 < _lit9; j_i16++)
            {
                int __idxExpr27 = i_i16 * (*out_i16_width) + j_i16;
#pragma HLS loop_tripcount max = 1
                out_i16_data[__idxExpr27] = _lit10;
            }
        }
        e_width = out_i16_width;
        e_height = out_i16_height;
        e_data = out_i16_data;
        // cluster_fSetArray_out1_rep10(): end inline
        // cluster_fSetArray_rep1(): end inline
        // cluster_getAlphaFromTrainSet_out4_out1(): begin inline
        ExamineAll = 1;
        cnt = 0;
        NumChanged = 0;
        // cluster_getAlphaFromTrainSet_out4_out1(): end inline
        while (NumChanged > 0 || ExamineAll == 1)
        {
#pragma HLS loop_tripcount max = 9 min = 5
            // cluster_getAlphaFromTrainSet_out4_out2(): begin inline
            int decomp_0_renamed_3_i18;
            // cluster_getAlphaFromTrainSet_out4_out2_out0(): begin inline
            cnt = cnt + 1;
            NumChanged = 0;
            decomp_0_renamed_3_i18 = ExamineAll == 1;
            // cluster_getAlphaFromTrainSet_out4_out2_out0(): end inline
            if (decomp_0_renamed_3_i18)
            {
                // cluster_getAlphaFromTrainSet_out4_out2_out1(): begin inline
                for (i = 0; i < N; i++)
                {
#pragma HLS loop_tripcount max = 100
                    // cluster_getAlphaFromTrainSet_out4_out2_out1_out0(): begin inline
                    // cluster_examineExample_rep0(): begin inline
                    int decomp_0_renamed_24_i87;
                    float temp_i87;
                    float maxDiff_i87;
                    float randVal_i87;
                    float r1_i87;
                    float E_i87;
                    int k_i87;
                    int j_i87;
                    int ret_i87;
                    int decomp_1_renamed_2_i87;
                    // cluster_examineExample_out0_rep2(): begin inline
                    int m_i113;
                    int n_i113;
                    decomp_0_renamed_24_i87 = (a_data[i] > 0) && (a_data[i] < C);
                    // cluster_examineExample_out0_rep2(): end inline
                    if (decomp_0_renamed_24_i87)
                    {
                        // cluster_examineExample_out1_rep2(): begin inline
                        E_i87 = e_data[i];
                        // cluster_examineExample_out1_rep2(): end inline
                    }
                    else
                    {
                        // cluster_examineExample_out2_rep2(): begin inline
                        float _d1_0_i115;
                        int *temp1_i139_width;
                        int *temp1_i139_height;
                        float *temp1_i139_data;
                        // cluster_cal_learned_func_rep1(): begin inline
                        int *temp_i139_width;
                        int *temp_i139_height;
                        float *temp_i139_data;
                        int m_i139;
                        int i_i139;
                        float ret_i139;
                        float s_i139;
                        // cluster_cal_learned_func_out0_rep5(): begin inline
                        int j_i157;
                        int n_i157;
                        s_i139 = 0;
                        // cluster_cal_learned_func_out0_rep5(): end inline
                        for (i_i139 = 0; i_i139 < N; i_i139++)
                        {
#pragma HLS loop_tripcount max = 100
                            // cluster_cal_learned_func_out1_rep5(): begin inline
                            int decomp_0_renamed_36_i158;
                            int __idxExpr28 = i_i139 * (*a_width) + 0;
                            // cluster_cal_learned_func_out1_out0_rep2(): begin inline
                            decomp_0_renamed_36_i158 = a_data[__idxExpr28] > 0;
                            // cluster_cal_learned_func_out1_out0_rep2(): end inline
                            if (decomp_0_renamed_36_i158)
                            {
                                // cluster_cal_learned_func_out1_out1_rep2(): begin inline
                                float _d2_1_i244;
                                float _d2_0_i244;
                                // cluster_fMallocHandle_rep112(): begin inline
                                int i_i415;
                                int j_i415;
                                int *out_i415_width;
                                int *out_i415_height;
                                float *out_i415_data;
                                out_i415_width = &memregion_1544_size4;
                                out_i415_height = &memregion_1545_size4;
                                out_i415_data = memregion_1546_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                int _lit46 = 1;
                                // cluster_fMallocHandle_out1_rep117(): begin inline
                                (*out_i415_height) = _lit46;
                                (*out_i415_width) = (*X_width);
                                temp_i139_width = out_i415_width;
                                temp_i139_height = out_i415_height;
                                temp_i139_data = out_i415_data;
                                // cluster_fMallocHandle_out1_rep117(): end inline
                                // cluster_fMallocHandle_rep112(): end inline
                                // cluster_fMallocHandle_rep121(): begin inline
                                int i_i416;
                                int j_i416;
                                int *out_i416_width;
                                int *out_i416_height;
                                float *out_i416_data;
                                out_i416_width = &memregion_1547_size4;
                                out_i416_height = &memregion_1548_size4;
                                out_i416_data = memregion_1549_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                int _lit47 = 1;
                                // cluster_fMallocHandle_out1_rep127(): begin inline
                                (*out_i416_height) = _lit47;
                                (*out_i416_width) = (*X_width);
                                temp1_i139_width = out_i416_width;
                                temp1_i139_height = out_i416_height;
                                temp1_i139_data = out_i416_data;
                                // cluster_fMallocHandle_out1_rep127(): end inline
                                // cluster_fMallocHandle_rep121(): end inline
                                // cluster_cal_learned_func_out1_out1_out0_rep6(): begin inline
                                for (m_i139 = 0; m_i139 < (*X_width); m_i139++)
                                {
                                    int __idxExpr29 = i_i139 * (*X_width) + m_i139;
#pragma HLS loop_tripcount max = 256
                                    temp_i139_data[m_i139] = X_data[__idxExpr29];
                                    int __idxExpr30 = i * (*X_width) + m_i139;
                                    temp1_i139_data[m_i139] = X_data[__idxExpr30];
                                }
                                _d2_0_i244 = a_data[i_i139] * Y_data[i_i139];
                                // cluster_cal_learned_func_out1_out1_out0_rep6(): end inline
                                // cluster_polynomial_rep6(): begin inline
                                int c_i418;
                                int r_i418;
                                int j_i418;
                                int i_i418;
                                int *bt1_i418_width;
                                int *bt1_i418_height;
                                float *bt1_i418_data;
                                int *bt_i418_width;
                                int *bt_i418_height;
                                float *bt_i418_data;
                                float ret_i418;
                                int decomp_2_renamed_26_i418;
                                // cluster_polynomial_out0_rep9(): begin inline
                                r_i418 = (*temp1_i139_height);
                                c_i418 = (*temp1_i139_width);
                                // cluster_polynomial_out0_rep9(): end inline
                                // cluster_fMallocHandle_rep133(): begin inline
                                int i_i579;
                                int j_i579;
                                int *out_i579_width;
                                int *out_i579_height;
                                float *out_i579_data;
                                out_i579_width = &memregion_1550_size4;
                                out_i579_height = &memregion_1551_size4;
                                out_i579_data = memregion_1552_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                // cluster_fMallocHandle_out1_rep141(): begin inline
                                (*out_i579_height) = c_i418;
                                (*out_i579_width) = r_i418;
                                bt_i418_width = out_i579_width;
                                bt_i418_height = out_i579_height;
                                bt_i418_data = out_i579_data;
                                // cluster_fMallocHandle_out1_rep141(): end inline
                                // cluster_fMallocHandle_rep133(): end inline
                                // cluster_polynomial_out1_rep9(): begin inline
                                for (i_i418 = 0; i_i418 < r_i418; i_i418++)
                                {
#pragma HLS loop_tripcount max = 1
                                    for (j_i418 = 0; j_i418 < c_i418; j_i418++)
                                    {
                                        int __idxExpr31 = j_i418 * (*bt_i418_width) + i_i418;
                                        int __idxExpr32 = i_i418 * (*temp1_i139_width) + j_i418;
#pragma HLS loop_tripcount max = 256
                                        bt_i418_data[__idxExpr31] = temp1_i139_data[__idxExpr32];
                                    }
                                }
                                // cluster_polynomial_out1_rep9(): end inline
                                // cluster_fMtimes_rep9(): begin inline
                                float temp_i581;
                                int k_i581;
                                int j_i581;
                                int i_i581;
                                int n_i581;
                                int p_i581;
                                int m_i581;
                                int *out_i581_width;
                                int *out_i581_height;
                                float *out_i581_data;
                                // cluster_fMtimes_out0_rep7(): begin inline
                                int p1_i693;
                                m_i581 = (*temp_i139_height);
                                p_i581 = (*temp_i139_width);
                                p1_i693 = (*bt_i418_height);
                                n_i581 = (*bt_i418_width);
                                // cluster_fMtimes_out0_rep7(): end inline
                                // cluster_fMallocHandle_rep147(): begin inline
                                int i_i694;
                                int j_i694;
                                int *out_i694_width;
                                int *out_i694_height;
                                float *out_i694_data;
                                out_i694_width = &memregion_1553_size4;
                                out_i694_height = &memregion_1554_size4;
                                out_i694_data = &memregion_1555_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                                // cluster_fMallocHandle_out1_rep161(): begin inline
                                (*out_i694_height) = m_i581;
                                (*out_i694_width) = n_i581;
                                out_i581_width = out_i694_width;
                                out_i581_height = out_i694_height;
                                out_i581_data = out_i694_data;
                                // cluster_fMallocHandle_out1_rep161(): end inline
                                // cluster_fMallocHandle_rep147(): end inline
                                // cluster_fMtimes_out1_rep7(): begin inline
                                for (i_i581 = 0; i_i581 < m_i581; i_i581++)
                                {
#pragma HLS loop_tripcount max = 1
                                    for (j_i581 = 0; j_i581 < n_i581; j_i581++)
                                    {
#pragma HLS loop_tripcount max = 1
                                        temp_i581 = 0;
                                        for (k_i581 = 0; k_i581 < p_i581; k_i581++)
                                        {
                                            int __idxExpr33 = k_i581 * (*bt_i418_width) + j_i581;
                                            int __idxExpr34 = i_i581 * (*temp_i139_width) + k_i581;
#pragma HLS loop_tripcount max = 256
                                            temp_i581 =
                                                temp_i581 + bt_i418_data[__idxExpr33] * temp_i139_data[__idxExpr34];
                                        }
                                        int __idxExpr35 = i_i581 * (*out_i581_width) + j_i581;
                                        out_i581_data[__idxExpr35] = temp_i581;
                                    }
                                }
                                bt1_i418_width = out_i581_width;
                                bt1_i418_height = out_i581_height;
                                bt1_i418_data = out_i581_data;
                                // cluster_fMtimes_out1_rep7(): end inline
                                // cluster_fMtimes_rep9(): end inline
                                // cluster_fFreeHandle_rep109(): begin inline
                                int decomp_0_renamed_159_i582;
                                // cluster_fFreeHandle_out0_rep112(): begin inline
                                decomp_0_renamed_159_i582 = bt_i418_data != nullptr;
                                // cluster_fFreeHandle_out0_rep112(): end inline
                                if (decomp_0_renamed_159_i582)
                                {
                                    // free(bt_i418_data);
                                }
                                // cluster_fFreeHandle_rep109(): end inline
                                // cluster_polynomial_out2_rep9(): begin inline
                                int decomp_0_renamed_160_i583;
                                int decomp_1_renamed_23_i583;
                                decomp_0_renamed_160_i583 = (*bt1_i418_height) == 1;
                                decomp_1_renamed_23_i583 = (*bt1_i418_width) == 1;
                                decomp_2_renamed_26_i418 = decomp_0_renamed_160_i583 && decomp_1_renamed_23_i583;
                                // cluster_polynomial_out2_rep9(): end inline
                                if (decomp_2_renamed_26_i418)
                                {
                                    int _lit48 = 3;
                                    // cluster_polynomial_out3_rep9(): begin inline
                                    double _d3_0_i584;
                                    double _d3_1_i584;
                                    _d3_0_i584 = pow(bt1_i418_data[0], _lit48);
                                    _d3_1_i584 = _d3_0_i584 / dim;
                                    ret_i418 = _d3_1_i584;
                                    // cluster_polynomial_out3_rep9(): end inline
                                }
                                else
                                {
                                    float __rtr_val_1_i418;
                                    int __rtr_flag_1_i418;
                                    __rtr_flag_1_i418 = 0;
                                    // cluster_polynomial_out4_rep9(): begin inline
                                    // cluster_fFreeHandle_rep123(): begin inline
                                    int decomp_0_renamed_207_i697;
                                    // cluster_fFreeHandle_out0_rep132(): begin inline
                                    decomp_0_renamed_207_i697 = bt1_i418_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep132(): end inline
                                    if (decomp_0_renamed_207_i697)
                                    {
                                        // free(bt1_i418_data);
                                    }
                                    // cluster_fFreeHandle_rep123(): end inline
                                    __rtr_val_1_i418 = -1;
                                    __rtr_flag_1_i418 = 1;
                                    // cluster_polynomial_out4_rep9(): end inline
                                    if (__rtr_flag_1_i418)
                                    {
                                        _d2_1_i244 = __rtr_val_1_i418;
                                        goto end_inline_i418;
                                    }
                                }
                                // cluster_fFreeHandle_rep142(): begin inline
                                int decomp_0_renamed_161_i586;
                                // cluster_fFreeHandle_out0_rep147(): begin inline
                                decomp_0_renamed_161_i586 = bt1_i418_data != nullptr;
                                // cluster_fFreeHandle_out0_rep147(): end inline
                                if (decomp_0_renamed_161_i586)
                                {
                                    // free(bt1_i418_data);
                                }
                                // cluster_fFreeHandle_rep142(): end inline
                                _d2_1_i244 = ret_i418;
                            end_inline_i418:;
                                // cluster_polynomial_rep6(): end inline
                                // cluster_cal_learned_func_out1_out1_out1_rep6(): begin inline
                                float _d2_2_i419;
                                float _d2_3_i419;
                                _d2_2_i419 = _d2_0_i244 * _d2_1_i244;
                                _d2_3_i419 = s_i139 + _d2_2_i419;
                                s_i139 = _d2_3_i419;
                                // free(temp_i139_data);
                                // free(temp1_i139_data);
                                //  cluster_cal_learned_func_out1_out1_out1_rep6(): end inline
                                //  cluster_cal_learned_func_out1_out1_rep2(): end inline
                            }
                            // cluster_cal_learned_func_out1_rep5(): end inline
                        }
                        // cluster_cal_learned_func_out2_rep5(): begin inline
                        s_i139 = s_i139 - b[0];
                        ret_i139 = s_i139;
                        // cluster_cal_learned_func_out2_rep5(): end inline
                        _d1_0_i115 = ret_i139;
                        // cluster_cal_learned_func_rep1(): end inline
                        // cluster_examineExample_out2_out1_rep1(): begin inline
                        float _d1_1_i140;
                        _d1_1_i140 = _d1_0_i115 - Y_data[i];
                        E_i87 = _d1_1_i140;
                        // cluster_examineExample_out2_out1_rep1(): end inline
                        // cluster_examineExample_out2_rep2(): end inline
                    }
                    int __idxExpr36 = i * (*Y_width) + 0;
                    // cluster_examineExample_out3_rep2(): begin inline
                    r1_i87 = Y_data[__idxExpr36] * E_i87;
                    decomp_1_renamed_2_i87 =
                        ((r1_i87 < (-1 * tolerance)) && (a_data[i] < C)) || ((r1_i87 > tolerance) && (a_data[i] > 0));
                    // cluster_examineExample_out3_rep2(): end inline
                    if (decomp_1_renamed_2_i87)
                    {
                        int __rtr_val_0_i87;
                        int __rtr_flag_0_i87;
                        __rtr_flag_0_i87 = 0;
                        // cluster_examineExample_out4_rep2(): begin inline
                        int decomp_4_renamed_3_i117;
                        // cluster_examineExample_out4_out0_rep1(): begin inline
                        maxDiff_i87 = 0;
                        j_i87 = i;
                        for (k_i87 = 0; k_i87 < N; k_i87++)
                        {
#pragma HLS loop_tripcount max = 100
                            int decomp_2_renamed_3_i141;
                            decomp_2_renamed_3_i141 = (a_data[k_i87] > 0) && (a_data[k_i87] < C);
                            if (decomp_2_renamed_3_i141)
                            {
                                int decomp_3_renamed_4_i141;
                                temp_i87 = fabsf(E_i87 - e_data[k_i87]);
                                decomp_3_renamed_4_i141 = temp_i87 > maxDiff_i87;
                                if (decomp_3_renamed_4_i141)
                                {
                                    j_i87 = k_i87;
                                }
                            }
                        }
                        decomp_4_renamed_3_i117 = i != j_i87;
                        // cluster_examineExample_out4_out0_rep1(): end inline
                        if (decomp_4_renamed_3_i117)
                        {
                            int decomp_5_renamed_1_i117;
                            // cluster_takeStep_rep3(): begin inline
                            int __rtr_flag_2_i142;
                            __rtr_flag_2_i142 = 0;
                            int __rtr_val_2_i142;
                            int ret_i142;
                            float s_i142;
                            int m_i142;
                            int k_i142;
                            float Ei_i142;
                            float Ej_i142;
                            float gamma_i142;
                            float L_i142;
                            float H_i142;
                            int *a_old_i142_width;
                            int *a_old_i142_height;
                            float *a_old_i142_data;
                            float k11_i142;
                            float k12_i142;
                            float k22_i142;
                            float eta_i142;
                            int *temp_i142_width;
                            int *temp_i142_height;
                            float *temp_i142_data;
                            int *temp1_i142_width;
                            int *temp1_i142_height;
                            float *temp1_i142_data;
                            int *temp2_i142_width;
                            int *temp2_i142_height;
                            float *temp2_i142_data;
                            float t_i142;
                            float t1_i142;
                            float t2_i142;
                            float bnew_i142;
                            float delta_b_i142;
                            float c1_i142;
                            float c2_i142;
                            float Lobj_i142;
                            float Hobj_i142;
                            int __rtr_val_5_i142;
                            int __rtr_flag_5_i142;
                            __rtr_flag_5_i142 = 0;
                            int __rtr_flag_6_i142;
                            __rtr_flag_6_i142 = 0;
                            int __rtr_val_6_i142;
                            int __rtr_val_7_i142;
                            int __rtr_flag_7_i142;
                            __rtr_flag_7_i142 = 0;
                            int __rtr_flag_8_i142;
                            __rtr_flag_8_i142 = 0;
                            int __rtr_val_8_i142;
                            int __rtr_val_9_i142;
                            int __rtr_flag_9_i142;
                            __rtr_flag_9_i142 = 0;
                            int __rtr_flag_10_i142;
                            __rtr_flag_10_i142 = 0;
                            int __rtr_val_10_i142;
                            int __rtr_val_11_i142;
                            int __rtr_flag_11_i142;
                            __rtr_flag_11_i142 = 0;
                            int decomp_3_renamed_5_i142;
                            int decomp_6_renamed_0_i142;
                            int decomp_10_renamed_0_i142;
                            int decomp_18_renamed_0_i142;
                            // cluster_takeStep_out0_rep6(): begin inline
                            int n_i160;
                            int decomp_0_renamed_37_i160;
                            ret_i142 = 1;
                            decomp_0_renamed_37_i160 = i == j_i87;
                            if (decomp_0_renamed_37_i160)
                            {
                                __rtr_val_2_i142 = 0;
                                __rtr_flag_2_i142 = 1;
                                goto end_inline_i160;
                            }
                        end_inline_i160:;
                            // cluster_takeStep_out0_rep6(): end inline
                            // cluster_takeStep_out17_rep6(): begin inline
                            if (__rtr_flag_2_i142)
                            {
                                __rtr_val_5_i142 = __rtr_val_2_i142;
                                __rtr_flag_5_i142 = 1;
                                goto end_inline_i161;
                            }
                        end_inline_i161:;
                            // cluster_takeStep_out17_rep6(): end inline
                            // cluster_takeStep_out24_rep6(): begin inline
                            if (__rtr_flag_5_i142)
                            {
                                __rtr_val_6_i142 = __rtr_val_5_i142;
                                __rtr_flag_6_i142 = 1;
                                goto end_inline_i162;
                            }
                        end_inline_i162:;
                            // cluster_takeStep_out24_rep6(): end inline
                            // cluster_takeStep_out32_rep6(): begin inline
                            if (__rtr_flag_6_i142)
                            {
                                __rtr_val_7_i142 = __rtr_val_6_i142;
                                __rtr_flag_7_i142 = 1;
                                goto end_inline_i163;
                            }
                        end_inline_i163:;
                            // cluster_takeStep_out32_rep6(): end inline
                            // cluster_takeStep_out41_rep6(): begin inline
                            if (__rtr_flag_7_i142)
                            {
                                __rtr_val_8_i142 = __rtr_val_7_i142;
                                __rtr_flag_8_i142 = 1;
                                goto end_inline_i164;
                            }
                        end_inline_i164:;
                            // cluster_takeStep_out41_rep6(): end inline
                            // cluster_takeStep_out51_rep6(): begin inline
                            if (__rtr_flag_8_i142)
                            {
                                __rtr_val_9_i142 = __rtr_val_8_i142;
                                __rtr_flag_9_i142 = 1;
                                goto end_inline_i165;
                            }
                        end_inline_i165:;
                            // cluster_takeStep_out51_rep6(): end inline
                            // cluster_takeStep_out62_rep6(): begin inline
                            if (__rtr_flag_9_i142)
                            {
                                __rtr_val_10_i142 = __rtr_val_9_i142;
                                __rtr_flag_10_i142 = 1;
                                goto end_inline_i166;
                            }
                        end_inline_i166:;
                            // cluster_takeStep_out62_rep6(): end inline
                            // cluster_takeStep_out74_rep6(): begin inline
                            if (__rtr_flag_10_i142)
                            {
                                __rtr_val_11_i142 = __rtr_val_10_i142;
                                __rtr_flag_11_i142 = 1;
                                goto end_inline_i167;
                            }
                        end_inline_i167:;
                            // cluster_takeStep_out74_rep6(): end inline
                            if (__rtr_flag_11_i142)
                            {
                                ret_i87 = __rtr_val_11_i142;
                                goto end_inline_i142;
                            }
                            // cluster_fDeepCopy_rep51(): begin inline
                            int cols_i168;
                            int rows_i168;
                            int *out_i168_width;
                            int *out_i168_height;
                            float *out_i168_data;
                            int j_i168;
                            int i_i168;
                            // cluster_fDeepCopy_out0_rep53(): begin inline
                            rows_i168 = (*a_height);
                            cols_i168 = (*a_width);
                            // cluster_fDeepCopy_out0_rep53(): end inline
                            // cluster_fMallocHandle_rep252(): begin inline
                            int i_i246;
                            int j_i246;
                            int *out_i246_width;
                            int *out_i246_height;
                            float *out_i246_data;
                            out_i246_width = &memregion_1556_size4;
                            out_i246_height = &memregion_1557_size4;
                            out_i246_data = memregion_1558_size400;
#pragma clava malloc_size max = 408 min = 408 avg = 408
                            // cluster_fMallocHandle_out1_rep277(): begin inline
                            (*out_i246_height) = rows_i168;
                            (*out_i246_width) = cols_i168;
                            out_i168_width = out_i246_width;
                            out_i168_height = out_i246_height;
                            out_i168_data = out_i246_data;
                            // cluster_fMallocHandle_out1_rep277(): end inline
                            // cluster_fMallocHandle_rep252(): end inline
                            // cluster_fDeepCopy_out1_rep53(): begin inline
                            for (i_i168 = 0; i_i168 < rows_i168; i_i168++)
                            {
#pragma HLS loop_tripcount max = 100
                                for (j_i168 = 0; j_i168 < cols_i168; j_i168++)
                                {
                                    int __idxExpr37 = i_i168 * (*out_i168_width) + j_i168;
                                    int __idxExpr38 = i_i168 * (*a_width) + j_i168;
#pragma HLS loop_tripcount max = 1
                                    out_i168_data[__idxExpr37] = a_data[__idxExpr38];
                                }
                            }
                            a_old_i142_width = out_i168_width;
                            a_old_i142_height = out_i168_height;
                            a_old_i142_data = out_i168_data;
                            // cluster_fDeepCopy_out1_rep53(): end inline
                            // cluster_fDeepCopy_rep51(): end inline
                            // cluster_takeStep_out1_rep6(): begin inline
                            int decomp_1_renamed_7_i169;
                            int decomp_2_renamed_4_i169;
                            decomp_1_renamed_7_i169 = a_old_i142_data[i] > 0;
                            decomp_2_renamed_4_i169 = a_old_i142_data[i] < C;
                            decomp_3_renamed_5_i142 = decomp_1_renamed_7_i169 && decomp_2_renamed_4_i169;
                            // cluster_takeStep_out1_rep6(): end inline
                            if (decomp_3_renamed_5_i142)
                            {
                                // cluster_takeStep_out2_rep6(): begin inline
                                Ei_i142 = e_data[i];
                                // cluster_takeStep_out2_rep6(): end inline
                            }
                            else
                            {
                                // cluster_takeStep_out3_rep6(): begin inline
                                float _d4_0_i171;
                                int *temp1_i248_width;
                                int *temp1_i248_height;
                                float *temp1_i248_data;
                                // cluster_cal_learned_func_rep10(): begin inline
                                int *temp_i248_width;
                                int *temp_i248_height;
                                float *temp_i248_data;
                                int m_i248;
                                int i_i248;
                                float ret_i248;
                                float s_i248;
                                // cluster_cal_learned_func_out0_rep14(): begin inline
                                int j_i421;
                                int n_i421;
                                s_i248 = 0;
                                // cluster_cal_learned_func_out0_rep14(): end inline
                                for (i_i248 = 0; i_i248 < N; i_i248++)
                                {
#pragma HLS loop_tripcount max = 100
                                    // cluster_cal_learned_func_out1_rep14(): begin inline
                                    int decomp_0_renamed_100_i422;
                                    int __idxExpr39 = i_i248 * (*a_width) + 0;
                                    // cluster_cal_learned_func_out1_out0_rep13(): begin inline
                                    decomp_0_renamed_100_i422 = a_data[__idxExpr39] > 0;
                                    // cluster_cal_learned_func_out1_out0_rep13(): end inline
                                    if (decomp_0_renamed_100_i422)
                                    {
                                        // cluster_cal_learned_func_out1_out1_rep13(): begin inline
                                        float _d2_1_i588;
                                        float _d2_0_i588;
                                        // cluster_fMallocHandle_rep267(): begin inline
                                        int i_i699;
                                        int j_i699;
                                        int *out_i699_width;
                                        int *out_i699_height;
                                        float *out_i699_data;
                                        out_i699_width = &memregion_1559_size4;
                                        out_i699_height = &memregion_1560_size4;
                                        out_i699_data = memregion_1561_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                        int _lit55 = 1;
                                        // cluster_fMallocHandle_out1_rep288(): begin inline
                                        (*out_i699_height) = _lit55;
                                        (*out_i699_width) = (*X_width);
                                        temp_i248_width = out_i699_width;
                                        temp_i248_height = out_i699_height;
                                        temp_i248_data = out_i699_data;
                                        // cluster_fMallocHandle_out1_rep288(): end inline
                                        // cluster_fMallocHandle_rep267(): end inline
                                        // cluster_fMallocHandle_rep281(): begin inline
                                        int i_i700;
                                        int j_i700;
                                        int *out_i700_width;
                                        int *out_i700_height;
                                        float *out_i700_data;
                                        out_i700_width = &memregion_1562_size4;
                                        out_i700_height = &memregion_1563_size4;
                                        out_i700_data = memregion_1564_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                        int _lit56 = 1;
                                        // cluster_fMallocHandle_out1_rep303(): begin inline
                                        (*out_i700_height) = _lit56;
                                        (*out_i700_width) = (*X_width);
                                        temp1_i248_width = out_i700_width;
                                        temp1_i248_height = out_i700_height;
                                        temp1_i248_data = out_i700_data;
                                        // cluster_fMallocHandle_out1_rep303(): end inline
                                        // cluster_fMallocHandle_rep281(): end inline
                                        // cluster_cal_learned_func_out1_out1_out0_rep17(): begin inline
                                        for (m_i248 = 0; m_i248 < (*X_width); m_i248++)
                                        {
                                            int __idxExpr40 = i_i248 * (*X_width) + m_i248;
#pragma HLS loop_tripcount max = 256
                                            temp_i248_data[m_i248] = X_data[__idxExpr40];
                                            int __idxExpr41 = i * (*X_width) + m_i248;
                                            temp1_i248_data[m_i248] = X_data[__idxExpr41];
                                        }
                                        _d2_0_i588 = a_data[i_i248] * Y_data[i_i248];
                                        // cluster_cal_learned_func_out1_out1_out0_rep17(): end inline
                                        // cluster_polynomial_rep23(): begin inline
                                        int c_i702;
                                        int r_i702;
                                        int j_i702;
                                        int i_i702;
                                        int *bt1_i702_width;
                                        int *bt1_i702_height;
                                        float *bt1_i702_data;
                                        int *bt_i702_width;
                                        int *bt_i702_height;
                                        float *bt_i702_data;
                                        float ret_i702;
                                        int decomp_2_renamed_44_i702;
                                        // cluster_polynomial_out0_rep22(): begin inline
                                        r_i702 = (*temp1_i248_height);
                                        c_i702 = (*temp1_i248_width);
                                        // cluster_polynomial_out0_rep22(): end inline
                                        // cluster_fMallocHandle_rep293(): begin inline
                                        int i_i766;
                                        int j_i766;
                                        int *out_i766_width;
                                        int *out_i766_height;
                                        float *out_i766_data;
                                        out_i766_width = &memregion_1565_size4;
                                        out_i766_height = &memregion_1566_size4;
                                        out_i766_data = memregion_1567_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                        // cluster_fMallocHandle_out1_rep321(): begin inline
                                        (*out_i766_height) = c_i702;
                                        (*out_i766_width) = r_i702;
                                        bt_i702_width = out_i766_width;
                                        bt_i702_height = out_i766_height;
                                        bt_i702_data = out_i766_data;
                                        // cluster_fMallocHandle_out1_rep321(): end inline
                                        // cluster_fMallocHandle_rep293(): end inline
                                        // cluster_polynomial_out1_rep22(): begin inline
                                        for (i_i702 = 0; i_i702 < r_i702; i_i702++)
                                        {
#pragma HLS loop_tripcount max = 1
                                            for (j_i702 = 0; j_i702 < c_i702; j_i702++)
                                            {
                                                int __idxExpr42 = j_i702 * (*bt_i702_width) + i_i702;
                                                int __idxExpr43 = i_i702 * (*temp1_i248_width) + j_i702;
#pragma HLS loop_tripcount max = 256
                                                bt_i702_data[__idxExpr42] = temp1_i248_data[__idxExpr43];
                                            }
                                        }
                                        // cluster_polynomial_out1_rep22(): end inline
                                        // cluster_fMtimes_rep22(): begin inline
                                        float temp_i768;
                                        int k_i768;
                                        int j_i768;
                                        int i_i768;
                                        int n_i768;
                                        int p_i768;
                                        int m_i768;
                                        int *out_i768_width;
                                        int *out_i768_height;
                                        float *out_i768_data;
                                        // cluster_fMtimes_out0_rep26(): begin inline
                                        int p1_i816;
                                        m_i768 = (*temp_i248_height);
                                        p_i768 = (*temp_i248_width);
                                        p1_i816 = (*bt_i702_height);
                                        n_i768 = (*bt_i702_width);
                                        // cluster_fMtimes_out0_rep26(): end inline
                                        // cluster_fMallocHandle_rep311(): begin inline
                                        int i_i817;
                                        int j_i817;
                                        int *out_i817_width;
                                        int *out_i817_height;
                                        float *out_i817_data;
                                        out_i817_width = &memregion_1568_size4;
                                        out_i817_height = &memregion_1569_size4;
                                        out_i817_data = &memregion_1570_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                                        // cluster_fMallocHandle_out1_rep335(): begin inline
                                        (*out_i817_height) = m_i768;
                                        (*out_i817_width) = n_i768;
                                        out_i768_width = out_i817_width;
                                        out_i768_height = out_i817_height;
                                        out_i768_data = out_i817_data;
                                        // cluster_fMallocHandle_out1_rep335(): end inline
                                        // cluster_fMallocHandle_rep311(): end inline
                                        // cluster_fMtimes_out1_rep26(): begin inline
                                        for (i_i768 = 0; i_i768 < m_i768; i_i768++)
                                        {
#pragma HLS loop_tripcount max = 1
                                            for (j_i768 = 0; j_i768 < n_i768; j_i768++)
                                            {
#pragma HLS loop_tripcount max = 1
                                                temp_i768 = 0;
                                                for (k_i768 = 0; k_i768 < p_i768; k_i768++)
                                                {
                                                    int __idxExpr44 = k_i768 * (*bt_i702_width) + j_i768;
                                                    int __idxExpr45 = i_i768 * (*temp_i248_width) + k_i768;
#pragma HLS loop_tripcount max = 256
                                                    temp_i768 = temp_i768 +
                                                                bt_i702_data[__idxExpr44] * temp_i248_data[__idxExpr45];
                                                }
                                                int __idxExpr46 = i_i768 * (*out_i768_width) + j_i768;
                                                out_i768_data[__idxExpr46] = temp_i768;
                                            }
                                        }
                                        bt1_i702_width = out_i768_width;
                                        bt1_i702_height = out_i768_height;
                                        bt1_i702_data = out_i768_data;
                                        // cluster_fMtimes_out1_rep26(): end inline
                                        // cluster_fMtimes_rep22(): end inline
                                        // cluster_fFreeHandle_rep237(): begin inline
                                        int decomp_0_renamed_235_i769;
                                        // cluster_fFreeHandle_out0_rep256(): begin inline
                                        decomp_0_renamed_235_i769 = bt_i702_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep256(): end inline
                                        if (decomp_0_renamed_235_i769)
                                        {
                                            // free(bt_i702_data);
                                        }
                                        // cluster_fFreeHandle_rep237(): end inline
                                        // cluster_polynomial_out2_rep22(): begin inline
                                        int decomp_0_renamed_236_i770;
                                        int decomp_1_renamed_30_i770;
                                        decomp_0_renamed_236_i770 = (*bt1_i702_height) == 1;
                                        decomp_1_renamed_30_i770 = (*bt1_i702_width) == 1;
                                        decomp_2_renamed_44_i702 =
                                            decomp_0_renamed_236_i770 && decomp_1_renamed_30_i770;
                                        // cluster_polynomial_out2_rep22(): end inline
                                        if (decomp_2_renamed_44_i702)
                                        {
                                            int _lit57 = 3;
                                            // cluster_polynomial_out3_rep22(): begin inline
                                            double _d3_0_i771;
                                            double _d3_1_i771;
                                            _d3_0_i771 = pow(bt1_i702_data[0], _lit57);
                                            _d3_1_i771 = _d3_0_i771 / dim;
                                            ret_i702 = _d3_1_i771;
                                            // cluster_polynomial_out3_rep22(): end inline
                                        }
                                        else
                                        {
                                            float __rtr_val_1_i702;
                                            int __rtr_flag_1_i702;
                                            __rtr_flag_1_i702 = 0;
                                            // cluster_polynomial_out4_rep22(): begin inline
                                            // cluster_fFreeHandle_rep255(): begin inline
                                            int decomp_0_renamed_255_i820;
                                            // cluster_fFreeHandle_out0_rep270(): begin inline
                                            decomp_0_renamed_255_i820 = bt1_i702_data != nullptr;
                                            // cluster_fFreeHandle_out0_rep270(): end inline
                                            if (decomp_0_renamed_255_i820)
                                            {
                                                // free(bt1_i702_data);
                                            }
                                            // cluster_fFreeHandle_rep255(): end inline
                                            __rtr_val_1_i702 = -1;
                                            __rtr_flag_1_i702 = 1;
                                            // cluster_polynomial_out4_rep22(): end inline
                                            if (__rtr_flag_1_i702)
                                            {
                                                _d2_1_i588 = __rtr_val_1_i702;
                                                goto end_inline_i702;
                                            }
                                        }
                                        // cluster_fFreeHandle_rep268(): begin inline
                                        int decomp_0_renamed_237_i773;
                                        // cluster_fFreeHandle_out0_rep289(): begin inline
                                        decomp_0_renamed_237_i773 = bt1_i702_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep289(): end inline
                                        if (decomp_0_renamed_237_i773)
                                        {
                                            // free(bt1_i702_data);
                                        }
                                        // cluster_fFreeHandle_rep268(): end inline
                                        _d2_1_i588 = ret_i702;
                                    end_inline_i702:;
                                        // cluster_polynomial_rep23(): end inline
                                        // cluster_cal_learned_func_out1_out1_out1_rep17(): begin inline
                                        float _d2_2_i703;
                                        float _d2_3_i703;
                                        _d2_2_i703 = _d2_0_i588 * _d2_1_i588;
                                        _d2_3_i703 = s_i248 + _d2_2_i703;
                                        s_i248 = _d2_3_i703;
                                        // free(temp_i248_data);
                                        // free(temp1_i248_data);
                                        //  cluster_cal_learned_func_out1_out1_out1_rep17(): end inline
                                        //  cluster_cal_learned_func_out1_out1_rep13(): end inline
                                    }
                                    // cluster_cal_learned_func_out1_rep14(): end inline
                                }
                                // cluster_cal_learned_func_out2_rep14(): begin inline
                                s_i248 = s_i248 - b[0];
                                ret_i248 = s_i248;
                                // cluster_cal_learned_func_out2_rep14(): end inline
                                _d4_0_i171 = ret_i248;
                                // cluster_cal_learned_func_rep10(): end inline
                                // cluster_takeStep_out3_out1_rep4(): begin inline
                                float _d4_1_i249;
                                _d4_1_i249 = _d4_0_i171 - Y_data[i];
                                Ei_i142 = _d4_1_i249;
                                // cluster_takeStep_out3_out1_rep4(): end inline
                                // cluster_takeStep_out3_rep6(): end inline
                            }
                            // cluster_takeStep_out4_rep6(): begin inline
                            int decomp_4_renamed_6_i172;
                            int decomp_5_renamed_3_i172;
                            decomp_4_renamed_6_i172 = a_old_i142_data[j_i87] > 0;
                            decomp_5_renamed_3_i172 = a_old_i142_data[j_i87] < C;
                            decomp_6_renamed_0_i142 = decomp_4_renamed_6_i172 && decomp_5_renamed_3_i172;
                            // cluster_takeStep_out4_rep6(): end inline
                            if (decomp_6_renamed_0_i142)
                            {
                                // cluster_takeStep_out5_rep6(): begin inline
                                Ej_i142 = e_data[j_i87];
                                // cluster_takeStep_out5_rep6(): end inline
                            }
                            else
                            {
                                // cluster_takeStep_out6_rep6(): begin inline
                                float _d5_0_i174;
                                int *temp1_i250_width;
                                int *temp1_i250_height;
                                float *temp1_i250_data;
                                // cluster_cal_learned_func_rep21(): begin inline
                                int *temp_i250_width;
                                int *temp_i250_height;
                                float *temp_i250_data;
                                int m_i250;
                                int i_i250;
                                float ret_i250;
                                float s_i250;
                                // cluster_cal_learned_func_out0_rep26(): begin inline
                                int j_i424;
                                int n_i424;
                                s_i250 = 0;
                                // cluster_cal_learned_func_out0_rep26(): end inline
                                //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                //  directive even if it has static bounds
                                // cluster_cal_learned_func_out2_rep26(): begin inline
                                s_i250 = s_i250 - b[0];
                                ret_i250 = s_i250;
                                // cluster_cal_learned_func_out2_rep26(): end inline
                                _d5_0_i174 = ret_i250;
                                // cluster_cal_learned_func_rep21(): end inline
                                // cluster_takeStep_out6_out1_rep4(): begin inline
                                float _d5_1_i251;
                                _d5_1_i251 = _d5_0_i174 - Y_data[j_i87];
                                Ej_i142 = _d5_1_i251;
                                // cluster_takeStep_out6_out1_rep4(): end inline
                                // cluster_takeStep_out6_rep6(): end inline
                            }
                            // cluster_takeStep_out7_rep6(): begin inline
                            int decomp_7_renamed_1_i175;
                            s_i142 = Y_data[i] * Y_data[j_i87];
                            decomp_7_renamed_1_i175 = Y_data[i] == Y_data[j_i87];
                            if (decomp_7_renamed_1_i175)
                            {
                                int decomp_8_renamed_1_i175;
                                gamma_i142 = a_old_i142_data[i] + a_old_i142_data[j_i87];
                                decomp_8_renamed_1_i175 = gamma_i142 > C;
                                if (decomp_8_renamed_1_i175)
                                {
                                    L_i142 = gamma_i142 - C;
                                    H_i142 = C;
                                }
                                else
                                {
                                    L_i142 = 0;
                                    H_i142 = gamma_i142;
                                }
                            }
                            else
                            {
                                int decomp_9_renamed_0_i175;
                                gamma_i142 = a_old_i142_data[i] - a_old_i142_data[j_i87];
                                decomp_9_renamed_0_i175 = gamma_i142 > 0;
                                if (decomp_9_renamed_0_i175)
                                {
                                    L_i142 = 0;
                                    H_i142 = C - gamma_i142;
                                }
                                else
                                {
                                    L_i142 = -gamma_i142;
                                    H_i142 = C;
                                }
                            }
                            decomp_10_renamed_0_i142 = L_i142 == H_i142;
                            // cluster_takeStep_out7_rep6(): end inline
                            if (decomp_10_renamed_0_i142)
                            {
                                int __rtr_val_3_i142;
                                int __rtr_flag_3_i142;
                                __rtr_flag_3_i142 = 0;
                                // cluster_takeStep_out8_rep6(): begin inline
                                // cluster_fFreeHandle_rep153(): begin inline
                                int decomp_0_renamed_52_i252;
                                // cluster_fFreeHandle_out0_rep164(): begin inline
                                decomp_0_renamed_52_i252 = a_old_i142_data != nullptr;
                                // cluster_fFreeHandle_out0_rep164(): end inline
                                if (decomp_0_renamed_52_i252)
                                {
                                    // free(a_old_i142_data);
                                }
                                // cluster_fFreeHandle_rep153(): end inline
                                __rtr_val_3_i142 = 0;
                                __rtr_flag_3_i142 = 1;
                                // cluster_takeStep_out8_rep6(): end inline
                                if (__rtr_flag_3_i142)
                                {
                                    ret_i87 = __rtr_val_3_i142;
                                    goto end_inline_i142;
                                }
                            }
                            // cluster_fMallocHandle_rep163(): begin inline
                            int i_i177;
                            int j_i177;
                            int *out_i177_width;
                            int *out_i177_height;
                            float *out_i177_data;
                            out_i177_width = &memregion_1571_size4;
                            out_i177_height = &memregion_1572_size4;
                            out_i177_data = memregion_1573_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            int _lit19 = 1;
                            // cluster_fMallocHandle_out1_rep173(): begin inline
                            (*out_i177_height) = _lit19;
                            (*out_i177_width) = (*X_width);
                            temp_i142_width = out_i177_width;
                            temp_i142_height = out_i177_height;
                            temp_i142_data = out_i177_data;
                            // cluster_fMallocHandle_out1_rep173(): end inline
                            // cluster_fMallocHandle_rep163(): end inline
                            // cluster_fMallocHandle_rep173(): begin inline
                            int i_i178;
                            int j_i178;
                            int *out_i178_width;
                            int *out_i178_height;
                            float *out_i178_data;
                            out_i178_width = &memregion_1574_size4;
                            out_i178_height = &memregion_1575_size4;
                            out_i178_data = memregion_1576_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            int _lit20 = 1;
                            // cluster_fMallocHandle_out1_rep184(): begin inline
                            (*out_i178_height) = _lit20;
                            (*out_i178_width) = (*X_width);
                            temp1_i142_width = out_i178_width;
                            temp1_i142_height = out_i178_height;
                            temp1_i142_data = out_i178_data;
                            // cluster_fMallocHandle_out1_rep184(): end inline
                            // cluster_fMallocHandle_rep173(): end inline
                            // cluster_takeStep_out9_rep6(): begin inline
                            for (m_i142 = 0; m_i142 < (*X_width); m_i142++)
                            {
                                int __idxExpr47 = i * (*X_width) + m_i142;
#pragma HLS loop_tripcount max = 256
                                temp_i142_data[m_i142] = X_data[__idxExpr47];
                                int __idxExpr48 = j_i87 * (*X_width) + m_i142;
                                temp1_i142_data[m_i142] = X_data[__idxExpr48];
                            }
                            // cluster_takeStep_out9_rep6(): end inline
                            // cluster_polynomial_rep49(): begin inline
                            int c_i180;
                            int r_i180;
                            int j_i180;
                            int i_i180;
                            int *bt1_i180_width;
                            int *bt1_i180_height;
                            float *bt1_i180_data;
                            int *bt_i180_width;
                            int *bt_i180_height;
                            float *bt_i180_data;
                            float ret_i180;
                            int decomp_2_renamed_5_i180;
                            // cluster_polynomial_out0_rep50(): begin inline
                            r_i180 = (*temp_i142_height);
                            c_i180 = (*temp_i142_width);
                            // cluster_polynomial_out0_rep50(): end inline
                            // cluster_fMallocHandle_rep381(): begin inline
                            int i_i256;
                            int j_i256;
                            int *out_i256_width;
                            int *out_i256_height;
                            float *out_i256_data;
                            out_i256_width = &memregion_1577_size4;
                            out_i256_height = &memregion_1578_size4;
                            out_i256_data = memregion_1579_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            // cluster_fMallocHandle_out1_rep415(): begin inline
                            (*out_i256_height) = c_i180;
                            (*out_i256_width) = r_i180;
                            bt_i180_width = out_i256_width;
                            bt_i180_height = out_i256_height;
                            bt_i180_data = out_i256_data;
                            // cluster_fMallocHandle_out1_rep415(): end inline
                            // cluster_fMallocHandle_rep381(): end inline
                            // cluster_polynomial_out1_rep50(): begin inline
                            for (i_i180 = 0; i_i180 < r_i180; i_i180++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i180 = 0; j_i180 < c_i180; j_i180++)
                                {
                                    int __idxExpr49 = j_i180 * (*bt_i180_width) + i_i180;
                                    int __idxExpr50 = i_i180 * (*temp_i142_width) + j_i180;
#pragma HLS loop_tripcount max = 256
                                    bt_i180_data[__idxExpr49] = temp_i142_data[__idxExpr50];
                                }
                            }
                            // cluster_polynomial_out1_rep50(): end inline
                            // cluster_fMtimes_rep50(): begin inline
                            float temp_i258;
                            int k_i258;
                            int j_i258;
                            int i_i258;
                            int n_i258;
                            int p_i258;
                            int m_i258;
                            int *out_i258_width;
                            int *out_i258_height;
                            float *out_i258_data;
                            // cluster_fMtimes_out0_rep56(): begin inline
                            int p1_i428;
                            m_i258 = (*temp_i142_height);
                            p_i258 = (*temp_i142_width);
                            p1_i428 = (*bt_i180_height);
                            n_i258 = (*bt_i180_width);
                            // cluster_fMtimes_out0_rep56(): end inline
                            // cluster_fMallocHandle_rep395(): begin inline
                            int i_i429;
                            int j_i429;
                            int *out_i429_width;
                            int *out_i429_height;
                            float *out_i429_data;
                            out_i429_width = &memregion_1580_size4;
                            out_i429_height = &memregion_1581_size4;
                            out_i429_data = &memregion_1582_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                            // cluster_fMallocHandle_out1_rep425(): begin inline
                            (*out_i429_height) = m_i258;
                            (*out_i429_width) = n_i258;
                            out_i258_width = out_i429_width;
                            out_i258_height = out_i429_height;
                            out_i258_data = out_i429_data;
                            // cluster_fMallocHandle_out1_rep425(): end inline
                            // cluster_fMallocHandle_rep395(): end inline
                            // cluster_fMtimes_out1_rep56(): begin inline
                            for (i_i258 = 0; i_i258 < m_i258; i_i258++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i258 = 0; j_i258 < n_i258; j_i258++)
                                {
#pragma HLS loop_tripcount max = 1
                                    temp_i258 = 0;
                                    for (k_i258 = 0; k_i258 < p_i258; k_i258++)
                                    {
                                        int __idxExpr51 = k_i258 * (*bt_i180_width) + j_i258;
                                        int __idxExpr52 = i_i258 * (*temp_i142_width) + k_i258;
#pragma HLS loop_tripcount max = 256
                                        temp_i258 = temp_i258 + bt_i180_data[__idxExpr51] * temp_i142_data[__idxExpr52];
                                    }
                                    int __idxExpr53 = i_i258 * (*out_i258_width) + j_i258;
                                    out_i258_data[__idxExpr53] = temp_i258;
                                }
                            }
                            bt1_i180_width = out_i258_width;
                            bt1_i180_height = out_i258_height;
                            bt1_i180_data = out_i258_data;
                            // cluster_fMtimes_out1_rep56(): end inline
                            // cluster_fMtimes_rep50(): end inline
                            // cluster_fFreeHandle_rep327(): begin inline
                            int decomp_0_renamed_53_i259;
                            // cluster_fFreeHandle_out0_rep352(): begin inline
                            decomp_0_renamed_53_i259 = bt_i180_data != nullptr;
                            // cluster_fFreeHandle_out0_rep352(): end inline
                            if (decomp_0_renamed_53_i259)
                            {
                                // free(bt_i180_data);
                            }
                            // cluster_fFreeHandle_rep327(): end inline
                            // cluster_polynomial_out2_rep50(): begin inline
                            int decomp_0_renamed_54_i260;
                            int decomp_1_renamed_9_i260;
                            decomp_0_renamed_54_i260 = (*bt1_i180_height) == 1;
                            decomp_1_renamed_9_i260 = (*bt1_i180_width) == 1;
                            decomp_2_renamed_5_i180 = decomp_0_renamed_54_i260 && decomp_1_renamed_9_i260;
                            // cluster_polynomial_out2_rep50(): end inline
                            if (decomp_2_renamed_5_i180)
                            {
                                int _lit21 = 3;
                                // cluster_polynomial_out3_rep50(): begin inline
                                double _d3_0_i261;
                                double _d3_1_i261;
                                _d3_0_i261 = pow(bt1_i180_data[0], _lit21);
                                _d3_1_i261 = _d3_0_i261 / dim;
                                ret_i180 = _d3_1_i261;
                                // cluster_polynomial_out3_rep50(): end inline
                            }
                            else
                            {
                                float __rtr_val_1_i180;
                                int __rtr_flag_1_i180;
                                __rtr_flag_1_i180 = 0;
                                // cluster_polynomial_out4_rep50(): begin inline
                                // cluster_fFreeHandle_rep341(): begin inline
                                int decomp_0_renamed_103_i432;
                                // cluster_fFreeHandle_out0_rep362(): begin inline
                                decomp_0_renamed_103_i432 = bt1_i180_data != nullptr;
                                // cluster_fFreeHandle_out0_rep362(): end inline
                                if (decomp_0_renamed_103_i432)
                                {
                                    // free(bt1_i180_data);
                                }
                                // cluster_fFreeHandle_rep341(): end inline
                                __rtr_val_1_i180 = -1;
                                __rtr_flag_1_i180 = 1;
                                // cluster_polynomial_out4_rep50(): end inline
                                if (__rtr_flag_1_i180)
                                {
                                    k11_i142 = __rtr_val_1_i180;
                                    goto end_inline_i180;
                                }
                            }
                            // cluster_fFreeHandle_rep350(): begin inline
                            int decomp_0_renamed_55_i263;
                            // cluster_fFreeHandle_out0_rep377(): begin inline
                            decomp_0_renamed_55_i263 = bt1_i180_data != nullptr;
                            // cluster_fFreeHandle_out0_rep377(): end inline
                            if (decomp_0_renamed_55_i263)
                            {
                                // free(bt1_i180_data);
                            }
                            // cluster_fFreeHandle_rep350(): end inline
                            k11_i142 = ret_i180;
                        end_inline_i180:;
                            // cluster_polynomial_rep49(): end inline
                            // cluster_polynomial_rep59(): begin inline
                            int c_i181;
                            int r_i181;
                            int j_i181;
                            int i_i181;
                            int *bt1_i181_width;
                            int *bt1_i181_height;
                            float *bt1_i181_data;
                            int *bt_i181_width;
                            int *bt_i181_height;
                            float *bt_i181_data;
                            float ret_i181;
                            int decomp_2_renamed_6_i181;
                            // cluster_polynomial_out0_rep61(): begin inline
                            r_i181 = (*temp1_i142_height);
                            c_i181 = (*temp1_i142_width);
                            // cluster_polynomial_out0_rep61(): end inline
                            // cluster_fMallocHandle_rep404(): begin inline
                            int i_i265;
                            int j_i265;
                            int *out_i265_width;
                            int *out_i265_height;
                            float *out_i265_data;
                            out_i265_width = &memregion_1583_size4;
                            out_i265_height = &memregion_1584_size4;
                            out_i265_data = memregion_1585_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            // cluster_fMallocHandle_out1_rep440(): begin inline
                            (*out_i265_height) = c_i181;
                            (*out_i265_width) = r_i181;
                            bt_i181_width = out_i265_width;
                            bt_i181_height = out_i265_height;
                            bt_i181_data = out_i265_data;
                            // cluster_fMallocHandle_out1_rep440(): end inline
                            // cluster_fMallocHandle_rep404(): end inline
                            // cluster_polynomial_out1_rep61(): begin inline
                            for (i_i181 = 0; i_i181 < r_i181; i_i181++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i181 = 0; j_i181 < c_i181; j_i181++)
                                {
                                    int __idxExpr54 = j_i181 * (*bt_i181_width) + i_i181;
                                    int __idxExpr55 = i_i181 * (*temp1_i142_width) + j_i181;
#pragma HLS loop_tripcount max = 256
                                    bt_i181_data[__idxExpr54] = temp1_i142_data[__idxExpr55];
                                }
                            }
                            // cluster_polynomial_out1_rep61(): end inline
                            // cluster_fMtimes_rep61(): begin inline
                            float temp_i267;
                            int k_i267;
                            int j_i267;
                            int i_i267;
                            int n_i267;
                            int p_i267;
                            int m_i267;
                            int *out_i267_width;
                            int *out_i267_height;
                            float *out_i267_data;
                            // cluster_fMtimes_out0_rep68(): begin inline
                            int p1_i435;
                            m_i267 = (*temp_i142_height);
                            p_i267 = (*temp_i142_width);
                            p1_i435 = (*bt_i181_height);
                            n_i267 = (*bt_i181_width);
                            // cluster_fMtimes_out0_rep68(): end inline
                            // cluster_fMallocHandle_rep418(): begin inline
                            int i_i436;
                            int j_i436;
                            int *out_i436_width;
                            int *out_i436_height;
                            float *out_i436_data;
                            out_i436_width = &memregion_1586_size4;
                            out_i436_height = &memregion_1587_size4;
                            out_i436_data = &memregion_1588_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                            // cluster_fMallocHandle_out1_rep450(): begin inline
                            (*out_i436_height) = m_i267;
                            (*out_i436_width) = n_i267;
                            out_i267_width = out_i436_width;
                            out_i267_height = out_i436_height;
                            out_i267_data = out_i436_data;
                            // cluster_fMallocHandle_out1_rep450(): end inline
                            // cluster_fMallocHandle_rep418(): end inline
                            // cluster_fMtimes_out1_rep68(): begin inline
                            for (i_i267 = 0; i_i267 < m_i267; i_i267++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i267 = 0; j_i267 < n_i267; j_i267++)
                                {
#pragma HLS loop_tripcount max = 1
                                    temp_i267 = 0;
                                    for (k_i267 = 0; k_i267 < p_i267; k_i267++)
                                    {
                                        int __idxExpr56 = k_i267 * (*bt_i181_width) + j_i267;
                                        int __idxExpr57 = i_i267 * (*temp_i142_width) + k_i267;
#pragma HLS loop_tripcount max = 256
                                        temp_i267 = temp_i267 + bt_i181_data[__idxExpr56] * temp_i142_data[__idxExpr57];
                                    }
                                    int __idxExpr58 = i_i267 * (*out_i267_width) + j_i267;
                                    out_i267_data[__idxExpr58] = temp_i267;
                                }
                            }
                            bt1_i181_width = out_i267_width;
                            bt1_i181_height = out_i267_height;
                            bt1_i181_data = out_i267_data;
                            // cluster_fMtimes_out1_rep68(): end inline
                            // cluster_fMtimes_rep61(): end inline
                            // cluster_fFreeHandle_rep361(): begin inline
                            int decomp_0_renamed_56_i268;
                            // cluster_fFreeHandle_out0_rep389(): begin inline
                            decomp_0_renamed_56_i268 = bt_i181_data != nullptr;
                            // cluster_fFreeHandle_out0_rep389(): end inline
                            if (decomp_0_renamed_56_i268)
                            {
                                // free(bt_i181_data);
                            }
                            // cluster_fFreeHandle_rep361(): end inline
                            // cluster_polynomial_out2_rep61(): begin inline
                            int decomp_0_renamed_57_i269;
                            int decomp_1_renamed_10_i269;
                            decomp_0_renamed_57_i269 = (*bt1_i181_height) == 1;
                            decomp_1_renamed_10_i269 = (*bt1_i181_width) == 1;
                            decomp_2_renamed_6_i181 = decomp_0_renamed_57_i269 && decomp_1_renamed_10_i269;
                            // cluster_polynomial_out2_rep61(): end inline
                            if (decomp_2_renamed_6_i181)
                            {
                                int _lit22 = 3;
                                // cluster_polynomial_out3_rep61(): begin inline
                                double _d3_0_i270;
                                double _d3_1_i270;
                                _d3_0_i270 = pow(bt1_i181_data[0], _lit22);
                                _d3_1_i270 = _d3_0_i270 / dim;
                                ret_i181 = _d3_1_i270;
                                // cluster_polynomial_out3_rep61(): end inline
                            }
                            else
                            {
                                float __rtr_val_1_i181;
                                int __rtr_flag_1_i181;
                                __rtr_flag_1_i181 = 0;
                                // cluster_polynomial_out4_rep61(): begin inline
                                // cluster_fFreeHandle_rep375(): begin inline
                                int decomp_0_renamed_106_i439;
                                // cluster_fFreeHandle_out0_rep399(): begin inline
                                decomp_0_renamed_106_i439 = bt1_i181_data != nullptr;
                                // cluster_fFreeHandle_out0_rep399(): end inline
                                if (decomp_0_renamed_106_i439)
                                {
                                    // free(bt1_i181_data);
                                }
                                // cluster_fFreeHandle_rep375(): end inline
                                __rtr_val_1_i181 = -1;
                                __rtr_flag_1_i181 = 1;
                                // cluster_polynomial_out4_rep61(): end inline
                                if (__rtr_flag_1_i181)
                                {
                                    k12_i142 = __rtr_val_1_i181;
                                    goto end_inline_i181;
                                }
                            }
                            // cluster_fFreeHandle_rep384(): begin inline
                            int decomp_0_renamed_58_i272;
                            // cluster_fFreeHandle_out0_rep414(): begin inline
                            decomp_0_renamed_58_i272 = bt1_i181_data != nullptr;
                            // cluster_fFreeHandle_out0_rep414(): end inline
                            if (decomp_0_renamed_58_i272)
                            {
                                // free(bt1_i181_data);
                            }
                            // cluster_fFreeHandle_rep384(): end inline
                            k12_i142 = ret_i181;
                        end_inline_i181:;
                            // cluster_polynomial_rep59(): end inline
                            // cluster_polynomial_rep69(): begin inline
                            int c_i182;
                            int r_i182;
                            int j_i182;
                            int i_i182;
                            int *bt1_i182_width;
                            int *bt1_i182_height;
                            float *bt1_i182_data;
                            int *bt_i182_width;
                            int *bt_i182_height;
                            float *bt_i182_data;
                            float ret_i182;
                            int decomp_2_renamed_7_i182;
                            // cluster_polynomial_out0_rep72(): begin inline
                            r_i182 = (*temp1_i142_height);
                            c_i182 = (*temp1_i142_width);
                            // cluster_polynomial_out0_rep72(): end inline
                            // cluster_fMallocHandle_rep427(): begin inline
                            int i_i274;
                            int j_i274;
                            int *out_i274_width;
                            int *out_i274_height;
                            float *out_i274_data;
                            out_i274_width = &memregion_1589_size4;
                            out_i274_height = &memregion_1590_size4;
                            out_i274_data = memregion_1591_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            // cluster_fMallocHandle_out1_rep465(): begin inline
                            (*out_i274_height) = c_i182;
                            (*out_i274_width) = r_i182;
                            bt_i182_width = out_i274_width;
                            bt_i182_height = out_i274_height;
                            bt_i182_data = out_i274_data;
                            // cluster_fMallocHandle_out1_rep465(): end inline
                            // cluster_fMallocHandle_rep427(): end inline
                            // cluster_polynomial_out1_rep72(): begin inline
                            for (i_i182 = 0; i_i182 < r_i182; i_i182++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i182 = 0; j_i182 < c_i182; j_i182++)
                                {
                                    int __idxExpr59 = j_i182 * (*bt_i182_width) + i_i182;
                                    int __idxExpr60 = i_i182 * (*temp1_i142_width) + j_i182;
#pragma HLS loop_tripcount max = 256
                                    bt_i182_data[__idxExpr59] = temp1_i142_data[__idxExpr60];
                                }
                            }
                            // cluster_polynomial_out1_rep72(): end inline
                            // cluster_fMtimes_rep72(): begin inline
                            float temp_i276;
                            int k_i276;
                            int j_i276;
                            int i_i276;
                            int n_i276;
                            int p_i276;
                            int m_i276;
                            int *out_i276_width;
                            int *out_i276_height;
                            float *out_i276_data;
                            // cluster_fMtimes_out0_rep80(): begin inline
                            int p1_i442;
                            m_i276 = (*temp1_i142_height);
                            p_i276 = (*temp1_i142_width);
                            p1_i442 = (*bt_i182_height);
                            n_i276 = (*bt_i182_width);
                            // cluster_fMtimes_out0_rep80(): end inline
                            // cluster_fMallocHandle_rep441(): begin inline
                            int i_i443;
                            int j_i443;
                            int *out_i443_width;
                            int *out_i443_height;
                            float *out_i443_data;
                            out_i443_width = &memregion_1592_size4;
                            out_i443_height = &memregion_1593_size4;
                            out_i443_data = &memregion_1594_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                            // cluster_fMallocHandle_out1_rep475(): begin inline
                            (*out_i443_height) = m_i276;
                            (*out_i443_width) = n_i276;
                            out_i276_width = out_i443_width;
                            out_i276_height = out_i443_height;
                            out_i276_data = out_i443_data;
                            // cluster_fMallocHandle_out1_rep475(): end inline
                            // cluster_fMallocHandle_rep441(): end inline
                            // cluster_fMtimes_out1_rep80(): begin inline
                            for (i_i276 = 0; i_i276 < m_i276; i_i276++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i276 = 0; j_i276 < n_i276; j_i276++)
                                {
#pragma HLS loop_tripcount max = 1
                                    temp_i276 = 0;
                                    for (k_i276 = 0; k_i276 < p_i276; k_i276++)
                                    {
                                        int __idxExpr61 = k_i276 * (*bt_i182_width) + j_i276;
                                        int __idxExpr62 = i_i276 * (*temp1_i142_width) + k_i276;
#pragma HLS loop_tripcount max = 256
                                        temp_i276 =
                                            temp_i276 + bt_i182_data[__idxExpr61] * temp1_i142_data[__idxExpr62];
                                    }
                                    int __idxExpr63 = i_i276 * (*out_i276_width) + j_i276;
                                    out_i276_data[__idxExpr63] = temp_i276;
                                }
                            }
                            bt1_i182_width = out_i276_width;
                            bt1_i182_height = out_i276_height;
                            bt1_i182_data = out_i276_data;
                            // cluster_fMtimes_out1_rep80(): end inline
                            // cluster_fMtimes_rep72(): end inline
                            // cluster_fFreeHandle_rep395(): begin inline
                            int decomp_0_renamed_59_i277;
                            // cluster_fFreeHandle_out0_rep426(): begin inline
                            decomp_0_renamed_59_i277 = bt_i182_data != nullptr;
                            // cluster_fFreeHandle_out0_rep426(): end inline
                            if (decomp_0_renamed_59_i277)
                            {
                                // free(bt_i182_data);
                            }
                            // cluster_fFreeHandle_rep395(): end inline
                            // cluster_polynomial_out2_rep72(): begin inline
                            int decomp_0_renamed_60_i278;
                            int decomp_1_renamed_11_i278;
                            decomp_0_renamed_60_i278 = (*bt1_i182_height) == 1;
                            decomp_1_renamed_11_i278 = (*bt1_i182_width) == 1;
                            decomp_2_renamed_7_i182 = decomp_0_renamed_60_i278 && decomp_1_renamed_11_i278;
                            // cluster_polynomial_out2_rep72(): end inline
                            if (decomp_2_renamed_7_i182)
                            {
                                int _lit23 = 3;
                                // cluster_polynomial_out3_rep72(): begin inline
                                double _d3_0_i279;
                                double _d3_1_i279;
                                _d3_0_i279 = pow(bt1_i182_data[0], _lit23);
                                _d3_1_i279 = _d3_0_i279 / dim;
                                ret_i182 = _d3_1_i279;
                                // cluster_polynomial_out3_rep72(): end inline
                            }
                            else
                            {
                                float __rtr_val_1_i182;
                                int __rtr_flag_1_i182;
                                __rtr_flag_1_i182 = 0;
                                // cluster_polynomial_out4_rep72(): begin inline
                                // cluster_fFreeHandle_rep409(): begin inline
                                int decomp_0_renamed_109_i446;
                                // cluster_fFreeHandle_out0_rep436(): begin inline
                                decomp_0_renamed_109_i446 = bt1_i182_data != nullptr;
                                // cluster_fFreeHandle_out0_rep436(): end inline
                                if (decomp_0_renamed_109_i446)
                                {
                                    // free(bt1_i182_data);
                                }
                                // cluster_fFreeHandle_rep409(): end inline
                                __rtr_val_1_i182 = -1;
                                __rtr_flag_1_i182 = 1;
                                // cluster_polynomial_out4_rep72(): end inline
                                if (__rtr_flag_1_i182)
                                {
                                    k22_i142 = __rtr_val_1_i182;
                                    goto end_inline_i182;
                                }
                            }
                            // cluster_fFreeHandle_rep418(): begin inline
                            int decomp_0_renamed_61_i281;
                            // cluster_fFreeHandle_out0_rep451(): begin inline
                            decomp_0_renamed_61_i281 = bt1_i182_data != nullptr;
                            // cluster_fFreeHandle_out0_rep451(): end inline
                            if (decomp_0_renamed_61_i281)
                            {
                                // free(bt1_i182_data);
                            }
                            // cluster_fFreeHandle_rep418(): end inline
                            k22_i142 = ret_i182;
                        end_inline_i182:;
                            // cluster_polynomial_rep69(): end inline
                            // cluster_takeStep_out10_rep6(): begin inline
                            eta_i142 = 2 * k12_i142 - k11_i142 - k22_i142;
                            // cluster_takeStep_out10_rep6(): end inline
                            // cluster_fFreeHandle_rep166(): begin inline
                            int decomp_0_renamed_38_i184;
                            // cluster_fFreeHandle_out0_rep173(): begin inline
                            decomp_0_renamed_38_i184 = temp1_i142_data != nullptr;
                            // cluster_fFreeHandle_out0_rep173(): end inline
                            if (decomp_0_renamed_38_i184)
                            {
                                // free(temp1_i142_data);
                            }
                            // cluster_fFreeHandle_rep166(): end inline
                            // cluster_fFreeHandle_rep176(): begin inline
                            int decomp_0_renamed_39_i185;
                            // cluster_fFreeHandle_out0_rep184(): begin inline
                            decomp_0_renamed_39_i185 = temp_i142_data != nullptr;
                            // cluster_fFreeHandle_out0_rep184(): end inline
                            if (decomp_0_renamed_39_i185)
                            {
                                // free(temp_i142_data);
                            }
                            // cluster_fFreeHandle_rep176(): end inline
                            // cluster_takeStep_out11_rep6(): begin inline
                            int decomp_11_renamed_0_i186;
                            float decomp_16_renamed_0_i186;
                            float decomp_17_renamed_0_i186;
                            decomp_11_renamed_0_i186 = eta_i142 < 0;
                            if (decomp_11_renamed_0_i186)
                            {
                                int decomp_12_renamed_0_i186;
                                a_data[j_i87] = a_old_i142_data[j_i87] + Y_data[j_i87] * (Ej_i142 - Ei_i142) / eta_i142;
                                decomp_12_renamed_0_i186 = a_data[j_i87] < L_i142;
                                if (decomp_12_renamed_0_i186)
                                {
                                    a_data[j_i87] = L_i142;
                                }
                                else
                                {
                                    int decomp_13_renamed_0_i186;
                                    decomp_13_renamed_0_i186 = a_data[j_i87] > H_i142;
                                    if (decomp_13_renamed_0_i186)
                                    {
                                        a_data[j_i87] = H_i142;
                                    }
                                }
                            }
                            else
                            {
                                int decomp_14_renamed_0_i186;
                                c1_i142 = eta_i142 / 2;
                                c2_i142 = Y_data[j_i87] * (Ei_i142 - Ej_i142) - eta_i142 * a_old_i142_data[j_i87];
                                Lobj_i142 = c1_i142 * L_i142 * L_i142 + c2_i142 * L_i142;
                                Hobj_i142 = c1_i142 * H_i142 * H_i142 + c2_i142 * H_i142;
                                decomp_14_renamed_0_i186 = Lobj_i142 > (Hobj_i142 + eps);
                                if (decomp_14_renamed_0_i186)
                                {
                                    a_data[j_i87] = L_i142;
                                }
                                else
                                {
                                    int decomp_15_renamed_0_i186;
                                    decomp_15_renamed_0_i186 = Lobj_i142 < (Hobj_i142 - eps);
                                    if (decomp_15_renamed_0_i186)
                                    {
                                        a_data[j_i87] = H_i142;
                                    }
                                    else
                                    {
                                        a_data[j_i87] = a_old_i142_data[j_i87];
                                    }
                                }
                            }
                            decomp_16_renamed_0_i186 = a_data[j_i87] - a_old_i142_data[j_i87];
                            decomp_17_renamed_0_i186 = fabsf(decomp_16_renamed_0_i186);
                            decomp_18_renamed_0_i142 =
                                decomp_17_renamed_0_i186 < (eps * (a_data[j_i87] + a_old_i142_data[j_i87] + eps));
                            // cluster_takeStep_out11_rep6(): end inline
                            if (decomp_18_renamed_0_i142)
                            {
                                int __rtr_val_4_i142;
                                int __rtr_flag_4_i142;
                                __rtr_flag_4_i142 = 0;
                                // cluster_takeStep_out12_rep6(): begin inline
                                // cluster_fFreeHandle_rep184(): begin inline
                                int decomp_0_renamed_64_i284;
                                // cluster_fFreeHandle_out0_rep198(): begin inline
                                decomp_0_renamed_64_i284 = a_old_i142_data != nullptr;
                                // cluster_fFreeHandle_out0_rep198(): end inline
                                if (decomp_0_renamed_64_i284)
                                {
                                    // free(a_old_i142_data);
                                }
                                // cluster_fFreeHandle_rep184(): end inline
                                __rtr_val_4_i142 = 0;
                                __rtr_flag_4_i142 = 1;
                                // cluster_takeStep_out12_rep6(): end inline
                                if (__rtr_flag_4_i142)
                                {
                                    ret_i87 = __rtr_val_4_i142;
                                    goto end_inline_i142;
                                }
                            }
                            // cluster_takeStep_out13_rep6(): begin inline
                            int decomp_19_renamed_0_i188;
                            int decomp_21_renamed_0_i188;
                            int decomp_22_renamed_0_i188;
                            int decomp_23_renamed_0_i188;
                            a_data[i] = a_old_i142_data[i] - s_i142 * (a_data[j_i87] - a_old_i142_data[j_i87]);
                            decomp_19_renamed_0_i188 = a_data[i] < 0;
                            if (decomp_19_renamed_0_i188)
                            {
                                a_data[j_i87] = a_data[j_i87] + s_i142 * a_data[i];
                                a_data[i] = 0;
                            }
                            else
                            {
                                int decomp_20_renamed_0_i188;
                                decomp_20_renamed_0_i188 = a_data[i] > C;
                                if (decomp_20_renamed_0_i188)
                                {
                                    t_i142 = a_data[i] - C;
                                    a_data[j_i87] = a_data[j_i87] + s_i142 * t_i142;
                                    a_data[i] = C;
                                }
                            }
                            decomp_21_renamed_0_i188 = a_data[i] > 0;
                            decomp_22_renamed_0_i188 = a_data[i] < C;
                            decomp_23_renamed_0_i188 = decomp_21_renamed_0_i188 && decomp_22_renamed_0_i188;
                            if (decomp_23_renamed_0_i188)
                            {
                                bnew_i142 = b[0] + Ei_i142 + Y_data[i] * (a_data[i] - a_old_i142_data[i]) * k11_i142 +
                                            Y_data[j_i87] * (a_data[j_i87] - a_old_i142_data[j_i87]) * k12_i142;
                            }
                            else
                            {
                                int decomp_24_renamed_0_i188;
                                int decomp_25_renamed_0_i188;
                                int decomp_26_renamed_0_i188;
                                decomp_24_renamed_0_i188 = a_data[j_i87] > 0;
                                decomp_25_renamed_0_i188 = a_data[j_i87] < C;
                                decomp_26_renamed_0_i188 = decomp_24_renamed_0_i188 && decomp_25_renamed_0_i188;
                                if (decomp_26_renamed_0_i188)
                                {
                                    bnew_i142 = b[0] + Ej_i142 +
                                                Y_data[i] * (a_data[i] - a_old_i142_data[i]) * k12_i142 +
                                                Y_data[j_i87] * (a_data[j_i87] - a_old_i142_data[j_i87]) * k22_i142;
                                }
                                else
                                {
                                    float b1_i188;
                                    float b2_i188;
                                    b1_i188 = b[0] + Ei_i142 + Y_data[i] * (a_data[i] - a_old_i142_data[i]) * k11_i142 +
                                              Y_data[j_i87] * (a_data[j_i87] - a_old_i142_data[j_i87]) * k12_i142;
                                    b2_i188 = b[0] + Ej_i142 + Y_data[i] * (a_data[i] - a_old_i142_data[i]) * k12_i142 +
                                              Y_data[j_i87] * (a_data[j_i87] - a_old_i142_data[j_i87]) * k22_i142;
                                    bnew_i142 = (b1_i188 + b2_i188) / 2;
                                }
                            }
                            delta_b_i142 = bnew_i142 - b[0];
                            b[0] = bnew_i142;
                            t1_i142 = Y_data[i] * (a_data[i] - a_old_i142_data[i]);
                            t2_i142 = Y_data[j_i87] * (a_data[j_i87] - a_old_i142_data[j_i87]);
                            // cluster_takeStep_out13_rep6(): end inline
                            // cluster_fMallocHandle_rep183(): begin inline
                            int i_i189;
                            int j_i189;
                            int *out_i189_width;
                            int *out_i189_height;
                            float *out_i189_data;
                            out_i189_width = &memregion_1595_size4;
                            out_i189_height = &memregion_1596_size4;
                            out_i189_data = memregion_1597_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            int _lit24 = 1;
                            // cluster_fMallocHandle_out1_rep195(): begin inline
                            (*out_i189_height) = _lit24;
                            (*out_i189_width) = (*X_width);
                            temp_i142_width = out_i189_width;
                            temp_i142_height = out_i189_height;
                            temp_i142_data = out_i189_data;
                            // cluster_fMallocHandle_out1_rep195(): end inline
                            // cluster_fMallocHandle_rep183(): end inline
                            // cluster_fMallocHandle_rep193(): begin inline
                            int i_i190;
                            int j_i190;
                            int *out_i190_width;
                            int *out_i190_height;
                            float *out_i190_data;
                            out_i190_width = &memregion_1598_size4;
                            out_i190_height = &memregion_1599_size4;
                            out_i190_data = memregion_1600_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            int _lit25 = 1;
                            // cluster_fMallocHandle_out1_rep206(): begin inline
                            (*out_i190_height) = _lit25;
                            (*out_i190_width) = (*X_width);
                            temp1_i142_width = out_i190_width;
                            temp1_i142_height = out_i190_height;
                            temp1_i142_data = out_i190_data;
                            // cluster_fMallocHandle_out1_rep206(): end inline
                            // cluster_fMallocHandle_rep193(): end inline
                            // cluster_fMallocHandle_rep203(): begin inline
                            int i_i191;
                            int j_i191;
                            int *out_i191_width;
                            int *out_i191_height;
                            float *out_i191_data;
                            out_i191_width = &memregion_1601_size4;
                            out_i191_height = &memregion_1602_size4;
                            out_i191_data = memregion_1603_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            int _lit26 = 1;
                            // cluster_fMallocHandle_out1_rep217(): begin inline
                            (*out_i191_height) = _lit26;
                            (*out_i191_width) = (*X_width);
                            temp2_i142_width = out_i191_width;
                            temp2_i142_height = out_i191_height;
                            temp2_i142_data = out_i191_data;
                            // cluster_fMallocHandle_out1_rep217(): end inline
                            // cluster_fMallocHandle_rep203(): end inline
                            for (k_i142 = 0; k_i142 < N; k_i142++)
                            {
#pragma HLS loop_tripcount max = 100
                                // cluster_takeStep_out14_rep6(): begin inline
                                int decomp_29_renamed_0_i192;
                                // cluster_takeStep_out14_out0_rep4(): begin inline
                                int decomp_27_renamed_0_i288;
                                int decomp_28_renamed_0_i288;
                                decomp_27_renamed_0_i288 = 0 < a_old_i142_data[i];
                                decomp_28_renamed_0_i288 = a_old_i142_data[i] < C;
                                decomp_29_renamed_0_i192 = decomp_27_renamed_0_i288 && decomp_28_renamed_0_i288;
                                // cluster_takeStep_out14_out0_rep4(): end inline
                                if (decomp_29_renamed_0_i192)
                                {
                                    // cluster_takeStep_out14_out1_rep4(): begin inline
                                    float _d6_0_i289;
                                    float _d6_3_i289;
                                    float _d6_2_i289;
                                    // cluster_takeStep_out14_out1_out0_rep7(): begin inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_takeStep_out14_out1_out0_rep7(): end inline
                                    // cluster_polynomial_rep80(): begin inline
                                    int c_i450;
                                    int r_i450;
                                    int j_i450;
                                    int i_i450;
                                    int *bt1_i450_width;
                                    int *bt1_i450_height;
                                    float *bt1_i450_data;
                                    int *bt_i450_width;
                                    int *bt_i450_height;
                                    float *bt_i450_data;
                                    float ret_i450;
                                    int decomp_2_renamed_27_i450;
                                    // cluster_polynomial_out0_rep84(): begin inline
                                    r_i450 = (*temp1_i142_height);
                                    c_i450 = (*temp1_i142_width);
                                    // cluster_polynomial_out0_rep84(): end inline
                                    //  cluster_fMallocHandle_rep451(c, r, &bt); // Dead call removed by HLS DCE
                                    // cluster_polynomial_out1_rep84(): begin inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_polynomial_out1_rep84(): end inline
                                    // cluster_fMtimes_rep84(): begin inline
                                    float temp_i597;
                                    int k_i597;
                                    int j_i597;
                                    int i_i597;
                                    int n_i597;
                                    int p_i597;
                                    int m_i597;
                                    int *out_i597_width;
                                    int *out_i597_height;
                                    float *out_i597_data;
                                    // cluster_fMtimes_out0_rep93(): begin inline
                                    int p1_i704;
                                    m_i597 = (*temp_i142_height);
                                    p_i597 = (*temp_i142_width);
                                    p1_i704 = (*bt_i450_height);
                                    n_i597 = (*bt_i450_width);
                                    bt1_i450_width = out_i597_width;
                                    bt1_i450_height = out_i597_height;
                                    bt1_i450_data = out_i597_data;
                                    // cluster_fMtimes_out0_rep93(): end inline
                                    //  cluster_fMallocHandle_rep467(m, n, &out); // Dead call removed by HLS DCE
                                    // cluster_fMtimes_out1_rep93(): begin inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_fMtimes_out1_rep93(): end inline
                                    // cluster_fMtimes_rep84(): end inline
                                    // cluster_fFreeHandle_rep430(): begin inline
                                    int decomp_0_renamed_166_i598;
                                    // cluster_fFreeHandle_out0_rep464(): begin inline
                                    decomp_0_renamed_166_i598 = bt_i450_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep464(): end inline
                                    if (decomp_0_renamed_166_i598)
                                    {
                                        // free(bt_i450_data);
                                    }
                                    // cluster_fFreeHandle_rep430(): end inline
                                    // cluster_polynomial_out2_rep84(): begin inline
                                    int decomp_0_renamed_167_i599;
                                    int decomp_1_renamed_24_i599;
                                    decomp_0_renamed_167_i599 = (*bt1_i450_height) == 1;
                                    decomp_1_renamed_24_i599 = (*bt1_i450_width) == 1;
                                    decomp_2_renamed_27_i450 = decomp_0_renamed_167_i599 && decomp_1_renamed_24_i599;
                                    // cluster_polynomial_out2_rep84(): end inline
                                    if (decomp_2_renamed_27_i450)
                                    {
                                        int _lit49 = 3;
                                        // cluster_polynomial_out3_rep84(): begin inline
                                        double _d3_0_i600;
                                        double _d3_1_i600;
                                        _d3_0_i600 = pow(bt1_i450_data[0], _lit49);
                                        _d3_1_i600 = _d3_0_i600 / dim;
                                        ret_i450 = _d3_1_i600;
                                        // cluster_polynomial_out3_rep84(): end inline
                                    }
                                    else
                                    {
                                        float __rtr_val_1_i450;
                                        int __rtr_flag_1_i450;
                                        __rtr_flag_1_i450 = 0;
                                        // cluster_polynomial_out4_rep84(): begin inline
                                        // cluster_fFreeHandle_rep446(): begin inline
                                        int decomp_0_renamed_210_i707;
                                        // cluster_fFreeHandle_out0_rep476(): begin inline
                                        decomp_0_renamed_210_i707 = bt1_i450_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep476(): end inline
                                        if (decomp_0_renamed_210_i707)
                                        {
                                            // free(bt1_i450_data);
                                        }
                                        // cluster_fFreeHandle_rep446(): end inline
                                        __rtr_val_1_i450 = -1;
                                        __rtr_flag_1_i450 = 1;
                                        // cluster_polynomial_out4_rep84(): end inline
                                        if (__rtr_flag_1_i450)
                                        {
                                            _d6_0_i289 = __rtr_val_1_i450;
                                            goto end_inline_i450;
                                        }
                                    }
                                    // cluster_fFreeHandle_rep457(): begin inline
                                    int decomp_0_renamed_168_i602;
                                    // cluster_fFreeHandle_out0_rep493(): begin inline
                                    decomp_0_renamed_168_i602 = bt1_i450_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep493(): end inline
                                    if (decomp_0_renamed_168_i602)
                                    {
                                        // free(bt1_i450_data);
                                    }
                                    // cluster_fFreeHandle_rep457(): end inline
                                    _d6_0_i289 = ret_i450;
                                end_inline_i450:;
                                    // cluster_polynomial_rep80(): end inline
                                    // cluster_takeStep_out14_out1_out1_rep7(): begin inline
                                    float _d6_1_i451;
                                    _d6_1_i451 = t1_i142 * _d6_0_i289;
                                    _d6_2_i289 = e_data[k_i142] + _d6_1_i451;
                                    // cluster_takeStep_out14_out1_out1_rep7(): end inline
                                    // cluster_polynomial_rep92(): begin inline
                                    int c_i452;
                                    int r_i452;
                                    int j_i452;
                                    int i_i452;
                                    int *bt1_i452_width;
                                    int *bt1_i452_height;
                                    float *bt1_i452_data;
                                    int *bt_i452_width;
                                    int *bt_i452_height;
                                    float *bt_i452_data;
                                    float ret_i452;
                                    int decomp_2_renamed_28_i452;
                                    // cluster_polynomial_out0_rep97(): begin inline
                                    r_i452 = (*temp1_i142_height);
                                    c_i452 = (*temp1_i142_width);
                                    // cluster_polynomial_out0_rep97(): end inline
                                    //  cluster_fMallocHandle_rep478(c, r, &bt); // Dead call removed by HLS DCE
                                    // cluster_polynomial_out1_rep97(): begin inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_polynomial_out1_rep97(): end inline
                                    // cluster_fMtimes_rep97(): begin inline
                                    float temp_i605;
                                    int k_i605;
                                    int j_i605;
                                    int i_i605;
                                    int n_i605;
                                    int p_i605;
                                    int m_i605;
                                    int *out_i605_width;
                                    int *out_i605_height;
                                    float *out_i605_data;
                                    // cluster_fMtimes_out0_rep107(): begin inline
                                    int p1_i709;
                                    m_i605 = (*temp2_i142_height);
                                    p_i605 = (*temp2_i142_width);
                                    p1_i709 = (*bt_i452_height);
                                    n_i605 = (*bt_i452_width);
                                    bt1_i452_width = out_i605_width;
                                    bt1_i452_height = out_i605_height;
                                    bt1_i452_data = out_i605_data;
                                    // cluster_fMtimes_out0_rep107(): end inline
                                    //  cluster_fMallocHandle_rep494(m, n, &out); // Dead call removed by HLS DCE
                                    // cluster_fMtimes_out1_rep107(): begin inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_fMtimes_out1_rep107(): end inline
                                    // cluster_fMtimes_rep97(): end inline
                                    // cluster_fFreeHandle_rep470(): begin inline
                                    int decomp_0_renamed_169_i606;
                                    // cluster_fFreeHandle_out0_rep507(): begin inline
                                    decomp_0_renamed_169_i606 = bt_i452_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep507(): end inline
                                    if (decomp_0_renamed_169_i606)
                                    {
                                        // free(bt_i452_data);
                                    }
                                    // cluster_fFreeHandle_rep470(): end inline
                                    // cluster_polynomial_out2_rep97(): begin inline
                                    int decomp_0_renamed_170_i607;
                                    int decomp_1_renamed_25_i607;
                                    decomp_0_renamed_170_i607 = (*bt1_i452_height) == 1;
                                    decomp_1_renamed_25_i607 = (*bt1_i452_width) == 1;
                                    decomp_2_renamed_28_i452 = decomp_0_renamed_170_i607 && decomp_1_renamed_25_i607;
                                    // cluster_polynomial_out2_rep97(): end inline
                                    if (decomp_2_renamed_28_i452)
                                    {
                                        int _lit50 = 3;
                                        // cluster_polynomial_out3_rep97(): begin inline
                                        double _d3_0_i608;
                                        double _d3_1_i608;
                                        _d3_0_i608 = pow(bt1_i452_data[0], _lit50);
                                        _d3_1_i608 = _d3_0_i608 / dim;
                                        ret_i452 = _d3_1_i608;
                                        // cluster_polynomial_out3_rep97(): end inline
                                    }
                                    else
                                    {
                                        float __rtr_val_1_i452;
                                        int __rtr_flag_1_i452;
                                        __rtr_flag_1_i452 = 0;
                                        // cluster_polynomial_out4_rep97(): begin inline
                                        // cluster_fFreeHandle_rep486(): begin inline
                                        int decomp_0_renamed_213_i712;
                                        // cluster_fFreeHandle_out0_rep519(): begin inline
                                        decomp_0_renamed_213_i712 = bt1_i452_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep519(): end inline
                                        if (decomp_0_renamed_213_i712)
                                        {
                                            // free(bt1_i452_data);
                                        }
                                        // cluster_fFreeHandle_rep486(): end inline
                                        __rtr_val_1_i452 = -1;
                                        __rtr_flag_1_i452 = 1;
                                        // cluster_polynomial_out4_rep97(): end inline
                                        if (__rtr_flag_1_i452)
                                        {
                                            _d6_3_i289 = __rtr_val_1_i452;
                                            goto end_inline_i452;
                                        }
                                    }
                                    // cluster_fFreeHandle_rep497(): begin inline
                                    int decomp_0_renamed_171_i610;
                                    // cluster_fFreeHandle_out0_rep536(): begin inline
                                    decomp_0_renamed_171_i610 = bt1_i452_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep536(): end inline
                                    if (decomp_0_renamed_171_i610)
                                    {
                                        // free(bt1_i452_data);
                                    }
                                    // cluster_fFreeHandle_rep497(): end inline
                                    _d6_3_i289 = ret_i452;
                                end_inline_i452:;
                                    // cluster_polynomial_rep92(): end inline
                                    // cluster_takeStep_out14_out1_out2_rep7(): begin inline
                                    float _d6_4_i453;
                                    float _d6_5_i453;
                                    float _d6_6_i453;
                                    _d6_4_i453 = t2_i142 * _d6_3_i289;
                                    _d6_5_i453 = _d6_2_i289 + _d6_4_i453;
                                    _d6_6_i453 = _d6_5_i453 - delta_b_i142;
                                    e_data[k_i142] = _d6_6_i453;
                                    e_data[i] = 0;
                                    e_data[j_i87] = 0;
                                    // cluster_takeStep_out14_out1_out2_rep7(): end inline
                                    // cluster_takeStep_out14_out1_rep4(): end inline
                                }
                                // cluster_takeStep_out14_rep6(): end inline
                            }
                            // cluster_fFreeHandle_rep197(): begin inline
                            int decomp_0_renamed_40_i193;
                            // cluster_fFreeHandle_out0_rep207(): begin inline
                            decomp_0_renamed_40_i193 = a_old_i142_data != nullptr;
                            // cluster_fFreeHandle_out0_rep207(): end inline
                            if (decomp_0_renamed_40_i193)
                            {
                                // free(a_old_i142_data);
                            }
                            // cluster_fFreeHandle_rep197(): end inline
                            // cluster_fFreeHandle_rep207(): begin inline
                            int decomp_0_renamed_41_i194;
                            // cluster_fFreeHandle_out0_rep218(): begin inline
                            decomp_0_renamed_41_i194 = temp_i142_data != nullptr;
                            // cluster_fFreeHandle_out0_rep218(): end inline
                            if (decomp_0_renamed_41_i194)
                            {
                                // free(temp_i142_data);
                            }
                            // cluster_fFreeHandle_rep207(): end inline
                            // cluster_fFreeHandle_rep217(): begin inline
                            int decomp_0_renamed_42_i195;
                            // cluster_fFreeHandle_out0_rep229(): begin inline
                            decomp_0_renamed_42_i195 = temp1_i142_data != nullptr;
                            // cluster_fFreeHandle_out0_rep229(): end inline
                            if (decomp_0_renamed_42_i195)
                            {
                                // free(temp1_i142_data);
                            }
                            // cluster_fFreeHandle_rep217(): end inline
                            // cluster_fFreeHandle_rep227(): begin inline
                            int decomp_0_renamed_43_i196;
                            // cluster_fFreeHandle_out0_rep240(): begin inline
                            decomp_0_renamed_43_i196 = temp2_i142_data != nullptr;
                            // cluster_fFreeHandle_out0_rep240(): end inline
                            if (decomp_0_renamed_43_i196)
                            {
                                // free(temp2_i142_data);
                            }
                            // cluster_fFreeHandle_rep227(): end inline
                            // cluster_takeStep_out15_rep6(): begin inline
                            ret_i142 = 1;
                            // cluster_takeStep_out15_rep6(): end inline
                            ret_i87 = ret_i142;
                        end_inline_i142:;
                            // cluster_takeStep_rep3(): end inline
                            decomp_5_renamed_1_i117 = ret_i87 == 1;
                            if (decomp_5_renamed_1_i117)
                            {
                                __rtr_val_0_i87 = ret_i87;
                                __rtr_flag_0_i87 = 1;
                                goto end_inline_i117;
                            }
                        }
                        // cluster_examineExample_out4_out2_rep1(): begin inline
                        randVal_i87 = 1.0;
                        // cluster_examineExample_out4_out2_rep1(): end inline
                        for (k_i87 = (randVal_i87 * (N - 2)); k_i87 < N; k_i87++)
                        {
#pragma HLS loop_tripcount max = 2
                            // cluster_examineExample_out4_out3_rep1(): begin inline
                            int decomp_6_renamed_1_i144;
                            // cluster_examineExample_out4_out3_out0_rep3(): begin inline
                            decomp_6_renamed_1_i144 = (a_data[k_i87] > 0) && (a_data[k_i87] < C);
                            // cluster_examineExample_out4_out3_out0_rep3(): end inline
                            if (decomp_6_renamed_1_i144)
                            {
                                int decomp_7_renamed_0_i144;
                                // cluster_takeStep_rep12(): begin inline
                                int __rtr_flag_2_i199;
                                __rtr_flag_2_i199 = 0;
                                int __rtr_val_2_i199;
                                int ret_i199;
                                float s_i199;
                                int m_i199;
                                int k_i199;
                                float Ei_i199;
                                float Ej_i199;
                                float gamma_i199;
                                float L_i199;
                                float H_i199;
                                int *a_old_i199_width;
                                int *a_old_i199_height;
                                float *a_old_i199_data;
                                float k11_i199;
                                float k12_i199;
                                float k22_i199;
                                float eta_i199;
                                int *temp_i199_width;
                                int *temp_i199_height;
                                float *temp_i199_data;
                                int *temp1_i199_width;
                                int *temp1_i199_height;
                                float *temp1_i199_data;
                                int *temp2_i199_width;
                                int *temp2_i199_height;
                                float *temp2_i199_data;
                                float t_i199;
                                float t1_i199;
                                float t2_i199;
                                float bnew_i199;
                                float delta_b_i199;
                                float c1_i199;
                                float c2_i199;
                                float Lobj_i199;
                                float Hobj_i199;
                                int __rtr_val_5_i199;
                                int __rtr_flag_5_i199;
                                __rtr_flag_5_i199 = 0;
                                int __rtr_flag_6_i199;
                                __rtr_flag_6_i199 = 0;
                                int __rtr_val_6_i199;
                                int __rtr_val_7_i199;
                                int __rtr_flag_7_i199;
                                __rtr_flag_7_i199 = 0;
                                int __rtr_flag_8_i199;
                                __rtr_flag_8_i199 = 0;
                                int __rtr_val_8_i199;
                                int __rtr_val_9_i199;
                                int __rtr_flag_9_i199;
                                __rtr_flag_9_i199 = 0;
                                int __rtr_flag_10_i199;
                                __rtr_flag_10_i199 = 0;
                                int __rtr_val_10_i199;
                                int __rtr_val_11_i199;
                                int __rtr_flag_11_i199;
                                __rtr_flag_11_i199 = 0;
                                int decomp_3_renamed_8_i199;
                                int decomp_6_renamed_5_i199;
                                int decomp_10_renamed_3_i199;
                                int decomp_18_renamed_3_i199;
                                // cluster_takeStep_out0_rep12(): begin inline
                                int n_i294;
                                int decomp_0_renamed_69_i294;
                                ret_i199 = 1;
                                decomp_0_renamed_69_i294 = i == k_i87;
                                if (decomp_0_renamed_69_i294)
                                {
                                    __rtr_val_2_i199 = 0;
                                    __rtr_flag_2_i199 = 1;
                                    goto end_inline_i294;
                                }
                            end_inline_i294:;
                                // cluster_takeStep_out0_rep12(): end inline
                                // cluster_takeStep_out17_rep12(): begin inline
                                if (__rtr_flag_2_i199)
                                {
                                    __rtr_val_5_i199 = __rtr_val_2_i199;
                                    __rtr_flag_5_i199 = 1;
                                    goto end_inline_i295;
                                }
                            end_inline_i295:;
                                // cluster_takeStep_out17_rep12(): end inline
                                // cluster_takeStep_out24_rep12(): begin inline
                                if (__rtr_flag_5_i199)
                                {
                                    __rtr_val_6_i199 = __rtr_val_5_i199;
                                    __rtr_flag_6_i199 = 1;
                                    goto end_inline_i296;
                                }
                            end_inline_i296:;
                                // cluster_takeStep_out24_rep12(): end inline
                                // cluster_takeStep_out32_rep12(): begin inline
                                if (__rtr_flag_6_i199)
                                {
                                    __rtr_val_7_i199 = __rtr_val_6_i199;
                                    __rtr_flag_7_i199 = 1;
                                    goto end_inline_i297;
                                }
                            end_inline_i297:;
                                // cluster_takeStep_out32_rep12(): end inline
                                // cluster_takeStep_out41_rep12(): begin inline
                                if (__rtr_flag_7_i199)
                                {
                                    __rtr_val_8_i199 = __rtr_val_7_i199;
                                    __rtr_flag_8_i199 = 1;
                                    goto end_inline_i298;
                                }
                            end_inline_i298:;
                                // cluster_takeStep_out41_rep12(): end inline
                                // cluster_takeStep_out51_rep12(): begin inline
                                if (__rtr_flag_8_i199)
                                {
                                    __rtr_val_9_i199 = __rtr_val_8_i199;
                                    __rtr_flag_9_i199 = 1;
                                    goto end_inline_i299;
                                }
                            end_inline_i299:;
                                // cluster_takeStep_out51_rep12(): end inline
                                // cluster_takeStep_out62_rep12(): begin inline
                                if (__rtr_flag_9_i199)
                                {
                                    __rtr_val_10_i199 = __rtr_val_9_i199;
                                    __rtr_flag_10_i199 = 1;
                                    goto end_inline_i300;
                                }
                            end_inline_i300:;
                                // cluster_takeStep_out62_rep12(): end inline
                                // cluster_takeStep_out74_rep12(): begin inline
                                if (__rtr_flag_10_i199)
                                {
                                    __rtr_val_11_i199 = __rtr_val_10_i199;
                                    __rtr_flag_11_i199 = 1;
                                    goto end_inline_i301;
                                }
                            end_inline_i301:;
                                // cluster_takeStep_out74_rep12(): end inline
                                if (__rtr_flag_11_i199)
                                {
                                    ret_i87 = __rtr_val_11_i199;
                                    goto end_inline_i199;
                                }
                                // cluster_fDeepCopy_rep57(): begin inline
                                int cols_i302;
                                int rows_i302;
                                int *out_i302_width;
                                int *out_i302_height;
                                float *out_i302_data;
                                int j_i302;
                                int i_i302;
                                // cluster_fDeepCopy_out0_rep64(): begin inline
                                rows_i302 = (*a_height);
                                cols_i302 = (*a_width);
                                // cluster_fDeepCopy_out0_rep64(): end inline
                                // cluster_fMallocHandle_rep534(): begin inline
                                int i_i455;
                                int j_i455;
                                int *out_i455_width;
                                int *out_i455_height;
                                float *out_i455_data;
                                out_i455_width = &memregion_1604_size4;
                                out_i455_height = &memregion_1605_size4;
                                out_i455_data = memregion_1606_size400;
#pragma clava malloc_size max = 408 min = 408 avg = 408
                                // cluster_fMallocHandle_out1_rep579(): begin inline
                                (*out_i455_height) = rows_i302;
                                (*out_i455_width) = cols_i302;
                                out_i302_width = out_i455_width;
                                out_i302_height = out_i455_height;
                                out_i302_data = out_i455_data;
                                // cluster_fMallocHandle_out1_rep579(): end inline
                                // cluster_fMallocHandle_rep534(): end inline
                                // cluster_fDeepCopy_out1_rep64(): begin inline
                                for (i_i302 = 0; i_i302 < rows_i302; i_i302++)
                                {
#pragma HLS loop_tripcount max = 100
                                    for (j_i302 = 0; j_i302 < cols_i302; j_i302++)
                                    {
                                        int __idxExpr64 = i_i302 * (*out_i302_width) + j_i302;
                                        int __idxExpr65 = i_i302 * (*a_width) + j_i302;
#pragma HLS loop_tripcount max = 1
                                        out_i302_data[__idxExpr64] = a_data[__idxExpr65];
                                    }
                                }
                                a_old_i199_width = out_i302_width;
                                a_old_i199_height = out_i302_height;
                                a_old_i199_data = out_i302_data;
                                // cluster_fDeepCopy_out1_rep64(): end inline
                                // cluster_fDeepCopy_rep57(): end inline
                                // cluster_takeStep_out1_rep12(): begin inline
                                int decomp_1_renamed_12_i303;
                                int decomp_2_renamed_15_i303;
                                decomp_1_renamed_12_i303 = a_old_i199_data[i] > 0;
                                decomp_2_renamed_15_i303 = a_old_i199_data[i] < C;
                                decomp_3_renamed_8_i199 = decomp_1_renamed_12_i303 && decomp_2_renamed_15_i303;
                                // cluster_takeStep_out1_rep12(): end inline
                                if (decomp_3_renamed_8_i199)
                                {
                                    // cluster_takeStep_out2_rep12(): begin inline
                                    Ei_i199 = e_data[i];
                                    // cluster_takeStep_out2_rep12(): end inline
                                }
                                else
                                {
                                    // cluster_takeStep_out3_rep12(): begin inline
                                    float _d4_0_i305;
                                    int *temp1_i457_width;
                                    int *temp1_i457_height;
                                    float *temp1_i457_data;
                                    // cluster_cal_learned_func_rep32(): begin inline
                                    int *temp_i457_width;
                                    int *temp_i457_height;
                                    float *temp_i457_data;
                                    int m_i457;
                                    int i_i457;
                                    float ret_i457;
                                    float s_i457;
                                    // cluster_cal_learned_func_out0_rep34(): begin inline
                                    int j_i612;
                                    int n_i612;
                                    s_i457 = 0;
                                    // cluster_cal_learned_func_out0_rep34(): end inline
                                    for (i_i457 = 0; i_i457 < N; i_i457++)
                                    {
#pragma HLS loop_tripcount max = 100
                                        // cluster_cal_learned_func_out1_rep34(): begin inline
                                        int decomp_0_renamed_172_i613;
                                        int __idxExpr66 = i_i457 * (*a_width) + 0;
                                        // cluster_cal_learned_func_out1_out0_rep39(): begin inline
                                        decomp_0_renamed_172_i613 = a_data[__idxExpr66] > 0;
                                        // cluster_cal_learned_func_out1_out0_rep39(): end inline
                                        if (decomp_0_renamed_172_i613)
                                        {
                                            // cluster_cal_learned_func_out1_out1_rep39(): begin inline
                                            float _d2_1_i715;
                                            float _d2_0_i715;
                                            // cluster_fMallocHandle_rep541(): begin inline
                                            int i_i776;
                                            int j_i776;
                                            int *out_i776_width;
                                            int *out_i776_height;
                                            float *out_i776_data;
                                            out_i776_width = &memregion_1607_size4;
                                            out_i776_height = &memregion_1608_size4;
                                            out_i776_data = memregion_1609_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                            int _lit64 = 1;
                                            // cluster_fMallocHandle_out1_rep590(): begin inline
                                            (*out_i776_height) = _lit64;
                                            (*out_i776_width) = (*X_width);
                                            temp_i457_width = out_i776_width;
                                            temp_i457_height = out_i776_height;
                                            temp_i457_data = out_i776_data;
                                            // cluster_fMallocHandle_out1_rep590(): end inline
                                            // cluster_fMallocHandle_rep541(): end inline
                                            // cluster_fMallocHandle_rep551(): begin inline
                                            int i_i777;
                                            int j_i777;
                                            int *out_i777_width;
                                            int *out_i777_height;
                                            float *out_i777_data;
                                            out_i777_width = &memregion_1610_size4;
                                            out_i777_height = &memregion_1611_size4;
                                            out_i777_data = memregion_1612_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                            int _lit65 = 1;
                                            // cluster_fMallocHandle_out1_rep601(): begin inline
                                            (*out_i777_height) = _lit65;
                                            (*out_i777_width) = (*X_width);
                                            temp1_i457_width = out_i777_width;
                                            temp1_i457_height = out_i777_height;
                                            temp1_i457_data = out_i777_data;
                                            // cluster_fMallocHandle_out1_rep601(): end inline
                                            // cluster_fMallocHandle_rep551(): end inline
                                            // cluster_cal_learned_func_out1_out1_out0_rep41(): begin inline
                                            for (m_i457 = 0; m_i457 < (*X_width); m_i457++)
                                            {
                                                int __idxExpr67 = i_i457 * (*X_width) + m_i457;
#pragma HLS loop_tripcount max = 256
                                                temp_i457_data[m_i457] = X_data[__idxExpr67];
                                                int __idxExpr68 = i * (*X_width) + m_i457;
                                                temp1_i457_data[m_i457] = X_data[__idxExpr68];
                                            }
                                            _d2_0_i715 = a_data[i_i457] * Y_data[i_i457];
                                            // cluster_cal_learned_func_out1_out1_out0_rep41(): end inline
                                            // cluster_polynomial_rep101(): begin inline
                                            int c_i779;
                                            int r_i779;
                                            int j_i779;
                                            int i_i779;
                                            int *bt1_i779_width;
                                            int *bt1_i779_height;
                                            float *bt1_i779_data;
                                            int *bt_i779_width;
                                            int *bt_i779_height;
                                            float *bt_i779_data;
                                            float ret_i779;
                                            int decomp_2_renamed_50_i779;
                                            // cluster_polynomial_out0_rep111(): begin inline
                                            r_i779 = (*temp1_i457_height);
                                            c_i779 = (*temp1_i457_width);
                                            // cluster_polynomial_out0_rep111(): end inline
                                            // cluster_fMallocHandle_rep563(): begin inline
                                            int i_i825;
                                            int j_i825;
                                            int *out_i825_width;
                                            int *out_i825_height;
                                            float *out_i825_data;
                                            out_i825_width = &memregion_1613_size4;
                                            out_i825_height = &memregion_1614_size4;
                                            out_i825_data = memregion_1615_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                            // cluster_fMallocHandle_out1_rep611(): begin inline
                                            (*out_i825_height) = c_i779;
                                            (*out_i825_width) = r_i779;
                                            bt_i779_width = out_i825_width;
                                            bt_i779_height = out_i825_height;
                                            bt_i779_data = out_i825_data;
                                            // cluster_fMallocHandle_out1_rep611(): end inline
                                            // cluster_fMallocHandle_rep563(): end inline
                                            // cluster_polynomial_out1_rep111(): begin inline
                                            for (i_i779 = 0; i_i779 < r_i779; i_i779++)
                                            {
#pragma HLS loop_tripcount max = 1
                                                for (j_i779 = 0; j_i779 < c_i779; j_i779++)
                                                {
                                                    int __idxExpr69 = j_i779 * (*bt_i779_width) + i_i779;
                                                    int __idxExpr70 = i_i779 * (*temp1_i457_width) + j_i779;
#pragma HLS loop_tripcount max = 256
                                                    bt_i779_data[__idxExpr69] = temp1_i457_data[__idxExpr70];
                                                }
                                            }
                                            // cluster_polynomial_out1_rep111(): end inline
                                            // cluster_fMtimes_rep111(): begin inline
                                            float temp_i827;
                                            int k_i827;
                                            int j_i827;
                                            int i_i827;
                                            int n_i827;
                                            int p_i827;
                                            int m_i827;
                                            int *out_i827_width;
                                            int *out_i827_height;
                                            float *out_i827_data;
                                            // cluster_fMtimes_out0_rep118(): begin inline
                                            int p1_i852;
                                            m_i827 = (*temp_i457_height);
                                            p_i827 = (*temp_i457_width);
                                            p1_i852 = (*bt_i779_height);
                                            n_i827 = (*bt_i779_width);
                                            // cluster_fMtimes_out0_rep118(): end inline
                                            // cluster_fMallocHandle_rep573(): begin inline
                                            int i_i853;
                                            int j_i853;
                                            int *out_i853_width;
                                            int *out_i853_height;
                                            float *out_i853_data;
                                            out_i853_width = &memregion_1616_size4;
                                            out_i853_height = &memregion_1617_size4;
                                            out_i853_data = &memregion_1618_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                                            // cluster_fMallocHandle_out1_rep625(): begin inline
                                            (*out_i853_height) = m_i827;
                                            (*out_i853_width) = n_i827;
                                            out_i827_width = out_i853_width;
                                            out_i827_height = out_i853_height;
                                            out_i827_data = out_i853_data;
                                            // cluster_fMallocHandle_out1_rep625(): end inline
                                            // cluster_fMallocHandle_rep573(): end inline
                                            // cluster_fMtimes_out1_rep118(): begin inline
                                            for (i_i827 = 0; i_i827 < m_i827; i_i827++)
                                            {
#pragma HLS loop_tripcount max = 1
                                                for (j_i827 = 0; j_i827 < n_i827; j_i827++)
                                                {
#pragma HLS loop_tripcount max = 1
                                                    temp_i827 = 0;
                                                    for (k_i827 = 0; k_i827 < p_i827; k_i827++)
                                                    {
                                                        int __idxExpr71 = k_i827 * (*bt_i779_width) + j_i827;
                                                        int __idxExpr72 = i_i827 * (*temp_i457_width) + k_i827;
#pragma HLS loop_tripcount max = 256
                                                        temp_i827 = temp_i827 + bt_i779_data[__idxExpr71] *
                                                                                    temp_i457_data[__idxExpr72];
                                                    }
                                                    int __idxExpr73 = i_i827 * (*out_i827_width) + j_i827;
                                                    out_i827_data[__idxExpr73] = temp_i827;
                                                }
                                            }
                                            bt1_i779_width = out_i827_width;
                                            bt1_i779_height = out_i827_height;
                                            bt1_i779_data = out_i827_data;
                                            // cluster_fMtimes_out1_rep118(): end inline
                                            // cluster_fMtimes_rep111(): end inline
                                            // cluster_fFreeHandle_rep561(): begin inline
                                            int decomp_0_renamed_257_i828;
                                            // cluster_fFreeHandle_out0_rep605(): begin inline
                                            decomp_0_renamed_257_i828 = bt_i779_data != nullptr;
                                            // cluster_fFreeHandle_out0_rep605(): end inline
                                            if (decomp_0_renamed_257_i828)
                                            {
                                                // free(bt_i779_data);
                                            }
                                            // cluster_fFreeHandle_rep561(): end inline
                                            // cluster_polynomial_out2_rep111(): begin inline
                                            int decomp_0_renamed_258_i829;
                                            int decomp_1_renamed_33_i829;
                                            decomp_0_renamed_258_i829 = (*bt1_i779_height) == 1;
                                            decomp_1_renamed_33_i829 = (*bt1_i779_width) == 1;
                                            decomp_2_renamed_50_i779 =
                                                decomp_0_renamed_258_i829 && decomp_1_renamed_33_i829;
                                            // cluster_polynomial_out2_rep111(): end inline
                                            if (decomp_2_renamed_50_i779)
                                            {
                                                int _lit66 = 3;
                                                // cluster_polynomial_out3_rep111(): begin inline
                                                double _d3_0_i830;
                                                double _d3_1_i830;
                                                _d3_0_i830 = pow(bt1_i779_data[0], _lit66);
                                                _d3_1_i830 = _d3_0_i830 / dim;
                                                ret_i779 = _d3_1_i830;
                                                // cluster_polynomial_out3_rep111(): end inline
                                            }
                                            else
                                            {
                                                float __rtr_val_1_i779;
                                                int __rtr_flag_1_i779;
                                                __rtr_flag_1_i779 = 0;
                                                // cluster_polynomial_out4_rep111(): begin inline
                                                // cluster_fFreeHandle_rep571(): begin inline
                                                int decomp_0_renamed_270_i856;
                                                // cluster_fFreeHandle_out0_rep619(): begin inline
                                                decomp_0_renamed_270_i856 = bt1_i779_data != nullptr;
                                                // cluster_fFreeHandle_out0_rep619(): end inline
                                                if (decomp_0_renamed_270_i856)
                                                {
                                                    // free(bt1_i779_data);
                                                }
                                                // cluster_fFreeHandle_rep571(): end inline
                                                __rtr_val_1_i779 = -1;
                                                __rtr_flag_1_i779 = 1;
                                                // cluster_polynomial_out4_rep111(): end inline
                                                if (__rtr_flag_1_i779)
                                                {
                                                    _d2_1_i715 = __rtr_val_1_i779;
                                                    goto end_inline_i779;
                                                }
                                            }
                                            // cluster_fFreeHandle_rep584(): begin inline
                                            int decomp_0_renamed_259_i832;
                                            // cluster_fFreeHandle_out0_rep630(): begin inline
                                            decomp_0_renamed_259_i832 = bt1_i779_data != nullptr;
                                            // cluster_fFreeHandle_out0_rep630(): end inline
                                            if (decomp_0_renamed_259_i832)
                                            {
                                                // free(bt1_i779_data);
                                            }
                                            // cluster_fFreeHandle_rep584(): end inline
                                            _d2_1_i715 = ret_i779;
                                        end_inline_i779:;
                                            // cluster_polynomial_rep101(): end inline
                                            // cluster_cal_learned_func_out1_out1_out1_rep41(): begin inline
                                            float _d2_2_i780;
                                            float _d2_3_i780;
                                            _d2_2_i780 = _d2_0_i715 * _d2_1_i715;
                                            _d2_3_i780 = s_i457 + _d2_2_i780;
                                            s_i457 = _d2_3_i780;
                                            // free(temp_i457_data);
                                            // free(temp1_i457_data);
                                            //  cluster_cal_learned_func_out1_out1_out1_rep41(): end inline
                                            //  cluster_cal_learned_func_out1_out1_rep39(): end inline
                                        }
                                        // cluster_cal_learned_func_out1_rep34(): end inline
                                    }
                                    // cluster_cal_learned_func_out2_rep34(): begin inline
                                    s_i457 = s_i457 - b[0];
                                    ret_i457 = s_i457;
                                    // cluster_cal_learned_func_out2_rep34(): end inline
                                    _d4_0_i305 = ret_i457;
                                    // cluster_cal_learned_func_rep32(): end inline
                                    // cluster_takeStep_out3_out1_rep15(): begin inline
                                    float _d4_1_i458;
                                    _d4_1_i458 = _d4_0_i305 - Y_data[i];
                                    Ei_i199 = _d4_1_i458;
                                    // cluster_takeStep_out3_out1_rep15(): end inline
                                    // cluster_takeStep_out3_rep12(): end inline
                                }
                                // cluster_takeStep_out4_rep12(): begin inline
                                int decomp_4_renamed_9_i306;
                                int decomp_5_renamed_5_i306;
                                decomp_4_renamed_9_i306 = a_old_i199_data[k_i87] > 0;
                                decomp_5_renamed_5_i306 = a_old_i199_data[k_i87] < C;
                                decomp_6_renamed_5_i199 = decomp_4_renamed_9_i306 && decomp_5_renamed_5_i306;
                                // cluster_takeStep_out4_rep12(): end inline
                                if (decomp_6_renamed_5_i199)
                                {
                                    // cluster_takeStep_out5_rep12(): begin inline
                                    Ej_i199 = e_data[k_i87];
                                    // cluster_takeStep_out5_rep12(): end inline
                                }
                                else
                                {
                                    // cluster_takeStep_out6_rep12(): begin inline
                                    float _d5_0_i308;
                                    int *temp1_i459_width;
                                    int *temp1_i459_height;
                                    float *temp1_i459_data;
                                    // cluster_cal_learned_func_rep39(): begin inline
                                    int *temp_i459_width;
                                    int *temp_i459_height;
                                    float *temp_i459_data;
                                    int m_i459;
                                    int i_i459;
                                    float ret_i459;
                                    float s_i459;
                                    // cluster_cal_learned_func_out0_rep42(): begin inline
                                    int j_i615;
                                    int n_i615;
                                    s_i459 = 0;
                                    // cluster_cal_learned_func_out0_rep42(): end inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_cal_learned_func_out2_rep42(): begin inline
                                    s_i459 = s_i459 - b[0];
                                    ret_i459 = s_i459;
                                    // cluster_cal_learned_func_out2_rep42(): end inline
                                    _d5_0_i308 = ret_i459;
                                    // cluster_cal_learned_func_rep39(): end inline
                                    // cluster_takeStep_out6_out1_rep15(): begin inline
                                    float _d5_1_i460;
                                    _d5_1_i460 = _d5_0_i308 - Y_data[k_i87];
                                    Ej_i199 = _d5_1_i460;
                                    // cluster_takeStep_out6_out1_rep15(): end inline
                                    // cluster_takeStep_out6_rep12(): end inline
                                }
                                // cluster_takeStep_out7_rep12(): begin inline
                                int decomp_7_renamed_3_i309;
                                s_i199 = Y_data[i] * Y_data[k_i87];
                                decomp_7_renamed_3_i309 = Y_data[i] == Y_data[k_i87];
                                if (decomp_7_renamed_3_i309)
                                {
                                    int decomp_8_renamed_3_i309;
                                    gamma_i199 = a_old_i199_data[i] + a_old_i199_data[k_i87];
                                    decomp_8_renamed_3_i309 = gamma_i199 > C;
                                    if (decomp_8_renamed_3_i309)
                                    {
                                        L_i199 = gamma_i199 - C;
                                        H_i199 = C;
                                    }
                                    else
                                    {
                                        L_i199 = 0;
                                        H_i199 = gamma_i199;
                                    }
                                }
                                else
                                {
                                    int decomp_9_renamed_2_i309;
                                    gamma_i199 = a_old_i199_data[i] - a_old_i199_data[k_i87];
                                    decomp_9_renamed_2_i309 = gamma_i199 > 0;
                                    if (decomp_9_renamed_2_i309)
                                    {
                                        L_i199 = 0;
                                        H_i199 = C - gamma_i199;
                                    }
                                    else
                                    {
                                        L_i199 = -gamma_i199;
                                        H_i199 = C;
                                    }
                                }
                                decomp_10_renamed_3_i199 = L_i199 == H_i199;
                                // cluster_takeStep_out7_rep12(): end inline
                                if (decomp_10_renamed_3_i199)
                                {
                                    int __rtr_val_3_i199;
                                    int __rtr_flag_3_i199;
                                    __rtr_flag_3_i199 = 0;
                                    // cluster_takeStep_out8_rep12(): begin inline
                                    // cluster_fFreeHandle_rep509(): begin inline
                                    int decomp_0_renamed_112_i461;
                                    // cluster_fFreeHandle_out0_rep545(): begin inline
                                    decomp_0_renamed_112_i461 = a_old_i199_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep545(): end inline
                                    if (decomp_0_renamed_112_i461)
                                    {
                                        // free(a_old_i199_data);
                                    }
                                    // cluster_fFreeHandle_rep509(): end inline
                                    __rtr_val_3_i199 = 0;
                                    __rtr_flag_3_i199 = 1;
                                    // cluster_takeStep_out8_rep12(): end inline
                                    if (__rtr_flag_3_i199)
                                    {
                                        ret_i87 = __rtr_val_3_i199;
                                        goto end_inline_i199;
                                    }
                                }
                                // cluster_fMallocHandle_rep502(): begin inline
                                int i_i311;
                                int j_i311;
                                int *out_i311_width;
                                int *out_i311_height;
                                float *out_i311_data;
                                out_i311_width = &memregion_1619_size4;
                                out_i311_height = &memregion_1620_size4;
                                out_i311_data = memregion_1621_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                int _lit35 = 1;
                                // cluster_fMallocHandle_out1_rep545(): begin inline
                                (*out_i311_height) = _lit35;
                                (*out_i311_width) = (*X_width);
                                temp_i199_width = out_i311_width;
                                temp_i199_height = out_i311_height;
                                temp_i199_data = out_i311_data;
                                // cluster_fMallocHandle_out1_rep545(): end inline
                                // cluster_fMallocHandle_rep502(): end inline
                                // cluster_fMallocHandle_rep508(): begin inline
                                int i_i312;
                                int j_i312;
                                int *out_i312_width;
                                int *out_i312_height;
                                float *out_i312_data;
                                out_i312_width = &memregion_1622_size4;
                                out_i312_height = &memregion_1623_size4;
                                out_i312_data = memregion_1624_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                int _lit36 = 1;
                                // cluster_fMallocHandle_out1_rep552(): begin inline
                                (*out_i312_height) = _lit36;
                                (*out_i312_width) = (*X_width);
                                temp1_i199_width = out_i312_width;
                                temp1_i199_height = out_i312_height;
                                temp1_i199_data = out_i312_data;
                                // cluster_fMallocHandle_out1_rep552(): end inline
                                // cluster_fMallocHandle_rep508(): end inline
                                // cluster_takeStep_out9_rep12(): begin inline
                                for (m_i199 = 0; m_i199 < (*X_width); m_i199++)
                                {
                                    int __idxExpr74 = i * (*X_width) + m_i199;
#pragma HLS loop_tripcount max = 256
                                    temp_i199_data[m_i199] = X_data[__idxExpr74];
                                    int __idxExpr75 = k_i87 * (*X_width) + m_i199;
                                    temp1_i199_data[m_i199] = X_data[__idxExpr75];
                                }
                                // cluster_takeStep_out9_rep12(): end inline
                                // cluster_polynomial_rep119(): begin inline
                                int c_i314;
                                int r_i314;
                                int j_i314;
                                int i_i314;
                                int *bt1_i314_width;
                                int *bt1_i314_height;
                                float *bt1_i314_data;
                                int *bt_i314_width;
                                int *bt_i314_height;
                                float *bt_i314_data;
                                float ret_i314;
                                int decomp_2_renamed_16_i314;
                                // cluster_polynomial_out0_rep131(): begin inline
                                r_i314 = (*temp_i199_height);
                                c_i314 = (*temp_i199_width);
                                // cluster_polynomial_out0_rep131(): end inline
                                // cluster_fMallocHandle_rep627(): begin inline
                                int i_i465;
                                int j_i465;
                                int *out_i465_width;
                                int *out_i465_height;
                                float *out_i465_data;
                                out_i465_width = &memregion_1625_size4;
                                out_i465_height = &memregion_1626_size4;
                                out_i465_data = memregion_1627_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                // cluster_fMallocHandle_out1_rep681(): begin inline
                                (*out_i465_height) = c_i314;
                                (*out_i465_width) = r_i314;
                                bt_i314_width = out_i465_width;
                                bt_i314_height = out_i465_height;
                                bt_i314_data = out_i465_data;
                                // cluster_fMallocHandle_out1_rep681(): end inline
                                // cluster_fMallocHandle_rep627(): end inline
                                // cluster_polynomial_out1_rep131(): begin inline
                                for (i_i314 = 0; i_i314 < r_i314; i_i314++)
                                {
#pragma HLS loop_tripcount max = 1
                                    for (j_i314 = 0; j_i314 < c_i314; j_i314++)
                                    {
                                        int __idxExpr76 = j_i314 * (*bt_i314_width) + i_i314;
                                        int __idxExpr77 = i_i314 * (*temp_i199_width) + j_i314;
#pragma HLS loop_tripcount max = 256
                                        bt_i314_data[__idxExpr76] = temp_i199_data[__idxExpr77];
                                    }
                                }
                                // cluster_polynomial_out1_rep131(): end inline
                                // cluster_fMtimes_rep131(): begin inline
                                float temp_i467;
                                int k_i467;
                                int j_i467;
                                int i_i467;
                                int n_i467;
                                int p_i467;
                                int m_i467;
                                int *out_i467_width;
                                int *out_i467_height;
                                float *out_i467_data;
                                // cluster_fMtimes_out0_rep140(): begin inline
                                int p1_i619;
                                m_i467 = (*temp_i199_height);
                                p_i467 = (*temp_i199_width);
                                p1_i619 = (*bt_i314_height);
                                n_i467 = (*bt_i314_width);
                                // cluster_fMtimes_out0_rep140(): end inline
                                // cluster_fMallocHandle_rep633(): begin inline
                                int i_i620;
                                int j_i620;
                                int *out_i620_width;
                                int *out_i620_height;
                                float *out_i620_data;
                                out_i620_width = &memregion_1628_size4;
                                out_i620_height = &memregion_1629_size4;
                                out_i620_data = &memregion_1630_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                                // cluster_fMallocHandle_out1_rep691(): begin inline
                                (*out_i620_height) = m_i467;
                                (*out_i620_width) = n_i467;
                                out_i467_width = out_i620_width;
                                out_i467_height = out_i620_height;
                                out_i467_data = out_i620_data;
                                // cluster_fMallocHandle_out1_rep691(): end inline
                                // cluster_fMallocHandle_rep633(): end inline
                                // cluster_fMtimes_out1_rep140(): begin inline
                                for (i_i467 = 0; i_i467 < m_i467; i_i467++)
                                {
#pragma HLS loop_tripcount max = 1
                                    for (j_i467 = 0; j_i467 < n_i467; j_i467++)
                                    {
#pragma HLS loop_tripcount max = 1
                                        temp_i467 = 0;
                                        for (k_i467 = 0; k_i467 < p_i467; k_i467++)
                                        {
                                            int __idxExpr78 = k_i467 * (*bt_i314_width) + j_i467;
                                            int __idxExpr79 = i_i467 * (*temp_i199_width) + k_i467;
#pragma HLS loop_tripcount max = 256
                                            temp_i467 =
                                                temp_i467 + bt_i314_data[__idxExpr78] * temp_i199_data[__idxExpr79];
                                        }
                                        int __idxExpr80 = i_i467 * (*out_i467_width) + j_i467;
                                        out_i467_data[__idxExpr80] = temp_i467;
                                    }
                                }
                                bt1_i314_width = out_i467_width;
                                bt1_i314_height = out_i467_height;
                                bt1_i314_data = out_i467_data;
                                // cluster_fMtimes_out1_rep140(): end inline
                                // cluster_fMtimes_rep131(): end inline
                                // cluster_fFreeHandle_rep627(): begin inline
                                int decomp_0_renamed_113_i468;
                                // cluster_fFreeHandle_out0_rep677(): begin inline
                                decomp_0_renamed_113_i468 = bt_i314_data != nullptr;
                                // cluster_fFreeHandle_out0_rep677(): end inline
                                if (decomp_0_renamed_113_i468)
                                {
                                    // free(bt_i314_data);
                                }
                                // cluster_fFreeHandle_rep627(): end inline
                                // cluster_polynomial_out2_rep131(): begin inline
                                int decomp_0_renamed_114_i469;
                                int decomp_1_renamed_17_i469;
                                decomp_0_renamed_114_i469 = (*bt1_i314_height) == 1;
                                decomp_1_renamed_17_i469 = (*bt1_i314_width) == 1;
                                decomp_2_renamed_16_i314 = decomp_0_renamed_114_i469 && decomp_1_renamed_17_i469;
                                // cluster_polynomial_out2_rep131(): end inline
                                if (decomp_2_renamed_16_i314)
                                {
                                    int _lit37 = 3;
                                    // cluster_polynomial_out3_rep131(): begin inline
                                    double _d3_0_i470;
                                    double _d3_1_i470;
                                    _d3_0_i470 = pow(bt1_i314_data[0], _lit37);
                                    _d3_1_i470 = _d3_0_i470 / dim;
                                    ret_i314 = _d3_1_i470;
                                    // cluster_polynomial_out3_rep131(): end inline
                                }
                                else
                                {
                                    float __rtr_val_1_i314;
                                    int __rtr_flag_1_i314;
                                    __rtr_flag_1_i314 = 0;
                                    // cluster_polynomial_out4_rep131(): begin inline
                                    // cluster_fFreeHandle_rep633(): begin inline
                                    int decomp_0_renamed_175_i623;
                                    // cluster_fFreeHandle_out0_rep687(): begin inline
                                    decomp_0_renamed_175_i623 = bt1_i314_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep687(): end inline
                                    if (decomp_0_renamed_175_i623)
                                    {
                                        // free(bt1_i314_data);
                                    }
                                    // cluster_fFreeHandle_rep633(): end inline
                                    __rtr_val_1_i314 = -1;
                                    __rtr_flag_1_i314 = 1;
                                    // cluster_polynomial_out4_rep131(): end inline
                                    if (__rtr_flag_1_i314)
                                    {
                                        k11_i199 = __rtr_val_1_i314;
                                        goto end_inline_i314;
                                    }
                                }
                                // cluster_fFreeHandle_rep642(): begin inline
                                int decomp_0_renamed_115_i472;
                                // cluster_fFreeHandle_out0_rep694(): begin inline
                                decomp_0_renamed_115_i472 = bt1_i314_data != nullptr;
                                // cluster_fFreeHandle_out0_rep694(): end inline
                                if (decomp_0_renamed_115_i472)
                                {
                                    // free(bt1_i314_data);
                                }
                                // cluster_fFreeHandle_rep642(): end inline
                                k11_i199 = ret_i314;
                            end_inline_i314:;
                                // cluster_polynomial_rep119(): end inline
                                // cluster_polynomial_rep125(): begin inline
                                int c_i315;
                                int r_i315;
                                int j_i315;
                                int i_i315;
                                int *bt1_i315_width;
                                int *bt1_i315_height;
                                float *bt1_i315_data;
                                int *bt_i315_width;
                                int *bt_i315_height;
                                float *bt_i315_data;
                                float ret_i315;
                                int decomp_2_renamed_17_i315;
                                // cluster_polynomial_out0_rep138(): begin inline
                                r_i315 = (*temp1_i199_height);
                                c_i315 = (*temp1_i199_width);
                                // cluster_polynomial_out0_rep138(): end inline
                                // cluster_fMallocHandle_rep642(): begin inline
                                int i_i474;
                                int j_i474;
                                int *out_i474_width;
                                int *out_i474_height;
                                float *out_i474_data;
                                out_i474_width = &memregion_1631_size4;
                                out_i474_height = &memregion_1632_size4;
                                out_i474_data = memregion_1633_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                // cluster_fMallocHandle_out1_rep698(): begin inline
                                (*out_i474_height) = c_i315;
                                (*out_i474_width) = r_i315;
                                bt_i315_width = out_i474_width;
                                bt_i315_height = out_i474_height;
                                bt_i315_data = out_i474_data;
                                // cluster_fMallocHandle_out1_rep698(): end inline
                                // cluster_fMallocHandle_rep642(): end inline
                                // cluster_polynomial_out1_rep138(): begin inline
                                for (i_i315 = 0; i_i315 < r_i315; i_i315++)
                                {
#pragma HLS loop_tripcount max = 1
                                    for (j_i315 = 0; j_i315 < c_i315; j_i315++)
                                    {
                                        int __idxExpr81 = j_i315 * (*bt_i315_width) + i_i315;
                                        int __idxExpr82 = i_i315 * (*temp1_i199_width) + j_i315;
#pragma HLS loop_tripcount max = 256
                                        bt_i315_data[__idxExpr81] = temp1_i199_data[__idxExpr82];
                                    }
                                }
                                // cluster_polynomial_out1_rep138(): end inline
                                // cluster_fMtimes_rep138(): begin inline
                                float temp_i476;
                                int k_i476;
                                int j_i476;
                                int i_i476;
                                int n_i476;
                                int p_i476;
                                int m_i476;
                                int *out_i476_width;
                                int *out_i476_height;
                                float *out_i476_data;
                                // cluster_fMtimes_out0_rep148(): begin inline
                                int p1_i626;
                                m_i476 = (*temp_i199_height);
                                p_i476 = (*temp_i199_width);
                                p1_i626 = (*bt_i315_height);
                                n_i476 = (*bt_i315_width);
                                // cluster_fMtimes_out0_rep148(): end inline
                                // cluster_fMallocHandle_rep648(): begin inline
                                int i_i627;
                                int j_i627;
                                int *out_i627_width;
                                int *out_i627_height;
                                float *out_i627_data;
                                out_i627_width = &memregion_1634_size4;
                                out_i627_height = &memregion_1635_size4;
                                out_i627_data = &memregion_1636_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                                // cluster_fMallocHandle_out1_rep708(): begin inline
                                (*out_i627_height) = m_i476;
                                (*out_i627_width) = n_i476;
                                out_i476_width = out_i627_width;
                                out_i476_height = out_i627_height;
                                out_i476_data = out_i627_data;
                                // cluster_fMallocHandle_out1_rep708(): end inline
                                // cluster_fMallocHandle_rep648(): end inline
                                // cluster_fMtimes_out1_rep148(): begin inline
                                for (i_i476 = 0; i_i476 < m_i476; i_i476++)
                                {
#pragma HLS loop_tripcount max = 1
                                    for (j_i476 = 0; j_i476 < n_i476; j_i476++)
                                    {
#pragma HLS loop_tripcount max = 1
                                        temp_i476 = 0;
                                        for (k_i476 = 0; k_i476 < p_i476; k_i476++)
                                        {
                                            int __idxExpr83 = k_i476 * (*bt_i315_width) + j_i476;
                                            int __idxExpr84 = i_i476 * (*temp_i199_width) + k_i476;
#pragma HLS loop_tripcount max = 256
                                            temp_i476 =
                                                temp_i476 + bt_i315_data[__idxExpr83] * temp_i199_data[__idxExpr84];
                                        }
                                        int __idxExpr85 = i_i476 * (*out_i476_width) + j_i476;
                                        out_i476_data[__idxExpr85] = temp_i476;
                                    }
                                }
                                bt1_i315_width = out_i476_width;
                                bt1_i315_height = out_i476_height;
                                bt1_i315_data = out_i476_data;
                                // cluster_fMtimes_out1_rep148(): end inline
                                // cluster_fMtimes_rep138(): end inline
                                // cluster_fFreeHandle_rep649(): begin inline
                                int decomp_0_renamed_116_i477;
                                // cluster_fFreeHandle_out0_rep702(): begin inline
                                decomp_0_renamed_116_i477 = bt_i315_data != nullptr;
                                // cluster_fFreeHandle_out0_rep702(): end inline
                                if (decomp_0_renamed_116_i477)
                                {
                                    // free(bt_i315_data);
                                }
                                // cluster_fFreeHandle_rep649(): end inline
                                // cluster_polynomial_out2_rep138(): begin inline
                                int decomp_0_renamed_117_i478;
                                int decomp_1_renamed_18_i478;
                                decomp_0_renamed_117_i478 = (*bt1_i315_height) == 1;
                                decomp_1_renamed_18_i478 = (*bt1_i315_width) == 1;
                                decomp_2_renamed_17_i315 = decomp_0_renamed_117_i478 && decomp_1_renamed_18_i478;
                                // cluster_polynomial_out2_rep138(): end inline
                                if (decomp_2_renamed_17_i315)
                                {
                                    int _lit38 = 3;
                                    // cluster_polynomial_out3_rep138(): begin inline
                                    double _d3_0_i479;
                                    double _d3_1_i479;
                                    _d3_0_i479 = pow(bt1_i315_data[0], _lit38);
                                    _d3_1_i479 = _d3_0_i479 / dim;
                                    ret_i315 = _d3_1_i479;
                                    // cluster_polynomial_out3_rep138(): end inline
                                }
                                else
                                {
                                    float __rtr_val_1_i315;
                                    int __rtr_flag_1_i315;
                                    __rtr_flag_1_i315 = 0;
                                    // cluster_polynomial_out4_rep138(): begin inline
                                    // cluster_fFreeHandle_rep655(): begin inline
                                    int decomp_0_renamed_178_i630;
                                    // cluster_fFreeHandle_out0_rep712(): begin inline
                                    decomp_0_renamed_178_i630 = bt1_i315_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep712(): end inline
                                    if (decomp_0_renamed_178_i630)
                                    {
                                        // free(bt1_i315_data);
                                    }
                                    // cluster_fFreeHandle_rep655(): end inline
                                    __rtr_val_1_i315 = -1;
                                    __rtr_flag_1_i315 = 1;
                                    // cluster_polynomial_out4_rep138(): end inline
                                    if (__rtr_flag_1_i315)
                                    {
                                        k12_i199 = __rtr_val_1_i315;
                                        goto end_inline_i315;
                                    }
                                }
                                // cluster_fFreeHandle_rep664(): begin inline
                                int decomp_0_renamed_118_i481;
                                // cluster_fFreeHandle_out0_rep719(): begin inline
                                decomp_0_renamed_118_i481 = bt1_i315_data != nullptr;
                                // cluster_fFreeHandle_out0_rep719(): end inline
                                if (decomp_0_renamed_118_i481)
                                {
                                    // free(bt1_i315_data);
                                }
                                // cluster_fFreeHandle_rep664(): end inline
                                k12_i199 = ret_i315;
                            end_inline_i315:;
                                // cluster_polynomial_rep125(): end inline
                                // cluster_polynomial_rep131(): begin inline
                                int c_i316;
                                int r_i316;
                                int j_i316;
                                int i_i316;
                                int *bt1_i316_width;
                                int *bt1_i316_height;
                                float *bt1_i316_data;
                                int *bt_i316_width;
                                int *bt_i316_height;
                                float *bt_i316_data;
                                float ret_i316;
                                int decomp_2_renamed_18_i316;
                                // cluster_polynomial_out0_rep145(): begin inline
                                r_i316 = (*temp1_i199_height);
                                c_i316 = (*temp1_i199_width);
                                // cluster_polynomial_out0_rep145(): end inline
                                // cluster_fMallocHandle_rep657(): begin inline
                                int i_i483;
                                int j_i483;
                                int *out_i483_width;
                                int *out_i483_height;
                                float *out_i483_data;
                                out_i483_width = &memregion_1637_size4;
                                out_i483_height = &memregion_1638_size4;
                                out_i483_data = memregion_1639_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                // cluster_fMallocHandle_out1_rep715(): begin inline
                                (*out_i483_height) = c_i316;
                                (*out_i483_width) = r_i316;
                                bt_i316_width = out_i483_width;
                                bt_i316_height = out_i483_height;
                                bt_i316_data = out_i483_data;
                                // cluster_fMallocHandle_out1_rep715(): end inline
                                // cluster_fMallocHandle_rep657(): end inline
                                // cluster_polynomial_out1_rep145(): begin inline
                                for (i_i316 = 0; i_i316 < r_i316; i_i316++)
                                {
#pragma HLS loop_tripcount max = 1
                                    for (j_i316 = 0; j_i316 < c_i316; j_i316++)
                                    {
                                        int __idxExpr86 = j_i316 * (*bt_i316_width) + i_i316;
                                        int __idxExpr87 = i_i316 * (*temp1_i199_width) + j_i316;
#pragma HLS loop_tripcount max = 256
                                        bt_i316_data[__idxExpr86] = temp1_i199_data[__idxExpr87];
                                    }
                                }
                                // cluster_polynomial_out1_rep145(): end inline
                                // cluster_fMtimes_rep145(): begin inline
                                float temp_i485;
                                int k_i485;
                                int j_i485;
                                int i_i485;
                                int n_i485;
                                int p_i485;
                                int m_i485;
                                int *out_i485_width;
                                int *out_i485_height;
                                float *out_i485_data;
                                // cluster_fMtimes_out0_rep156(): begin inline
                                int p1_i633;
                                m_i485 = (*temp1_i199_height);
                                p_i485 = (*temp1_i199_width);
                                p1_i633 = (*bt_i316_height);
                                n_i485 = (*bt_i316_width);
                                // cluster_fMtimes_out0_rep156(): end inline
                                // cluster_fMallocHandle_rep663(): begin inline
                                int i_i634;
                                int j_i634;
                                int *out_i634_width;
                                int *out_i634_height;
                                float *out_i634_data;
                                out_i634_width = &memregion_1640_size4;
                                out_i634_height = &memregion_1641_size4;
                                out_i634_data = &memregion_1642_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                                // cluster_fMallocHandle_out1_rep725(): begin inline
                                (*out_i634_height) = m_i485;
                                (*out_i634_width) = n_i485;
                                out_i485_width = out_i634_width;
                                out_i485_height = out_i634_height;
                                out_i485_data = out_i634_data;
                                // cluster_fMallocHandle_out1_rep725(): end inline
                                // cluster_fMallocHandle_rep663(): end inline
                                // cluster_fMtimes_out1_rep156(): begin inline
                                for (i_i485 = 0; i_i485 < m_i485; i_i485++)
                                {
#pragma HLS loop_tripcount max = 1
                                    for (j_i485 = 0; j_i485 < n_i485; j_i485++)
                                    {
#pragma HLS loop_tripcount max = 1
                                        temp_i485 = 0;
                                        for (k_i485 = 0; k_i485 < p_i485; k_i485++)
                                        {
                                            int __idxExpr88 = k_i485 * (*bt_i316_width) + j_i485;
                                            int __idxExpr89 = i_i485 * (*temp1_i199_width) + k_i485;
#pragma HLS loop_tripcount max = 256
                                            temp_i485 =
                                                temp_i485 + bt_i316_data[__idxExpr88] * temp1_i199_data[__idxExpr89];
                                        }
                                        int __idxExpr90 = i_i485 * (*out_i485_width) + j_i485;
                                        out_i485_data[__idxExpr90] = temp_i485;
                                    }
                                }
                                bt1_i316_width = out_i485_width;
                                bt1_i316_height = out_i485_height;
                                bt1_i316_data = out_i485_data;
                                // cluster_fMtimes_out1_rep156(): end inline
                                // cluster_fMtimes_rep145(): end inline
                                // cluster_fFreeHandle_rep671(): begin inline
                                int decomp_0_renamed_119_i486;
                                // cluster_fFreeHandle_out0_rep727(): begin inline
                                decomp_0_renamed_119_i486 = bt_i316_data != nullptr;
                                // cluster_fFreeHandle_out0_rep727(): end inline
                                if (decomp_0_renamed_119_i486)
                                {
                                    // free(bt_i316_data);
                                }
                                // cluster_fFreeHandle_rep671(): end inline
                                // cluster_polynomial_out2_rep145(): begin inline
                                int decomp_0_renamed_120_i487;
                                int decomp_1_renamed_19_i487;
                                decomp_0_renamed_120_i487 = (*bt1_i316_height) == 1;
                                decomp_1_renamed_19_i487 = (*bt1_i316_width) == 1;
                                decomp_2_renamed_18_i316 = decomp_0_renamed_120_i487 && decomp_1_renamed_19_i487;
                                // cluster_polynomial_out2_rep145(): end inline
                                if (decomp_2_renamed_18_i316)
                                {
                                    int _lit39 = 3;
                                    // cluster_polynomial_out3_rep145(): begin inline
                                    double _d3_0_i488;
                                    double _d3_1_i488;
                                    _d3_0_i488 = pow(bt1_i316_data[0], _lit39);
                                    _d3_1_i488 = _d3_0_i488 / dim;
                                    ret_i316 = _d3_1_i488;
                                    // cluster_polynomial_out3_rep145(): end inline
                                }
                                else
                                {
                                    float __rtr_val_1_i316;
                                    int __rtr_flag_1_i316;
                                    __rtr_flag_1_i316 = 0;
                                    // cluster_polynomial_out4_rep145(): begin inline
                                    // cluster_fFreeHandle_rep677(): begin inline
                                    int decomp_0_renamed_181_i637;
                                    // cluster_fFreeHandle_out0_rep737(): begin inline
                                    decomp_0_renamed_181_i637 = bt1_i316_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep737(): end inline
                                    if (decomp_0_renamed_181_i637)
                                    {
                                        // free(bt1_i316_data);
                                    }
                                    // cluster_fFreeHandle_rep677(): end inline
                                    __rtr_val_1_i316 = -1;
                                    __rtr_flag_1_i316 = 1;
                                    // cluster_polynomial_out4_rep145(): end inline
                                    if (__rtr_flag_1_i316)
                                    {
                                        k22_i199 = __rtr_val_1_i316;
                                        goto end_inline_i316;
                                    }
                                }
                                // cluster_fFreeHandle_rep686(): begin inline
                                int decomp_0_renamed_121_i490;
                                // cluster_fFreeHandle_out0_rep744(): begin inline
                                decomp_0_renamed_121_i490 = bt1_i316_data != nullptr;
                                // cluster_fFreeHandle_out0_rep744(): end inline
                                if (decomp_0_renamed_121_i490)
                                {
                                    // free(bt1_i316_data);
                                }
                                // cluster_fFreeHandle_rep686(): end inline
                                k22_i199 = ret_i316;
                            end_inline_i316:;
                                // cluster_polynomial_rep131(): end inline
                                // cluster_takeStep_out10_rep12(): begin inline
                                eta_i199 = 2 * k12_i199 - k11_i199 - k22_i199;
                                // cluster_takeStep_out10_rep12(): end inline
                                // cluster_fFreeHandle_rep514(): begin inline
                                int decomp_0_renamed_70_i318;
                                // cluster_fFreeHandle_out0_rep554(): begin inline
                                decomp_0_renamed_70_i318 = temp1_i199_data != nullptr;
                                // cluster_fFreeHandle_out0_rep554(): end inline
                                if (decomp_0_renamed_70_i318)
                                {
                                    // free(temp1_i199_data);
                                }
                                // cluster_fFreeHandle_rep514(): end inline
                                // cluster_fFreeHandle_rep520(): begin inline
                                int decomp_0_renamed_71_i319;
                                // cluster_fFreeHandle_out0_rep561(): begin inline
                                decomp_0_renamed_71_i319 = temp_i199_data != nullptr;
                                // cluster_fFreeHandle_out0_rep561(): end inline
                                if (decomp_0_renamed_71_i319)
                                {
                                    // free(temp_i199_data);
                                }
                                // cluster_fFreeHandle_rep520(): end inline
                                // cluster_takeStep_out11_rep12(): begin inline
                                int decomp_11_renamed_2_i320;
                                float decomp_16_renamed_2_i320;
                                float decomp_17_renamed_2_i320;
                                decomp_11_renamed_2_i320 = eta_i199 < 0;
                                if (decomp_11_renamed_2_i320)
                                {
                                    int decomp_12_renamed_2_i320;
                                    a_data[k_i87] =
                                        a_old_i199_data[k_i87] + Y_data[k_i87] * (Ej_i199 - Ei_i199) / eta_i199;
                                    decomp_12_renamed_2_i320 = a_data[k_i87] < L_i199;
                                    if (decomp_12_renamed_2_i320)
                                    {
                                        a_data[k_i87] = L_i199;
                                    }
                                    else
                                    {
                                        int decomp_13_renamed_2_i320;
                                        decomp_13_renamed_2_i320 = a_data[k_i87] > H_i199;
                                        if (decomp_13_renamed_2_i320)
                                        {
                                            a_data[k_i87] = H_i199;
                                        }
                                    }
                                }
                                else
                                {
                                    int decomp_14_renamed_2_i320;
                                    c1_i199 = eta_i199 / 2;
                                    c2_i199 = Y_data[k_i87] * (Ei_i199 - Ej_i199) - eta_i199 * a_old_i199_data[k_i87];
                                    Lobj_i199 = c1_i199 * L_i199 * L_i199 + c2_i199 * L_i199;
                                    Hobj_i199 = c1_i199 * H_i199 * H_i199 + c2_i199 * H_i199;
                                    decomp_14_renamed_2_i320 = Lobj_i199 > (Hobj_i199 + eps);
                                    if (decomp_14_renamed_2_i320)
                                    {
                                        a_data[k_i87] = L_i199;
                                    }
                                    else
                                    {
                                        int decomp_15_renamed_2_i320;
                                        decomp_15_renamed_2_i320 = Lobj_i199 < (Hobj_i199 - eps);
                                        if (decomp_15_renamed_2_i320)
                                        {
                                            a_data[k_i87] = H_i199;
                                        }
                                        else
                                        {
                                            a_data[k_i87] = a_old_i199_data[k_i87];
                                        }
                                    }
                                }
                                decomp_16_renamed_2_i320 = a_data[k_i87] - a_old_i199_data[k_i87];
                                decomp_17_renamed_2_i320 = fabsf(decomp_16_renamed_2_i320);
                                decomp_18_renamed_3_i199 =
                                    decomp_17_renamed_2_i320 < (eps * (a_data[k_i87] + a_old_i199_data[k_i87] + eps));
                                // cluster_takeStep_out11_rep12(): end inline
                                if (decomp_18_renamed_3_i199)
                                {
                                    int __rtr_val_4_i199;
                                    int __rtr_flag_4_i199;
                                    __rtr_flag_4_i199 = 0;
                                    // cluster_takeStep_out12_rep12(): begin inline
                                    // cluster_fFreeHandle_rep528(): begin inline
                                    int decomp_0_renamed_124_i493;
                                    // cluster_fFreeHandle_out0_rep567(): begin inline
                                    decomp_0_renamed_124_i493 = a_old_i199_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep567(): end inline
                                    if (decomp_0_renamed_124_i493)
                                    {
                                        // free(a_old_i199_data);
                                    }
                                    // cluster_fFreeHandle_rep528(): end inline
                                    __rtr_val_4_i199 = 0;
                                    __rtr_flag_4_i199 = 1;
                                    // cluster_takeStep_out12_rep12(): end inline
                                    if (__rtr_flag_4_i199)
                                    {
                                        ret_i87 = __rtr_val_4_i199;
                                        goto end_inline_i199;
                                    }
                                }
                                // cluster_takeStep_out13_rep12(): begin inline
                                int decomp_19_renamed_2_i322;
                                int decomp_21_renamed_2_i322;
                                int decomp_22_renamed_2_i322;
                                int decomp_23_renamed_2_i322;
                                a_data[i] = a_old_i199_data[i] - s_i199 * (a_data[k_i87] - a_old_i199_data[k_i87]);
                                decomp_19_renamed_2_i322 = a_data[i] < 0;
                                if (decomp_19_renamed_2_i322)
                                {
                                    a_data[k_i87] = a_data[k_i87] + s_i199 * a_data[i];
                                    a_data[i] = 0;
                                }
                                else
                                {
                                    int decomp_20_renamed_2_i322;
                                    decomp_20_renamed_2_i322 = a_data[i] > C;
                                    if (decomp_20_renamed_2_i322)
                                    {
                                        t_i199 = a_data[i] - C;
                                        a_data[k_i87] = a_data[k_i87] + s_i199 * t_i199;
                                        a_data[i] = C;
                                    }
                                }
                                decomp_21_renamed_2_i322 = a_data[i] > 0;
                                decomp_22_renamed_2_i322 = a_data[i] < C;
                                decomp_23_renamed_2_i322 = decomp_21_renamed_2_i322 && decomp_22_renamed_2_i322;
                                if (decomp_23_renamed_2_i322)
                                {
                                    bnew_i199 = b[0] + Ei_i199 +
                                                Y_data[i] * (a_data[i] - a_old_i199_data[i]) * k11_i199 +
                                                Y_data[k_i87] * (a_data[k_i87] - a_old_i199_data[k_i87]) * k12_i199;
                                }
                                else
                                {
                                    int decomp_24_renamed_2_i322;
                                    int decomp_25_renamed_2_i322;
                                    int decomp_26_renamed_2_i322;
                                    decomp_24_renamed_2_i322 = a_data[k_i87] > 0;
                                    decomp_25_renamed_2_i322 = a_data[k_i87] < C;
                                    decomp_26_renamed_2_i322 = decomp_24_renamed_2_i322 && decomp_25_renamed_2_i322;
                                    if (decomp_26_renamed_2_i322)
                                    {
                                        bnew_i199 = b[0] + Ej_i199 +
                                                    Y_data[i] * (a_data[i] - a_old_i199_data[i]) * k12_i199 +
                                                    Y_data[k_i87] * (a_data[k_i87] - a_old_i199_data[k_i87]) * k22_i199;
                                    }
                                    else
                                    {
                                        float b1_i322;
                                        float b2_i322;
                                        b1_i322 = b[0] + Ei_i199 +
                                                  Y_data[i] * (a_data[i] - a_old_i199_data[i]) * k11_i199 +
                                                  Y_data[k_i87] * (a_data[k_i87] - a_old_i199_data[k_i87]) * k12_i199;
                                        b2_i322 = b[0] + Ej_i199 +
                                                  Y_data[i] * (a_data[i] - a_old_i199_data[i]) * k12_i199 +
                                                  Y_data[k_i87] * (a_data[k_i87] - a_old_i199_data[k_i87]) * k22_i199;
                                        bnew_i199 = (b1_i322 + b2_i322) / 2;
                                    }
                                }
                                delta_b_i199 = bnew_i199 - b[0];
                                b[0] = bnew_i199;
                                t1_i199 = Y_data[i] * (a_data[i] - a_old_i199_data[i]);
                                t2_i199 = Y_data[k_i87] * (a_data[k_i87] - a_old_i199_data[k_i87]);
                                // cluster_takeStep_out13_rep12(): end inline
                                // cluster_fMallocHandle_rep514(): begin inline
                                int i_i323;
                                int j_i323;
                                int *out_i323_width;
                                int *out_i323_height;
                                float *out_i323_data;
                                out_i323_width = &memregion_1643_size4;
                                out_i323_height = &memregion_1644_size4;
                                out_i323_data = memregion_1645_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                int _lit40 = 1;
                                // cluster_fMallocHandle_out1_rep559(): begin inline
                                (*out_i323_height) = _lit40;
                                (*out_i323_width) = (*X_width);
                                temp_i199_width = out_i323_width;
                                temp_i199_height = out_i323_height;
                                temp_i199_data = out_i323_data;
                                // cluster_fMallocHandle_out1_rep559(): end inline
                                // cluster_fMallocHandle_rep514(): end inline
                                // cluster_fMallocHandle_rep520(): begin inline
                                int i_i324;
                                int j_i324;
                                int *out_i324_width;
                                int *out_i324_height;
                                float *out_i324_data;
                                out_i324_width = &memregion_1646_size4;
                                out_i324_height = &memregion_1647_size4;
                                out_i324_data = memregion_1648_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                int _lit41 = 1;
                                // cluster_fMallocHandle_out1_rep566(): begin inline
                                (*out_i324_height) = _lit41;
                                (*out_i324_width) = (*X_width);
                                temp1_i199_width = out_i324_width;
                                temp1_i199_height = out_i324_height;
                                temp1_i199_data = out_i324_data;
                                // cluster_fMallocHandle_out1_rep566(): end inline
                                // cluster_fMallocHandle_rep520(): end inline
                                // cluster_fMallocHandle_rep526(): begin inline
                                int i_i325;
                                int j_i325;
                                int *out_i325_width;
                                int *out_i325_height;
                                float *out_i325_data;
                                out_i325_width = &memregion_1649_size4;
                                out_i325_height = &memregion_1650_size4;
                                out_i325_data = memregion_1651_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                int _lit42 = 1;
                                // cluster_fMallocHandle_out1_rep573(): begin inline
                                (*out_i325_height) = _lit42;
                                (*out_i325_width) = (*X_width);
                                temp2_i199_width = out_i325_width;
                                temp2_i199_height = out_i325_height;
                                temp2_i199_data = out_i325_data;
                                // cluster_fMallocHandle_out1_rep573(): end inline
                                // cluster_fMallocHandle_rep526(): end inline
                                for (k_i199 = 0; k_i199 < N; k_i199++)
                                {
#pragma HLS loop_tripcount max = 100
                                    // cluster_takeStep_out14_rep12(): begin inline
                                    int decomp_29_renamed_3_i326;
                                    // cluster_takeStep_out14_out0_rep15(): begin inline
                                    int decomp_27_renamed_2_i497;
                                    int decomp_28_renamed_2_i497;
                                    decomp_27_renamed_2_i497 = 0 < a_old_i199_data[i];
                                    decomp_28_renamed_2_i497 = a_old_i199_data[i] < C;
                                    decomp_29_renamed_3_i326 = decomp_27_renamed_2_i497 && decomp_28_renamed_2_i497;
                                    // cluster_takeStep_out14_out0_rep15(): end inline
                                    if (decomp_29_renamed_3_i326)
                                    {
                                        // cluster_takeStep_out14_out1_rep15(): begin inline
                                        float _d6_0_i498;
                                        float _d6_3_i498;
                                        float _d6_2_i498;
                                        // cluster_takeStep_out14_out1_out0_rep15(): begin inline
                                        //  Dead loop removed by HLS DCE, make sure it has the #pragma hls
                                        //  loop_tripcount directive even if it has static bounds
                                        // cluster_takeStep_out14_out1_out0_rep15(): end inline
                                        // cluster_polynomial_rep138(): begin inline
                                        int c_i641;
                                        int r_i641;
                                        int j_i641;
                                        int i_i641;
                                        int *bt1_i641_width;
                                        int *bt1_i641_height;
                                        float *bt1_i641_data;
                                        int *bt_i641_width;
                                        int *bt_i641_height;
                                        float *bt_i641_data;
                                        float ret_i641;
                                        int decomp_2_renamed_40_i641;
                                        // cluster_polynomial_out0_rep153(): begin inline
                                        r_i641 = (*temp1_i199_height);
                                        c_i641 = (*temp1_i199_width);
                                        // cluster_polynomial_out0_rep153(): end inline
                                        //  cluster_fMallocHandle_rep673(c, r, &bt); // Dead call removed by HLS DCE
                                        // cluster_polynomial_out1_rep153(): begin inline
                                        //  Dead loop removed by HLS DCE, make sure it has the #pragma hls
                                        //  loop_tripcount directive even if it has static bounds
                                        // cluster_polynomial_out1_rep153(): end inline
                                        // cluster_fMtimes_rep153(): begin inline
                                        float temp_i724;
                                        int k_i724;
                                        int j_i724;
                                        int i_i724;
                                        int n_i724;
                                        int p_i724;
                                        int m_i724;
                                        int *out_i724_width;
                                        int *out_i724_height;
                                        float *out_i724_data;
                                        // cluster_fMtimes_out0_rep165(): begin inline
                                        int p1_i781;
                                        m_i724 = (*temp_i199_height);
                                        p_i724 = (*temp_i199_width);
                                        p1_i781 = (*bt_i641_height);
                                        n_i724 = (*bt_i641_width);
                                        bt1_i641_width = out_i724_width;
                                        bt1_i641_height = out_i724_height;
                                        bt1_i641_data = out_i724_data;
                                        // cluster_fMtimes_out0_rep165(): end inline
                                        //  cluster_fMallocHandle_rep681(m, n, &out); // Dead call removed by HLS DCE
                                        // cluster_fMtimes_out1_rep165(): begin inline
                                        //  Dead loop removed by HLS DCE, make sure it has the #pragma hls
                                        //  loop_tripcount directive even if it has static bounds
                                        // cluster_fMtimes_out1_rep165(): end inline
                                        // cluster_fMtimes_rep153(): end inline
                                        // cluster_fFreeHandle_rep694(): begin inline
                                        int decomp_0_renamed_219_i725;
                                        // cluster_fFreeHandle_out0_rep753(): begin inline
                                        decomp_0_renamed_219_i725 = bt_i641_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep753(): end inline
                                        if (decomp_0_renamed_219_i725)
                                        {
                                            // free(bt_i641_data);
                                        }
                                        // cluster_fFreeHandle_rep694(): end inline
                                        // cluster_polynomial_out2_rep153(): begin inline
                                        int decomp_0_renamed_220_i726;
                                        int decomp_1_renamed_28_i726;
                                        decomp_0_renamed_220_i726 = (*bt1_i641_height) == 1;
                                        decomp_1_renamed_28_i726 = (*bt1_i641_width) == 1;
                                        decomp_2_renamed_40_i641 =
                                            decomp_0_renamed_220_i726 && decomp_1_renamed_28_i726;
                                        // cluster_polynomial_out2_rep153(): end inline
                                        if (decomp_2_renamed_40_i641)
                                        {
                                            int _lit53 = 3;
                                            // cluster_polynomial_out3_rep153(): begin inline
                                            double _d3_0_i727;
                                            double _d3_1_i727;
                                            _d3_0_i727 = pow(bt1_i641_data[0], _lit53);
                                            _d3_1_i727 = _d3_0_i727 / dim;
                                            ret_i641 = _d3_1_i727;
                                            // cluster_polynomial_out3_rep153(): end inline
                                        }
                                        else
                                        {
                                            float __rtr_val_1_i641;
                                            int __rtr_flag_1_i641;
                                            __rtr_flag_1_i641 = 0;
                                            // cluster_polynomial_out4_rep153(): begin inline
                                            // cluster_fFreeHandle_rep702(): begin inline
                                            int decomp_0_renamed_241_i784;
                                            // cluster_fFreeHandle_out0_rep765(): begin inline
                                            decomp_0_renamed_241_i784 = bt1_i641_data != nullptr;
                                            // cluster_fFreeHandle_out0_rep765(): end inline
                                            if (decomp_0_renamed_241_i784)
                                            {
                                                // free(bt1_i641_data);
                                            }
                                            // cluster_fFreeHandle_rep702(): end inline
                                            __rtr_val_1_i641 = -1;
                                            __rtr_flag_1_i641 = 1;
                                            // cluster_polynomial_out4_rep153(): end inline
                                            if (__rtr_flag_1_i641)
                                            {
                                                _d6_0_i498 = __rtr_val_1_i641;
                                                goto end_inline_i641;
                                            }
                                        }
                                        // cluster_fFreeHandle_rep713(): begin inline
                                        int decomp_0_renamed_221_i729;
                                        // cluster_fFreeHandle_out0_rep774(): begin inline
                                        decomp_0_renamed_221_i729 = bt1_i641_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep774(): end inline
                                        if (decomp_0_renamed_221_i729)
                                        {
                                            // free(bt1_i641_data);
                                        }
                                        // cluster_fFreeHandle_rep713(): end inline
                                        _d6_0_i498 = ret_i641;
                                    end_inline_i641:;
                                        // cluster_polynomial_rep138(): end inline
                                        // cluster_takeStep_out14_out1_out1_rep15(): begin inline
                                        float _d6_1_i642;
                                        _d6_1_i642 = t1_i199 * _d6_0_i498;
                                        _d6_2_i498 = e_data[k_i199] + _d6_1_i642;
                                        // cluster_takeStep_out14_out1_out1_rep15(): end inline
                                        // cluster_polynomial_rep146(): begin inline
                                        int c_i643;
                                        int r_i643;
                                        int j_i643;
                                        int i_i643;
                                        int *bt1_i643_width;
                                        int *bt1_i643_height;
                                        float *bt1_i643_data;
                                        int *bt_i643_width;
                                        int *bt_i643_height;
                                        float *bt_i643_data;
                                        float ret_i643;
                                        int decomp_2_renamed_41_i643;
                                        // cluster_polynomial_out0_rep162(): begin inline
                                        r_i643 = (*temp1_i199_height);
                                        c_i643 = (*temp1_i199_width);
                                        // cluster_polynomial_out0_rep162(): end inline
                                        //  cluster_fMallocHandle_rep692(c, r, &bt); // Dead call removed by HLS DCE
                                        // cluster_polynomial_out1_rep162(): begin inline
                                        //  Dead loop removed by HLS DCE, make sure it has the #pragma hls
                                        //  loop_tripcount directive even if it has static bounds
                                        // cluster_polynomial_out1_rep162(): end inline
                                        // cluster_fMtimes_rep162(): begin inline
                                        float temp_i732;
                                        int k_i732;
                                        int j_i732;
                                        int i_i732;
                                        int n_i732;
                                        int p_i732;
                                        int m_i732;
                                        int *out_i732_width;
                                        int *out_i732_height;
                                        float *out_i732_data;
                                        // cluster_fMtimes_out0_rep175(): begin inline
                                        int p1_i786;
                                        m_i732 = (*temp2_i199_height);
                                        p_i732 = (*temp2_i199_width);
                                        p1_i786 = (*bt_i643_height);
                                        n_i732 = (*bt_i643_width);
                                        bt1_i643_width = out_i732_width;
                                        bt1_i643_height = out_i732_height;
                                        bt1_i643_data = out_i732_data;
                                        // cluster_fMtimes_out0_rep175(): end inline
                                        //  cluster_fMallocHandle_rep700(m, n, &out); // Dead call removed by HLS DCE
                                        // cluster_fMtimes_out1_rep175(): begin inline
                                        //  Dead loop removed by HLS DCE, make sure it has the #pragma hls
                                        //  loop_tripcount directive even if it has static bounds
                                        // cluster_fMtimes_out1_rep175(): end inline
                                        // cluster_fMtimes_rep162(): end inline
                                        // cluster_fFreeHandle_rep722(): begin inline
                                        int decomp_0_renamed_222_i733;
                                        // cluster_fFreeHandle_out0_rep784(): begin inline
                                        decomp_0_renamed_222_i733 = bt_i643_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep784(): end inline
                                        if (decomp_0_renamed_222_i733)
                                        {
                                            // free(bt_i643_data);
                                        }
                                        // cluster_fFreeHandle_rep722(): end inline
                                        // cluster_polynomial_out2_rep162(): begin inline
                                        int decomp_0_renamed_223_i734;
                                        int decomp_1_renamed_29_i734;
                                        decomp_0_renamed_223_i734 = (*bt1_i643_height) == 1;
                                        decomp_1_renamed_29_i734 = (*bt1_i643_width) == 1;
                                        decomp_2_renamed_41_i643 =
                                            decomp_0_renamed_223_i734 && decomp_1_renamed_29_i734;
                                        // cluster_polynomial_out2_rep162(): end inline
                                        if (decomp_2_renamed_41_i643)
                                        {
                                            int _lit54 = 3;
                                            // cluster_polynomial_out3_rep162(): begin inline
                                            double _d3_0_i735;
                                            double _d3_1_i735;
                                            _d3_0_i735 = pow(bt1_i643_data[0], _lit54);
                                            _d3_1_i735 = _d3_0_i735 / dim;
                                            ret_i643 = _d3_1_i735;
                                            // cluster_polynomial_out3_rep162(): end inline
                                        }
                                        else
                                        {
                                            float __rtr_val_1_i643;
                                            int __rtr_flag_1_i643;
                                            __rtr_flag_1_i643 = 0;
                                            // cluster_polynomial_out4_rep162(): begin inline
                                            // cluster_fFreeHandle_rep730(): begin inline
                                            int decomp_0_renamed_244_i789;
                                            // cluster_fFreeHandle_out0_rep796(): begin inline
                                            decomp_0_renamed_244_i789 = bt1_i643_data != nullptr;
                                            // cluster_fFreeHandle_out0_rep796(): end inline
                                            if (decomp_0_renamed_244_i789)
                                            {
                                                // free(bt1_i643_data);
                                            }
                                            // cluster_fFreeHandle_rep730(): end inline
                                            __rtr_val_1_i643 = -1;
                                            __rtr_flag_1_i643 = 1;
                                            // cluster_polynomial_out4_rep162(): end inline
                                            if (__rtr_flag_1_i643)
                                            {
                                                _d6_3_i498 = __rtr_val_1_i643;
                                                goto end_inline_i643;
                                            }
                                        }
                                        // cluster_fFreeHandle_rep741(): begin inline
                                        int decomp_0_renamed_224_i737;
                                        // cluster_fFreeHandle_out0_rep805(): begin inline
                                        decomp_0_renamed_224_i737 = bt1_i643_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep805(): end inline
                                        if (decomp_0_renamed_224_i737)
                                        {
                                            // free(bt1_i643_data);
                                        }
                                        // cluster_fFreeHandle_rep741(): end inline
                                        _d6_3_i498 = ret_i643;
                                    end_inline_i643:;
                                        // cluster_polynomial_rep146(): end inline
                                        // cluster_takeStep_out14_out1_out2_rep15(): begin inline
                                        float _d6_4_i644;
                                        float _d6_5_i644;
                                        float _d6_6_i644;
                                        _d6_4_i644 = t2_i199 * _d6_3_i498;
                                        _d6_5_i644 = _d6_2_i498 + _d6_4_i644;
                                        _d6_6_i644 = _d6_5_i644 - delta_b_i199;
                                        e_data[k_i199] = _d6_6_i644;
                                        e_data[i] = 0;
                                        e_data[k_i87] = 0;
                                        // cluster_takeStep_out14_out1_out2_rep15(): end inline
                                        // cluster_takeStep_out14_out1_rep15(): end inline
                                    }
                                    // cluster_takeStep_out14_rep12(): end inline
                                }
                                // cluster_fFreeHandle_rep533(): begin inline
                                int decomp_0_renamed_72_i327;
                                // cluster_fFreeHandle_out0_rep576(): begin inline
                                decomp_0_renamed_72_i327 = a_old_i199_data != nullptr;
                                // cluster_fFreeHandle_out0_rep576(): end inline
                                if (decomp_0_renamed_72_i327)
                                {
                                    // free(a_old_i199_data);
                                }
                                // cluster_fFreeHandle_rep533(): end inline
                                // cluster_fFreeHandle_rep539(): begin inline
                                int decomp_0_renamed_73_i328;
                                // cluster_fFreeHandle_out0_rep583(): begin inline
                                decomp_0_renamed_73_i328 = temp_i199_data != nullptr;
                                // cluster_fFreeHandle_out0_rep583(): end inline
                                if (decomp_0_renamed_73_i328)
                                {
                                    // free(temp_i199_data);
                                }
                                // cluster_fFreeHandle_rep539(): end inline
                                // cluster_fFreeHandle_rep545(): begin inline
                                int decomp_0_renamed_74_i329;
                                // cluster_fFreeHandle_out0_rep590(): begin inline
                                decomp_0_renamed_74_i329 = temp1_i199_data != nullptr;
                                // cluster_fFreeHandle_out0_rep590(): end inline
                                if (decomp_0_renamed_74_i329)
                                {
                                    // free(temp1_i199_data);
                                }
                                // cluster_fFreeHandle_rep545(): end inline
                                // cluster_fFreeHandle_rep551(): begin inline
                                int decomp_0_renamed_75_i330;
                                // cluster_fFreeHandle_out0_rep597(): begin inline
                                decomp_0_renamed_75_i330 = temp2_i199_data != nullptr;
                                // cluster_fFreeHandle_out0_rep597(): end inline
                                if (decomp_0_renamed_75_i330)
                                {
                                    // free(temp2_i199_data);
                                }
                                // cluster_fFreeHandle_rep551(): end inline
                                // cluster_takeStep_out15_rep12(): begin inline
                                ret_i199 = 1;
                                // cluster_takeStep_out15_rep12(): end inline
                                ret_i87 = ret_i199;
                            end_inline_i199:;
                                // cluster_takeStep_rep12(): end inline
                                decomp_7_renamed_0_i144 = ret_i87 == 1;
                                if (decomp_7_renamed_0_i144)
                                {
                                    __rtr_val_0_i87 = ret_i87;
                                    __rtr_flag_0_i87 = 1;
                                    goto end_inline_i144;
                                }
                            }
                        end_inline_i144:;
                            // cluster_examineExample_out4_out3_rep1(): end inline
                            if (__rtr_flag_0_i87)
                            {
                                goto end_inline_i117;
                            }
                        }
                        for (k_i87 = 0; k_i87 < N; k_i87++)
                        {
#pragma HLS loop_tripcount max = 100
                            int decomp_8_renamed_0_i117;
                            // cluster_takeStep_rep4(): begin inline
                            int __rtr_flag_2_i145;
                            __rtr_flag_2_i145 = 0;
                            int __rtr_val_2_i145;
                            int ret_i145;
                            float s_i145;
                            int m_i145;
                            int k_i145;
                            float Ei_i145;
                            float Ej_i145;
                            float gamma_i145;
                            float L_i145;
                            float H_i145;
                            int *a_old_i145_width;
                            int *a_old_i145_height;
                            float *a_old_i145_data;
                            float k11_i145;
                            float k12_i145;
                            float k22_i145;
                            float eta_i145;
                            int *temp_i145_width;
                            int *temp_i145_height;
                            float *temp_i145_data;
                            int *temp1_i145_width;
                            int *temp1_i145_height;
                            float *temp1_i145_data;
                            int *temp2_i145_width;
                            int *temp2_i145_height;
                            float *temp2_i145_data;
                            float t_i145;
                            float t1_i145;
                            float t2_i145;
                            float bnew_i145;
                            float delta_b_i145;
                            float c1_i145;
                            float c2_i145;
                            float Lobj_i145;
                            float Hobj_i145;
                            int __rtr_val_5_i145;
                            int __rtr_flag_5_i145;
                            __rtr_flag_5_i145 = 0;
                            int __rtr_flag_6_i145;
                            __rtr_flag_6_i145 = 0;
                            int __rtr_val_6_i145;
                            int __rtr_val_7_i145;
                            int __rtr_flag_7_i145;
                            __rtr_flag_7_i145 = 0;
                            int __rtr_flag_8_i145;
                            __rtr_flag_8_i145 = 0;
                            int __rtr_val_8_i145;
                            int __rtr_val_9_i145;
                            int __rtr_flag_9_i145;
                            __rtr_flag_9_i145 = 0;
                            int __rtr_flag_10_i145;
                            __rtr_flag_10_i145 = 0;
                            int __rtr_val_10_i145;
                            int __rtr_val_11_i145;
                            int __rtr_flag_11_i145;
                            __rtr_flag_11_i145 = 0;
                            int decomp_3_renamed_6_i145;
                            int decomp_6_renamed_2_i145;
                            int decomp_10_renamed_1_i145;
                            int decomp_18_renamed_1_i145;
                            // cluster_takeStep_out0_rep5(): begin inline
                            int n_i200;
                            int decomp_0_renamed_44_i200;
                            ret_i145 = 1;
                            decomp_0_renamed_44_i200 = i == k_i87;
                            if (decomp_0_renamed_44_i200)
                            {
                                __rtr_val_2_i145 = 0;
                                __rtr_flag_2_i145 = 1;
                                goto end_inline_i200;
                            }
                        end_inline_i200:;
                            // cluster_takeStep_out0_rep5(): end inline
                            // cluster_takeStep_out17_rep5(): begin inline
                            if (__rtr_flag_2_i145)
                            {
                                __rtr_val_5_i145 = __rtr_val_2_i145;
                                __rtr_flag_5_i145 = 1;
                                goto end_inline_i201;
                            }
                        end_inline_i201:;
                            // cluster_takeStep_out17_rep5(): end inline
                            // cluster_takeStep_out24_rep5(): begin inline
                            if (__rtr_flag_5_i145)
                            {
                                __rtr_val_6_i145 = __rtr_val_5_i145;
                                __rtr_flag_6_i145 = 1;
                                goto end_inline_i202;
                            }
                        end_inline_i202:;
                            // cluster_takeStep_out24_rep5(): end inline
                            // cluster_takeStep_out32_rep5(): begin inline
                            if (__rtr_flag_6_i145)
                            {
                                __rtr_val_7_i145 = __rtr_val_6_i145;
                                __rtr_flag_7_i145 = 1;
                                goto end_inline_i203;
                            }
                        end_inline_i203:;
                            // cluster_takeStep_out32_rep5(): end inline
                            // cluster_takeStep_out41_rep5(): begin inline
                            if (__rtr_flag_7_i145)
                            {
                                __rtr_val_8_i145 = __rtr_val_7_i145;
                                __rtr_flag_8_i145 = 1;
                                goto end_inline_i204;
                            }
                        end_inline_i204:;
                            // cluster_takeStep_out41_rep5(): end inline
                            // cluster_takeStep_out51_rep5(): begin inline
                            if (__rtr_flag_8_i145)
                            {
                                __rtr_val_9_i145 = __rtr_val_8_i145;
                                __rtr_flag_9_i145 = 1;
                                goto end_inline_i205;
                            }
                        end_inline_i205:;
                            // cluster_takeStep_out51_rep5(): end inline
                            // cluster_takeStep_out62_rep5(): begin inline
                            if (__rtr_flag_9_i145)
                            {
                                __rtr_val_10_i145 = __rtr_val_9_i145;
                                __rtr_flag_10_i145 = 1;
                                goto end_inline_i206;
                            }
                        end_inline_i206:;
                            // cluster_takeStep_out62_rep5(): end inline
                            // cluster_takeStep_out74_rep5(): begin inline
                            if (__rtr_flag_10_i145)
                            {
                                __rtr_val_11_i145 = __rtr_val_10_i145;
                                __rtr_flag_11_i145 = 1;
                                goto end_inline_i207;
                            }
                        end_inline_i207:;
                            // cluster_takeStep_out74_rep5(): end inline
                            if (__rtr_flag_11_i145)
                            {
                                ret_i87 = __rtr_val_11_i145;
                                goto end_inline_i145;
                            }
                            // cluster_fDeepCopy_rep50(): begin inline
                            int cols_i208;
                            int rows_i208;
                            int *out_i208_width;
                            int *out_i208_height;
                            float *out_i208_data;
                            int j_i208;
                            int i_i208;
                            // cluster_fDeepCopy_out0_rep54(): begin inline
                            rows_i208 = (*a_height);
                            cols_i208 = (*a_width);
                            // cluster_fDeepCopy_out0_rep54(): end inline
                            // cluster_fMallocHandle_rep253(): begin inline
                            int i_i333;
                            int j_i333;
                            int *out_i333_width;
                            int *out_i333_height;
                            float *out_i333_data;
                            out_i333_width = &memregion_1652_size4;
                            out_i333_height = &memregion_1653_size4;
                            out_i333_data = memregion_1654_size400;
#pragma clava malloc_size max = 408 min = 408 avg = 408
                            // cluster_fMallocHandle_out1_rep276(): begin inline
                            (*out_i333_height) = rows_i208;
                            (*out_i333_width) = cols_i208;
                            out_i208_width = out_i333_width;
                            out_i208_height = out_i333_height;
                            out_i208_data = out_i333_data;
                            // cluster_fMallocHandle_out1_rep276(): end inline
                            // cluster_fMallocHandle_rep253(): end inline
                            // cluster_fDeepCopy_out1_rep54(): begin inline
                            for (i_i208 = 0; i_i208 < rows_i208; i_i208++)
                            {
#pragma HLS loop_tripcount max = 100
                                for (j_i208 = 0; j_i208 < cols_i208; j_i208++)
                                {
                                    int __idxExpr91 = i_i208 * (*out_i208_width) + j_i208;
                                    int __idxExpr92 = i_i208 * (*a_width) + j_i208;
#pragma HLS loop_tripcount max = 1
                                    out_i208_data[__idxExpr91] = a_data[__idxExpr92];
                                }
                            }
                            a_old_i145_width = out_i208_width;
                            a_old_i145_height = out_i208_height;
                            a_old_i145_data = out_i208_data;
                            // cluster_fDeepCopy_out1_rep54(): end inline
                            // cluster_fDeepCopy_rep50(): end inline
                            // cluster_takeStep_out1_rep5(): begin inline
                            int decomp_1_renamed_8_i209;
                            int decomp_2_renamed_8_i209;
                            decomp_1_renamed_8_i209 = a_old_i145_data[i] > 0;
                            decomp_2_renamed_8_i209 = a_old_i145_data[i] < C;
                            decomp_3_renamed_6_i145 = decomp_1_renamed_8_i209 && decomp_2_renamed_8_i209;
                            // cluster_takeStep_out1_rep5(): end inline
                            if (decomp_3_renamed_6_i145)
                            {
                                // cluster_takeStep_out2_rep5(): begin inline
                                Ei_i145 = e_data[i];
                                // cluster_takeStep_out2_rep5(): end inline
                            }
                            else
                            {
                                // cluster_takeStep_out3_rep5(): begin inline
                                float _d4_0_i211;
                                int *temp1_i335_width;
                                int *temp1_i335_height;
                                float *temp1_i335_data;
                                // cluster_cal_learned_func_rep11(): begin inline
                                int *temp_i335_width;
                                int *temp_i335_height;
                                float *temp_i335_data;
                                int m_i335;
                                int i_i335;
                                float ret_i335;
                                float s_i335;
                                // cluster_cal_learned_func_out0_rep13(): begin inline
                                int j_i504;
                                int n_i504;
                                s_i335 = 0;
                                // cluster_cal_learned_func_out0_rep13(): end inline
                                for (i_i335 = 0; i_i335 < N; i_i335++)
                                {
#pragma HLS loop_tripcount max = 100
                                    // cluster_cal_learned_func_out1_rep13(): begin inline
                                    int decomp_0_renamed_129_i505;
                                    int __idxExpr93 = i_i335 * (*a_width) + 0;
                                    // cluster_cal_learned_func_out1_out0_rep14(): begin inline
                                    decomp_0_renamed_129_i505 = a_data[__idxExpr93] > 0;
                                    // cluster_cal_learned_func_out1_out0_rep14(): end inline
                                    if (decomp_0_renamed_129_i505)
                                    {
                                        // cluster_cal_learned_func_out1_out1_rep14(): begin inline
                                        float _d2_1_i646;
                                        float _d2_0_i646;
                                        // cluster_fMallocHandle_rep266(): begin inline
                                        int i_i738;
                                        int j_i738;
                                        int *out_i738_width;
                                        int *out_i738_height;
                                        float *out_i738_data;
                                        out_i738_width = &memregion_1655_size4;
                                        out_i738_height = &memregion_1656_size4;
                                        out_i738_data = memregion_1657_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                        int _lit58 = 1;
                                        // cluster_fMallocHandle_out1_rep289(): begin inline
                                        (*out_i738_height) = _lit58;
                                        (*out_i738_width) = (*X_width);
                                        temp_i335_width = out_i738_width;
                                        temp_i335_height = out_i738_height;
                                        temp_i335_data = out_i738_data;
                                        // cluster_fMallocHandle_out1_rep289(): end inline
                                        // cluster_fMallocHandle_rep266(): end inline
                                        // cluster_fMallocHandle_rep280(): begin inline
                                        int i_i739;
                                        int j_i739;
                                        int *out_i739_width;
                                        int *out_i739_height;
                                        float *out_i739_data;
                                        out_i739_width = &memregion_1658_size4;
                                        out_i739_height = &memregion_1659_size4;
                                        out_i739_data = memregion_1660_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                        int _lit59 = 1;
                                        // cluster_fMallocHandle_out1_rep304(): begin inline
                                        (*out_i739_height) = _lit59;
                                        (*out_i739_width) = (*X_width);
                                        temp1_i335_width = out_i739_width;
                                        temp1_i335_height = out_i739_height;
                                        temp1_i335_data = out_i739_data;
                                        // cluster_fMallocHandle_out1_rep304(): end inline
                                        // cluster_fMallocHandle_rep280(): end inline
                                        // cluster_cal_learned_func_out1_out1_out0_rep16(): begin inline
                                        for (m_i335 = 0; m_i335 < (*X_width); m_i335++)
                                        {
                                            int __idxExpr94 = i_i335 * (*X_width) + m_i335;
#pragma HLS loop_tripcount max = 256
                                            temp_i335_data[m_i335] = X_data[__idxExpr94];
                                            int __idxExpr95 = i * (*X_width) + m_i335;
                                            temp1_i335_data[m_i335] = X_data[__idxExpr95];
                                        }
                                        _d2_0_i646 = a_data[i_i335] * Y_data[i_i335];
                                        // cluster_cal_learned_func_out1_out1_out0_rep16(): end inline
                                        // cluster_polynomial_rep22(): begin inline
                                        int c_i741;
                                        int r_i741;
                                        int j_i741;
                                        int i_i741;
                                        int *bt1_i741_width;
                                        int *bt1_i741_height;
                                        float *bt1_i741_data;
                                        int *bt_i741_width;
                                        int *bt_i741_height;
                                        float *bt_i741_data;
                                        float ret_i741;
                                        int decomp_2_renamed_47_i741;
                                        // cluster_polynomial_out0_rep23(): begin inline
                                        r_i741 = (*temp1_i335_height);
                                        c_i741 = (*temp1_i335_width);
                                        // cluster_polynomial_out0_rep23(): end inline
                                        // cluster_fMallocHandle_rep294(): begin inline
                                        int i_i794;
                                        int j_i794;
                                        int *out_i794_width;
                                        int *out_i794_height;
                                        float *out_i794_data;
                                        out_i794_width = &memregion_1661_size4;
                                        out_i794_height = &memregion_1662_size4;
                                        out_i794_data = memregion_1663_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                        // cluster_fMallocHandle_out1_rep320(): begin inline
                                        (*out_i794_height) = c_i741;
                                        (*out_i794_width) = r_i741;
                                        bt_i741_width = out_i794_width;
                                        bt_i741_height = out_i794_height;
                                        bt_i741_data = out_i794_data;
                                        // cluster_fMallocHandle_out1_rep320(): end inline
                                        // cluster_fMallocHandle_rep294(): end inline
                                        // cluster_polynomial_out1_rep23(): begin inline
                                        for (i_i741 = 0; i_i741 < r_i741; i_i741++)
                                        {
#pragma HLS loop_tripcount max = 1
                                            for (j_i741 = 0; j_i741 < c_i741; j_i741++)
                                            {
                                                int __idxExpr96 = j_i741 * (*bt_i741_width) + i_i741;
                                                int __idxExpr97 = i_i741 * (*temp1_i335_width) + j_i741;
#pragma HLS loop_tripcount max = 256
                                                bt_i741_data[__idxExpr96] = temp1_i335_data[__idxExpr97];
                                            }
                                        }
                                        // cluster_polynomial_out1_rep23(): end inline
                                        // cluster_fMtimes_rep23(): begin inline
                                        float temp_i796;
                                        int k_i796;
                                        int j_i796;
                                        int i_i796;
                                        int n_i796;
                                        int p_i796;
                                        int m_i796;
                                        int *out_i796_width;
                                        int *out_i796_height;
                                        float *out_i796_data;
                                        // cluster_fMtimes_out0_rep25(): begin inline
                                        int p1_i836;
                                        m_i796 = (*temp_i335_height);
                                        p_i796 = (*temp_i335_width);
                                        p1_i836 = (*bt_i741_height);
                                        n_i796 = (*bt_i741_width);
                                        // cluster_fMtimes_out0_rep25(): end inline
                                        // cluster_fMallocHandle_rep310(): begin inline
                                        int i_i837;
                                        int j_i837;
                                        int *out_i837_width;
                                        int *out_i837_height;
                                        float *out_i837_data;
                                        out_i837_width = &memregion_1664_size4;
                                        out_i837_height = &memregion_1665_size4;
                                        out_i837_data = &memregion_1666_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                                        // cluster_fMallocHandle_out1_rep336(): begin inline
                                        (*out_i837_height) = m_i796;
                                        (*out_i837_width) = n_i796;
                                        out_i796_width = out_i837_width;
                                        out_i796_height = out_i837_height;
                                        out_i796_data = out_i837_data;
                                        // cluster_fMallocHandle_out1_rep336(): end inline
                                        // cluster_fMallocHandle_rep310(): end inline
                                        // cluster_fMtimes_out1_rep25(): begin inline
                                        for (i_i796 = 0; i_i796 < m_i796; i_i796++)
                                        {
#pragma HLS loop_tripcount max = 1
                                            for (j_i796 = 0; j_i796 < n_i796; j_i796++)
                                            {
#pragma HLS loop_tripcount max = 1
                                                temp_i796 = 0;
                                                for (k_i796 = 0; k_i796 < p_i796; k_i796++)
                                                {
                                                    int __idxExpr98 = k_i796 * (*bt_i741_width) + j_i796;
                                                    int __idxExpr99 = i_i796 * (*temp_i335_width) + k_i796;
#pragma HLS loop_tripcount max = 256
                                                    temp_i796 = temp_i796 +
                                                                bt_i741_data[__idxExpr98] * temp_i335_data[__idxExpr99];
                                                }
                                                int __idxExpr100 = i_i796 * (*out_i796_width) + j_i796;
                                                out_i796_data[__idxExpr100] = temp_i796;
                                            }
                                        }
                                        bt1_i741_width = out_i796_width;
                                        bt1_i741_height = out_i796_height;
                                        bt1_i741_data = out_i796_data;
                                        // cluster_fMtimes_out1_rep25(): end inline
                                        // cluster_fMtimes_rep23(): end inline
                                        // cluster_fFreeHandle_rep238(): begin inline
                                        int decomp_0_renamed_246_i797;
                                        // cluster_fFreeHandle_out0_rep255(): begin inline
                                        decomp_0_renamed_246_i797 = bt_i741_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep255(): end inline
                                        if (decomp_0_renamed_246_i797)
                                        {
                                            // free(bt_i741_data);
                                        }
                                        // cluster_fFreeHandle_rep238(): end inline
                                        // cluster_polynomial_out2_rep23(): begin inline
                                        int decomp_0_renamed_247_i798;
                                        int decomp_1_renamed_31_i798;
                                        decomp_0_renamed_247_i798 = (*bt1_i741_height) == 1;
                                        decomp_1_renamed_31_i798 = (*bt1_i741_width) == 1;
                                        decomp_2_renamed_47_i741 =
                                            decomp_0_renamed_247_i798 && decomp_1_renamed_31_i798;
                                        // cluster_polynomial_out2_rep23(): end inline
                                        if (decomp_2_renamed_47_i741)
                                        {
                                            int _lit60 = 3;
                                            // cluster_polynomial_out3_rep23(): begin inline
                                            double _d3_0_i799;
                                            double _d3_1_i799;
                                            _d3_0_i799 = pow(bt1_i741_data[0], _lit60);
                                            _d3_1_i799 = _d3_0_i799 / dim;
                                            ret_i741 = _d3_1_i799;
                                            // cluster_polynomial_out3_rep23(): end inline
                                        }
                                        else
                                        {
                                            float __rtr_val_1_i741;
                                            int __rtr_flag_1_i741;
                                            __rtr_flag_1_i741 = 0;
                                            // cluster_polynomial_out4_rep23(): begin inline
                                            // cluster_fFreeHandle_rep254(): begin inline
                                            int decomp_0_renamed_263_i840;
                                            // cluster_fFreeHandle_out0_rep271(): begin inline
                                            decomp_0_renamed_263_i840 = bt1_i741_data != nullptr;
                                            // cluster_fFreeHandle_out0_rep271(): end inline
                                            if (decomp_0_renamed_263_i840)
                                            {
                                                // free(bt1_i741_data);
                                            }
                                            // cluster_fFreeHandle_rep254(): end inline
                                            __rtr_val_1_i741 = -1;
                                            __rtr_flag_1_i741 = 1;
                                            // cluster_polynomial_out4_rep23(): end inline
                                            if (__rtr_flag_1_i741)
                                            {
                                                _d2_1_i646 = __rtr_val_1_i741;
                                                goto end_inline_i741;
                                            }
                                        }
                                        // cluster_fFreeHandle_rep269(): begin inline
                                        int decomp_0_renamed_248_i801;
                                        // cluster_fFreeHandle_out0_rep288(): begin inline
                                        decomp_0_renamed_248_i801 = bt1_i741_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep288(): end inline
                                        if (decomp_0_renamed_248_i801)
                                        {
                                            // free(bt1_i741_data);
                                        }
                                        // cluster_fFreeHandle_rep269(): end inline
                                        _d2_1_i646 = ret_i741;
                                    end_inline_i741:;
                                        // cluster_polynomial_rep22(): end inline
                                        // cluster_cal_learned_func_out1_out1_out1_rep16(): begin inline
                                        float _d2_2_i742;
                                        float _d2_3_i742;
                                        _d2_2_i742 = _d2_0_i646 * _d2_1_i646;
                                        _d2_3_i742 = s_i335 + _d2_2_i742;
                                        s_i335 = _d2_3_i742;
                                        // free(temp_i335_data);
                                        // free(temp1_i335_data);
                                        //  cluster_cal_learned_func_out1_out1_out1_rep16(): end inline
                                        //  cluster_cal_learned_func_out1_out1_rep14(): end inline
                                    }
                                    // cluster_cal_learned_func_out1_rep13(): end inline
                                }
                                // cluster_cal_learned_func_out2_rep13(): begin inline
                                s_i335 = s_i335 - b[0];
                                ret_i335 = s_i335;
                                // cluster_cal_learned_func_out2_rep13(): end inline
                                _d4_0_i211 = ret_i335;
                                // cluster_cal_learned_func_rep11(): end inline
                                // cluster_takeStep_out3_out1_rep5(): begin inline
                                float _d4_1_i336;
                                _d4_1_i336 = _d4_0_i211 - Y_data[i];
                                Ei_i145 = _d4_1_i336;
                                // cluster_takeStep_out3_out1_rep5(): end inline
                                // cluster_takeStep_out3_rep5(): end inline
                            }
                            // cluster_takeStep_out4_rep5(): begin inline
                            int decomp_4_renamed_7_i212;
                            int decomp_5_renamed_4_i212;
                            decomp_4_renamed_7_i212 = a_old_i145_data[k_i87] > 0;
                            decomp_5_renamed_4_i212 = a_old_i145_data[k_i87] < C;
                            decomp_6_renamed_2_i145 = decomp_4_renamed_7_i212 && decomp_5_renamed_4_i212;
                            // cluster_takeStep_out4_rep5(): end inline
                            if (decomp_6_renamed_2_i145)
                            {
                                // cluster_takeStep_out5_rep5(): begin inline
                                Ej_i145 = e_data[k_i87];
                                // cluster_takeStep_out5_rep5(): end inline
                            }
                            else
                            {
                                // cluster_takeStep_out6_rep5(): begin inline
                                float _d5_0_i214;
                                int *temp1_i337_width;
                                int *temp1_i337_height;
                                float *temp1_i337_data;
                                // cluster_cal_learned_func_rep22(): begin inline
                                int *temp_i337_width;
                                int *temp_i337_height;
                                float *temp_i337_data;
                                int m_i337;
                                int i_i337;
                                float ret_i337;
                                float s_i337;
                                // cluster_cal_learned_func_out0_rep25(): begin inline
                                int j_i507;
                                int n_i507;
                                s_i337 = 0;
                                // cluster_cal_learned_func_out0_rep25(): end inline
                                for (i_i337 = 0; i_i337 < N; i_i337++)
                                {
#pragma HLS loop_tripcount max = 100
                                    // cluster_cal_learned_func_out1_rep25(): begin inline
                                    int decomp_0_renamed_130_i508;
                                    int __idxExpr101 = i_i337 * (*a_width) + 0;
                                    // cluster_cal_learned_func_out1_out0_rep27(): begin inline
                                    decomp_0_renamed_130_i508 = a_data[__idxExpr101] > 0;
                                    // cluster_cal_learned_func_out1_out0_rep27(): end inline
                                    if (decomp_0_renamed_130_i508)
                                    {
                                        // cluster_cal_learned_func_out1_out1_rep27(): begin inline
                                        float _d2_1_i648;
                                        float _d2_0_i648;
                                        // cluster_fMallocHandle_rep325(): begin inline
                                        int i_i743;
                                        int j_i743;
                                        int *out_i743_width;
                                        int *out_i743_height;
                                        float *out_i743_data;
                                        out_i743_width = &memregion_1667_size4;
                                        out_i743_height = &memregion_1668_size4;
                                        out_i743_data = memregion_1669_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                        int _lit61 = 1;
                                        // cluster_fMallocHandle_out1_rep352(): begin inline
                                        (*out_i743_height) = _lit61;
                                        (*out_i743_width) = (*X_width);
                                        temp_i337_width = out_i743_width;
                                        temp_i337_height = out_i743_height;
                                        temp_i337_data = out_i743_data;
                                        // cluster_fMallocHandle_out1_rep352(): end inline
                                        // cluster_fMallocHandle_rep325(): end inline
                                        // cluster_fMallocHandle_rep339(): begin inline
                                        int i_i744;
                                        int j_i744;
                                        int *out_i744_width;
                                        int *out_i744_height;
                                        float *out_i744_data;
                                        out_i744_width = &memregion_1670_size4;
                                        out_i744_height = &memregion_1671_size4;
                                        out_i744_data = memregion_1672_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                        int _lit62 = 1;
                                        // cluster_fMallocHandle_out1_rep367(): begin inline
                                        (*out_i744_height) = _lit62;
                                        (*out_i744_width) = (*X_width);
                                        temp1_i337_width = out_i744_width;
                                        temp1_i337_height = out_i744_height;
                                        temp1_i337_data = out_i744_data;
                                        // cluster_fMallocHandle_out1_rep367(): end inline
                                        // cluster_fMallocHandle_rep339(): end inline
                                        // cluster_cal_learned_func_out1_out1_out0_rep30(): begin inline
                                        for (m_i337 = 0; m_i337 < (*X_width); m_i337++)
                                        {
                                            int __idxExpr102 = i_i337 * (*X_width) + m_i337;
#pragma HLS loop_tripcount max = 256
                                            temp_i337_data[m_i337] = X_data[__idxExpr102];
                                            int __idxExpr103 = k_i87 * (*X_width) + m_i337;
                                            temp1_i337_data[m_i337] = X_data[__idxExpr103];
                                        }
                                        _d2_0_i648 = a_data[i_i337] * Y_data[i_i337];
                                        // cluster_cal_learned_func_out1_out1_out0_rep30(): end inline
                                        // cluster_polynomial_rep36(): begin inline
                                        int c_i746;
                                        int r_i746;
                                        int j_i746;
                                        int i_i746;
                                        int *bt1_i746_width;
                                        int *bt1_i746_height;
                                        float *bt1_i746_data;
                                        int *bt_i746_width;
                                        int *bt_i746_height;
                                        float *bt_i746_data;
                                        float ret_i746;
                                        int decomp_2_renamed_48_i746;
                                        // cluster_polynomial_out0_rep38(): begin inline
                                        r_i746 = (*temp1_i337_height);
                                        c_i746 = (*temp1_i337_width);
                                        // cluster_polynomial_out0_rep38(): end inline
                                        // cluster_fMallocHandle_rep353(): begin inline
                                        int i_i805;
                                        int j_i805;
                                        int *out_i805_width;
                                        int *out_i805_height;
                                        float *out_i805_data;
                                        out_i805_width = &memregion_1673_size4;
                                        out_i805_height = &memregion_1674_size4;
                                        out_i805_data = memregion_1675_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                                        // cluster_fMallocHandle_out1_rep383(): begin inline
                                        (*out_i805_height) = c_i746;
                                        (*out_i805_width) = r_i746;
                                        bt_i746_width = out_i805_width;
                                        bt_i746_height = out_i805_height;
                                        bt_i746_data = out_i805_data;
                                        // cluster_fMallocHandle_out1_rep383(): end inline
                                        // cluster_fMallocHandle_rep353(): end inline
                                        // cluster_polynomial_out1_rep38(): begin inline
                                        for (i_i746 = 0; i_i746 < r_i746; i_i746++)
                                        {
#pragma HLS loop_tripcount max = 1
                                            for (j_i746 = 0; j_i746 < c_i746; j_i746++)
                                            {
                                                int __idxExpr104 = j_i746 * (*bt_i746_width) + i_i746;
                                                int __idxExpr105 = i_i746 * (*temp1_i337_width) + j_i746;
#pragma HLS loop_tripcount max = 256
                                                bt_i746_data[__idxExpr104] = temp1_i337_data[__idxExpr105];
                                            }
                                        }
                                        // cluster_polynomial_out1_rep38(): end inline
                                        // cluster_fMtimes_rep38(): begin inline
                                        float temp_i807;
                                        int k_i807;
                                        int j_i807;
                                        int i_i807;
                                        int n_i807;
                                        int p_i807;
                                        int m_i807;
                                        int *out_i807_width;
                                        int *out_i807_height;
                                        float *out_i807_data;
                                        // cluster_fMtimes_out0_rep41(): begin inline
                                        int p1_i843;
                                        m_i807 = (*temp_i337_height);
                                        p_i807 = (*temp_i337_width);
                                        p1_i843 = (*bt_i746_height);
                                        n_i807 = (*bt_i746_width);
                                        // cluster_fMtimes_out0_rep41(): end inline
                                        // cluster_fMallocHandle_rep369(): begin inline
                                        int i_i844;
                                        int j_i844;
                                        int *out_i844_width;
                                        int *out_i844_height;
                                        float *out_i844_data;
                                        out_i844_width = &memregion_1676_size4;
                                        out_i844_height = &memregion_1677_size4;
                                        out_i844_data = &memregion_1678_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                                        // cluster_fMallocHandle_out1_rep399(): begin inline
                                        (*out_i844_height) = m_i807;
                                        (*out_i844_width) = n_i807;
                                        out_i807_width = out_i844_width;
                                        out_i807_height = out_i844_height;
                                        out_i807_data = out_i844_data;
                                        // cluster_fMallocHandle_out1_rep399(): end inline
                                        // cluster_fMallocHandle_rep369(): end inline
                                        // cluster_fMtimes_out1_rep41(): begin inline
                                        for (i_i807 = 0; i_i807 < m_i807; i_i807++)
                                        {
#pragma HLS loop_tripcount max = 1
                                            for (j_i807 = 0; j_i807 < n_i807; j_i807++)
                                            {
#pragma HLS loop_tripcount max = 1
                                                temp_i807 = 0;
                                                for (k_i807 = 0; k_i807 < p_i807; k_i807++)
                                                {
                                                    int __idxExpr106 = k_i807 * (*bt_i746_width) + j_i807;
                                                    int __idxExpr107 = i_i807 * (*temp_i337_width) + k_i807;
#pragma HLS loop_tripcount max = 256
                                                    temp_i807 = temp_i807 + bt_i746_data[__idxExpr106] *
                                                                                temp_i337_data[__idxExpr107];
                                                }
                                                int __idxExpr108 = i_i807 * (*out_i807_width) + j_i807;
                                                out_i807_data[__idxExpr108] = temp_i807;
                                            }
                                        }
                                        bt1_i746_width = out_i807_width;
                                        bt1_i746_height = out_i807_height;
                                        bt1_i746_data = out_i807_data;
                                        // cluster_fMtimes_out1_rep41(): end inline
                                        // cluster_fMtimes_rep38(): end inline
                                        // cluster_fFreeHandle_rep284(): begin inline
                                        int decomp_0_renamed_249_i808;
                                        // cluster_fFreeHandle_out0_rep304(): begin inline
                                        decomp_0_renamed_249_i808 = bt_i746_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep304(): end inline
                                        if (decomp_0_renamed_249_i808)
                                        {
                                            // free(bt_i746_data);
                                        }
                                        // cluster_fFreeHandle_rep284(): end inline
                                        // cluster_polynomial_out2_rep38(): begin inline
                                        int decomp_0_renamed_250_i809;
                                        int decomp_1_renamed_32_i809;
                                        decomp_0_renamed_250_i809 = (*bt1_i746_height) == 1;
                                        decomp_1_renamed_32_i809 = (*bt1_i746_width) == 1;
                                        decomp_2_renamed_48_i746 =
                                            decomp_0_renamed_250_i809 && decomp_1_renamed_32_i809;
                                        // cluster_polynomial_out2_rep38(): end inline
                                        if (decomp_2_renamed_48_i746)
                                        {
                                            int _lit63 = 3;
                                            // cluster_polynomial_out3_rep38(): begin inline
                                            double _d3_0_i810;
                                            double _d3_1_i810;
                                            _d3_0_i810 = pow(bt1_i746_data[0], _lit63);
                                            _d3_1_i810 = _d3_0_i810 / dim;
                                            ret_i746 = _d3_1_i810;
                                            // cluster_polynomial_out3_rep38(): end inline
                                        }
                                        else
                                        {
                                            float __rtr_val_1_i746;
                                            int __rtr_flag_1_i746;
                                            __rtr_flag_1_i746 = 0;
                                            // cluster_polynomial_out4_rep38(): begin inline
                                            // cluster_fFreeHandle_rep300(): begin inline
                                            int decomp_0_renamed_266_i847;
                                            // cluster_fFreeHandle_out0_rep320(): begin inline
                                            decomp_0_renamed_266_i847 = bt1_i746_data != nullptr;
                                            // cluster_fFreeHandle_out0_rep320(): end inline
                                            if (decomp_0_renamed_266_i847)
                                            {
                                                // free(bt1_i746_data);
                                            }
                                            // cluster_fFreeHandle_rep300(): end inline
                                            __rtr_val_1_i746 = -1;
                                            __rtr_flag_1_i746 = 1;
                                            // cluster_polynomial_out4_rep38(): end inline
                                            if (__rtr_flag_1_i746)
                                            {
                                                _d2_1_i648 = __rtr_val_1_i746;
                                                goto end_inline_i746;
                                            }
                                        }
                                        // cluster_fFreeHandle_rep315(): begin inline
                                        int decomp_0_renamed_251_i812;
                                        // cluster_fFreeHandle_out0_rep337(): begin inline
                                        decomp_0_renamed_251_i812 = bt1_i746_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep337(): end inline
                                        if (decomp_0_renamed_251_i812)
                                        {
                                            // free(bt1_i746_data);
                                        }
                                        // cluster_fFreeHandle_rep315(): end inline
                                        _d2_1_i648 = ret_i746;
                                    end_inline_i746:;
                                        // cluster_polynomial_rep36(): end inline
                                        // cluster_cal_learned_func_out1_out1_out1_rep30(): begin inline
                                        float _d2_2_i747;
                                        float _d2_3_i747;
                                        _d2_2_i747 = _d2_0_i648 * _d2_1_i648;
                                        _d2_3_i747 = s_i337 + _d2_2_i747;
                                        s_i337 = _d2_3_i747;
                                        // free(temp_i337_data);
                                        // free(temp1_i337_data);
                                        //  cluster_cal_learned_func_out1_out1_out1_rep30(): end inline
                                        //  cluster_cal_learned_func_out1_out1_rep27(): end inline
                                    }
                                    // cluster_cal_learned_func_out1_rep25(): end inline
                                }
                                // cluster_cal_learned_func_out2_rep25(): begin inline
                                s_i337 = s_i337 - b[0];
                                ret_i337 = s_i337;
                                // cluster_cal_learned_func_out2_rep25(): end inline
                                _d5_0_i214 = ret_i337;
                                // cluster_cal_learned_func_rep22(): end inline
                                // cluster_takeStep_out6_out1_rep5(): begin inline
                                float _d5_1_i338;
                                _d5_1_i338 = _d5_0_i214 - Y_data[k_i87];
                                Ej_i145 = _d5_1_i338;
                                // cluster_takeStep_out6_out1_rep5(): end inline
                                // cluster_takeStep_out6_rep5(): end inline
                            }
                            // cluster_takeStep_out7_rep5(): begin inline
                            int decomp_7_renamed_2_i215;
                            s_i145 = Y_data[i] * Y_data[k_i87];
                            decomp_7_renamed_2_i215 = Y_data[i] == Y_data[k_i87];
                            if (decomp_7_renamed_2_i215)
                            {
                                int decomp_8_renamed_2_i215;
                                gamma_i145 = a_old_i145_data[i] + a_old_i145_data[k_i87];
                                decomp_8_renamed_2_i215 = gamma_i145 > C;
                                if (decomp_8_renamed_2_i215)
                                {
                                    L_i145 = gamma_i145 - C;
                                    H_i145 = C;
                                }
                                else
                                {
                                    L_i145 = 0;
                                    H_i145 = gamma_i145;
                                }
                            }
                            else
                            {
                                int decomp_9_renamed_1_i215;
                                gamma_i145 = a_old_i145_data[i] - a_old_i145_data[k_i87];
                                decomp_9_renamed_1_i215 = gamma_i145 > 0;
                                if (decomp_9_renamed_1_i215)
                                {
                                    L_i145 = 0;
                                    H_i145 = C - gamma_i145;
                                }
                                else
                                {
                                    L_i145 = -gamma_i145;
                                    H_i145 = C;
                                }
                            }
                            decomp_10_renamed_1_i145 = L_i145 == H_i145;
                            // cluster_takeStep_out7_rep5(): end inline
                            if (decomp_10_renamed_1_i145)
                            {
                                int __rtr_val_3_i145;
                                int __rtr_flag_3_i145;
                                __rtr_flag_3_i145 = 0;
                                // cluster_takeStep_out8_rep5(): begin inline
                                // cluster_fFreeHandle_rep154(): begin inline
                                int decomp_0_renamed_76_i339;
                                // cluster_fFreeHandle_out0_rep163(): begin inline
                                decomp_0_renamed_76_i339 = a_old_i145_data != nullptr;
                                // cluster_fFreeHandle_out0_rep163(): end inline
                                if (decomp_0_renamed_76_i339)
                                {
                                    // free(a_old_i145_data);
                                }
                                // cluster_fFreeHandle_rep154(): end inline
                                __rtr_val_3_i145 = 0;
                                __rtr_flag_3_i145 = 1;
                                // cluster_takeStep_out8_rep5(): end inline
                                if (__rtr_flag_3_i145)
                                {
                                    ret_i87 = __rtr_val_3_i145;
                                    goto end_inline_i145;
                                }
                            }
                            // cluster_fMallocHandle_rep162(): begin inline
                            int i_i217;
                            int j_i217;
                            int *out_i217_width;
                            int *out_i217_height;
                            float *out_i217_data;
                            out_i217_width = &memregion_1679_size4;
                            out_i217_height = &memregion_1680_size4;
                            out_i217_data = memregion_1681_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            int _lit27 = 1;
                            // cluster_fMallocHandle_out1_rep174(): begin inline
                            (*out_i217_height) = _lit27;
                            (*out_i217_width) = (*X_width);
                            temp_i145_width = out_i217_width;
                            temp_i145_height = out_i217_height;
                            temp_i145_data = out_i217_data;
                            // cluster_fMallocHandle_out1_rep174(): end inline
                            // cluster_fMallocHandle_rep162(): end inline
                            // cluster_fMallocHandle_rep172(): begin inline
                            int i_i218;
                            int j_i218;
                            int *out_i218_width;
                            int *out_i218_height;
                            float *out_i218_data;
                            out_i218_width = &memregion_1682_size4;
                            out_i218_height = &memregion_1683_size4;
                            out_i218_data = memregion_1684_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            int _lit28 = 1;
                            // cluster_fMallocHandle_out1_rep185(): begin inline
                            (*out_i218_height) = _lit28;
                            (*out_i218_width) = (*X_width);
                            temp1_i145_width = out_i218_width;
                            temp1_i145_height = out_i218_height;
                            temp1_i145_data = out_i218_data;
                            // cluster_fMallocHandle_out1_rep185(): end inline
                            // cluster_fMallocHandle_rep172(): end inline
                            // cluster_takeStep_out9_rep5(): begin inline
                            for (m_i145 = 0; m_i145 < (*X_width); m_i145++)
                            {
                                int __idxExpr109 = i * (*X_width) + m_i145;
#pragma HLS loop_tripcount max = 256
                                temp_i145_data[m_i145] = X_data[__idxExpr109];
                                int __idxExpr110 = k_i87 * (*X_width) + m_i145;
                                temp1_i145_data[m_i145] = X_data[__idxExpr110];
                            }
                            // cluster_takeStep_out9_rep5(): end inline
                            // cluster_polynomial_rep48(): begin inline
                            int c_i220;
                            int r_i220;
                            int j_i220;
                            int i_i220;
                            int *bt1_i220_width;
                            int *bt1_i220_height;
                            float *bt1_i220_data;
                            int *bt_i220_width;
                            int *bt_i220_height;
                            float *bt_i220_data;
                            float ret_i220;
                            int decomp_2_renamed_9_i220;
                            // cluster_polynomial_out0_rep51(): begin inline
                            r_i220 = (*temp_i145_height);
                            c_i220 = (*temp_i145_width);
                            // cluster_polynomial_out0_rep51(): end inline
                            // cluster_fMallocHandle_rep382(): begin inline
                            int i_i343;
                            int j_i343;
                            int *out_i343_width;
                            int *out_i343_height;
                            float *out_i343_data;
                            out_i343_width = &memregion_1685_size4;
                            out_i343_height = &memregion_1686_size4;
                            out_i343_data = memregion_1687_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            // cluster_fMallocHandle_out1_rep414(): begin inline
                            (*out_i343_height) = c_i220;
                            (*out_i343_width) = r_i220;
                            bt_i220_width = out_i343_width;
                            bt_i220_height = out_i343_height;
                            bt_i220_data = out_i343_data;
                            // cluster_fMallocHandle_out1_rep414(): end inline
                            // cluster_fMallocHandle_rep382(): end inline
                            // cluster_polynomial_out1_rep51(): begin inline
                            for (i_i220 = 0; i_i220 < r_i220; i_i220++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i220 = 0; j_i220 < c_i220; j_i220++)
                                {
                                    int __idxExpr111 = j_i220 * (*bt_i220_width) + i_i220;
                                    int __idxExpr112 = i_i220 * (*temp_i145_width) + j_i220;
#pragma HLS loop_tripcount max = 256
                                    bt_i220_data[__idxExpr111] = temp_i145_data[__idxExpr112];
                                }
                            }
                            // cluster_polynomial_out1_rep51(): end inline
                            // cluster_fMtimes_rep51(): begin inline
                            float temp_i345;
                            int k_i345;
                            int j_i345;
                            int i_i345;
                            int n_i345;
                            int p_i345;
                            int m_i345;
                            int *out_i345_width;
                            int *out_i345_height;
                            float *out_i345_data;
                            // cluster_fMtimes_out0_rep55(): begin inline
                            int p1_i512;
                            m_i345 = (*temp_i145_height);
                            p_i345 = (*temp_i145_width);
                            p1_i512 = (*bt_i220_height);
                            n_i345 = (*bt_i220_width);
                            // cluster_fMtimes_out0_rep55(): end inline
                            // cluster_fMallocHandle_rep394(): begin inline
                            int i_i513;
                            int j_i513;
                            int *out_i513_width;
                            int *out_i513_height;
                            float *out_i513_data;
                            out_i513_width = &memregion_1688_size4;
                            out_i513_height = &memregion_1689_size4;
                            out_i513_data = &memregion_1690_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                            // cluster_fMallocHandle_out1_rep426(): begin inline
                            (*out_i513_height) = m_i345;
                            (*out_i513_width) = n_i345;
                            out_i345_width = out_i513_width;
                            out_i345_height = out_i513_height;
                            out_i345_data = out_i513_data;
                            // cluster_fMallocHandle_out1_rep426(): end inline
                            // cluster_fMallocHandle_rep394(): end inline
                            // cluster_fMtimes_out1_rep55(): begin inline
                            for (i_i345 = 0; i_i345 < m_i345; i_i345++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i345 = 0; j_i345 < n_i345; j_i345++)
                                {
#pragma HLS loop_tripcount max = 1
                                    temp_i345 = 0;
                                    for (k_i345 = 0; k_i345 < p_i345; k_i345++)
                                    {
                                        int __idxExpr113 = k_i345 * (*bt_i220_width) + j_i345;
                                        int __idxExpr114 = i_i345 * (*temp_i145_width) + k_i345;
#pragma HLS loop_tripcount max = 256
                                        temp_i345 =
                                            temp_i345 + bt_i220_data[__idxExpr113] * temp_i145_data[__idxExpr114];
                                    }
                                    int __idxExpr115 = i_i345 * (*out_i345_width) + j_i345;
                                    out_i345_data[__idxExpr115] = temp_i345;
                                }
                            }
                            bt1_i220_width = out_i345_width;
                            bt1_i220_height = out_i345_height;
                            bt1_i220_data = out_i345_data;
                            // cluster_fMtimes_out1_rep55(): end inline
                            // cluster_fMtimes_rep51(): end inline
                            // cluster_fFreeHandle_rep328(): begin inline
                            int decomp_0_renamed_77_i346;
                            // cluster_fFreeHandle_out0_rep351(): begin inline
                            decomp_0_renamed_77_i346 = bt_i220_data != nullptr;
                            // cluster_fFreeHandle_out0_rep351(): end inline
                            if (decomp_0_renamed_77_i346)
                            {
                                // free(bt_i220_data);
                            }
                            // cluster_fFreeHandle_rep328(): end inline
                            // cluster_polynomial_out2_rep51(): begin inline
                            int decomp_0_renamed_78_i347;
                            int decomp_1_renamed_13_i347;
                            decomp_0_renamed_78_i347 = (*bt1_i220_height) == 1;
                            decomp_1_renamed_13_i347 = (*bt1_i220_width) == 1;
                            decomp_2_renamed_9_i220 = decomp_0_renamed_78_i347 && decomp_1_renamed_13_i347;
                            // cluster_polynomial_out2_rep51(): end inline
                            if (decomp_2_renamed_9_i220)
                            {
                                int _lit29 = 3;
                                // cluster_polynomial_out3_rep51(): begin inline
                                double _d3_0_i348;
                                double _d3_1_i348;
                                _d3_0_i348 = pow(bt1_i220_data[0], _lit29);
                                _d3_1_i348 = _d3_0_i348 / dim;
                                ret_i220 = _d3_1_i348;
                                // cluster_polynomial_out3_rep51(): end inline
                            }
                            else
                            {
                                float __rtr_val_1_i220;
                                int __rtr_flag_1_i220;
                                __rtr_flag_1_i220 = 0;
                                // cluster_polynomial_out4_rep51(): begin inline
                                // cluster_fFreeHandle_rep340(): begin inline
                                int decomp_0_renamed_133_i516;
                                // cluster_fFreeHandle_out0_rep363(): begin inline
                                decomp_0_renamed_133_i516 = bt1_i220_data != nullptr;
                                // cluster_fFreeHandle_out0_rep363(): end inline
                                if (decomp_0_renamed_133_i516)
                                {
                                    // free(bt1_i220_data);
                                }
                                // cluster_fFreeHandle_rep340(): end inline
                                __rtr_val_1_i220 = -1;
                                __rtr_flag_1_i220 = 1;
                                // cluster_polynomial_out4_rep51(): end inline
                                if (__rtr_flag_1_i220)
                                {
                                    k11_i145 = __rtr_val_1_i220;
                                    goto end_inline_i220;
                                }
                            }
                            // cluster_fFreeHandle_rep351(): begin inline
                            int decomp_0_renamed_79_i350;
                            // cluster_fFreeHandle_out0_rep376(): begin inline
                            decomp_0_renamed_79_i350 = bt1_i220_data != nullptr;
                            // cluster_fFreeHandle_out0_rep376(): end inline
                            if (decomp_0_renamed_79_i350)
                            {
                                // free(bt1_i220_data);
                            }
                            // cluster_fFreeHandle_rep351(): end inline
                            k11_i145 = ret_i220;
                        end_inline_i220:;
                            // cluster_polynomial_rep48(): end inline
                            // cluster_polynomial_rep58(): begin inline
                            int c_i221;
                            int r_i221;
                            int j_i221;
                            int i_i221;
                            int *bt1_i221_width;
                            int *bt1_i221_height;
                            float *bt1_i221_data;
                            int *bt_i221_width;
                            int *bt_i221_height;
                            float *bt_i221_data;
                            float ret_i221;
                            int decomp_2_renamed_10_i221;
                            // cluster_polynomial_out0_rep62(): begin inline
                            r_i221 = (*temp1_i145_height);
                            c_i221 = (*temp1_i145_width);
                            // cluster_polynomial_out0_rep62(): end inline
                            // cluster_fMallocHandle_rep405(): begin inline
                            int i_i352;
                            int j_i352;
                            int *out_i352_width;
                            int *out_i352_height;
                            float *out_i352_data;
                            out_i352_width = &memregion_1691_size4;
                            out_i352_height = &memregion_1692_size4;
                            out_i352_data = memregion_1693_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            // cluster_fMallocHandle_out1_rep439(): begin inline
                            (*out_i352_height) = c_i221;
                            (*out_i352_width) = r_i221;
                            bt_i221_width = out_i352_width;
                            bt_i221_height = out_i352_height;
                            bt_i221_data = out_i352_data;
                            // cluster_fMallocHandle_out1_rep439(): end inline
                            // cluster_fMallocHandle_rep405(): end inline
                            // cluster_polynomial_out1_rep62(): begin inline
                            for (i_i221 = 0; i_i221 < r_i221; i_i221++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i221 = 0; j_i221 < c_i221; j_i221++)
                                {
                                    int __idxExpr116 = j_i221 * (*bt_i221_width) + i_i221;
                                    int __idxExpr117 = i_i221 * (*temp1_i145_width) + j_i221;
#pragma HLS loop_tripcount max = 256
                                    bt_i221_data[__idxExpr116] = temp1_i145_data[__idxExpr117];
                                }
                            }
                            // cluster_polynomial_out1_rep62(): end inline
                            // cluster_fMtimes_rep62(): begin inline
                            float temp_i354;
                            int k_i354;
                            int j_i354;
                            int i_i354;
                            int n_i354;
                            int p_i354;
                            int m_i354;
                            int *out_i354_width;
                            int *out_i354_height;
                            float *out_i354_data;
                            // cluster_fMtimes_out0_rep67(): begin inline
                            int p1_i519;
                            m_i354 = (*temp_i145_height);
                            p_i354 = (*temp_i145_width);
                            p1_i519 = (*bt_i221_height);
                            n_i354 = (*bt_i221_width);
                            // cluster_fMtimes_out0_rep67(): end inline
                            // cluster_fMallocHandle_rep417(): begin inline
                            int i_i520;
                            int j_i520;
                            int *out_i520_width;
                            int *out_i520_height;
                            float *out_i520_data;
                            out_i520_width = &memregion_1694_size4;
                            out_i520_height = &memregion_1695_size4;
                            out_i520_data = &memregion_1696_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                            // cluster_fMallocHandle_out1_rep451(): begin inline
                            (*out_i520_height) = m_i354;
                            (*out_i520_width) = n_i354;
                            out_i354_width = out_i520_width;
                            out_i354_height = out_i520_height;
                            out_i354_data = out_i520_data;
                            // cluster_fMallocHandle_out1_rep451(): end inline
                            // cluster_fMallocHandle_rep417(): end inline
                            // cluster_fMtimes_out1_rep67(): begin inline
                            for (i_i354 = 0; i_i354 < m_i354; i_i354++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i354 = 0; j_i354 < n_i354; j_i354++)
                                {
#pragma HLS loop_tripcount max = 1
                                    temp_i354 = 0;
                                    for (k_i354 = 0; k_i354 < p_i354; k_i354++)
                                    {
                                        int __idxExpr118 = k_i354 * (*bt_i221_width) + j_i354;
                                        int __idxExpr119 = i_i354 * (*temp_i145_width) + k_i354;
#pragma HLS loop_tripcount max = 256
                                        temp_i354 =
                                            temp_i354 + bt_i221_data[__idxExpr118] * temp_i145_data[__idxExpr119];
                                    }
                                    int __idxExpr120 = i_i354 * (*out_i354_width) + j_i354;
                                    out_i354_data[__idxExpr120] = temp_i354;
                                }
                            }
                            bt1_i221_width = out_i354_width;
                            bt1_i221_height = out_i354_height;
                            bt1_i221_data = out_i354_data;
                            // cluster_fMtimes_out1_rep67(): end inline
                            // cluster_fMtimes_rep62(): end inline
                            // cluster_fFreeHandle_rep362(): begin inline
                            int decomp_0_renamed_80_i355;
                            // cluster_fFreeHandle_out0_rep388(): begin inline
                            decomp_0_renamed_80_i355 = bt_i221_data != nullptr;
                            // cluster_fFreeHandle_out0_rep388(): end inline
                            if (decomp_0_renamed_80_i355)
                            {
                                // free(bt_i221_data);
                            }
                            // cluster_fFreeHandle_rep362(): end inline
                            // cluster_polynomial_out2_rep62(): begin inline
                            int decomp_0_renamed_81_i356;
                            int decomp_1_renamed_14_i356;
                            decomp_0_renamed_81_i356 = (*bt1_i221_height) == 1;
                            decomp_1_renamed_14_i356 = (*bt1_i221_width) == 1;
                            decomp_2_renamed_10_i221 = decomp_0_renamed_81_i356 && decomp_1_renamed_14_i356;
                            // cluster_polynomial_out2_rep62(): end inline
                            if (decomp_2_renamed_10_i221)
                            {
                                int _lit30 = 3;
                                // cluster_polynomial_out3_rep62(): begin inline
                                double _d3_0_i357;
                                double _d3_1_i357;
                                _d3_0_i357 = pow(bt1_i221_data[0], _lit30);
                                _d3_1_i357 = _d3_0_i357 / dim;
                                ret_i221 = _d3_1_i357;
                                // cluster_polynomial_out3_rep62(): end inline
                            }
                            else
                            {
                                float __rtr_val_1_i221;
                                int __rtr_flag_1_i221;
                                __rtr_flag_1_i221 = 0;
                                // cluster_polynomial_out4_rep62(): begin inline
                                // cluster_fFreeHandle_rep374(): begin inline
                                int decomp_0_renamed_136_i523;
                                // cluster_fFreeHandle_out0_rep400(): begin inline
                                decomp_0_renamed_136_i523 = bt1_i221_data != nullptr;
                                // cluster_fFreeHandle_out0_rep400(): end inline
                                if (decomp_0_renamed_136_i523)
                                {
                                    // free(bt1_i221_data);
                                }
                                // cluster_fFreeHandle_rep374(): end inline
                                __rtr_val_1_i221 = -1;
                                __rtr_flag_1_i221 = 1;
                                // cluster_polynomial_out4_rep62(): end inline
                                if (__rtr_flag_1_i221)
                                {
                                    k12_i145 = __rtr_val_1_i221;
                                    goto end_inline_i221;
                                }
                            }
                            // cluster_fFreeHandle_rep385(): begin inline
                            int decomp_0_renamed_82_i359;
                            // cluster_fFreeHandle_out0_rep413(): begin inline
                            decomp_0_renamed_82_i359 = bt1_i221_data != nullptr;
                            // cluster_fFreeHandle_out0_rep413(): end inline
                            if (decomp_0_renamed_82_i359)
                            {
                                // free(bt1_i221_data);
                            }
                            // cluster_fFreeHandle_rep385(): end inline
                            k12_i145 = ret_i221;
                        end_inline_i221:;
                            // cluster_polynomial_rep58(): end inline
                            // cluster_polynomial_rep68(): begin inline
                            int c_i222;
                            int r_i222;
                            int j_i222;
                            int i_i222;
                            int *bt1_i222_width;
                            int *bt1_i222_height;
                            float *bt1_i222_data;
                            int *bt_i222_width;
                            int *bt_i222_height;
                            float *bt_i222_data;
                            float ret_i222;
                            int decomp_2_renamed_11_i222;
                            // cluster_polynomial_out0_rep73(): begin inline
                            r_i222 = (*temp1_i145_height);
                            c_i222 = (*temp1_i145_width);
                            // cluster_polynomial_out0_rep73(): end inline
                            // cluster_fMallocHandle_rep428(): begin inline
                            int i_i361;
                            int j_i361;
                            int *out_i361_width;
                            int *out_i361_height;
                            float *out_i361_data;
                            out_i361_width = &memregion_1697_size4;
                            out_i361_height = &memregion_1698_size4;
                            out_i361_data = memregion_1699_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            // cluster_fMallocHandle_out1_rep464(): begin inline
                            (*out_i361_height) = c_i222;
                            (*out_i361_width) = r_i222;
                            bt_i222_width = out_i361_width;
                            bt_i222_height = out_i361_height;
                            bt_i222_data = out_i361_data;
                            // cluster_fMallocHandle_out1_rep464(): end inline
                            // cluster_fMallocHandle_rep428(): end inline
                            // cluster_polynomial_out1_rep73(): begin inline
                            for (i_i222 = 0; i_i222 < r_i222; i_i222++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i222 = 0; j_i222 < c_i222; j_i222++)
                                {
                                    int __idxExpr121 = j_i222 * (*bt_i222_width) + i_i222;
                                    int __idxExpr122 = i_i222 * (*temp1_i145_width) + j_i222;
#pragma HLS loop_tripcount max = 256
                                    bt_i222_data[__idxExpr121] = temp1_i145_data[__idxExpr122];
                                }
                            }
                            // cluster_polynomial_out1_rep73(): end inline
                            // cluster_fMtimes_rep73(): begin inline
                            float temp_i363;
                            int k_i363;
                            int j_i363;
                            int i_i363;
                            int n_i363;
                            int p_i363;
                            int m_i363;
                            int *out_i363_width;
                            int *out_i363_height;
                            float *out_i363_data;
                            // cluster_fMtimes_out0_rep79(): begin inline
                            int p1_i526;
                            m_i363 = (*temp1_i145_height);
                            p_i363 = (*temp1_i145_width);
                            p1_i526 = (*bt_i222_height);
                            n_i363 = (*bt_i222_width);
                            // cluster_fMtimes_out0_rep79(): end inline
                            // cluster_fMallocHandle_rep440(): begin inline
                            int i_i527;
                            int j_i527;
                            int *out_i527_width;
                            int *out_i527_height;
                            float *out_i527_data;
                            out_i527_width = &memregion_1700_size4;
                            out_i527_height = &memregion_1701_size4;
                            out_i527_data = &memregion_1702_size4;
#pragma clava malloc_size max = 12 min = 12 avg = 12
                            // cluster_fMallocHandle_out1_rep476(): begin inline
                            (*out_i527_height) = m_i363;
                            (*out_i527_width) = n_i363;
                            out_i363_width = out_i527_width;
                            out_i363_height = out_i527_height;
                            out_i363_data = out_i527_data;
                            // cluster_fMallocHandle_out1_rep476(): end inline
                            // cluster_fMallocHandle_rep440(): end inline
                            // cluster_fMtimes_out1_rep79(): begin inline
                            for (i_i363 = 0; i_i363 < m_i363; i_i363++)
                            {
#pragma HLS loop_tripcount max = 1
                                for (j_i363 = 0; j_i363 < n_i363; j_i363++)
                                {
#pragma HLS loop_tripcount max = 1
                                    temp_i363 = 0;
                                    for (k_i363 = 0; k_i363 < p_i363; k_i363++)
                                    {
                                        int __idxExpr123 = k_i363 * (*bt_i222_width) + j_i363;
                                        int __idxExpr124 = i_i363 * (*temp1_i145_width) + k_i363;
#pragma HLS loop_tripcount max = 256
                                        temp_i363 =
                                            temp_i363 + bt_i222_data[__idxExpr123] * temp1_i145_data[__idxExpr124];
                                    }
                                    int __idxExpr125 = i_i363 * (*out_i363_width) + j_i363;
                                    out_i363_data[__idxExpr125] = temp_i363;
                                }
                            }
                            bt1_i222_width = out_i363_width;
                            bt1_i222_height = out_i363_height;
                            bt1_i222_data = out_i363_data;
                            // cluster_fMtimes_out1_rep79(): end inline
                            // cluster_fMtimes_rep73(): end inline
                            // cluster_fFreeHandle_rep396(): begin inline
                            int decomp_0_renamed_83_i364;
                            // cluster_fFreeHandle_out0_rep425(): begin inline
                            decomp_0_renamed_83_i364 = bt_i222_data != nullptr;
                            // cluster_fFreeHandle_out0_rep425(): end inline
                            if (decomp_0_renamed_83_i364)
                            {
                                // free(bt_i222_data);
                            }
                            // cluster_fFreeHandle_rep396(): end inline
                            // cluster_polynomial_out2_rep73(): begin inline
                            int decomp_0_renamed_84_i365;
                            int decomp_1_renamed_15_i365;
                            decomp_0_renamed_84_i365 = (*bt1_i222_height) == 1;
                            decomp_1_renamed_15_i365 = (*bt1_i222_width) == 1;
                            decomp_2_renamed_11_i222 = decomp_0_renamed_84_i365 && decomp_1_renamed_15_i365;
                            // cluster_polynomial_out2_rep73(): end inline
                            if (decomp_2_renamed_11_i222)
                            {
                                int _lit31 = 3;
                                // cluster_polynomial_out3_rep73(): begin inline
                                double _d3_0_i366;
                                double _d3_1_i366;
                                _d3_0_i366 = pow(bt1_i222_data[0], _lit31);
                                _d3_1_i366 = _d3_0_i366 / dim;
                                ret_i222 = _d3_1_i366;
                                // cluster_polynomial_out3_rep73(): end inline
                            }
                            else
                            {
                                float __rtr_val_1_i222;
                                int __rtr_flag_1_i222;
                                __rtr_flag_1_i222 = 0;
                                // cluster_polynomial_out4_rep73(): begin inline
                                // cluster_fFreeHandle_rep408(): begin inline
                                int decomp_0_renamed_139_i530;
                                // cluster_fFreeHandle_out0_rep437(): begin inline
                                decomp_0_renamed_139_i530 = bt1_i222_data != nullptr;
                                // cluster_fFreeHandle_out0_rep437(): end inline
                                if (decomp_0_renamed_139_i530)
                                {
                                    // free(bt1_i222_data);
                                }
                                // cluster_fFreeHandle_rep408(): end inline
                                __rtr_val_1_i222 = -1;
                                __rtr_flag_1_i222 = 1;
                                // cluster_polynomial_out4_rep73(): end inline
                                if (__rtr_flag_1_i222)
                                {
                                    k22_i145 = __rtr_val_1_i222;
                                    goto end_inline_i222;
                                }
                            }
                            // cluster_fFreeHandle_rep419(): begin inline
                            int decomp_0_renamed_85_i368;
                            // cluster_fFreeHandle_out0_rep450(): begin inline
                            decomp_0_renamed_85_i368 = bt1_i222_data != nullptr;
                            // cluster_fFreeHandle_out0_rep450(): end inline
                            if (decomp_0_renamed_85_i368)
                            {
                                // free(bt1_i222_data);
                            }
                            // cluster_fFreeHandle_rep419(): end inline
                            k22_i145 = ret_i222;
                        end_inline_i222:;
                            // cluster_polynomial_rep68(): end inline
                            // cluster_takeStep_out10_rep5(): begin inline
                            eta_i145 = 2 * k12_i145 - k11_i145 - k22_i145;
                            // cluster_takeStep_out10_rep5(): end inline
                            // cluster_fFreeHandle_rep165(): begin inline
                            int decomp_0_renamed_45_i224;
                            // cluster_fFreeHandle_out0_rep174(): begin inline
                            decomp_0_renamed_45_i224 = temp1_i145_data != nullptr;
                            // cluster_fFreeHandle_out0_rep174(): end inline
                            if (decomp_0_renamed_45_i224)
                            {
                                // free(temp1_i145_data);
                            }
                            // cluster_fFreeHandle_rep165(): end inline
                            // cluster_fFreeHandle_rep175(): begin inline
                            int decomp_0_renamed_46_i225;
                            // cluster_fFreeHandle_out0_rep185(): begin inline
                            decomp_0_renamed_46_i225 = temp_i145_data != nullptr;
                            // cluster_fFreeHandle_out0_rep185(): end inline
                            if (decomp_0_renamed_46_i225)
                            {
                                // free(temp_i145_data);
                            }
                            // cluster_fFreeHandle_rep175(): end inline
                            // cluster_takeStep_out11_rep5(): begin inline
                            int decomp_11_renamed_1_i226;
                            float decomp_16_renamed_1_i226;
                            float decomp_17_renamed_1_i226;
                            decomp_11_renamed_1_i226 = eta_i145 < 0;
                            if (decomp_11_renamed_1_i226)
                            {
                                int decomp_12_renamed_1_i226;
                                a_data[k_i87] = a_old_i145_data[k_i87] + Y_data[k_i87] * (Ej_i145 - Ei_i145) / eta_i145;
                                decomp_12_renamed_1_i226 = a_data[k_i87] < L_i145;
                                if (decomp_12_renamed_1_i226)
                                {
                                    a_data[k_i87] = L_i145;
                                }
                                else
                                {
                                    int decomp_13_renamed_1_i226;
                                    decomp_13_renamed_1_i226 = a_data[k_i87] > H_i145;
                                    if (decomp_13_renamed_1_i226)
                                    {
                                        a_data[k_i87] = H_i145;
                                    }
                                }
                            }
                            else
                            {
                                int decomp_14_renamed_1_i226;
                                c1_i145 = eta_i145 / 2;
                                c2_i145 = Y_data[k_i87] * (Ei_i145 - Ej_i145) - eta_i145 * a_old_i145_data[k_i87];
                                Lobj_i145 = c1_i145 * L_i145 * L_i145 + c2_i145 * L_i145;
                                Hobj_i145 = c1_i145 * H_i145 * H_i145 + c2_i145 * H_i145;
                                decomp_14_renamed_1_i226 = Lobj_i145 > (Hobj_i145 + eps);
                                if (decomp_14_renamed_1_i226)
                                {
                                    a_data[k_i87] = L_i145;
                                }
                                else
                                {
                                    int decomp_15_renamed_1_i226;
                                    decomp_15_renamed_1_i226 = Lobj_i145 < (Hobj_i145 - eps);
                                    if (decomp_15_renamed_1_i226)
                                    {
                                        a_data[k_i87] = H_i145;
                                    }
                                    else
                                    {
                                        a_data[k_i87] = a_old_i145_data[k_i87];
                                    }
                                }
                            }
                            decomp_16_renamed_1_i226 = a_data[k_i87] - a_old_i145_data[k_i87];
                            decomp_17_renamed_1_i226 = fabsf(decomp_16_renamed_1_i226);
                            decomp_18_renamed_1_i145 =
                                decomp_17_renamed_1_i226 < (eps * (a_data[k_i87] + a_old_i145_data[k_i87] + eps));
                            // cluster_takeStep_out11_rep5(): end inline
                            if (decomp_18_renamed_1_i145)
                            {
                                int __rtr_val_4_i145;
                                int __rtr_flag_4_i145;
                                __rtr_flag_4_i145 = 0;
                                // cluster_takeStep_out12_rep5(): begin inline
                                // cluster_fFreeHandle_rep185(): begin inline
                                int decomp_0_renamed_88_i371;
                                // cluster_fFreeHandle_out0_rep197(): begin inline
                                decomp_0_renamed_88_i371 = a_old_i145_data != nullptr;
                                // cluster_fFreeHandle_out0_rep197(): end inline
                                if (decomp_0_renamed_88_i371)
                                {
                                    // free(a_old_i145_data);
                                }
                                // cluster_fFreeHandle_rep185(): end inline
                                __rtr_val_4_i145 = 0;
                                __rtr_flag_4_i145 = 1;
                                // cluster_takeStep_out12_rep5(): end inline
                                if (__rtr_flag_4_i145)
                                {
                                    ret_i87 = __rtr_val_4_i145;
                                    goto end_inline_i145;
                                }
                            }
                            // cluster_takeStep_out13_rep5(): begin inline
                            int decomp_19_renamed_1_i228;
                            int decomp_21_renamed_1_i228;
                            int decomp_22_renamed_1_i228;
                            int decomp_23_renamed_1_i228;
                            a_data[i] = a_old_i145_data[i] - s_i145 * (a_data[k_i87] - a_old_i145_data[k_i87]);
                            decomp_19_renamed_1_i228 = a_data[i] < 0;
                            if (decomp_19_renamed_1_i228)
                            {
                                a_data[k_i87] = a_data[k_i87] + s_i145 * a_data[i];
                                a_data[i] = 0;
                            }
                            else
                            {
                                int decomp_20_renamed_1_i228;
                                decomp_20_renamed_1_i228 = a_data[i] > C;
                                if (decomp_20_renamed_1_i228)
                                {
                                    t_i145 = a_data[i] - C;
                                    a_data[k_i87] = a_data[k_i87] + s_i145 * t_i145;
                                    a_data[i] = C;
                                }
                            }
                            decomp_21_renamed_1_i228 = a_data[i] > 0;
                            decomp_22_renamed_1_i228 = a_data[i] < C;
                            decomp_23_renamed_1_i228 = decomp_21_renamed_1_i228 && decomp_22_renamed_1_i228;
                            if (decomp_23_renamed_1_i228)
                            {
                                bnew_i145 = b[0] + Ei_i145 + Y_data[i] * (a_data[i] - a_old_i145_data[i]) * k11_i145 +
                                            Y_data[k_i87] * (a_data[k_i87] - a_old_i145_data[k_i87]) * k12_i145;
                            }
                            else
                            {
                                int decomp_24_renamed_1_i228;
                                int decomp_25_renamed_1_i228;
                                int decomp_26_renamed_1_i228;
                                decomp_24_renamed_1_i228 = a_data[k_i87] > 0;
                                decomp_25_renamed_1_i228 = a_data[k_i87] < C;
                                decomp_26_renamed_1_i228 = decomp_24_renamed_1_i228 && decomp_25_renamed_1_i228;
                                if (decomp_26_renamed_1_i228)
                                {
                                    bnew_i145 = b[0] + Ej_i145 +
                                                Y_data[i] * (a_data[i] - a_old_i145_data[i]) * k12_i145 +
                                                Y_data[k_i87] * (a_data[k_i87] - a_old_i145_data[k_i87]) * k22_i145;
                                }
                                else
                                {
                                    float b1_i228;
                                    float b2_i228;
                                    b1_i228 = b[0] + Ei_i145 + Y_data[i] * (a_data[i] - a_old_i145_data[i]) * k11_i145 +
                                              Y_data[k_i87] * (a_data[k_i87] - a_old_i145_data[k_i87]) * k12_i145;
                                    b2_i228 = b[0] + Ej_i145 + Y_data[i] * (a_data[i] - a_old_i145_data[i]) * k12_i145 +
                                              Y_data[k_i87] * (a_data[k_i87] - a_old_i145_data[k_i87]) * k22_i145;
                                    bnew_i145 = (b1_i228 + b2_i228) / 2;
                                }
                            }
                            delta_b_i145 = bnew_i145 - b[0];
                            b[0] = bnew_i145;
                            t1_i145 = Y_data[i] * (a_data[i] - a_old_i145_data[i]);
                            t2_i145 = Y_data[k_i87] * (a_data[k_i87] - a_old_i145_data[k_i87]);
                            // cluster_takeStep_out13_rep5(): end inline
                            // cluster_fMallocHandle_rep182(): begin inline
                            int i_i229;
                            int j_i229;
                            int *out_i229_width;
                            int *out_i229_height;
                            float *out_i229_data;
                            out_i229_width = &memregion_1703_size4;
                            out_i229_height = &memregion_1704_size4;
                            out_i229_data = memregion_1705_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            int _lit32 = 1;
                            // cluster_fMallocHandle_out1_rep196(): begin inline
                            (*out_i229_height) = _lit32;
                            (*out_i229_width) = (*X_width);
                            temp_i145_width = out_i229_width;
                            temp_i145_height = out_i229_height;
                            temp_i145_data = out_i229_data;
                            // cluster_fMallocHandle_out1_rep196(): end inline
                            // cluster_fMallocHandle_rep182(): end inline
                            // cluster_fMallocHandle_rep192(): begin inline
                            int i_i230;
                            int j_i230;
                            int *out_i230_width;
                            int *out_i230_height;
                            float *out_i230_data;
                            out_i230_width = &memregion_1706_size4;
                            out_i230_height = &memregion_1707_size4;
                            out_i230_data = memregion_1708_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            int _lit33 = 1;
                            // cluster_fMallocHandle_out1_rep207(): begin inline
                            (*out_i230_height) = _lit33;
                            (*out_i230_width) = (*X_width);
                            temp1_i145_width = out_i230_width;
                            temp1_i145_height = out_i230_height;
                            temp1_i145_data = out_i230_data;
                            // cluster_fMallocHandle_out1_rep207(): end inline
                            // cluster_fMallocHandle_rep192(): end inline
                            // cluster_fMallocHandle_rep202(): begin inline
                            int i_i231;
                            int j_i231;
                            int *out_i231_width;
                            int *out_i231_height;
                            float *out_i231_data;
                            out_i231_width = &memregion_1709_size4;
                            out_i231_height = &memregion_1710_size4;
                            out_i231_data = memregion_1711_size1024;
#pragma clava malloc_size max = 1032 min = 1032 avg = 1032
                            int _lit34 = 1;
                            // cluster_fMallocHandle_out1_rep218(): begin inline
                            (*out_i231_height) = _lit34;
                            (*out_i231_width) = (*X_width);
                            temp2_i145_width = out_i231_width;
                            temp2_i145_height = out_i231_height;
                            temp2_i145_data = out_i231_data;
                            // cluster_fMallocHandle_out1_rep218(): end inline
                            // cluster_fMallocHandle_rep202(): end inline
                            for (k_i145 = 0; k_i145 < N; k_i145++)
                            {
#pragma HLS loop_tripcount max = 100
                                // cluster_takeStep_out14_rep5(): begin inline
                                int decomp_29_renamed_1_i232;
                                // cluster_takeStep_out14_out0_rep5(): begin inline
                                int decomp_27_renamed_1_i375;
                                int decomp_28_renamed_1_i375;
                                decomp_27_renamed_1_i375 = 0 < a_old_i145_data[i];
                                decomp_28_renamed_1_i375 = a_old_i145_data[i] < C;
                                decomp_29_renamed_1_i232 = decomp_27_renamed_1_i375 && decomp_28_renamed_1_i375;
                                // cluster_takeStep_out14_out0_rep5(): end inline
                                if (decomp_29_renamed_1_i232)
                                {
                                    // cluster_takeStep_out14_out1_rep5(): begin inline
                                    float _d6_0_i376;
                                    float _d6_3_i376;
                                    float _d6_2_i376;
                                    // cluster_takeStep_out14_out1_out0_rep6(): begin inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_takeStep_out14_out1_out0_rep6(): end inline
                                    // cluster_polynomial_rep79(): begin inline
                                    int c_i534;
                                    int r_i534;
                                    int j_i534;
                                    int i_i534;
                                    int *bt1_i534_width;
                                    int *bt1_i534_height;
                                    float *bt1_i534_data;
                                    int *bt_i534_width;
                                    int *bt_i534_height;
                                    float *bt_i534_data;
                                    float ret_i534;
                                    int decomp_2_renamed_32_i534;
                                    // cluster_polynomial_out0_rep85(): begin inline
                                    r_i534 = (*temp1_i145_height);
                                    c_i534 = (*temp1_i145_width);
                                    // cluster_polynomial_out0_rep85(): end inline
                                    //  cluster_fMallocHandle_rep452(c, r, &bt); // Dead call removed by HLS DCE
                                    // cluster_polynomial_out1_rep85(): begin inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_polynomial_out1_rep85(): end inline
                                    // cluster_fMtimes_rep85(): begin inline
                                    float temp_i657;
                                    int k_i657;
                                    int j_i657;
                                    int i_i657;
                                    int n_i657;
                                    int p_i657;
                                    int m_i657;
                                    int *out_i657_width;
                                    int *out_i657_height;
                                    float *out_i657_data;
                                    // cluster_fMtimes_out0_rep92(): begin inline
                                    int p1_i748;
                                    m_i657 = (*temp_i145_height);
                                    p_i657 = (*temp_i145_width);
                                    p1_i748 = (*bt_i534_height);
                                    n_i657 = (*bt_i534_width);
                                    bt1_i534_width = out_i657_width;
                                    bt1_i534_height = out_i657_height;
                                    bt1_i534_data = out_i657_data;
                                    // cluster_fMtimes_out0_rep92(): end inline
                                    //  cluster_fMallocHandle_rep466(m, n, &out); // Dead call removed by HLS DCE
                                    // cluster_fMtimes_out1_rep92(): begin inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_fMtimes_out1_rep92(): end inline
                                    // cluster_fMtimes_rep85(): end inline
                                    // cluster_fFreeHandle_rep431(): begin inline
                                    int decomp_0_renamed_189_i658;
                                    // cluster_fFreeHandle_out0_rep463(): begin inline
                                    decomp_0_renamed_189_i658 = bt_i534_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep463(): end inline
                                    if (decomp_0_renamed_189_i658)
                                    {
                                        // free(bt_i534_data);
                                    }
                                    // cluster_fFreeHandle_rep431(): end inline
                                    // cluster_polynomial_out2_rep85(): begin inline
                                    int decomp_0_renamed_190_i659;
                                    int decomp_1_renamed_26_i659;
                                    decomp_0_renamed_190_i659 = (*bt1_i534_height) == 1;
                                    decomp_1_renamed_26_i659 = (*bt1_i534_width) == 1;
                                    decomp_2_renamed_32_i534 = decomp_0_renamed_190_i659 && decomp_1_renamed_26_i659;
                                    // cluster_polynomial_out2_rep85(): end inline
                                    if (decomp_2_renamed_32_i534)
                                    {
                                        int _lit51 = 3;
                                        // cluster_polynomial_out3_rep85(): begin inline
                                        double _d3_0_i660;
                                        double _d3_1_i660;
                                        _d3_0_i660 = pow(bt1_i534_data[0], _lit51);
                                        _d3_1_i660 = _d3_0_i660 / dim;
                                        ret_i534 = _d3_1_i660;
                                        // cluster_polynomial_out3_rep85(): end inline
                                    }
                                    else
                                    {
                                        float __rtr_val_1_i534;
                                        int __rtr_flag_1_i534;
                                        __rtr_flag_1_i534 = 0;
                                        // cluster_polynomial_out4_rep85(): begin inline
                                        // cluster_fFreeHandle_rep445(): begin inline
                                        int decomp_0_renamed_226_i751;
                                        // cluster_fFreeHandle_out0_rep477(): begin inline
                                        decomp_0_renamed_226_i751 = bt1_i534_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep477(): end inline
                                        if (decomp_0_renamed_226_i751)
                                        {
                                            // free(bt1_i534_data);
                                        }
                                        // cluster_fFreeHandle_rep445(): end inline
                                        __rtr_val_1_i534 = -1;
                                        __rtr_flag_1_i534 = 1;
                                        // cluster_polynomial_out4_rep85(): end inline
                                        if (__rtr_flag_1_i534)
                                        {
                                            _d6_0_i376 = __rtr_val_1_i534;
                                            goto end_inline_i534;
                                        }
                                    }
                                    // cluster_fFreeHandle_rep458(): begin inline
                                    int decomp_0_renamed_191_i662;
                                    // cluster_fFreeHandle_out0_rep492(): begin inline
                                    decomp_0_renamed_191_i662 = bt1_i534_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep492(): end inline
                                    if (decomp_0_renamed_191_i662)
                                    {
                                        // free(bt1_i534_data);
                                    }
                                    // cluster_fFreeHandle_rep458(): end inline
                                    _d6_0_i376 = ret_i534;
                                end_inline_i534:;
                                    // cluster_polynomial_rep79(): end inline
                                    // cluster_takeStep_out14_out1_out1_rep6(): begin inline
                                    float _d6_1_i535;
                                    _d6_1_i535 = t1_i145 * _d6_0_i376;
                                    _d6_2_i376 = e_data[k_i145] + _d6_1_i535;
                                    // cluster_takeStep_out14_out1_out1_rep6(): end inline
                                    // cluster_polynomial_rep91(): begin inline
                                    int c_i536;
                                    int r_i536;
                                    int j_i536;
                                    int i_i536;
                                    int *bt1_i536_width;
                                    int *bt1_i536_height;
                                    float *bt1_i536_data;
                                    int *bt_i536_width;
                                    int *bt_i536_height;
                                    float *bt_i536_data;
                                    float ret_i536;
                                    int decomp_2_renamed_33_i536;
                                    // cluster_polynomial_out0_rep98(): begin inline
                                    r_i536 = (*temp1_i145_height);
                                    c_i536 = (*temp1_i145_width);
                                    // cluster_polynomial_out0_rep98(): end inline
                                    //  cluster_fMallocHandle_rep479(c, r, &bt); // Dead call removed by HLS DCE
                                    // cluster_polynomial_out1_rep98(): begin inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_polynomial_out1_rep98(): end inline
                                    // cluster_fMtimes_rep98(): begin inline
                                    float temp_i665;
                                    int k_i665;
                                    int j_i665;
                                    int i_i665;
                                    int n_i665;
                                    int p_i665;
                                    int m_i665;
                                    int *out_i665_width;
                                    int *out_i665_height;
                                    float *out_i665_data;
                                    // cluster_fMtimes_out0_rep106(): begin inline
                                    int p1_i753;
                                    m_i665 = (*temp2_i145_height);
                                    p_i665 = (*temp2_i145_width);
                                    p1_i753 = (*bt_i536_height);
                                    n_i665 = (*bt_i536_width);
                                    bt1_i536_width = out_i665_width;
                                    bt1_i536_height = out_i665_height;
                                    bt1_i536_data = out_i665_data;
                                    // cluster_fMtimes_out0_rep106(): end inline
                                    //  cluster_fMallocHandle_rep493(m, n, &out); // Dead call removed by HLS DCE
                                    // cluster_fMtimes_out1_rep106(): begin inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_fMtimes_out1_rep106(): end inline
                                    // cluster_fMtimes_rep98(): end inline
                                    // cluster_fFreeHandle_rep471(): begin inline
                                    int decomp_0_renamed_192_i666;
                                    // cluster_fFreeHandle_out0_rep506(): begin inline
                                    decomp_0_renamed_192_i666 = bt_i536_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep506(): end inline
                                    if (decomp_0_renamed_192_i666)
                                    {
                                        // free(bt_i536_data);
                                    }
                                    // cluster_fFreeHandle_rep471(): end inline
                                    // cluster_polynomial_out2_rep98(): begin inline
                                    int decomp_0_renamed_193_i667;
                                    int decomp_1_renamed_27_i667;
                                    decomp_0_renamed_193_i667 = (*bt1_i536_height) == 1;
                                    decomp_1_renamed_27_i667 = (*bt1_i536_width) == 1;
                                    decomp_2_renamed_33_i536 = decomp_0_renamed_193_i667 && decomp_1_renamed_27_i667;
                                    // cluster_polynomial_out2_rep98(): end inline
                                    if (decomp_2_renamed_33_i536)
                                    {
                                        int _lit52 = 3;
                                        // cluster_polynomial_out3_rep98(): begin inline
                                        double _d3_0_i668;
                                        double _d3_1_i668;
                                        _d3_0_i668 = pow(bt1_i536_data[0], _lit52);
                                        _d3_1_i668 = _d3_0_i668 / dim;
                                        ret_i536 = _d3_1_i668;
                                        // cluster_polynomial_out3_rep98(): end inline
                                    }
                                    else
                                    {
                                        float __rtr_val_1_i536;
                                        int __rtr_flag_1_i536;
                                        __rtr_flag_1_i536 = 0;
                                        // cluster_polynomial_out4_rep98(): begin inline
                                        // cluster_fFreeHandle_rep485(): begin inline
                                        int decomp_0_renamed_229_i756;
                                        // cluster_fFreeHandle_out0_rep520(): begin inline
                                        decomp_0_renamed_229_i756 = bt1_i536_data != nullptr;
                                        // cluster_fFreeHandle_out0_rep520(): end inline
                                        if (decomp_0_renamed_229_i756)
                                        {
                                            // free(bt1_i536_data);
                                        }
                                        // cluster_fFreeHandle_rep485(): end inline
                                        __rtr_val_1_i536 = -1;
                                        __rtr_flag_1_i536 = 1;
                                        // cluster_polynomial_out4_rep98(): end inline
                                        if (__rtr_flag_1_i536)
                                        {
                                            _d6_3_i376 = __rtr_val_1_i536;
                                            goto end_inline_i536;
                                        }
                                    }
                                    // cluster_fFreeHandle_rep498(): begin inline
                                    int decomp_0_renamed_194_i670;
                                    // cluster_fFreeHandle_out0_rep535(): begin inline
                                    decomp_0_renamed_194_i670 = bt1_i536_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep535(): end inline
                                    if (decomp_0_renamed_194_i670)
                                    {
                                        // free(bt1_i536_data);
                                    }
                                    // cluster_fFreeHandle_rep498(): end inline
                                    _d6_3_i376 = ret_i536;
                                end_inline_i536:;
                                    // cluster_polynomial_rep91(): end inline
                                    // cluster_takeStep_out14_out1_out2_rep6(): begin inline
                                    float _d6_4_i537;
                                    float _d6_5_i537;
                                    float _d6_6_i537;
                                    _d6_4_i537 = t2_i145 * _d6_3_i376;
                                    _d6_5_i537 = _d6_2_i376 + _d6_4_i537;
                                    _d6_6_i537 = _d6_5_i537 - delta_b_i145;
                                    e_data[k_i145] = _d6_6_i537;
                                    e_data[i] = 0;
                                    e_data[k_i87] = 0;
                                    // cluster_takeStep_out14_out1_out2_rep6(): end inline
                                    // cluster_takeStep_out14_out1_rep5(): end inline
                                }
                                // cluster_takeStep_out14_rep5(): end inline
                            }
                            // cluster_fFreeHandle_rep196(): begin inline
                            int decomp_0_renamed_47_i233;
                            // cluster_fFreeHandle_out0_rep208(): begin inline
                            decomp_0_renamed_47_i233 = a_old_i145_data != nullptr;
                            // cluster_fFreeHandle_out0_rep208(): end inline
                            if (decomp_0_renamed_47_i233)
                            {
                                // free(a_old_i145_data);
                            }
                            // cluster_fFreeHandle_rep196(): end inline
                            // cluster_fFreeHandle_rep206(): begin inline
                            int decomp_0_renamed_48_i234;
                            // cluster_fFreeHandle_out0_rep219(): begin inline
                            decomp_0_renamed_48_i234 = temp_i145_data != nullptr;
                            // cluster_fFreeHandle_out0_rep219(): end inline
                            if (decomp_0_renamed_48_i234)
                            {
                                // free(temp_i145_data);
                            }
                            // cluster_fFreeHandle_rep206(): end inline
                            // cluster_fFreeHandle_rep216(): begin inline
                            int decomp_0_renamed_49_i235;
                            // cluster_fFreeHandle_out0_rep230(): begin inline
                            decomp_0_renamed_49_i235 = temp1_i145_data != nullptr;
                            // cluster_fFreeHandle_out0_rep230(): end inline
                            if (decomp_0_renamed_49_i235)
                            {
                                // free(temp1_i145_data);
                            }
                            // cluster_fFreeHandle_rep216(): end inline
                            // cluster_fFreeHandle_rep226(): begin inline
                            int decomp_0_renamed_50_i236;
                            // cluster_fFreeHandle_out0_rep241(): begin inline
                            decomp_0_renamed_50_i236 = temp2_i145_data != nullptr;
                            // cluster_fFreeHandle_out0_rep241(): end inline
                            if (decomp_0_renamed_50_i236)
                            {
                                // free(temp2_i145_data);
                            }
                            // cluster_fFreeHandle_rep226(): end inline
                            // cluster_takeStep_out15_rep5(): begin inline
                            ret_i145 = 1;
                            // cluster_takeStep_out15_rep5(): end inline
                            ret_i87 = ret_i145;
                        end_inline_i145:;
                            // cluster_takeStep_rep4(): end inline
                            decomp_8_renamed_0_i117 = ret_i87 == 1;
                            if (decomp_8_renamed_0_i117)
                            {
                                __rtr_val_0_i87 = ret_i87;
                                __rtr_flag_0_i87 = 1;
                                goto end_inline_i117;
                            }
                        }
                    end_inline_i117:;
                        // cluster_examineExample_out4_rep2(): end inline
                        if (__rtr_flag_0_i87)
                        {
                            ret = __rtr_val_0_i87;
                            goto end_inline_i87;
                        }
                    }
                    // cluster_examineExample_out5_rep2(): begin inline
                    ret_i87 = 0;
                    // cluster_examineExample_out5_rep2(): end inline
                    ret = ret_i87;
                end_inline_i87:;
                    // cluster_examineExample_rep0(): end inline
                    // cluster_getAlphaFromTrainSet_out4_out2_out1_out0_out0(): begin inline
                    NumChanged = NumChanged + ret;
                    // cluster_getAlphaFromTrainSet_out4_out2_out1_out0_out0(): end inline
                    // cluster_getAlphaFromTrainSet_out4_out2_out1_out0(): end inline
                }
                // cluster_getAlphaFromTrainSet_out4_out2_out1(): end inline
            }
            else
            {
                // cluster_getAlphaFromTrainSet_out4_out2_out2(): begin inline
                for (i = 0; i < N; i++)
                {
#pragma HLS loop_tripcount max = 100
                    // cluster_getAlphaFromTrainSet_out4_out2_out2_out0(): begin inline
                    int decomp_3_renamed_0_i62;
                    // cluster_getAlphaFromTrainSet_out4_out2_out2_out0_out0(): begin inline
                    int decomp_1_renamed_3_i89;
                    int decomp_2_renamed_2_i89;
                    decomp_1_renamed_3_i89 = a_data[i] > 0;
                    decomp_2_renamed_2_i89 = a_data[i] < C;
                    decomp_3_renamed_0_i62 = decomp_1_renamed_3_i89 && decomp_2_renamed_2_i89;
                    // cluster_getAlphaFromTrainSet_out4_out2_out2_out0_out0(): end inline
                    if (decomp_3_renamed_0_i62)
                    {
                        // cluster_getAlphaFromTrainSet_out4_out2_out2_out0_out1(): begin inline
                        // cluster_examineExample_rep1(): begin inline
                        int decomp_0_renamed_32_i119;
                        float temp_i119;
                        float maxDiff_i119;
                        float randVal_i119;
                        float r1_i119;
                        float E_i119;
                        int k_i119;
                        int j_i119;
                        int ret_i119;
                        int decomp_1_renamed_5_i119;
                        // cluster_examineExample_out0_rep1(): begin inline
                        int m_i146;
                        int n_i146;
                        decomp_0_renamed_32_i119 = (a_data[i] > 0) && (a_data[i] < C);
                        // cluster_examineExample_out0_rep1(): end inline
                        if (decomp_0_renamed_32_i119)
                        {
                            // cluster_examineExample_out1_rep1(): begin inline
                            E_i119 = e_data[i];
                            // cluster_examineExample_out1_rep1(): end inline
                        }
                        else
                        {
                            // cluster_examineExample_out2_rep1(): begin inline
                            float _d1_0_i148;
                            int *temp1_i238_width;
                            int *temp1_i238_height;
                            float *temp1_i238_data;
                            // cluster_cal_learned_func_rep2(): begin inline
                            int *temp_i238_width;
                            int *temp_i238_height;
                            float *temp_i238_data;
                            int m_i238;
                            int i_i238;
                            float ret_i238;
                            float s_i238;
                            // cluster_cal_learned_func_out0_rep4(): begin inline
                            int j_i381;
                            int n_i381;
                            s_i238 = 0;
                            // cluster_cal_learned_func_out0_rep4(): end inline
                            //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount directive
                            //  even if it has static bounds
                            // cluster_cal_learned_func_out2_rep4(): begin inline
                            s_i238 = s_i238 - b[0];
                            ret_i238 = s_i238;
                            // cluster_cal_learned_func_out2_rep4(): end inline
                            _d1_0_i148 = ret_i238;
                            // cluster_cal_learned_func_rep2(): end inline
                            // cluster_examineExample_out2_out1_rep2(): begin inline
                            float _d1_1_i239;
                            _d1_1_i239 = _d1_0_i148 - Y_data[i];
                            E_i119 = _d1_1_i239;
                            // cluster_examineExample_out2_out1_rep2(): end inline
                            // cluster_examineExample_out2_rep1(): end inline
                        }
                        int __idxExpr126 = i * (*Y_width) + 0;
                        // cluster_examineExample_out3_rep1(): begin inline
                        r1_i119 = Y_data[__idxExpr126] * E_i119;
                        decomp_1_renamed_5_i119 = ((r1_i119 < (-1 * tolerance)) && (a_data[i] < C)) ||
                                                  ((r1_i119 > tolerance) && (a_data[i] > 0));
                        // cluster_examineExample_out3_rep1(): end inline
                        if (decomp_1_renamed_5_i119)
                        {
                            int __rtr_val_0_i119;
                            int __rtr_flag_0_i119;
                            __rtr_flag_0_i119 = 0;
                            // cluster_examineExample_out4_rep1(): begin inline
                            int decomp_4_renamed_5_i150;
                            // cluster_examineExample_out4_out0_rep2(): begin inline
                            maxDiff_i119 = 0;
                            j_i119 = i;
                            // Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount directive
                            // even if it has static bounds
                            decomp_4_renamed_5_i150 = i != j_i119;
                            // cluster_examineExample_out4_out0_rep2(): end inline
                            if (decomp_4_renamed_5_i150)
                            {
                                int decomp_5_renamed_2_i150;
                                // cluster_takeStep_rep5(): begin inline
                                int __rtr_flag_2_i241;
                                __rtr_flag_2_i241 = 0;
                                int __rtr_val_2_i241;
                                int ret_i241;
                                float s_i241;
                                int m_i241;
                                int k_i241;
                                float Ei_i241;
                                float Ej_i241;
                                float gamma_i241;
                                float L_i241;
                                float H_i241;
                                int *a_old_i241_width;
                                int *a_old_i241_height;
                                float *a_old_i241_data;
                                float k11_i241;
                                float k12_i241;
                                float k22_i241;
                                float eta_i241;
                                int *temp_i241_width;
                                int *temp_i241_height;
                                float *temp_i241_data;
                                int *temp1_i241_width;
                                int *temp1_i241_height;
                                float *temp1_i241_data;
                                int *temp2_i241_width;
                                int *temp2_i241_height;
                                float *temp2_i241_data;
                                float t_i241;
                                float t1_i241;
                                float t2_i241;
                                float bnew_i241;
                                float delta_b_i241;
                                float c1_i241;
                                float c2_i241;
                                float Lobj_i241;
                                float Hobj_i241;
                                int __rtr_val_5_i241;
                                int __rtr_flag_5_i241;
                                __rtr_flag_5_i241 = 0;
                                int __rtr_flag_6_i241;
                                __rtr_flag_6_i241 = 0;
                                int __rtr_val_6_i241;
                                int __rtr_val_7_i241;
                                int __rtr_flag_7_i241;
                                __rtr_flag_7_i241 = 0;
                                int __rtr_flag_8_i241;
                                __rtr_flag_8_i241 = 0;
                                int __rtr_val_8_i241;
                                int __rtr_val_9_i241;
                                int __rtr_flag_9_i241;
                                __rtr_flag_9_i241 = 0;
                                int __rtr_flag_10_i241;
                                __rtr_flag_10_i241 = 0;
                                int __rtr_val_10_i241;
                                int __rtr_val_11_i241;
                                int __rtr_flag_11_i241;
                                __rtr_flag_11_i241 = 0;
                                int decomp_3_renamed_10_i241;
                                int decomp_6_renamed_7_i241;
                                int decomp_10_renamed_5_i241;
                                int decomp_18_renamed_5_i241;
                                // cluster_takeStep_out0_rep4(): begin inline
                                int n_i383;
                                int decomp_0_renamed_93_i383;
                                ret_i241 = 1;
                                decomp_0_renamed_93_i383 = i == j_i119;
                                if (decomp_0_renamed_93_i383)
                                {
                                    __rtr_val_2_i241 = 0;
                                    __rtr_flag_2_i241 = 1;
                                    goto end_inline_i383;
                                }
                            end_inline_i383:;
                                // cluster_takeStep_out0_rep4(): end inline
                                // cluster_takeStep_out17_rep4(): begin inline
                                if (__rtr_flag_2_i241)
                                {
                                    __rtr_val_5_i241 = __rtr_val_2_i241;
                                    __rtr_flag_5_i241 = 1;
                                    goto end_inline_i384;
                                }
                            end_inline_i384:;
                                // cluster_takeStep_out17_rep4(): end inline
                                // cluster_takeStep_out24_rep4(): begin inline
                                if (__rtr_flag_5_i241)
                                {
                                    __rtr_val_6_i241 = __rtr_val_5_i241;
                                    __rtr_flag_6_i241 = 1;
                                    goto end_inline_i385;
                                }
                            end_inline_i385:;
                                // cluster_takeStep_out24_rep4(): end inline
                                // cluster_takeStep_out32_rep4(): begin inline
                                if (__rtr_flag_6_i241)
                                {
                                    __rtr_val_7_i241 = __rtr_val_6_i241;
                                    __rtr_flag_7_i241 = 1;
                                    goto end_inline_i386;
                                }
                            end_inline_i386:;
                                // cluster_takeStep_out32_rep4(): end inline
                                // cluster_takeStep_out41_rep4(): begin inline
                                if (__rtr_flag_7_i241)
                                {
                                    __rtr_val_8_i241 = __rtr_val_7_i241;
                                    __rtr_flag_8_i241 = 1;
                                    goto end_inline_i387;
                                }
                            end_inline_i387:;
                                // cluster_takeStep_out41_rep4(): end inline
                                // cluster_takeStep_out51_rep4(): begin inline
                                if (__rtr_flag_8_i241)
                                {
                                    __rtr_val_9_i241 = __rtr_val_8_i241;
                                    __rtr_flag_9_i241 = 1;
                                    goto end_inline_i388;
                                }
                            end_inline_i388:;
                                // cluster_takeStep_out51_rep4(): end inline
                                // cluster_takeStep_out62_rep4(): begin inline
                                if (__rtr_flag_9_i241)
                                {
                                    __rtr_val_10_i241 = __rtr_val_9_i241;
                                    __rtr_flag_10_i241 = 1;
                                    goto end_inline_i389;
                                }
                            end_inline_i389:;
                                // cluster_takeStep_out62_rep4(): end inline
                                // cluster_takeStep_out74_rep4(): begin inline
                                if (__rtr_flag_10_i241)
                                {
                                    __rtr_val_11_i241 = __rtr_val_10_i241;
                                    __rtr_flag_11_i241 = 1;
                                    goto end_inline_i390;
                                }
                            end_inline_i390:;
                                // cluster_takeStep_out74_rep4(): end inline
                                if (__rtr_flag_11_i241)
                                {
                                    ret_i119 = __rtr_val_11_i241;
                                    goto end_inline_i241;
                                }
                                // cluster_fDeepCopy_rep49(): begin inline
                                int cols_i391;
                                int rows_i391;
                                int *out_i391_width;
                                int *out_i391_height;
                                float *out_i391_data;
                                int j_i391;
                                int i_i391;
                                // cluster_fDeepCopy_out0_rep55(): begin inline
                                rows_i391 = (*a_height);
                                cols_i391 = (*a_width);
                                a_old_i241_width = out_i391_width;
                                a_old_i241_height = out_i391_height;
                                a_old_i241_data = out_i391_data;
                                // cluster_fDeepCopy_out0_rep55(): end inline
                                //  cluster_fMallocHandle_rep254(rows, cols, &out); // Dead call removed by HLS DCE
                                // cluster_fDeepCopy_out1_rep55(): begin inline
                                //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                //  directive even if it has static bounds
                                // cluster_fDeepCopy_out1_rep55(): end inline
                                // cluster_fDeepCopy_rep49(): end inline
                                // cluster_takeStep_out1_rep4(): begin inline
                                int decomp_1_renamed_16_i392;
                                int decomp_2_renamed_22_i392;
                                decomp_1_renamed_16_i392 = a_old_i241_data[i] > 0;
                                decomp_2_renamed_22_i392 = a_old_i241_data[i] < C;
                                decomp_3_renamed_10_i241 = decomp_1_renamed_16_i392 && decomp_2_renamed_22_i392;
                                // cluster_takeStep_out1_rep4(): end inline
                                if (decomp_3_renamed_10_i241)
                                {
                                    // cluster_takeStep_out2_rep4(): begin inline
                                    Ei_i241 = e_data[i];
                                    // cluster_takeStep_out2_rep4(): end inline
                                }
                                else
                                {
                                    // cluster_takeStep_out3_rep4(): begin inline
                                    float _d4_0_i394;
                                    int *temp1_i540_width;
                                    int *temp1_i540_height;
                                    float *temp1_i540_data;
                                    // cluster_cal_learned_func_rep12(): begin inline
                                    int *temp_i540_width;
                                    int *temp_i540_height;
                                    float *temp_i540_data;
                                    int m_i540;
                                    int i_i540;
                                    float ret_i540;
                                    float s_i540;
                                    // cluster_cal_learned_func_out0_rep12(): begin inline
                                    int j_i671;
                                    int n_i671;
                                    s_i540 = 0;
                                    // cluster_cal_learned_func_out0_rep12(): end inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_cal_learned_func_out2_rep12(): begin inline
                                    s_i540 = s_i540 - b[0];
                                    ret_i540 = s_i540;
                                    // cluster_cal_learned_func_out2_rep12(): end inline
                                    _d4_0_i394 = ret_i540;
                                    // cluster_cal_learned_func_rep12(): end inline
                                    // cluster_takeStep_out3_out1_rep6(): begin inline
                                    float _d4_1_i541;
                                    _d4_1_i541 = _d4_0_i394 - Y_data[i];
                                    Ei_i241 = _d4_1_i541;
                                    // cluster_takeStep_out3_out1_rep6(): end inline
                                    // cluster_takeStep_out3_rep4(): end inline
                                }
                                // cluster_takeStep_out4_rep4(): begin inline
                                int decomp_4_renamed_10_i395;
                                int decomp_5_renamed_6_i395;
                                decomp_4_renamed_10_i395 = a_old_i241_data[j_i119] > 0;
                                decomp_5_renamed_6_i395 = a_old_i241_data[j_i119] < C;
                                decomp_6_renamed_7_i241 = decomp_4_renamed_10_i395 && decomp_5_renamed_6_i395;
                                // cluster_takeStep_out4_rep4(): end inline
                                if (decomp_6_renamed_7_i241)
                                {
                                    // cluster_takeStep_out5_rep4(): begin inline
                                    Ej_i241 = e_data[j_i119];
                                    // cluster_takeStep_out5_rep4(): end inline
                                }
                                else
                                {
                                    // cluster_takeStep_out6_rep4(): begin inline
                                    float _d5_0_i397;
                                    int *temp1_i542_width;
                                    int *temp1_i542_height;
                                    float *temp1_i542_data;
                                    // cluster_cal_learned_func_rep23(): begin inline
                                    int *temp_i542_width;
                                    int *temp_i542_height;
                                    float *temp_i542_data;
                                    int m_i542;
                                    int i_i542;
                                    float ret_i542;
                                    float s_i542;
                                    // cluster_cal_learned_func_out0_rep24(): begin inline
                                    int j_i673;
                                    int n_i673;
                                    s_i542 = 0;
                                    // cluster_cal_learned_func_out0_rep24(): end inline
                                    //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                    //  directive even if it has static bounds
                                    // cluster_cal_learned_func_out2_rep24(): begin inline
                                    s_i542 = s_i542 - b[0];
                                    ret_i542 = s_i542;
                                    // cluster_cal_learned_func_out2_rep24(): end inline
                                    _d5_0_i397 = ret_i542;
                                    // cluster_cal_learned_func_rep23(): end inline
                                    // cluster_takeStep_out6_out1_rep6(): begin inline
                                    float _d5_1_i543;
                                    _d5_1_i543 = _d5_0_i397 - Y_data[j_i119];
                                    Ej_i241 = _d5_1_i543;
                                    // cluster_takeStep_out6_out1_rep6(): end inline
                                    // cluster_takeStep_out6_rep4(): end inline
                                }
                                // cluster_takeStep_out7_rep4(): begin inline
                                int decomp_7_renamed_4_i398;
                                s_i241 = Y_data[i] * Y_data[j_i119];
                                decomp_7_renamed_4_i398 = Y_data[i] == Y_data[j_i119];
                                if (decomp_7_renamed_4_i398)
                                {
                                    int decomp_8_renamed_4_i398;
                                    gamma_i241 = a_old_i241_data[i] + a_old_i241_data[j_i119];
                                    decomp_8_renamed_4_i398 = gamma_i241 > C;
                                    if (decomp_8_renamed_4_i398)
                                    {
                                        L_i241 = gamma_i241 - C;
                                        H_i241 = C;
                                    }
                                    else
                                    {
                                        L_i241 = 0;
                                        H_i241 = gamma_i241;
                                    }
                                }
                                else
                                {
                                    int decomp_9_renamed_3_i398;
                                    gamma_i241 = a_old_i241_data[i] - a_old_i241_data[j_i119];
                                    decomp_9_renamed_3_i398 = gamma_i241 > 0;
                                    if (decomp_9_renamed_3_i398)
                                    {
                                        L_i241 = 0;
                                        H_i241 = C - gamma_i241;
                                    }
                                    else
                                    {
                                        L_i241 = -gamma_i241;
                                        H_i241 = C;
                                    }
                                }
                                decomp_10_renamed_5_i241 = L_i241 == H_i241;
                                // cluster_takeStep_out7_rep4(): end inline
                                if (decomp_10_renamed_5_i241)
                                {
                                    int __rtr_val_3_i241;
                                    int __rtr_flag_3_i241;
                                    __rtr_flag_3_i241 = 0;
                                    // cluster_takeStep_out8_rep4(): begin inline
                                    // cluster_fFreeHandle_rep155(): begin inline
                                    int decomp_0_renamed_142_i544;
                                    // cluster_fFreeHandle_out0_rep162(): begin inline
                                    decomp_0_renamed_142_i544 = a_old_i241_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep162(): end inline
                                    if (decomp_0_renamed_142_i544)
                                    {
                                        // free(a_old_i241_data);
                                    }
                                    // cluster_fFreeHandle_rep155(): end inline
                                    __rtr_val_3_i241 = 0;
                                    __rtr_flag_3_i241 = 1;
                                    // cluster_takeStep_out8_rep4(): end inline
                                    if (__rtr_flag_3_i241)
                                    {
                                        ret_i119 = __rtr_val_3_i241;
                                        goto end_inline_i241;
                                    }
                                }
                                // cluster_fMallocHandle_rep161(1, X->width, &temp); // Dead call removed by HLS DCE
                                // cluster_fMallocHandle_rep171(1, X->width, &temp1); // Dead call removed by HLS DCE
                                // cluster_takeStep_out9_rep4(): begin inline
                                // Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                // directive even if it has static bounds
                                // cluster_takeStep_out9_rep4(): end inline
                                // cluster_polynomial_rep47(): begin inline
                                int c_i401;
                                int r_i401;
                                int j_i401;
                                int i_i401;
                                int *bt1_i401_width;
                                int *bt1_i401_height;
                                float *bt1_i401_data;
                                int *bt_i401_width;
                                int *bt_i401_height;
                                float *bt_i401_data;
                                float ret_i401;
                                int decomp_2_renamed_23_i401;
                                // cluster_polynomial_out0_rep52(): begin inline
                                r_i401 = (*temp_i241_height);
                                c_i401 = (*temp_i241_width);
                                // cluster_polynomial_out0_rep52(): end inline
                                //  cluster_fMallocHandle_rep383(c, r, &bt); // Dead call removed by HLS DCE
                                // cluster_polynomial_out1_rep52(): begin inline
                                //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                //  directive even if it has static bounds
                                // cluster_polynomial_out1_rep52(): end inline
                                // cluster_fMtimes_rep52(): begin inline
                                float temp_i547;
                                int k_i547;
                                int j_i547;
                                int i_i547;
                                int n_i547;
                                int p_i547;
                                int m_i547;
                                int *out_i547_width;
                                int *out_i547_height;
                                float *out_i547_data;
                                // cluster_fMtimes_out0_rep54(): begin inline
                                int p1_i676;
                                m_i547 = (*temp_i241_height);
                                p_i547 = (*temp_i241_width);
                                p1_i676 = (*bt_i401_height);
                                n_i547 = (*bt_i401_width);
                                bt1_i401_width = out_i547_width;
                                bt1_i401_height = out_i547_height;
                                bt1_i401_data = out_i547_data;
                                // cluster_fMtimes_out0_rep54(): end inline
                                //  cluster_fMallocHandle_rep393(m, n, &out); // Dead call removed by HLS DCE
                                // cluster_fMtimes_out1_rep54(): begin inline
                                //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                //  directive even if it has static bounds
                                // cluster_fMtimes_out1_rep54(): end inline
                                // cluster_fMtimes_rep52(): end inline
                                // cluster_fFreeHandle_rep329(): begin inline
                                int decomp_0_renamed_143_i548;
                                // cluster_fFreeHandle_out0_rep350(): begin inline
                                decomp_0_renamed_143_i548 = bt_i401_data != nullptr;
                                // cluster_fFreeHandle_out0_rep350(): end inline
                                if (decomp_0_renamed_143_i548)
                                {
                                    // free(bt_i401_data);
                                }
                                // cluster_fFreeHandle_rep329(): end inline
                                // cluster_polynomial_out2_rep52(): begin inline
                                int decomp_0_renamed_144_i549;
                                int decomp_1_renamed_20_i549;
                                decomp_0_renamed_144_i549 = (*bt1_i401_height) == 1;
                                decomp_1_renamed_20_i549 = (*bt1_i401_width) == 1;
                                decomp_2_renamed_23_i401 = decomp_0_renamed_144_i549 && decomp_1_renamed_20_i549;
                                // cluster_polynomial_out2_rep52(): end inline
                                if (decomp_2_renamed_23_i401)
                                {
                                    int _lit43 = 3;
                                    // cluster_polynomial_out3_rep52(): begin inline
                                    double _d3_0_i550;
                                    double _d3_1_i550;
                                    _d3_0_i550 = pow(bt1_i401_data[0], _lit43);
                                    _d3_1_i550 = _d3_0_i550 / dim;
                                    ret_i401 = _d3_1_i550;
                                    // cluster_polynomial_out3_rep52(): end inline
                                }
                                else
                                {
                                    float __rtr_val_1_i401;
                                    int __rtr_flag_1_i401;
                                    __rtr_flag_1_i401 = 0;
                                    // cluster_polynomial_out4_rep52(): begin inline
                                    // cluster_fFreeHandle_rep339(): begin inline
                                    int decomp_0_renamed_197_i679;
                                    // cluster_fFreeHandle_out0_rep364(): begin inline
                                    decomp_0_renamed_197_i679 = bt1_i401_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep364(): end inline
                                    if (decomp_0_renamed_197_i679)
                                    {
                                        // free(bt1_i401_data);
                                    }
                                    // cluster_fFreeHandle_rep339(): end inline
                                    __rtr_val_1_i401 = -1;
                                    __rtr_flag_1_i401 = 1;
                                    // cluster_polynomial_out4_rep52(): end inline
                                    if (__rtr_flag_1_i401)
                                    {
                                        k11_i241 = __rtr_val_1_i401;
                                        goto end_inline_i401;
                                    }
                                }
                                // cluster_fFreeHandle_rep352(): begin inline
                                int decomp_0_renamed_145_i552;
                                // cluster_fFreeHandle_out0_rep375(): begin inline
                                decomp_0_renamed_145_i552 = bt1_i401_data != nullptr;
                                // cluster_fFreeHandle_out0_rep375(): end inline
                                if (decomp_0_renamed_145_i552)
                                {
                                    // free(bt1_i401_data);
                                }
                                // cluster_fFreeHandle_rep352(): end inline
                                k11_i241 = ret_i401;
                            end_inline_i401:;
                                // cluster_polynomial_rep47(): end inline
                                // cluster_polynomial_rep57(): begin inline
                                int c_i402;
                                int r_i402;
                                int j_i402;
                                int i_i402;
                                int *bt1_i402_width;
                                int *bt1_i402_height;
                                float *bt1_i402_data;
                                int *bt_i402_width;
                                int *bt_i402_height;
                                float *bt_i402_data;
                                float ret_i402;
                                int decomp_2_renamed_24_i402;
                                // cluster_polynomial_out0_rep63(): begin inline
                                r_i402 = (*temp1_i241_height);
                                c_i402 = (*temp1_i241_width);
                                // cluster_polynomial_out0_rep63(): end inline
                                //  cluster_fMallocHandle_rep406(c, r, &bt); // Dead call removed by HLS DCE
                                // cluster_polynomial_out1_rep63(): begin inline
                                //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                //  directive even if it has static bounds
                                // cluster_polynomial_out1_rep63(): end inline
                                // cluster_fMtimes_rep63(): begin inline
                                float temp_i555;
                                int k_i555;
                                int j_i555;
                                int i_i555;
                                int n_i555;
                                int p_i555;
                                int m_i555;
                                int *out_i555_width;
                                int *out_i555_height;
                                float *out_i555_data;
                                // cluster_fMtimes_out0_rep66(): begin inline
                                int p1_i681;
                                m_i555 = (*temp_i241_height);
                                p_i555 = (*temp_i241_width);
                                p1_i681 = (*bt_i402_height);
                                n_i555 = (*bt_i402_width);
                                bt1_i402_width = out_i555_width;
                                bt1_i402_height = out_i555_height;
                                bt1_i402_data = out_i555_data;
                                // cluster_fMtimes_out0_rep66(): end inline
                                //  cluster_fMallocHandle_rep416(m, n, &out); // Dead call removed by HLS DCE
                                // cluster_fMtimes_out1_rep66(): begin inline
                                //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                //  directive even if it has static bounds
                                // cluster_fMtimes_out1_rep66(): end inline
                                // cluster_fMtimes_rep63(): end inline
                                // cluster_fFreeHandle_rep363(): begin inline
                                int decomp_0_renamed_146_i556;
                                // cluster_fFreeHandle_out0_rep387(): begin inline
                                decomp_0_renamed_146_i556 = bt_i402_data != nullptr;
                                // cluster_fFreeHandle_out0_rep387(): end inline
                                if (decomp_0_renamed_146_i556)
                                {
                                    // free(bt_i402_data);
                                }
                                // cluster_fFreeHandle_rep363(): end inline
                                // cluster_polynomial_out2_rep63(): begin inline
                                int decomp_0_renamed_147_i557;
                                int decomp_1_renamed_21_i557;
                                decomp_0_renamed_147_i557 = (*bt1_i402_height) == 1;
                                decomp_1_renamed_21_i557 = (*bt1_i402_width) == 1;
                                decomp_2_renamed_24_i402 = decomp_0_renamed_147_i557 && decomp_1_renamed_21_i557;
                                // cluster_polynomial_out2_rep63(): end inline
                                if (decomp_2_renamed_24_i402)
                                {
                                    int _lit44 = 3;
                                    // cluster_polynomial_out3_rep63(): begin inline
                                    double _d3_0_i558;
                                    double _d3_1_i558;
                                    _d3_0_i558 = pow(bt1_i402_data[0], _lit44);
                                    _d3_1_i558 = _d3_0_i558 / dim;
                                    ret_i402 = _d3_1_i558;
                                    // cluster_polynomial_out3_rep63(): end inline
                                }
                                else
                                {
                                    float __rtr_val_1_i402;
                                    int __rtr_flag_1_i402;
                                    __rtr_flag_1_i402 = 0;
                                    // cluster_polynomial_out4_rep63(): begin inline
                                    // cluster_fFreeHandle_rep373(): begin inline
                                    int decomp_0_renamed_200_i684;
                                    // cluster_fFreeHandle_out0_rep401(): begin inline
                                    decomp_0_renamed_200_i684 = bt1_i402_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep401(): end inline
                                    if (decomp_0_renamed_200_i684)
                                    {
                                        // free(bt1_i402_data);
                                    }
                                    // cluster_fFreeHandle_rep373(): end inline
                                    __rtr_val_1_i402 = -1;
                                    __rtr_flag_1_i402 = 1;
                                    // cluster_polynomial_out4_rep63(): end inline
                                    if (__rtr_flag_1_i402)
                                    {
                                        k12_i241 = __rtr_val_1_i402;
                                        goto end_inline_i402;
                                    }
                                }
                                // cluster_fFreeHandle_rep386(): begin inline
                                int decomp_0_renamed_148_i560;
                                // cluster_fFreeHandle_out0_rep412(): begin inline
                                decomp_0_renamed_148_i560 = bt1_i402_data != nullptr;
                                // cluster_fFreeHandle_out0_rep412(): end inline
                                if (decomp_0_renamed_148_i560)
                                {
                                    // free(bt1_i402_data);
                                }
                                // cluster_fFreeHandle_rep386(): end inline
                                k12_i241 = ret_i402;
                            end_inline_i402:;
                                // cluster_polynomial_rep57(): end inline
                                // cluster_polynomial_rep67(): begin inline
                                int c_i403;
                                int r_i403;
                                int j_i403;
                                int i_i403;
                                int *bt1_i403_width;
                                int *bt1_i403_height;
                                float *bt1_i403_data;
                                int *bt_i403_width;
                                int *bt_i403_height;
                                float *bt_i403_data;
                                float ret_i403;
                                int decomp_2_renamed_25_i403;
                                // cluster_polynomial_out0_rep74(): begin inline
                                r_i403 = (*temp1_i241_height);
                                c_i403 = (*temp1_i241_width);
                                // cluster_polynomial_out0_rep74(): end inline
                                //  cluster_fMallocHandle_rep429(c, r, &bt); // Dead call removed by HLS DCE
                                // cluster_polynomial_out1_rep74(): begin inline
                                //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                //  directive even if it has static bounds
                                // cluster_polynomial_out1_rep74(): end inline
                                // cluster_fMtimes_rep74(): begin inline
                                float temp_i563;
                                int k_i563;
                                int j_i563;
                                int i_i563;
                                int n_i563;
                                int p_i563;
                                int m_i563;
                                int *out_i563_width;
                                int *out_i563_height;
                                float *out_i563_data;
                                // cluster_fMtimes_out0_rep78(): begin inline
                                int p1_i686;
                                m_i563 = (*temp1_i241_height);
                                p_i563 = (*temp1_i241_width);
                                p1_i686 = (*bt_i403_height);
                                n_i563 = (*bt_i403_width);
                                bt1_i403_width = out_i563_width;
                                bt1_i403_height = out_i563_height;
                                bt1_i403_data = out_i563_data;
                                // cluster_fMtimes_out0_rep78(): end inline
                                //  cluster_fMallocHandle_rep439(m, n, &out); // Dead call removed by HLS DCE
                                // cluster_fMtimes_out1_rep78(): begin inline
                                //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                //  directive even if it has static bounds
                                // cluster_fMtimes_out1_rep78(): end inline
                                // cluster_fMtimes_rep74(): end inline
                                // cluster_fFreeHandle_rep397(): begin inline
                                int decomp_0_renamed_149_i564;
                                // cluster_fFreeHandle_out0_rep424(): begin inline
                                decomp_0_renamed_149_i564 = bt_i403_data != nullptr;
                                // cluster_fFreeHandle_out0_rep424(): end inline
                                if (decomp_0_renamed_149_i564)
                                {
                                    // free(bt_i403_data);
                                }
                                // cluster_fFreeHandle_rep397(): end inline
                                // cluster_polynomial_out2_rep74(): begin inline
                                int decomp_0_renamed_150_i565;
                                int decomp_1_renamed_22_i565;
                                decomp_0_renamed_150_i565 = (*bt1_i403_height) == 1;
                                decomp_1_renamed_22_i565 = (*bt1_i403_width) == 1;
                                decomp_2_renamed_25_i403 = decomp_0_renamed_150_i565 && decomp_1_renamed_22_i565;
                                // cluster_polynomial_out2_rep74(): end inline
                                if (decomp_2_renamed_25_i403)
                                {
                                    int _lit45 = 3;
                                    // cluster_polynomial_out3_rep74(): begin inline
                                    double _d3_0_i566;
                                    double _d3_1_i566;
                                    _d3_0_i566 = pow(bt1_i403_data[0], _lit45);
                                    _d3_1_i566 = _d3_0_i566 / dim;
                                    ret_i403 = _d3_1_i566;
                                    // cluster_polynomial_out3_rep74(): end inline
                                }
                                else
                                {
                                    float __rtr_val_1_i403;
                                    int __rtr_flag_1_i403;
                                    __rtr_flag_1_i403 = 0;
                                    // cluster_polynomial_out4_rep74(): begin inline
                                    // cluster_fFreeHandle_rep407(): begin inline
                                    int decomp_0_renamed_203_i689;
                                    // cluster_fFreeHandle_out0_rep438(): begin inline
                                    decomp_0_renamed_203_i689 = bt1_i403_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep438(): end inline
                                    if (decomp_0_renamed_203_i689)
                                    {
                                        // free(bt1_i403_data);
                                    }
                                    // cluster_fFreeHandle_rep407(): end inline
                                    __rtr_val_1_i403 = -1;
                                    __rtr_flag_1_i403 = 1;
                                    // cluster_polynomial_out4_rep74(): end inline
                                    if (__rtr_flag_1_i403)
                                    {
                                        k22_i241 = __rtr_val_1_i403;
                                        goto end_inline_i403;
                                    }
                                }
                                // cluster_fFreeHandle_rep420(): begin inline
                                int decomp_0_renamed_151_i568;
                                // cluster_fFreeHandle_out0_rep449(): begin inline
                                decomp_0_renamed_151_i568 = bt1_i403_data != nullptr;
                                // cluster_fFreeHandle_out0_rep449(): end inline
                                if (decomp_0_renamed_151_i568)
                                {
                                    // free(bt1_i403_data);
                                }
                                // cluster_fFreeHandle_rep420(): end inline
                                k22_i241 = ret_i403;
                            end_inline_i403:;
                                // cluster_polynomial_rep67(): end inline
                                // cluster_takeStep_out10_rep4(): begin inline
                                eta_i241 = 2 * k12_i241 - k11_i241 - k22_i241;
                                // cluster_takeStep_out10_rep4(): end inline
                                // cluster_fFreeHandle_rep164(): begin inline
                                int decomp_0_renamed_94_i405;
                                // cluster_fFreeHandle_out0_rep175(): begin inline
                                decomp_0_renamed_94_i405 = temp1_i241_data != nullptr;
                                // cluster_fFreeHandle_out0_rep175(): end inline
                                if (decomp_0_renamed_94_i405)
                                {
                                    // free(temp1_i241_data);
                                }
                                // cluster_fFreeHandle_rep164(): end inline
                                // cluster_fFreeHandle_rep174(): begin inline
                                int decomp_0_renamed_95_i406;
                                // cluster_fFreeHandle_out0_rep186(): begin inline
                                decomp_0_renamed_95_i406 = temp_i241_data != nullptr;
                                // cluster_fFreeHandle_out0_rep186(): end inline
                                if (decomp_0_renamed_95_i406)
                                {
                                    // free(temp_i241_data);
                                }
                                // cluster_fFreeHandle_rep174(): end inline
                                // cluster_takeStep_out11_rep4(): begin inline
                                int decomp_11_renamed_3_i407;
                                float decomp_16_renamed_3_i407;
                                float decomp_17_renamed_3_i407;
                                decomp_11_renamed_3_i407 = eta_i241 < 0;
                                if (decomp_11_renamed_3_i407)
                                {
                                    int decomp_12_renamed_3_i407;
                                    a_data[j_i119] =
                                        a_old_i241_data[j_i119] + Y_data[j_i119] * (Ej_i241 - Ei_i241) / eta_i241;
                                    decomp_12_renamed_3_i407 = a_data[j_i119] < L_i241;
                                    if (decomp_12_renamed_3_i407)
                                    {
                                        a_data[j_i119] = L_i241;
                                    }
                                    else
                                    {
                                        int decomp_13_renamed_3_i407;
                                        decomp_13_renamed_3_i407 = a_data[j_i119] > H_i241;
                                        if (decomp_13_renamed_3_i407)
                                        {
                                            a_data[j_i119] = H_i241;
                                        }
                                    }
                                }
                                else
                                {
                                    int decomp_14_renamed_3_i407;
                                    c1_i241 = eta_i241 / 2;
                                    c2_i241 = Y_data[j_i119] * (Ei_i241 - Ej_i241) - eta_i241 * a_old_i241_data[j_i119];
                                    Lobj_i241 = c1_i241 * L_i241 * L_i241 + c2_i241 * L_i241;
                                    Hobj_i241 = c1_i241 * H_i241 * H_i241 + c2_i241 * H_i241;
                                    decomp_14_renamed_3_i407 = Lobj_i241 > (Hobj_i241 + eps);
                                    if (decomp_14_renamed_3_i407)
                                    {
                                        a_data[j_i119] = L_i241;
                                    }
                                    else
                                    {
                                        int decomp_15_renamed_3_i407;
                                        decomp_15_renamed_3_i407 = Lobj_i241 < (Hobj_i241 - eps);
                                        if (decomp_15_renamed_3_i407)
                                        {
                                            a_data[j_i119] = H_i241;
                                        }
                                        else
                                        {
                                            a_data[j_i119] = a_old_i241_data[j_i119];
                                        }
                                    }
                                }
                                decomp_16_renamed_3_i407 = a_data[j_i119] - a_old_i241_data[j_i119];
                                decomp_17_renamed_3_i407 = fabsf(decomp_16_renamed_3_i407);
                                decomp_18_renamed_5_i241 =
                                    decomp_17_renamed_3_i407 < (eps * (a_data[j_i119] + a_old_i241_data[j_i119] + eps));
                                // cluster_takeStep_out11_rep4(): end inline
                                if (decomp_18_renamed_5_i241)
                                {
                                    int __rtr_val_4_i241;
                                    int __rtr_flag_4_i241;
                                    __rtr_flag_4_i241 = 0;
                                    // cluster_takeStep_out12_rep4(): begin inline
                                    // cluster_fFreeHandle_rep186(): begin inline
                                    int decomp_0_renamed_154_i571;
                                    // cluster_fFreeHandle_out0_rep196(): begin inline
                                    decomp_0_renamed_154_i571 = a_old_i241_data != nullptr;
                                    // cluster_fFreeHandle_out0_rep196(): end inline
                                    if (decomp_0_renamed_154_i571)
                                    {
                                        // free(a_old_i241_data);
                                    }
                                    // cluster_fFreeHandle_rep186(): end inline
                                    __rtr_val_4_i241 = 0;
                                    __rtr_flag_4_i241 = 1;
                                    // cluster_takeStep_out12_rep4(): end inline
                                    if (__rtr_flag_4_i241)
                                    {
                                        ret_i119 = __rtr_val_4_i241;
                                        goto end_inline_i241;
                                    }
                                }
                                // cluster_takeStep_out13_rep4(): begin inline
                                int decomp_19_renamed_3_i409;
                                int decomp_21_renamed_3_i409;
                                int decomp_22_renamed_3_i409;
                                int decomp_23_renamed_3_i409;
                                a_data[i] = a_old_i241_data[i] - s_i241 * (a_data[j_i119] - a_old_i241_data[j_i119]);
                                decomp_19_renamed_3_i409 = a_data[i] < 0;
                                if (decomp_19_renamed_3_i409)
                                {
                                    a_data[j_i119] = a_data[j_i119] + s_i241 * a_data[i];
                                    a_data[i] = 0;
                                }
                                else
                                {
                                    int decomp_20_renamed_3_i409;
                                    decomp_20_renamed_3_i409 = a_data[i] > C;
                                    if (decomp_20_renamed_3_i409)
                                    {
                                        t_i241 = a_data[i] - C;
                                        a_data[j_i119] = a_data[j_i119] + s_i241 * t_i241;
                                        a_data[i] = C;
                                    }
                                }
                                decomp_21_renamed_3_i409 = a_data[i] > 0;
                                decomp_22_renamed_3_i409 = a_data[i] < C;
                                decomp_23_renamed_3_i409 = decomp_21_renamed_3_i409 && decomp_22_renamed_3_i409;
                                if (decomp_23_renamed_3_i409)
                                {
                                    bnew_i241 = b[0] + Ei_i241 +
                                                Y_data[i] * (a_data[i] - a_old_i241_data[i]) * k11_i241 +
                                                Y_data[j_i119] * (a_data[j_i119] - a_old_i241_data[j_i119]) * k12_i241;
                                }
                                else
                                {
                                    int decomp_24_renamed_3_i409;
                                    int decomp_25_renamed_3_i409;
                                    int decomp_26_renamed_3_i409;
                                    decomp_24_renamed_3_i409 = a_data[j_i119] > 0;
                                    decomp_25_renamed_3_i409 = a_data[j_i119] < C;
                                    decomp_26_renamed_3_i409 = decomp_24_renamed_3_i409 && decomp_25_renamed_3_i409;
                                    if (decomp_26_renamed_3_i409)
                                    {
                                        bnew_i241 =
                                            b[0] + Ej_i241 + Y_data[i] * (a_data[i] - a_old_i241_data[i]) * k12_i241 +
                                            Y_data[j_i119] * (a_data[j_i119] - a_old_i241_data[j_i119]) * k22_i241;
                                    }
                                    else
                                    {
                                        float b1_i409;
                                        float b2_i409;
                                        b1_i409 =
                                            b[0] + Ei_i241 + Y_data[i] * (a_data[i] - a_old_i241_data[i]) * k11_i241 +
                                            Y_data[j_i119] * (a_data[j_i119] - a_old_i241_data[j_i119]) * k12_i241;
                                        b2_i409 =
                                            b[0] + Ej_i241 + Y_data[i] * (a_data[i] - a_old_i241_data[i]) * k12_i241 +
                                            Y_data[j_i119] * (a_data[j_i119] - a_old_i241_data[j_i119]) * k22_i241;
                                        bnew_i241 = (b1_i409 + b2_i409) / 2;
                                    }
                                }
                                delta_b_i241 = bnew_i241 - b[0];
                                b[0] = bnew_i241;
                                t1_i241 = Y_data[i] * (a_data[i] - a_old_i241_data[i]);
                                t2_i241 = Y_data[j_i119] * (a_data[j_i119] - a_old_i241_data[j_i119]);
                                // cluster_takeStep_out13_rep4(): end inline
                                //  cluster_fMallocHandle_rep181(1, X->width, &temp); // Dead call removed by HLS DCE
                                //  cluster_fMallocHandle_rep191(1, X->width, &temp1); // Dead call removed by HLS DCE
                                //  cluster_fMallocHandle_rep201(1, X->width, &temp2); // Dead call removed by HLS DCE
                                //   Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount
                                //   directive even if it has static bounds
                                // cluster_fFreeHandle_rep195(): begin inline
                                int decomp_0_renamed_96_i410;
                                // cluster_fFreeHandle_out0_rep209(): begin inline
                                decomp_0_renamed_96_i410 = a_old_i241_data != nullptr;
                                // cluster_fFreeHandle_out0_rep209(): end inline
                                if (decomp_0_renamed_96_i410)
                                {
                                    // free(a_old_i241_data);
                                }
                                // cluster_fFreeHandle_rep195(): end inline
                                // cluster_fFreeHandle_rep205(): begin inline
                                int decomp_0_renamed_97_i411;
                                // cluster_fFreeHandle_out0_rep220(): begin inline
                                decomp_0_renamed_97_i411 = temp_i241_data != nullptr;
                                // cluster_fFreeHandle_out0_rep220(): end inline
                                if (decomp_0_renamed_97_i411)
                                {
                                    // free(temp_i241_data);
                                }
                                // cluster_fFreeHandle_rep205(): end inline
                                // cluster_fFreeHandle_rep215(): begin inline
                                int decomp_0_renamed_98_i412;
                                // cluster_fFreeHandle_out0_rep231(): begin inline
                                decomp_0_renamed_98_i412 = temp1_i241_data != nullptr;
                                // cluster_fFreeHandle_out0_rep231(): end inline
                                if (decomp_0_renamed_98_i412)
                                {
                                    // free(temp1_i241_data);
                                }
                                // cluster_fFreeHandle_rep215(): end inline
                                // cluster_fFreeHandle_rep225(): begin inline
                                int decomp_0_renamed_99_i413;
                                // cluster_fFreeHandle_out0_rep242(): begin inline
                                decomp_0_renamed_99_i413 = temp2_i241_data != nullptr;
                                // cluster_fFreeHandle_out0_rep242(): end inline
                                if (decomp_0_renamed_99_i413)
                                {
                                    // free(temp2_i241_data);
                                }
                                // cluster_fFreeHandle_rep225(): end inline
                                // cluster_takeStep_out15_rep4(): begin inline
                                ret_i241 = 1;
                                // cluster_takeStep_out15_rep4(): end inline
                                ret_i119 = ret_i241;
                            end_inline_i241:;
                                // cluster_takeStep_rep5(): end inline
                                decomp_5_renamed_2_i150 = ret_i119 == 1;
                                if (decomp_5_renamed_2_i150)
                                {
                                    __rtr_val_0_i119 = ret_i119;
                                    __rtr_flag_0_i119 = 1;
                                    goto end_inline_i150;
                                }
                            }
                            // cluster_examineExample_out4_out2_rep2(): begin inline
                            randVal_i119 = 1.0;
                        // cluster_examineExample_out4_out2_rep2(): end inline
                        //  Dead loop removed by HLS DCE, make sure it has the #pragma hls loop_tripcount directive even
                        //  if it has static bounds Dead loop removed by HLS DCE, make sure it has the #pragma hls
                        //  loop_tripcount directive even if it has static bounds
                        end_inline_i150:;
                            // cluster_examineExample_out4_rep1(): end inline
                            if (__rtr_flag_0_i119)
                            {
                                ret = __rtr_val_0_i119;
                                goto end_inline_i119;
                            }
                        }
                        // cluster_examineExample_out5_rep1(): begin inline
                        ret_i119 = 0;
                        // cluster_examineExample_out5_rep1(): end inline
                        ret = ret_i119;
                    end_inline_i119:;
                        // cluster_examineExample_rep1(): end inline
                        // cluster_getAlphaFromTrainSet_out4_out2_out2_out0_out1_out0(): begin inline
                        NumChanged = NumChanged + ret;
                        // cluster_getAlphaFromTrainSet_out4_out2_out2_out0_out1_out0(): end inline
                        // cluster_getAlphaFromTrainSet_out4_out2_out2_out0_out1(): end inline
                    }
                    // cluster_getAlphaFromTrainSet_out4_out2_out2_out0(): end inline
                }
                // cluster_getAlphaFromTrainSet_out4_out2_out2(): end inline
            }
            // cluster_getAlphaFromTrainSet_out4_out2_out3(): begin inline
            int decomp_4_renamed_0_i40;
            decomp_4_renamed_0_i40 = ExamineAll == 1;
            if (decomp_4_renamed_0_i40)
            {
                ExamineAll = 0;
            }
            else
            {
                int decomp_5_renamed_0_i40;
                decomp_5_renamed_0_i40 = NumChanged == 0;
                if (decomp_5_renamed_0_i40)
                {
                    ExamineAll = 1;
                }
            }
            // cluster_getAlphaFromTrainSet_out4_out2_out3(): end inline
            // cluster_getAlphaFromTrainSet_out4_out2(): end inline
        }
        // cluster_getAlphaFromTrainSet_out4_out3(): begin inline
        for (r = 0; r < N; r++)
        {
            int __idxExpr127 = iter * (*a_result_width) + r;
#pragma HLS loop_tripcount max = 100
            a_result_data[__idxExpr127] = a_data[r];
        }
        b_result_data[iter] = b[0];
        // cluster_getAlphaFromTrainSet_out4_out3(): end inline
        // cluster_fFreeHandle_rep0(): begin inline
        int decomp_0_renamed_4_i20;
        // cluster_fFreeHandle_out0_rep67(): begin inline
        decomp_0_renamed_4_i20 = Y_data != nullptr;
        // cluster_fFreeHandle_out0_rep67(): end inline
        if (decomp_0_renamed_4_i20)
        {
            // free(Y_data);
        }
        // cluster_fFreeHandle_rep0(): end inline
        // cluster_fFreeHandle_rep1(): begin inline
        int decomp_0_renamed_5_i21;
        // cluster_fFreeHandle_out0_rep66(): begin inline
        decomp_0_renamed_5_i21 = e_data != nullptr;
        // cluster_fFreeHandle_out0_rep66(): end inline
        if (decomp_0_renamed_5_i21)
        {
            // free(e_data);
        }
        // cluster_fFreeHandle_rep1(): end inline
        // cluster_fFreeHandle_rep2(): begin inline
        int decomp_0_renamed_6_i22;
        // cluster_fFreeHandle_out0_rep65(): begin inline
        decomp_0_renamed_6_i22 = a_data != nullptr;
        // cluster_fFreeHandle_out0_rep65(): end inline
        if (decomp_0_renamed_6_i22)
        {
            // free(a_data);
        }
        // cluster_fFreeHandle_rep2(): end inline
        // cluster_getAlphaFromTrainSet_out4(): end inline
    }
    *alpha_C = C;
    *alpha_d = d;
    *alpha_dim = dim;
    *alpha_eps = eps;
    *alpha_b = b[0];
    *alpha_tolerance = tolerance;
    memcpy(alpha_a_result_width, a_result_width, 4);
    memcpy(alpha_a_result_height, a_result_height, 4);
    memcpy(alpha_a_result_data, a_result_data, 4000);
    memcpy(alpha_b_result_width, b_result_width, 4);
    memcpy(alpha_b_result_height, b_result_height, 4);
    memcpy(alpha_b_result_data, b_result_data, 40);
    memcpy(alpha_X_width, X_width, 4);
    memcpy(alpha_X_height, X_height, 4);
    memcpy(alpha_X_data, X_data, 102400);
    // memcpy(alpha_a_result, a_result, 4000);
    // memcpy(alpha_b_result, b_result, 40);
    // memcpy(alpha_X, X, 102400);
}

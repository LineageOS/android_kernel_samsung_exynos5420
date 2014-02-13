#ifndef __MDNIE_TABLE_H__
#define __MDNIE_TABLE_H__

#include "mdnie.h"

/* 2014.01.07 */

static unsigned short tune_email[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xe8, // ascr_Wg 111010  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xbc, // ascr_Wb 101111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_camera[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_auto_camera[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x65, // ascr_strength 01100  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfd, // ascr_skin_Rr 111111  ascr_skin_Rg 01
	0x09E6, 0x01, // ascr_skin_Rg 000000  ascr_skin_Rb 01
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_ui[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0xb3, // min_ref_offset 10  gamma 1  cs 1 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x50, // sharpen_weight 01010000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x20, // cs_gain 00100000
	0x09A4, 0x00, // curve_1_b 
	0x09A5, 0x0f, // curve_1_a 
	0x09A6, 0x00, // curve_2_b 
	0x09A7, 0x0f, // curve_2_a 
	0x09A8, 0x00, // curve_3_b 
	0x09A9, 0x0f, // curve_3_a 
	0x09AA, 0x00, // curve_4_b 
	0x09AB, 0x0f, // curve_4_a 
	0x09AC, 0x09, // curve_5_b 
	0x09AD, 0xa2, // curve_5_a 
	0x09AE, 0x09, // curve_6_b 
	0x09AF, 0xa2, // curve_6_a 
	0x09B0, 0x09, // curve_7_b 
	0x09B1, 0xa2, // curve_7_a 
	0x09B2, 0x09, // curve_8_b 
	0x09B3, 0xa2, // curve_8_a 
	0x09B4, 0x09, // curve_9_b 
	0x09B5, 0xa2, // curve_9_a 
	0x09B6, 0x09, // curve_10_b 
	0x09B7, 0xa2, // curve_10_a 
	0x09B8, 0x0a, // curve_11_b 
	0x09B9, 0xa2, // curve_11_a 
	0x09BA, 0x0a, // curve_12_b 
	0x09BB, 0xa2, // curve_12_a 
	0x09BC, 0x0a, // curve_13_b 
	0x09BD, 0xa2, // curve_13_a 
	0x09BE, 0x0a, // curve_14_b 
	0x09BF, 0xa2, // curve_14_a 
	0x09C0, 0x0a, // curve_15_b 
	0x09C1, 0xa2, // curve_15_a 
	0x09C2, 0x0a, // curve_16_b 
	0x09C3, 0xa2, // curve_16_a 
	0x09C4, 0x0a, // curve_17_b 
	0x09C5, 0xa2, // curve_17_a 
	0x09C6, 0x0a, // curve_18_b 
	0x09C7, 0xa2, // curve_18_a 
	0x09C8, 0x0f, // curve_19_b 
	0x09C9, 0xa4, // curve_19_a 
	0x09CA, 0x0f, // curve_20_b 
	0x09CB, 0xa4, // curve_20_a 
	0x09CC, 0x0f, // curve_21_b 
	0x09CD, 0xa4, // curve_21_a 
	0x09CE, 0x23, // curve_22_b 
	0x09CF, 0x1c, // curve_22_a 
	0x09D0, 0x48, // curve_23_b 
	0x09D1, 0x17, // curve_23_a 
	0x09D2, 0x00, // curve_24_b 
	0x09D3, 0xff, // curve_24_a 
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_video[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0xbb, // min_ref_offset 10  gamma 1  cs 1 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x50, // sharpen_weight 01010000
	0x09A0, 0x08, // max_plus 00001000
	0x09A1, 0x01, // max_plus 000  max_minus 00001
	0x09A2, 0x01, // max_minus 000000  cs_gain 01
	0x09A3, 0x20, // cs_gain 00100000
	0x09A4, 0x00, // curve_1_b 
	0x09A5, 0x0f, // curve_1_a 
	0x09A6, 0x00, // curve_2_b 
	0x09A7, 0x0f, // curve_2_a 
	0x09A8, 0x00, // curve_3_b 
	0x09A9, 0x0f, // curve_3_a 
	0x09AA, 0x00, // curve_4_b 
	0x09AB, 0x0f, // curve_4_a 
	0x09AC, 0x09, // curve_5_b 
	0x09AD, 0xa2, // curve_5_a 
	0x09AE, 0x09, // curve_6_b 
	0x09AF, 0xa2, // curve_6_a 
	0x09B0, 0x09, // curve_7_b 
	0x09B1, 0xa2, // curve_7_a 
	0x09B2, 0x09, // curve_8_b 
	0x09B3, 0xa2, // curve_8_a 
	0x09B4, 0x09, // curve_9_b 
	0x09B5, 0xa2, // curve_9_a 
	0x09B6, 0x09, // curve_10_b 
	0x09B7, 0xa2, // curve_10_a 
	0x09B8, 0x0a, // curve_11_b 
	0x09B9, 0xa2, // curve_11_a 
	0x09BA, 0x0a, // curve_12_b 
	0x09BB, 0xa2, // curve_12_a 
	0x09BC, 0x0a, // curve_13_b 
	0x09BD, 0xa2, // curve_13_a 
	0x09BE, 0x0a, // curve_14_b 
	0x09BF, 0xa2, // curve_14_a 
	0x09C0, 0x0a, // curve_15_b 
	0x09C1, 0xa2, // curve_15_a 
	0x09C2, 0x0a, // curve_16_b 
	0x09C3, 0xa2, // curve_16_a 
	0x09C4, 0x0a, // curve_17_b 
	0x09C5, 0xa2, // curve_17_a 
	0x09C6, 0x0a, // curve_18_b 
	0x09C7, 0xa2, // curve_18_a 
	0x09C8, 0x0f, // curve_19_b 
	0x09C9, 0xa4, // curve_19_a 
	0x09CA, 0x0f, // curve_20_b 
	0x09CB, 0xa4, // curve_20_a 
	0x09CC, 0x0f, // curve_21_b 
	0x09CD, 0xa4, // curve_21_a 
	0x09CE, 0x23, // curve_22_b 
	0x09CF, 0x1c, // curve_22_a 
	0x09D0, 0x48, // curve_23_b 
	0x09D1, 0x17, // curve_23_a 
	0x09D2, 0x00, // curve_24_b 
	0x09D3, 0xff, // curve_24_a 
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_gallery[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0xbb, // min_ref_offset 10  gamma 1  cs 1 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x50, // sharpen_weight 01010000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x20, // cs_gain 00100000
	0x09A4, 0x00, // curve_1_b 
	0x09A5, 0x0f, // curve_1_a 
	0x09A6, 0x00, // curve_2_b 
	0x09A7, 0x0f, // curve_2_a 
	0x09A8, 0x00, // curve_3_b 
	0x09A9, 0x0f, // curve_3_a 
	0x09AA, 0x00, // curve_4_b 
	0x09AB, 0x0f, // curve_4_a 
	0x09AC, 0x09, // curve_5_b 
	0x09AD, 0xa2, // curve_5_a 
	0x09AE, 0x09, // curve_6_b 
	0x09AF, 0xa2, // curve_6_a 
	0x09B0, 0x09, // curve_7_b 
	0x09B1, 0xa2, // curve_7_a 
	0x09B2, 0x09, // curve_8_b 
	0x09B3, 0xa2, // curve_8_a 
	0x09B4, 0x09, // curve_9_b 
	0x09B5, 0xa2, // curve_9_a 
	0x09B6, 0x09, // curve_10_b 
	0x09B7, 0xa2, // curve_10_a 
	0x09B8, 0x0a, // curve_11_b 
	0x09B9, 0xa2, // curve_11_a 
	0x09BA, 0x0a, // curve_12_b 
	0x09BB, 0xa2, // curve_12_a 
	0x09BC, 0x0a, // curve_13_b 
	0x09BD, 0xa2, // curve_13_a 
	0x09BE, 0x0a, // curve_14_b 
	0x09BF, 0xa2, // curve_14_a 
	0x09C0, 0x0a, // curve_15_b 
	0x09C1, 0xa2, // curve_15_a 
	0x09C2, 0x0a, // curve_16_b 
	0x09C3, 0xa2, // curve_16_a 
	0x09C4, 0x0a, // curve_17_b 
	0x09C5, 0xa2, // curve_17_a 
	0x09C6, 0x0a, // curve_18_b 
	0x09C7, 0xa2, // curve_18_a 
	0x09C8, 0x0f, // curve_19_b 
	0x09C9, 0xa4, // curve_19_a 
	0x09CA, 0x0f, // curve_20_b 
	0x09CB, 0xa4, // curve_20_a 
	0x09CC, 0x0f, // curve_21_b 
	0x09CD, 0xa4, // curve_21_a 
	0x09CE, 0x23, // curve_22_b 
	0x09CF, 0x1c, // curve_22_a 
	0x09D0, 0x48, // curve_23_b 
	0x09D1, 0x17, // curve_23_a 
	0x09D2, 0x00, // curve_24_b 
	0x09D3, 0xff, // curve_24_a 
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_vt[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0xbb, // min_ref_offset 10  gamma 1  cs 1 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x50, // sharpen_weight 01010000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x20, // cs_gain 00100000
	0x09A4, 0x00, // curve_1_b 
	0x09A5, 0x0f, // curve_1_a 
	0x09A6, 0x00, // curve_2_b 
	0x09A7, 0x0f, // curve_2_a 
	0x09A8, 0x00, // curve_3_b 
	0x09A9, 0x0f, // curve_3_a 
	0x09AA, 0x00, // curve_4_b 
	0x09AB, 0x0f, // curve_4_a 
	0x09AC, 0x09, // curve_5_b 
	0x09AD, 0xa2, // curve_5_a 
	0x09AE, 0x09, // curve_6_b 
	0x09AF, 0xa2, // curve_6_a 
	0x09B0, 0x09, // curve_7_b 
	0x09B1, 0xa2, // curve_7_a 
	0x09B2, 0x09, // curve_8_b 
	0x09B3, 0xa2, // curve_8_a 
	0x09B4, 0x09, // curve_9_b 
	0x09B5, 0xa2, // curve_9_a 
	0x09B6, 0x09, // curve_10_b 
	0x09B7, 0xa2, // curve_10_a 
	0x09B8, 0x0a, // curve_11_b 
	0x09B9, 0xa2, // curve_11_a 
	0x09BA, 0x0a, // curve_12_b 
	0x09BB, 0xa2, // curve_12_a 
	0x09BC, 0x0a, // curve_13_b 
	0x09BD, 0xa2, // curve_13_a 
	0x09BE, 0x0a, // curve_14_b 
	0x09BF, 0xa2, // curve_14_a 
	0x09C0, 0x0a, // curve_15_b 
	0x09C1, 0xa2, // curve_15_a 
	0x09C2, 0x0a, // curve_16_b 
	0x09C3, 0xa2, // curve_16_a 
	0x09C4, 0x0a, // curve_17_b 
	0x09C5, 0xa2, // curve_17_a 
	0x09C6, 0x0a, // curve_18_b 
	0x09C7, 0xa2, // curve_18_a 
	0x09C8, 0x0f, // curve_19_b 
	0x09C9, 0xa4, // curve_19_a 
	0x09CA, 0x0f, // curve_20_b 
	0x09CB, 0xa4, // curve_20_a 
	0x09CC, 0x0f, // curve_21_b 
	0x09CD, 0xa4, // curve_21_a 
	0x09CE, 0x23, // curve_22_b 
	0x09CF, 0x1c, // curve_22_a 
	0x09D0, 0x48, // curve_23_b 
	0x09D1, 0x17, // curve_23_a 
	0x09D2, 0x00, // curve_24_b 
	0x09D3, 0xff, // curve_24_a 
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_browser[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0xb3, // min_ref_offset 10  gamma 1  cs 1 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x50, // sharpen_weight 01010000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x20, // cs_gain 00100000
	0x09A4, 0x00, // curve_1_b 
	0x09A5, 0x0f, // curve_1_a 
	0x09A6, 0x00, // curve_2_b 
	0x09A7, 0x0f, // curve_2_a 
	0x09A8, 0x00, // curve_3_b 
	0x09A9, 0x0f, // curve_3_a 
	0x09AA, 0x00, // curve_4_b 
	0x09AB, 0x0f, // curve_4_a 
	0x09AC, 0x09, // curve_5_b 
	0x09AD, 0xa2, // curve_5_a 
	0x09AE, 0x09, // curve_6_b 
	0x09AF, 0xa2, // curve_6_a 
	0x09B0, 0x09, // curve_7_b 
	0x09B1, 0xa2, // curve_7_a 
	0x09B2, 0x09, // curve_8_b 
	0x09B3, 0xa2, // curve_8_a 
	0x09B4, 0x09, // curve_9_b 
	0x09B5, 0xa2, // curve_9_a 
	0x09B6, 0x09, // curve_10_b 
	0x09B7, 0xa2, // curve_10_a 
	0x09B8, 0x0a, // curve_11_b 
	0x09B9, 0xa2, // curve_11_a 
	0x09BA, 0x0a, // curve_12_b 
	0x09BB, 0xa2, // curve_12_a 
	0x09BC, 0x0a, // curve_13_b 
	0x09BD, 0xa2, // curve_13_a 
	0x09BE, 0x0a, // curve_14_b 
	0x09BF, 0xa2, // curve_14_a 
	0x09C0, 0x0a, // curve_15_b 
	0x09C1, 0xa2, // curve_15_a 
	0x09C2, 0x0a, // curve_16_b 
	0x09C3, 0xa2, // curve_16_a 
	0x09C4, 0x0a, // curve_17_b 
	0x09C5, 0xa2, // curve_17_a 
	0x09C6, 0x0a, // curve_18_b 
	0x09C7, 0xa2, // curve_18_a 
	0x09C8, 0x0f, // curve_19_b 
	0x09C9, 0xa4, // curve_19_a 
	0x09CA, 0x0f, // curve_20_b 
	0x09CB, 0xa4, // curve_20_a 
	0x09CC, 0x0f, // curve_21_b 
	0x09CD, 0xa4, // curve_21_a 
	0x09CE, 0x23, // curve_22_b 
	0x09CF, 0x1c, // curve_22_a 
	0x09D0, 0x48, // curve_23_b 
	0x09D1, 0x17, // curve_23_a 
	0x09D2, 0x00, // curve_24_b 
	0x09D3, 0xff, // curve_24_a 
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_ui[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_video[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x8b, // min_ref_offset 10  gamma 0  cs 0 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x08, // max_plus 00001000
	0x09A1, 0x01, // max_plus 000  max_minus 00001
	0x09A2, 0x01, // max_minus 000000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_gallery[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x8b, // min_ref_offset 10  gamma 0  cs 0 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_vt[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x8b, // min_ref_offset 10  gamma 0  cs 0 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_browser[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_natural_gallery[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x8b, // min_ref_offset 10  gamma 0  cs 0 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x5b, // ascr_Rg 010110  ascr_Cb 11
	0x09F5, 0x94, // ascr_Cb 100101  ascr_Rb 00
	0x09F6, 0x3b, // ascr_Rb 001110  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x53, // ascr_Mg 010100  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0x64, // ascr_Mb 011001  ascr_Gb 00
	0x09FC, 0x13, // ascr_Gb 000100  ascr_Yr 11
	0x09FD, 0xf0, // ascr_Yr 111100  ascr_Br 00
	0x09FE, 0x9b, // ascr_Br 100110  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x6c, // ascr_Bg 011011  ascr_Yb 00
	0x0A01, 0x8f, // ascr_Yb 100011  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xe0, // ascr_Wg 111000  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xbc, // ascr_Wb 101111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_natural_ui[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x5b, // ascr_Rg 010110  ascr_Cb 11
	0x09F5, 0x94, // ascr_Cb 100101  ascr_Rb 00
	0x09F6, 0x3b, // ascr_Rb 001110  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x53, // ascr_Mg 010100  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0x64, // ascr_Mb 011001  ascr_Gb 00
	0x09FC, 0x13, // ascr_Gb 000100  ascr_Yr 11
	0x09FD, 0xf0, // ascr_Yr 111100  ascr_Br 00
	0x09FE, 0x9b, // ascr_Br 100110  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x6c, // ascr_Bg 011011  ascr_Yb 00
	0x0A01, 0x8f, // ascr_Yb 100011  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xe0, // ascr_Wg 111000  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xbc, // ascr_Wb 101111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_natural_video[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x8b, // min_ref_offset 10  gamma 0  cs 0 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x08, // max_plus 00001000
	0x09A1, 0x01, // max_plus 000  max_minus 00001
	0x09A2, 0x01, // max_minus 000000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x5b, // ascr_Rg 010110  ascr_Cb 11
	0x09F5, 0x94, // ascr_Cb 100101  ascr_Rb 00
	0x09F6, 0x3b, // ascr_Rb 001110  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x53, // ascr_Mg 010100  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0x64, // ascr_Mb 011001  ascr_Gb 00
	0x09FC, 0x13, // ascr_Gb 000100  ascr_Yr 11
	0x09FD, 0xf0, // ascr_Yr 111100  ascr_Br 00
	0x09FE, 0x9b, // ascr_Br 100110  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x6c, // ascr_Bg 011011  ascr_Yb 00
	0x0A01, 0x8f, // ascr_Yb 100011  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xe0, // ascr_Wg 111000  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xbc, // ascr_Wb 101111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_natural_vt[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x8b, // min_ref_offset 10  gamma 0  cs 0 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x5b, // ascr_Rg 010110  ascr_Cb 11
	0x09F5, 0x94, // ascr_Cb 100101  ascr_Rb 00
	0x09F6, 0x3b, // ascr_Rb 001110  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x53, // ascr_Mg 010100  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0x64, // ascr_Mb 011001  ascr_Gb 00
	0x09FC, 0x13, // ascr_Gb 000100  ascr_Yr 11
	0x09FD, 0xf0, // ascr_Yr 111100  ascr_Br 00
	0x09FE, 0x9b, // ascr_Br 100110  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x6c, // ascr_Bg 011011  ascr_Yb 00
	0x0A01, 0x8f, // ascr_Yb 100011  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xe0, // ascr_Wg 111000  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xbc, // ascr_Wb 101111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_natural_browser[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x5b, // ascr_Rg 010110  ascr_Cb 11
	0x09F5, 0x94, // ascr_Cb 100101  ascr_Rb 00
	0x09F6, 0x3b, // ascr_Rb 001110  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x53, // ascr_Mg 010100  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0x64, // ascr_Mb 011001  ascr_Gb 00
	0x09FC, 0x13, // ascr_Gb 000100  ascr_Yr 11
	0x09FD, 0xf0, // ascr_Yr 111100  ascr_Br 00
	0x09FE, 0x9b, // ascr_Br 100110  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x6c, // ascr_Bg 011011  ascr_Yb 00
	0x0A01, 0x8f, // ascr_Yb 100011  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xe0, // ascr_Wg 111000  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xbc, // ascr_Wb 101111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_ui[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfe, // ascr_skin_Wb 111111  ascr_Cr 10
	0x09F1, 0x03, // ascr_Cr 000010  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0xb7, // ascr_Rg 101101  ascr_Cb 11
	0x09F5, 0xb0, // ascr_Cb 101100  ascr_Rb 00
	0x09F6, 0x87, // ascr_Rb 100001  ascr_Mr 11
	0x09F7, 0xbd, // ascr_Mr 101111  ascr_Gr 01
	0x09F8, 0x5c, // ascr_Gr 010111  ascr_Mg 00
	0x09F9, 0xdb, // ascr_Mg 110110  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0xa3, // ascr_Gb 101000  ascr_Yr 11
	0x09FD, 0xdc, // ascr_Yr 110111  ascr_Br 00
	0x09FE, 0xd3, // ascr_Br 110100  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x91, // ascr_Bg 100100  ascr_Yb 01
	0x0A01, 0x13, // ascr_Yb 000100  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xe0, // ascr_Wg 111000  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xbc, // ascr_Wb 101111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_video[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfe, // ascr_skin_Wb 111111  ascr_Cr 10
	0x09F1, 0x03, // ascr_Cr 000010  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0xb7, // ascr_Rg 101101  ascr_Cb 11
	0x09F5, 0xb0, // ascr_Cb 101100  ascr_Rb 00
	0x09F6, 0x87, // ascr_Rb 100001  ascr_Mr 11
	0x09F7, 0xbd, // ascr_Mr 101111  ascr_Gr 01
	0x09F8, 0x5c, // ascr_Gr 010111  ascr_Mg 00
	0x09F9, 0xdb, // ascr_Mg 110110  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0xa3, // ascr_Gb 101000  ascr_Yr 11
	0x09FD, 0xdc, // ascr_Yr 110111  ascr_Br 00
	0x09FE, 0xd3, // ascr_Br 110100  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x91, // ascr_Bg 100100  ascr_Yb 01
	0x0A01, 0x13, // ascr_Yb 000100  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xe0, // ascr_Wg 111000  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xbc, // ascr_Wb 101111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_gallery[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfe, // ascr_skin_Wb 111111  ascr_Cr 10
	0x09F1, 0x03, // ascr_Cr 000010  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0xb7, // ascr_Rg 101101  ascr_Cb 11
	0x09F5, 0xb0, // ascr_Cb 101100  ascr_Rb 00
	0x09F6, 0x87, // ascr_Rb 100001  ascr_Mr 11
	0x09F7, 0xbd, // ascr_Mr 101111  ascr_Gr 01
	0x09F8, 0x5c, // ascr_Gr 010111  ascr_Mg 00
	0x09F9, 0xdb, // ascr_Mg 110110  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0xa3, // ascr_Gb 101000  ascr_Yr 11
	0x09FD, 0xdc, // ascr_Yr 110111  ascr_Br 00
	0x09FE, 0xd3, // ascr_Br 110100  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x91, // ascr_Bg 100100  ascr_Yb 01
	0x0A01, 0x13, // ascr_Yb 000100  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xe0, // ascr_Wg 111000  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xbc, // ascr_Wb 101111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_vt[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfe, // ascr_skin_Wb 111111  ascr_Cr 10
	0x09F1, 0x03, // ascr_Cr 000010  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0xb7, // ascr_Rg 101101  ascr_Cb 11
	0x09F5, 0xb0, // ascr_Cb 101100  ascr_Rb 00
	0x09F6, 0x87, // ascr_Rb 100001  ascr_Mr 11
	0x09F7, 0xbd, // ascr_Mr 101111  ascr_Gr 01
	0x09F8, 0x5c, // ascr_Gr 010111  ascr_Mg 00
	0x09F9, 0xdb, // ascr_Mg 110110  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0xa3, // ascr_Gb 101000  ascr_Yr 11
	0x09FD, 0xdc, // ascr_Yr 110111  ascr_Br 00
	0x09FE, 0xd3, // ascr_Br 110100  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x91, // ascr_Bg 100100  ascr_Yb 01
	0x0A01, 0x13, // ascr_Yb 000100  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xe0, // ascr_Wg 111000  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xbc, // ascr_Wb 101111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_browser[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfe, // ascr_skin_Wb 111111  ascr_Cr 10
	0x09F1, 0x03, // ascr_Cr 000010  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0xb7, // ascr_Rg 101101  ascr_Cb 11
	0x09F5, 0xb0, // ascr_Cb 101100  ascr_Rb 00
	0x09F6, 0x87, // ascr_Rb 100001  ascr_Mr 11
	0x09F7, 0xbd, // ascr_Mr 101111  ascr_Gr 01
	0x09F8, 0x5c, // ascr_Gr 010111  ascr_Mg 00
	0x09F9, 0xdb, // ascr_Mg 110110  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0xa3, // ascr_Gb 101000  ascr_Yr 11
	0x09FD, 0xdc, // ascr_Yr 110111  ascr_Br 00
	0x09FE, 0xd3, // ascr_Br 110100  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x91, // ascr_Bg 100100  ascr_Yb 01
	0x0A01, 0x13, // ascr_Yb 000100  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xe0, // ascr_Wg 111000  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xbc, // ascr_Wb 101111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_auto_ui[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_auto_video[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x8b, // min_ref_offset 10  gamma 0  cs 0 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x08, // max_plus 00001000
	0x09A1, 0x01, // max_plus 000  max_minus 00001
	0x09A2, 0x01, // max_minus 000000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x65, // ascr_strength 01100  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfd, // ascr_skin_Rr 111111  ascr_skin_Rg 01
	0x09E6, 0x01, // ascr_skin_Rg 000000  ascr_skin_Rb 01
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_auto_gallery[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x8b, // min_ref_offset 10  gamma 0  cs 0 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x65, // ascr_strength 01100  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfd, // ascr_skin_Rr 111111  ascr_skin_Rg 01
	0x09E6, 0x01, // ascr_skin_Rg 000000  ascr_skin_Rb 01
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_auto_vt[] = {
	0x0982, 0x03, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 1  algo_bypass 1
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x8b, // min_ref_offset 10  gamma 0  cs 0 sharpen 1 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_auto_browser[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x65, // ascr_strength 01100  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfd, // ascr_skin_Rr 111111  ascr_skin_Rg 01
	0x09E6, 0x01, // ascr_skin_Rg 000000  ascr_skin_Rb 01
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xfc, // ascr_Wg 111111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0xfc, // ascr_Wb 111111  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_ebook[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x30, // algo_roi 00  ascr_module 1  ascr_bypass 1  ascr_roi 00  roi_type 00
	0x0984, 0x00, // roi0_x_start 00000000
	0x0985, 0x00, // roi0_x_start 0000  roi0_x_end 0000
	0x0986, 0x00, // roi0_x_end 00000000
	0x0987, 0x00, // roi0_y_start 00000000
	0x0988, 0x00, // roi0_y_start 0000  roi0_y_end 0000
	0x0989, 0x00, // roi0_y_end 00000000
	0x098A, 0x00, // roi1_x_start 00000000
	0x098B, 0x00, // roi1_x_start 0000  roi1_x_end 0000
	0x098C, 0x00, // roi1_x_end 00000000
	0x098D, 0x00, // roi1_y_start 00000000
	0x098E, 0x00, // roi1_y_start 0000  roi1_y_end 0000
	0x098F, 0x00, // roi1_y_end 00000000
	0x0990, 0xa0, // hsize 10100000
	0x0991, 0x06, // hsize 0000  vsize 0110
	0x0992, 0x40, // vsize 01000000
	0x0993, 0x62, // gain 110000 cgain 10
	0x0994, 0x48, // cgain 0100  scene_on 1  scene_tran 000
	0x0995, 0x14, // scene_tran 0  min_diff 0010100
	0x0996, 0xb3, // illum_gain 10110011
	0x0997, 0x87, // ref_offset 10000111
	0x0998, 0x40, // ref_offset 0  ref_gain 1000000
	0x0999, 0x36, // ref_gain 00  hbsize 110  vbsize 110
	0x099A, 0xfa, // bth 11111010
	0x099B, 0x5a, // bin_size_ratio 0101101  dth 0
	0x099C, 0xe5, // dth 11  min_ref_offset 100101
	0x099D, 0x83, // min_ref_offset 10  gamma 0  cs 0 sharpen 0 nr 0 mask_th 11
	0x099E, 0xfc, // mask_th 111111  sharpen_weight 00
	0x099F, 0x40, // sharpen_weight 01000000
	0x09A0, 0x14, // max_plus 00010100
	0x09A1, 0x02, // max_plus 000  max_minus 00010
	0x09A2, 0x81, // max_minus 100000  cs_gain 01
	0x09A3, 0x00, // cs_gain 00000000
	0x09A4, 0x00, // curve_1_b
	0x09A5, 0x20, // curve_1_a
	0x09A6, 0x00, // curve_2_b
	0x09A7, 0x20, // curve_2_a
	0x09A8, 0x00, // curve_3_b
	0x09A9, 0x20, // curve_3_a
	0x09AA, 0x00, // curve_4_b
	0x09AB, 0x20, // curve_4_a
	0x09AC, 0x00, // curve_5_b
	0x09AD, 0x20, // curve_5_a
	0x09AE, 0x00, // curve_6_b
	0x09AF, 0x20, // curve_6_a
	0x09B0, 0x00, // curve_7_b
	0x09B1, 0x20, // curve_7_a
	0x09B2, 0x00, // curve_8_b
	0x09B3, 0x20, // curve_8_a
	0x09B4, 0x00, // curve_9_b
	0x09B5, 0x20, // curve_9_a
	0x09B6, 0x00, // curve_10_b
	0x09B7, 0x20, // curve_10_a
	0x09B8, 0x00, // curve_11_b
	0x09B9, 0x20, // curve_11_a
	0x09BA, 0x00, // curve_12_b
	0x09BB, 0x20, // curve_12_a
	0x09BC, 0x00, // curve_13_b
	0x09BD, 0x20, // curve_13_a
	0x09BE, 0x00, // curve_14_b
	0x09BF, 0x20, // curve_14_a
	0x09C0, 0x00, // curve_15_b
	0x09C1, 0x20, // curve_15_a
	0x09C2, 0x00, // curve_16_b
	0x09C3, 0x20, // curve_16_a
	0x09C4, 0x00, // curve_17_b
	0x09C5, 0x20, // curve_17_a
	0x09C6, 0x00, // curve_18_b
	0x09C7, 0x20, // curve_18_a
	0x09C8, 0x00, // curve_19_b
	0x09C9, 0x20, // curve_19_a
	0x09CA, 0x00, // curve_20_b
	0x09CB, 0x20, // curve_20_a
	0x09CC, 0x00, // curve_21_b
	0x09CD, 0x20, // curve_21_a
	0x09CE, 0x00, // curve_22_b
	0x09CF, 0x20, // curve_22_a
	0x09D0, 0x00, // curve_23_b
	0x09D1, 0x20, // curve_23_a
	0x09D2, 0x00, // curve_24_b
	0x09D3, 0xff, // curve_24_a
	0x09D4, 0x05, // ascr_strength 00000  ascr_on 1  skin_cb 01
	0x09D5, 0x9e, // skin_cb 100111  skin_cr 10
	0x09D6, 0xa4, // skin_cr 101001  up_distance 00
	0x09D7, 0x5c, // up_distance 010111  down_distance 00                                       
	0x09D8, 0xa4, // down_distance 101001  right_distance 00                                    
	0x09D9, 0x64, // right_distance 011001  left_distance 00                                    
	0x09DA, 0x9c, // left_distance 100111  up_divided_distance 00
	0x09DB, 0x16, // up_divided_distance 00010110
	0x09DC, 0x42, // up_divided_distance 01000010
	0x09DD, 0xc0, // up_divided_distance 11  down_divided_distance 000000
	0x09DE, 0xc7, // down_divided_distance 11000111
	0x09DF, 0xd0, // down_divided_distance 110100 right_divided_distance 00
	0x09E0, 0x14, // right_divided_distance 00010100
	0x09E1, 0x7b, // right_divided_distance 01111011
	0x09E2, 0x00, // right_divided_distance 00  left_divided_distance 000000
	0x09E3, 0xd2, // left_divided_distance 11010010
	0x09E4, 0x0f, // left_divided_distance 000011  ascr_skin_Rr 11
	0x09E5, 0xfc, // ascr_skin_Rr 111111  ascr_skin_Rg 00
	0x09E6, 0x00, // ascr_skin_Rg 000000  ascr_skin_Rb 00
	0x09E7, 0x03, // ascr_skin_Rb 000000  ascr_skin_Yr 11
	0x09E8, 0xff, // ascr_skin_Yr 111111  ascr_skin_Yg 11
	0x09E9, 0xfc, // ascr_skin_Yg 111111  ascr_skin_Yb 00
	0x09EA, 0x03, // ascr_skin_Yb 000000  ascr_skin_Mr 11
	0x09EB, 0xfc, // ascr_skin_Mr 111111  ascr_skin_Mg 00
	0x09EC, 0x03, // ascr_skin_Mg 000000  ascr_skin_Mb 11
	0x09ED, 0xff, // ascr_skin_Mb 111111  ascr_skin_Wr 11
	0x09EE, 0xff, // ascr_skin_Wr 111111  ascr_skin_Wg 11
	0x09EF, 0xff, // ascr_skin_Wg 111111  ascr_skin_Wb 11
	0x09F0, 0xfc, // ascr_skin_Wb 111111  ascr_Cr 00
	0x09F1, 0x03, // ascr_Cr 000000  ascr_Rr 11
	0x09F2, 0xff, // ascr_Rr 111111  ascr_Cg 11
	0x09F3, 0xfc, // ascr_Cg 111111  ascr_Rg 00
	0x09F4, 0x03, // ascr_Rg 000000  ascr_Cb 11
	0x09F5, 0xfc, // ascr_Cb 111111  ascr_Rb 00
	0x09F6, 0x03, // ascr_Rb 000000  ascr_Mr 11
	0x09F7, 0xfc, // ascr_Mr 111111  ascr_Gr 00
	0x09F8, 0x00, // ascr_Gr 000000  ascr_Mg 00
	0x09F9, 0x03, // ascr_Mg 000000  ascr_Gg 11
	0x09FA, 0xff, // ascr_Gg 111111  ascr_Mb 11
	0x09FB, 0xfc, // ascr_Mb 111111  ascr_Gb 00
	0x09FC, 0x03, // ascr_Gb 000000  ascr_Yr 11
	0x09FD, 0xfc, // ascr_Yr 111111  ascr_Br 00
	0x09FE, 0x03, // ascr_Br 000000  ascr_Yg 11
	0x09FF, 0xfc, // ascr_Yg 111111  ascr_Bg 00
	0x0A00, 0x00, // ascr_Bg 000000  ascr_Yb 00
	0x0A01, 0x03, // ascr_Yb 000000  ascr_Bb 11
	0x0A02, 0xff, // ascr_Bb 111111  ascr_Wr 11
	0x0A03, 0xfc, // ascr_Wr 111111  ascr_Kr 00
	0x0A04, 0x03, // ascr_Kr 000000  ascr_Wg 11
	0x0A05, 0xdc, // ascr_Wg 110111  ascr_Kg 00
	0x0A06, 0x03, // ascr_Kg 000000  ascr_Wb 11
	0x0A07, 0x98, // ascr_Wb 100110  ascr_Kb 00
	0x0A08, 0x00, // ascr_Kb 000000  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

struct mdnie_tuning_info tuning_table[CABC_MAX][MODE_MAX][SCENARIO_MAX] = {
	{
		{
			{"dynamic_ui",		tune_dynamic_ui},
			{"dynamic_video",	tune_dynamic_video},
			{"dynamic_video",	tune_dynamic_video},
			{"dynamic_video",	tune_dynamic_video},
			{"camera",		tune_camera},
			{"dynamic_ui",		tune_dynamic_ui},
			{"dynamic_gallery",	tune_dynamic_gallery},
			{"dynamic_vt",		tune_dynamic_vt},
			{"dynamic_browser",	tune_dynamic_browser},
			{"ebook",		tune_ebook},
			{"email",		tune_email}
		}, {
			{"standard_ui",		tune_standard_ui},
			{"standard_video",	tune_standard_video},
			{"standard_video",	tune_standard_video},
			{"standard_video",	tune_standard_video},
			{"camera",		tune_camera},
			{"standard_ui",		tune_standard_ui},
			{"standard_gallery",	tune_standard_gallery},
			{"standard_vt",		tune_standard_vt},
			{"standard_browser",	tune_standard_browser},
			{"ebook",		tune_ebook},
			{"email",		tune_email}
		}, {
			{"natural_ui",		tune_natural_ui},
			{"natural_video",	tune_natural_video},
			{"natural_video",	tune_natural_video},
			{"natural_video",	tune_natural_video},
			{"camera",		tune_camera},
			{"natural_ui",		tune_natural_ui},
			{"natural_gallery",	tune_natural_gallery},
			{"natural_vt",		tune_natural_vt},
			{"natural_browser",	tune_natural_browser},
			{"ebook",		tune_ebook},
			{"email",		tune_email}
		}, {
			{"movie_ui",		tune_movie_ui},
			{"movie_video",		tune_movie_video},
			{"movie_video",		tune_movie_video},
			{"movie_video",		tune_movie_video},
			{"camera",		tune_camera},
			{"movie_ui",		tune_movie_ui},
			{"movie_gallery",	tune_movie_gallery},
			{"movie_vt",		tune_movie_vt},
			{"movie_browser",	tune_movie_browser},
			{"ebook",		tune_ebook},
			{"email",		tune_email}
		}, {
			{"auto_ui",		tune_auto_ui},
			{"auto_video",		tune_auto_video},
			{"auto_video",		tune_auto_video},
			{"auto_video",		tune_auto_video},
			{"auto_camera",		tune_auto_camera},
			{"auto_ui",		tune_auto_ui},
			{"auto_gallery",	tune_auto_gallery},
			{"auto_vt",		tune_auto_vt},
			{"auto_browser",	tune_auto_browser},
			{"ebook",		tune_ebook},
			{"email",		tune_email}
		}
	}
};


#endif /* __MDNIE_TABLE_H__ */

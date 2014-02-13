#ifndef __MDNIE_COLOR_TONE_H__
#define __MDNIE_COLOR_TONE_H__

#include "mdnie.h"

/* 2014.01.07 */

static const unsigned short tune_scr_setting[9][3] = {
	{0xff, 0xf7, 0xf8},
	{0xff, 0xfa, 0xfe},
	{0xfb, 0xf9, 0xff},
	{0xff, 0xfd, 0xfa},
	{0xff, 0xff, 0xff},
	{0xf9, 0xfb, 0xff},
	{0xfc, 0xff, 0xf8},
	{0xfb, 0xff, 0xfb},
	{0xf9, 0xff, 0xff},
};

static unsigned short tune_negative[] = {
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
	0x099F, 0x00, // sharpen_weight 00000000
	0x09A0, 0xff, // max_plus 11111111
	0x09A1, 0xff, // max_plus 111  max_minus 11111
	0x09A2, 0xfd, // max_minus 111111  cs_gain 01
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
	0x09D7, 0x30, // up_distance 001100  down_distance 00
	0x09D8, 0x30, // down_distance 001100  right_distance 00
	0x09D9, 0x30, // right_distance 001100  left_distance 00
	0x09DA, 0x30, // left_distance 001100  up_divided_distance 00
	0x09DB, 0x2a, // up_divided_distance 00101010
	0x09DC, 0xaa, // up_divided_distance 10101010
	0x09DD, 0xc2, // up_divided_distance 11  down_divided_distance 000010
	0x09DE, 0xaa, // down_divided_distance 10101010
	0x09DF, 0xac, // down_divided_distance 101011 right_divided_distance 00
	0x09E0, 0x2a, // right_divided_distance 00101010
	0x09E1, 0xaa, // right_divided_distance 10101010
	0x09E2, 0xc2, // right_divided_distance 11  left_divided_distance 000010
	0x09E3, 0xaa, // left_divided_distance 10101010
	0x09E4, 0xac, // left_divided_distance 101011  ascr_skin_Rr 00
	0x09E5, 0x03, // ascr_skin_Rr 000000  ascr_skin_Rg 11
	0x09E6, 0xff, // ascr_skin_Rg 111111  ascr_skin_Rb 11
	0x09E7, 0xfc, // ascr_skin_Rb 111111  ascr_skin_Yr 00
	0x09E8, 0x00, // ascr_skin_Yr 000000  ascr_skin_Yg 00
	0x09E9, 0x03, // ascr_skin_Yg 000000  ascr_skin_Yb 11
	0x09EA, 0xfc, // ascr_skin_Yb 111111  ascr_skin_Mr 00
	0x09EB, 0x03, // ascr_skin_Mr 000000  ascr_skin_Mg 11
	0x09EC, 0xfc, // ascr_skin_Mg 111111  ascr_skin_Mb 00
	0x09ED, 0x00, // ascr_skin_Mb 000000  ascr_skin_Wr 00
	0x09EE, 0x00, // ascr_skin_Wr 000000  ascr_skin_Wg 00
	0x09EF, 0x00, // ascr_skin_Wg 000000  ascr_skin_Wb 00
	0x09F0, 0x03, // ascr_skin_Wb 000000  ascr_Cr 11
	0x09F1, 0xfc, // ascr_Cr 111111  ascr_Rr 00
	0x09F2, 0x00, // ascr_Rr 000000  ascr_Cg 00
	0x09F3, 0x03, // ascr_Cg 000000  ascr_Rg 11
	0x09F4, 0xfc, // ascr_Rg 111111  ascr_Cb 00
	0x09F5, 0x03, // ascr_Cb 000000  ascr_Rb 11
	0x09F6, 0xfc, // ascr_Rb 111111  ascr_Mr 00
	0x09F7, 0x03, // ascr_Mr 000000  ascr_Gr 11
	0x09F8, 0xff, // ascr_Gr 111111  ascr_Mg 11
	0x09F9, 0xfc, // ascr_Mg 111111  ascr_Gg 00
	0x09FA, 0x00, // ascr_Gg 000000  ascr_Mb 00
	0x09FB, 0x03, // ascr_Mb 000000  ascr_Gb 11
	0x09FC, 0xfc, // ascr_Gb 111111  ascr_Yr 00
	0x09FD, 0x03, // ascr_Yr 000000  ascr_Br 11
	0x09FE, 0xfc, // ascr_Br 111111  ascr_Yg 00
	0x09FF, 0x03, // ascr_Yg 000000  ascr_Bg 11
	0x0A00, 0xff, // ascr_Bg 111111  ascr_Yb 11
	0x0A01, 0xfc, // ascr_Yb 111111  ascr_Bb 00
	0x0A02, 0x00, // ascr_Bb 000000  ascr_Wr 00
	0x0A03, 0x03, // ascr_Wr 000000  ascr_Kr 11
	0x0A04, 0xfc, // ascr_Kr 111111  ascr_Wg 00
	0x0A05, 0x03, // ascr_Wg 000000  ascr_Kg 11
	0x0A06, 0xfc, // ascr_Kg 111111  ascr_Wb 00
	0x0A07, 0x03, // ascr_Wb 000000  ascr_Kb 11
	0x0A08, 0xfc, // ascr_Kb 111111  reserved 00
	0x0A09, 0x0f, // reserved 0000  vsync_mask 1111
	END_SEQ, 0x0000,
};

static unsigned short tune_color_blind[] = {
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
	0x099F, 0x00, // sharpen_weight 00000000
	0x09A0, 0xff, // max_plus 11111111
	0x09A1, 0xff, // max_plus 111  max_minus 11111
	0x09A2, 0xfd, // max_minus 111111  cs_gain 01
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
	0x09D7, 0x30, // up_distance 001100  down_distance 00
	0x09D8, 0x30, // down_distance 001100  right_distance 00
	0x09D9, 0x30, // right_distance 001100  left_distance 00
	0x09DA, 0x30, // left_distance 001100  up_divided_distance 00
	0x09DB, 0x2a, // up_divided_distance 00101010
	0x09DC, 0xaa, // up_divided_distance 10101010
	0x09DD, 0xc2, // up_divided_distance 11  down_divided_distance 000010
	0x09DE, 0xaa, // down_divided_distance 10101010
	0x09DF, 0xac, // down_divided_distance 101011 right_divided_distance 00
	0x09E0, 0x2a, // right_divided_distance 00101010
	0x09E1, 0xaa, // right_divided_distance 10101010
	0x09E2, 0xc2, // right_divided_distance 11  left_divided_distance 000010
	0x09E3, 0xaa, // left_divided_distance 10101010
	0x09E4, 0xaf, // left_divided_distance 101011  ascr_skin_Rr 11
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

static unsigned short tune_bypass_off[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x00, // algo_roi 00  ascr_module 0  ascr_bypass 0  ascr_roi 00  roi_type 00
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
	0x099F, 0x00, // sharpen_weight 00000000
	0x09A0, 0xff, // max_plus 11111111
	0x09A1, 0xff, // max_plus 111  max_minus 11111
	0x09A2, 0xfd, // max_minus 111111  cs_gain 01
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
	0x09D7, 0x30, // up_distance 001100  down_distance 00
	0x09D8, 0x30, // down_distance 001100  right_distance 00
	0x09D9, 0x30, // right_distance 001100  left_distance 00
	0x09DA, 0x30, // left_distance 001100  up_divided_distance 00
	0x09DB, 0x2a, // up_divided_distance 00101010
	0x09DC, 0xaa, // up_divided_distance 10101010
	0x09DD, 0xc2, // up_divided_distance 11  down_divided_distance 000010
	0x09DE, 0xaa, // down_divided_distance 10101010
	0x09DF, 0xac, // down_divided_distance 101011 right_divided_distance 00
	0x09E0, 0x2a, // right_divided_distance 00101010
	0x09E1, 0xaa, // right_divided_distance 10101010
	0x09E2, 0xc2, // right_divided_distance 11  left_divided_distance 000010
	0x09E3, 0xaa, // left_divided_distance 10101010
	0x09E4, 0xaf, // left_divided_distance 101011  ascr_skin_Rr 11
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

static unsigned short tune_bypass_on[] = {
	0x0982, 0x00, // data_width 00  lce_module 0  lcd_bypass 0  lcd_roi 00  algo_module 0  algo_bypass 0
	0x0983, 0x00, // algo_roi 00  ascr_module 0  ascr_bypass 0  ascr_roi 00  roi_type 00
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
	0x099F, 0x00, // sharpen_weight 00000000
	0x09A0, 0xff, // max_plus 11111111
	0x09A1, 0xff, // max_plus 111  max_minus 11111
	0x09A2, 0xfd, // max_minus 111111  cs_gain 01
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
	0x09D7, 0x30, // up_distance 001100  down_distance 00
	0x09D8, 0x30, // down_distance 001100  right_distance 00
	0x09D9, 0x30, // right_distance 001100  left_distance 00
	0x09DA, 0x30, // left_distance 001100  up_divided_distance 00
	0x09DB, 0x2a, // up_divided_distance 00101010
	0x09DC, 0xaa, // up_divided_distance 10101010
	0x09DD, 0xc2, // up_divided_distance 11  down_divided_distance 000010
	0x09DE, 0xaa, // down_divided_distance 10101010
	0x09DF, 0xac, // down_divided_distance 101011 right_divided_distance 00
	0x09E0, 0x2a, // right_divided_distance 00101010
	0x09E1, 0xaa, // right_divided_distance 10101010
	0x09E2, 0xc2, // right_divided_distance 11  left_divided_distance 000010
	0x09E3, 0xaa, // left_divided_distance 10101010
	0x09E4, 0xaf, // left_divided_distance 101011  ascr_skin_Rr 11
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

struct mdnie_tuning_info accessibility_table[CABC_MAX][ACCESSIBILITY_MAX] = {
	{
		{NULL,			NULL},
		{"negative",		tune_negative},
		{"color_blind",		tune_color_blind},
	},
};

struct mdnie_tuning_info bypass_table[BYPASS_MAX] = {
	{"bypass_off",		tune_bypass_off},
	{"bypass_on",		tune_bypass_on},
};

#endif /* __MDNIE_COLOR_TONE_H__ */

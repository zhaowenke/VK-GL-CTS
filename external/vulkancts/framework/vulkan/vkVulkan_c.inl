/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
/*
** Copyright (c) 2019-2021 The Khronos Group Inc.
**
** SPDX-License-Identifier: Apache-2.0
*/

#ifndef VULKAN_VIDEO_CODEC_COMMON_H_
#define VULKAN_VIDEO_CODEC_COMMON_H_ 1

#ifdef __cplusplus
extern "C" {
#endif

#define VK_MAKE_VIDEO_STD_VERSION(major, minor, patch) \
    ((((deUint32)(major)) << 22) | (((deUint32)(minor)) << 12) | ((deUint32)(patch)))

#ifdef __cplusplus
}
#endif

#endif // VULKAN_VIDEO_CODEC_COMMON_H_
/*
** Copyright (c) 2019-2021 The Khronos Group Inc.
**
** SPDX-License-Identifier: Apache-2.0
*/

#ifndef VULKAN_VIDEO_CODEC_H264STD_H_
#define VULKAN_VIDEO_CODEC_H264STD_H_ 1

#ifdef __cplusplus
extern "C" {
#endif



// Vulkan 0.9 provisional Vulkan video H.264 encode and decode std specification version number
#define VK_STD_VULKAN_VIDEO_CODEC_H264_API_VERSION_0_9 VK_MAKE_VIDEO_STD_VERSION(0, 9, 0) // Patch version should always be set to 0

// Format must be in the form XX.XX where the first two digits are the major and the second two, the minor.
#define VK_STD_VULKAN_VIDEO_CODEC_H264_SPEC_VERSION   VK_STD_VULKAN_VIDEO_CODEC_H264_API_VERSION_0_9
#define VK_STD_VULKAN_VIDEO_CODEC_H264_EXTENSION_NAME "VK_STD_vulkan_video_codec_h264"

// *************************************************
// Video H.264 common definitions:
// *************************************************

typedef enum StdVideoH264ChromaFormatIdc {
    std_video_h264_chroma_format_idc_monochrome  = 0,
    std_video_h264_chroma_format_idc_420         = 1,
    std_video_h264_chroma_format_idc_422         = 2,
    std_video_h264_chroma_format_idc_444         = 3,
} StdVideoH264ChromaFormatIdc;

typedef enum StdVideoH264ProfileIdc {
    std_video_h264_profile_idc_baseline             = 66, /* Only constrained baseline is supported */
    std_video_h264_profile_idc_main                 = 77,
    std_video_h264_profile_idc_high                 = 100,
    std_video_h264_profile_idc_high_444_predictive  = 244,
    std_video_h264_profile_idc_invalid              = 0x7FFFFFFF
} StdVideoH264ProfileIdc;

typedef enum StdVideoH264Level {
    std_video_h264_level_1_0 = 0,
    std_video_h264_level_1_1 = 1,
    std_video_h264_level_1_2 = 2,
    std_video_h264_level_1_3 = 3,
    std_video_h264_level_2_0 = 4,
    std_video_h264_level_2_1 = 5,
    std_video_h264_level_2_2 = 6,
    std_video_h264_level_3_0 = 7,
    std_video_h264_level_3_1 = 8,
    std_video_h264_level_3_2 = 9,
    std_video_h264_level_4_0 = 10,
    std_video_h264_level_4_1 = 11,
    std_video_h264_level_4_2 = 12,
    std_video_h264_level_5_0 = 13,
    std_video_h264_level_5_1 = 14,
    std_video_h264_level_5_2 = 15,
    std_video_h264_level_6_0 = 16,
    std_video_h264_level_6_1 = 17,
    std_video_h264_level_6_2 = 18,
    std_video_h264_level_invalid = 0x7FFFFFFF
} StdVideoH264Level;

typedef enum StdVideoH264PocType {
    std_video_h264_poc_type_0 = 0,
    std_video_h264_poc_type_1 = 1,
    std_video_h264_poc_type_2 = 2,
    std_video_h264_poc_type_invalid = 0x7FFFFFFF
} StdVideoH264PocType;

typedef enum StdVideoH264AspectRatioIdc {
    std_video_h264_aspect_ratio_idc_unspecified = 0,
    std_video_h264_aspect_ratio_idc_square = 1,
    std_video_h264_aspect_ratio_idc_12_11 = 2,
    std_video_h264_aspect_ratio_idc_10_11 = 3,
    std_video_h264_aspect_ratio_idc_16_11 = 4,
    std_video_h264_aspect_ratio_idc_40_33 = 5,
    std_video_h264_aspect_ratio_idc_24_11 = 6,
    std_video_h264_aspect_ratio_idc_20_11 = 7,
    std_video_h264_aspect_ratio_idc_32_11 = 8,
    std_video_h264_aspect_ratio_idc_80_33 = 9,
    std_video_h264_aspect_ratio_idc_18_11 = 10,
    std_video_h264_aspect_ratio_idc_15_11 = 11,
    std_video_h264_aspect_ratio_idc_64_33 = 12,
    std_video_h264_aspect_ratio_idc_160_99 = 13,
    std_video_h264_aspect_ratio_idc_4_3 = 14,
    std_video_h264_aspect_ratio_idc_3_2 = 15,
    std_video_h264_aspect_ratio_idc_2_1 = 16,
    std_video_h264_aspect_ratio_idc_extended_sar = 255,
    std_video_h264_aspect_ratio_idc_invalid = 0x7FFFFFFF
} StdVideoH264AspectRatioIdc;

typedef enum StdVideoH264WeightedBiPredIdc {
    std_video_h264_default_weighted_b_slices_prediction_idc = 0,
    std_video_h264_explicit_weighted_b_slices_prediction_idc = 1,
    std_video_h264_implicit_weighted_b_slices_prediction_idc = 2,
    std_video_h264_invalid_weighted_b_slices_prediction_idc = 0x7FFFFFFF
} StdVideoH264WeightedBiPredIdc;

typedef enum StdVideoH264ModificationOfPicNumsIdc {
    std_video_h264_modification_of_pic_nums_idc_short_term_subtract = 0,
    std_video_h264_modification_of_pic_nums_idc_short_term_add = 1,
    std_video_h264_modification_of_pic_nums_idc_long_term = 2,
    std_video_h264_modification_of_pic_nums_idc_end = 3,
    std_video_h264_modification_of_pic_nums_idc_invalid = 0x7FFFFFFF
} StdVideoH264ModificationOfPicNumsIdc;

typedef enum StdVideoH264MemMgmtControlOp {
    std_video_h264_mem_mgmt_control_op_end = 0,
    std_video_h264_mem_mgmt_control_op_unmark_short_term = 1,
    std_video_h264_mem_mgmt_control_op_unmark_long_term = 2,
    std_video_h264_mem_mgmt_control_op_mark_long_term = 3,
    std_video_h264_mem_mgmt_control_op_set_max_long_term_index = 4,
    std_video_h264_mem_mgmt_control_op_unmark_all = 5,
    std_video_h264_mem_mgmt_control_op_mark_current_as_long_term = 6,
    std_video_h264_mem_mgmt_control_op_invalid = 0x7FFFFFFF
} StdVideoH264MemMgmtControlOp;

typedef enum StdVideoH264CabacInitIdc {
    std_video_h264_cabac_init_idc_0 = 0,
    std_video_h264_cabac_init_idc_1 = 1,
    std_video_h264_cabac_init_idc_2 = 2,
    std_video_h264_cabac_init_idc_invalid = 0x7FFFFFFF
} StdVideoH264CabacInitIdc;

typedef enum StdVideoH264DisableDeblockingFilterIdc {
    std_video_h264_disable_deblocking_filter_idc_disabled = 0,
    std_video_h264_disable_deblocking_filter_idc_enabled = 1,
    std_video_h264_disable_deblocking_filter_idc_partial = 2,
    std_video_h264_disable_deblocking_filter_idc_invalid = 0x7FFFFFFF
} StdVideoH264DisableDeblockingFilterIdc;

typedef enum StdVideoH264PictureType {
    std_video_h264_picture_type_i = 0,
    std_video_h264_picture_type_p = 1,
    std_video_h264_picture_type_b = 2,
    std_video_h264_picture_type_invalid = 0x7FFFFFFF
} StdVideoH264PictureType;

typedef enum StdVideoH264SliceType {
    std_video_h264_slice_type_i = 0,
    std_video_h264_slice_type_p = 1,
    std_video_h264_slice_type_b = 2,
    std_video_h264_slice_type_invalid = 0x7FFFFFFF
} StdVideoH264SliceType;

typedef enum StdVideoH264NonVclNaluType {
    std_video_h264_non_vcl_nalu_type_sps = 0,
    std_video_h264_non_vcl_nalu_type_pps = 1,
    std_video_h264_non_vcl_nalu_type_aud = 2,
    std_video_h264_non_vcl_nalu_type_prefix = 3,
    std_video_h264_non_vcl_nalu_type_end_of_sequence = 4,
    std_video_h264_non_vcl_nalu_type_end_of_stream = 5,
    std_video_h264_non_vcl_nalu_type_precoded = 6,
    std_video_h264_non_vcl_nalu_type_invalid = 0x7FFFFFFF
} StdVideoH264NonVclNaluType;

typedef struct StdVideoH264SpsVuiFlags {
    deUint32 aspect_ratio_info_present_flag:1;
    deUint32 overscan_info_present_flag:1;
    deUint32 overscan_appropriate_flag:1;
    deUint32 video_signal_type_present_flag:1;
    deUint32 video_full_range_flag:1;
    deUint32 color_description_present_flag:1;
    deUint32 chroma_loc_info_present_flag:1;
    deUint32 timing_info_present_flag:1;
    deUint32 fixed_frame_rate_flag:1;
    deUint32 bitstream_restriction_flag:1;
    deUint32 nal_hrd_parameters_present_flag:1;
    deUint32 vcl_hrd_parameters_present_flag:1;
} StdVideoH264SpsVuiFlags;

typedef struct StdVideoH264HrdParameters {
    deUint8                    cpb_cnt_minus1;
    deUint8                    bit_rate_scale;
    deUint8                    cpb_size_scale;
    deUint32                   bit_rate_value_minus1[32];
    deUint32                   cpb_size_value_minus1[32];
    deUint8                    cbr_flag[32];
    deUint32                   initial_cpb_removal_delay_length_minus1;
    deUint32                   cpb_removal_delay_length_minus1;
    deUint32                   dpb_output_delay_length_minus1;
    deUint32                   time_offset_length;
} StdVideoH264HrdParameters;

typedef struct StdVideoH264SequenceParameterSetVui {
    StdVideoH264AspectRatioIdc  aspect_ratio_idc;
    deUint16                    sar_width;
    deUint16                    sar_height;
    deUint8                     video_format;
    deUint8                     color_primaries;
    deUint8                     transfer_characteristics;
    deUint8                     matrix_coefficients;
    deUint32                    num_units_in_tick;
    deUint32                    time_scale;
    StdVideoH264HrdParameters   hrd_parameters;
    deUint8                     num_reorder_frames;
    deUint8                     max_dec_frame_buffering;
    StdVideoH264SpsVuiFlags     flags;
} StdVideoH264SequenceParameterSetVui;

typedef struct StdVideoH264SpsFlags {
    deUint32 constraint_set0_flag:1;
    deUint32 constraint_set1_flag:1;
    deUint32 constraint_set2_flag:1;
    deUint32 constraint_set3_flag:1;
    deUint32 constraint_set4_flag:1;
    deUint32 constraint_set5_flag:1;
    deUint32 direct_8x8_inference_flag:1;
    deUint32 mb_adaptive_frame_field_flag:1;
    deUint32 frame_mbs_only_flag:1;
    deUint32 delta_pic_order_always_zero_flag:1;
    deUint32 residual_colour_transform_flag:1;
    deUint32 gaps_in_frame_num_value_allowed_flag:1;
    deUint32 first_picture_after_seek_flag:1; // where is this being documented?
    deUint32 qpprime_y_zero_transform_bypass_flag:1;
    deUint32 frame_cropping_flag:1;
    deUint32 scaling_matrix_present_flag:1;
    deUint32 vui_parameters_present_flag:1;
} StdVideoH264SpsFlags;

typedef struct StdVideoH264ScalingLists
{
    // scaling_list_present_mask has one bit for each
    // seq_scaling_list_present_flag[i] for SPS OR
    // pic_scaling_list_present_flag[i] for PPS,
    // bit 0 - 5 are for each entry of ScalingList4x4
    // bit 6 - 7 are for each entry plus 6 for ScalingList8x8
    deUint8 scaling_list_present_mask;
    // use_default_scaling_matrix_mask has one bit for each
    // UseDefaultScalingMatrix4x4Flag[ i ] and
    // UseDefaultScalingMatrix8x8Flag[ i - 6 ] for SPS OR PPS
    // bit 0 - 5 are for each entry of ScalingList4x4
    // bit 6 - 7 are for each entry plus 6 for ScalingList8x8
    deUint8 use_default_scaling_matrix_mask;
    deUint8 ScalingList4x4[6][16];
    deUint8 ScalingList8x8[2][64];
} StdVideoH264ScalingLists;

typedef struct StdVideoH264SequenceParameterSet
{
    StdVideoH264ProfileIdc               profile_idc;
    StdVideoH264Level                    level_idc;
    deUint8                              seq_parameter_set_id;
    StdVideoH264ChromaFormatIdc          chroma_format_idc;
    deUint8                              bit_depth_luma_minus8;
    deUint8                              bit_depth_chroma_minus8;
    deUint8                              log2_max_frame_num_minus4;
    StdVideoH264PocType                  pic_order_cnt_type;
    deUint8                              log2_max_pic_order_cnt_lsb_minus4;
    deInt32                              offset_for_non_ref_pic;
    deInt32                              offset_for_top_to_bottom_field;
    deUint8                              num_ref_frames_in_pic_order_cnt_cycle;
    deUint8                              max_num_ref_frames;
    deUint32                             pic_width_in_mbs_minus1;
    deUint32                             pic_height_in_map_units_minus1;
    deUint32                             frame_crop_left_offset;
    deUint32                             frame_crop_right_offset;
    deUint32                             frame_crop_top_offset;
    deUint32                             frame_crop_bottom_offset;
    StdVideoH264SpsFlags                 flags;
    deInt32                              offset_for_ref_frame[255]; // The number of valid values are defined by the num_ref_frames_in_pic_order_cnt_cycle
    StdVideoH264ScalingLists*            pScalingLists;             // Must be a valid pointer if scaling_matrix_present_flag is set
    StdVideoH264SequenceParameterSetVui* pSequenceParameterSetVui;  // Must be a valid pointer if StdVideoH264SpsFlags:vui_parameters_present_flag is set
} StdVideoH264SequenceParameterSet;

typedef struct StdVideoH264PpsFlags {
    deUint32 transform_8x8_mode_flag:1;
    deUint32 redundant_pic_cnt_present_flag:1;
    deUint32 constrained_intra_pred_flag:1;
    deUint32 deblocking_filter_control_present_flag:1;
    deUint32 weighted_bipred_idc_flag:1;
    deUint32 weighted_pred_flag:1;
    deUint32 pic_order_present_flag:1;
    deUint32 entropy_coding_mode_flag:1;
    deUint32 scaling_matrix_present_flag:1;
} StdVideoH264PpsFlags;

typedef struct StdVideoH264PictureParameterSet
{
    deUint8                       seq_parameter_set_id;
    deUint8                       pic_parameter_set_id;
    deUint8                       num_ref_idx_l0_default_active_minus1;
    deUint8                       num_ref_idx_l1_default_active_minus1;
    StdVideoH264WeightedBiPredIdc weighted_bipred_idc;
    deInt8                        pic_init_qp_minus26;
    deInt8                        pic_init_qs_minus26;
    deInt8                        chroma_qp_index_offset;
    deInt8                        second_chroma_qp_index_offset;
    StdVideoH264PpsFlags          flags;
    StdVideoH264ScalingLists*     pScalingLists; // Must be a valid pointer if  StdVideoH264PpsFlags::scaling_matrix_present_flag is set.
} StdVideoH264PictureParameterSet;

#ifdef __cplusplus
}
#endif

#endif // VULKAN_VIDEO_CODEC_H264STD_H_
/*
** Copyright (c) 2019-2021 The Khronos Group Inc.
**
** SPDX-License-Identifier: Apache-2.0
*/

#ifndef VULKAN_VIDEO_CODEC_H264STD_ENCODE_H_
#define VULKAN_VIDEO_CODEC_H264STD_ENCODE_H_ 1

#ifdef __cplusplus
extern "C" {
#endif



// *************************************************
// Video H.264 Encode related parameters:
// *************************************************

typedef struct StdVideoEncodeH264SliceHeaderFlags {
    deUint32 idr_flag:1;
    deUint32 is_reference_flag:1;
    deUint32 num_ref_idx_active_override_flag:1;
    deUint32 no_output_of_prior_pics_flag:1;
    deUint32 long_term_reference_flag:1;
    deUint32 adaptive_ref_pic_marking_mode_flag:1;
    deUint32 no_prior_references_available_flag:1;
} StdVideoEncodeH264SliceHeaderFlags;

typedef struct StdVideoEncodeH264PictureInfoFlags {
    deUint32 idr_flag:1;
    deUint32 is_reference_flag:1;
    deUint32 long_term_reference_flag:1;
} StdVideoEncodeH264PictureInfoFlags;

typedef struct StdVideoEncodeH264RefMgmtFlags {
    deUint32 ref_pic_list_modification_l0_flag:1;
    deUint32 ref_pic_list_modification_l1_flag:1;
} StdVideoEncodeH264RefMgmtFlags;

typedef struct StdVideoEncodeH264RefListModEntry {
    StdVideoH264ModificationOfPicNumsIdc modification_of_pic_nums_idc;
    deUint16                             abs_diff_pic_num_minus1;
    deUint16                             long_term_pic_num;
} StdVideoEncodeH264RefListModEntry;

typedef struct StdVideoEncodeH264RefPicMarkingEntry {
    StdVideoH264MemMgmtControlOp  operation;
    deUint16                      difference_of_pic_nums_minus1;
    deUint16                      long_term_pic_num;
    deUint16                      long_term_frame_idx;
    deUint16                      max_long_term_frame_idx_plus1;
} StdVideoEncodeH264RefPicMarkingEntry;

typedef struct StdVideoEncodeH264RefMemMgmtCtrlOperations {
    StdVideoEncodeH264RefMgmtFlags        flags;
    deUint8                               refList0ModOpCount;
    StdVideoEncodeH264RefListModEntry*    pRefList0ModOperations;
    deUint8                               refList1ModOpCount;
    StdVideoEncodeH264RefListModEntry*    pRefList1ModOperations;
    deUint8                               refPicMarkingOpCount;
    StdVideoEncodeH264RefPicMarkingEntry* pRefPicMarkingOperations;
} StdVideoEncodeH264RefMemMgmtCtrlOperations;

typedef struct StdVideoEncodeH264PictureInfo {
    StdVideoEncodeH264PictureInfoFlags   flags;
    StdVideoH264PictureType              pictureType;
    deUint32                             frameNum;
    deUint32                             pictureOrderCount;
    deUint16                             long_term_pic_num;
    deUint16                             long_term_frame_idx;
} StdVideoEncodeH264PictureInfo;

typedef struct StdVideoEncodeH264SliceHeader {
    StdVideoEncodeH264SliceHeaderFlags          flags;
    StdVideoH264SliceType                       slice_type;
    deUint8                                     seq_parameter_set_id;
    deUint8                                     pic_parameter_set_id;
    deUint16                                    idr_pic_id;
    deUint8                                     num_ref_idx_l0_active_minus1;
    deUint8                                     num_ref_idx_l1_active_minus1;
    StdVideoH264CabacInitIdc                    cabac_init_idc;
    StdVideoH264DisableDeblockingFilterIdc      disable_deblocking_filter_idc;
    deInt8                                      slice_alpha_c0_offset_div2;
    deInt8                                      slice_beta_offset_div2;
    StdVideoEncodeH264RefMemMgmtCtrlOperations* pMemMgmtCtrlOperations;
} StdVideoEncodeH264SliceHeader;


#ifdef __cplusplus
}
#endif

#endif // VULKAN_VIDEO_CODEC_H264STD_ENCODE_H_
/*
** Copyright (c) 2019-2021 The Khronos Group Inc.
**
** SPDX-License-Identifier: Apache-2.0
*/

#ifndef VULKAN_VIDEO_CODEC_H265STD_H_
#define VULKAN_VIDEO_CODEC_H265STD_H_ 1

#ifdef __cplusplus
extern "C" {
#endif



// Vulkan 0.5 version number WIP
#define VK_STD_VULKAN_VIDEO_CODEC_H265_API_VERSION_0_5 VK_MAKE_VIDEO_STD_VERSION(0, 5, 0) // Patch version should always be set to 0

// Format must be in the form XX.XX where the first two digits are the major and the second two, the minor.
#define VK_STD_VULKAN_VIDEO_CODEC_H265_SPEC_VERSION   VK_STD_VULKAN_VIDEO_CODEC_H265_API_VERSION_0_5
#define VK_STD_VULKAN_VIDEO_CODEC_H265_EXTENSION_NAME "VK_STD_vulkan_video_codec_h265"

typedef enum StdVideoH265ChromaFormatIdc {
    std_video_h265_chroma_format_idc_monochrome  = 0,
    std_video_h265_chroma_format_idc_420         = 1,
    std_video_h265_chroma_format_idc_422         = 2,
    std_video_h265_chroma_format_idc_444         = 3,
} StdVideoH265ChromaFormatIdc;

typedef enum StdVideoH265ProfileIdc {
    std_video_h265_profile_idc_main                     = 1,
    std_video_h265_profile_idc_main_10                  = 2,
    std_video_h265_profile_idc_main_still_picture       = 3,
    std_video_h265_profile_idc_format_range_extensions  = 4,
    std_video_h265_profile_idc_scc_extensions           = 9,
    std_video_h265_profile_idc_invalid                  = 0x7FFFFFFF
} StdVideoH265ProfileIdc;

typedef enum StdVideoH265Level {
    std_video_h265_level_1_0 = 0,
    std_video_h265_level_2_0 = 1,
    std_video_h265_level_2_1 = 2,
    std_video_h265_level_3_0 = 3,
    std_video_h265_level_3_1 = 4,
    std_video_h265_level_4_0 = 5,
    std_video_h265_level_4_1 = 6,
    std_video_h265_level_5_0 = 7,
    std_video_h265_level_5_1 = 8,
    std_video_h265_level_5_2 = 9,
    std_video_h265_level_6_0 = 10,
    std_video_h265_level_6_1 = 11,
    std_video_h265_level_6_2 = 12,
    std_video_h265_level_invalid = 0x7FFFFFFF
} StdVideoH265Level;


typedef struct StdVideoH265DecPicBufMgr
{
    deUint32 max_latency_increase_plus1[7];
    deUint8  max_dec_pic_buffering_minus1[7];
    deUint8  max_num_reorder_pics[7];
} StdVideoH265DecPicBufMgr;

typedef struct StdVideoH265SubLayerHrdParameters {
    deUint32 bit_rate_value_minus1[32];
    deUint32 cpb_size_value_minus1[32];
    deUint32 cpb_size_du_value_minus1[32];
    deUint32 bit_rate_du_value_minus1[32];
    deUint32 cbr_flag; // each bit represents a range of CpbCounts (bit 0 - cpb_cnt_minus1) per sub-layer
} StdVideoH265SubLayerHrdParameters;

typedef struct StdVideoH265HrdFlags {
    deUint32 nal_hrd_parameters_present_flag : 1;
    deUint32 vcl_hrd_parameters_present_flag : 1;
    deUint32 sub_pic_hrd_params_present_flag : 1;
    deUint32 sub_pic_cpb_params_in_pic_timing_sei_flag : 1;
    deUint8  fixed_pic_rate_general_flag; // each bit represents a sublayer, bit 0 - vps_max_sub_layers_minus1
    deUint8  fixed_pic_rate_within_cvs_flag; // each bit represents a sublayer, bit 0 - vps_max_sub_layers_minus1
    deUint8  low_delay_hrd_flag; // each bit represents a sublayer, bit 0 - vps_max_sub_layers_minus1
} StdVideoH265HrdFlags;

typedef struct StdVideoH265HrdParameters {
    deUint8                            tick_divisor_minus2;
    deUint8                            du_cpb_removal_delay_increment_length_minus1;
    deUint8                            dpb_output_delay_du_length_minus1;
    deUint8                            bit_rate_scale;
    deUint8                            cpb_size_scale;
    deUint8                            cpb_size_du_scale;
    deUint8                            initial_cpb_removal_delay_length_minus1;
    deUint8                            au_cpb_removal_delay_length_minus1;
    deUint8                            dpb_output_delay_length_minus1;
    deUint8                            cpb_cnt_minus1[7];
    deUint16                           elemental_duration_in_tc_minus1[7];
    StdVideoH265SubLayerHrdParameters* SubLayerHrdParametersNal[7];
    StdVideoH265SubLayerHrdParameters* SubLayerHrdParametersVcl[7];
    StdVideoH265HrdFlags               flags;
} StdVideoH265HrdParameters;

typedef struct StdVideoH265VpsFlags {
    deUint32 vps_temporal_id_nesting_flag : 1;
    deUint32 vps_sub_layer_ordering_info_present_flag : 1;
    deUint32 vps_timing_info_present_flag : 1;
    deUint32 vps_poc_proportional_to_timing_flag : 1;
} StdVideoH265VpsFlags;

typedef struct StdVideoH265VideoParameterSet
{
    deUint8                      vps_video_parameter_set_id;
    deUint8                      vps_max_sub_layers_minus1;
    deUint32                     vps_num_units_in_tick;
    deUint32                     vps_time_scale;
    deUint32                     vps_num_ticks_poc_diff_one_minus1;
    StdVideoH265DecPicBufMgr*    pDecPicBufMgr;
    StdVideoH265HrdParameters*   hrd_parameters;
    StdVideoH265VpsFlags         flags;
} StdVideoH265VideoParameterSet;

typedef struct StdVideoH265ScalingLists
{
    deUint8 ScalingList4x4[6][16];       // ScalingList[ 0 ][ MatrixID ][ i ] (sizeID = 0)
    deUint8 ScalingList8x8[6][64];       // ScalingList[ 1 ][ MatrixID ][ i ] (sizeID = 1)
    deUint8 ScalingList16x16[6][64];     // ScalingList[ 2 ][ MatrixID ][ i ] (sizeID = 2)
    deUint8 ScalingList32x32[2][64];     // ScalingList[ 3 ][ MatrixID ][ i ] (sizeID = 3)
    deUint8 ScalingListDCCoef16x16[6];   // scaling_list_dc_coef_minus8[ sizeID - 2 ][ matrixID ] + 8, sizeID = 2
    deUint8 ScalingListDCCoef32x32[2];   // scaling_list_dc_coef_minus8[ sizeID - 2 ][ matrixID ] + 8. sizeID = 3
} StdVideoH265ScalingLists;

typedef struct StdVideoH265SpsVuiFlags {
    deUint32 aspect_ratio_info_present_flag : 1;
    deUint32 overscan_info_present_flag : 1;
    deUint32 overscan_appropriate_flag : 1;
    deUint32 video_signal_type_present_flag : 1;
    deUint32 video_full_range_flag : 1;
    deUint32 colour_description_present_flag : 1;
    deUint32 chroma_loc_info_present_flag : 1;
    deUint32 neutral_chroma_indication_flag : 1;
    deUint32 field_seq_flag : 1;
    deUint32 frame_field_info_present_flag : 1;
    deUint32 default_display_window_flag : 1;
    deUint32 vui_timing_info_present_flag : 1;
    deUint32 vui_poc_proportional_to_timing_flag : 1;
    deUint32 vui_hrd_parameters_present_flag : 1;
    deUint32 bitstream_restriction_flag : 1;
    deUint32 tiles_fixed_structure_flag : 1;
    deUint32 motion_vectors_over_pic_boundaries_flag : 1;
    deUint32 restricted_ref_pic_lists_flag : 1;
} StdVideoH265SpsVuiFlags;

typedef struct StdVideoH265SequenceParameterSetVui {
    deUint8                     aspect_ratio_idc;
    deUint16                    sar_width;
    deUint16                    sar_height;
    deUint8                     video_format;
    deUint8                     colour_primaries;
    deUint8                     transfer_characteristics;
    deUint8                     matrix_coeffs;
    deUint8                     chroma_sample_loc_type_top_field;
    deUint8                     chroma_sample_loc_type_bottom_field;
    deUint16                    def_disp_win_left_offset;
    deUint16                    def_disp_win_right_offset;
    deUint16                    def_disp_win_top_offset;
    deUint16                    def_disp_win_bottom_offset;
    deUint32                    vui_num_units_in_tick;
    deUint32                    vui_time_scale;
    deUint32                    vui_num_ticks_poc_diff_one_minus1;
    StdVideoH265HrdParameters*  hrd_parameters;
    deUint16                    min_spatial_segmentation_idc;
    deUint8                     max_bytes_per_pic_denom;
    deUint8                     max_bits_per_min_cu_denom;
    deUint8                     log2_max_mv_length_horizontal;
    deUint8                     log2_max_mv_length_vertical;
    StdVideoH265SpsVuiFlags     flags;
} StdVideoH265SequenceParameterSetVui;

typedef struct StdVideoH265PredictorPaletteEntries
{
    deUint16 PredictorPaletteEntries[3][128];
} StdVideoH265PredictorPaletteEntries;


typedef struct StdVideoH265SpsFlags {
    deUint32 sps_temporal_id_nesting_flag : 1;
    deUint32 separate_colour_plane_flag : 1;
    deUint32 scaling_list_enabled_flag : 1;
    deUint32 sps_scaling_list_data_present_flag : 1;
    deUint32 amp_enabled_flag : 1;
    deUint32 sample_adaptive_offset_enabled_flag : 1;
    deUint32 pcm_enabled_flag : 1;
    deUint32 pcm_loop_filter_disabled_flag : 1;
    deUint32 long_term_ref_pics_present_flag : 1;
    deUint32 sps_temporal_mvp_enabled_flag : 1;
    deUint32 strong_intra_smoothing_enabled_flag : 1;
    deUint32 vui_parameters_present_flag : 1;
    deUint32 sps_extension_present_flag : 1;
    deUint32 sps_range_extension_flag : 1;

    // extension SPS flags, valid when std_video_h265_profile_idc_format_range_extensions is set
    deUint32 transform_skip_rotation_enabled_flag : 1;
    deUint32 transform_skip_context_enabled_flag : 1;
    deUint32 implicit_rdpcm_enabled_flag : 1;
    deUint32 explicit_rdpcm_enabled_flag : 1;
    deUint32 extended_precision_processing_flag : 1;
    deUint32 intra_smoothing_disabled_flag : 1;
    deUint32 high_precision_offsets_enabled_flag : 1;
    deUint32 persistent_rice_adaptation_enabled_flag : 1;
    deUint32 cabac_bypass_alignment_enabled_flag : 1;

    // extension SPS flags, valid when std_video_h265_profile_idc_scc_extensions is set
    deUint32 sps_curr_pic_ref_enabled_flag : 1;
    deUint32 palette_mode_enabled_flag : 1;
    deUint32 sps_palette_predictor_initializer_present_flag : 1;
    deUint32 intra_boundary_filtering_disabled_flag : 1;
} StdVideoH265SpsFlags;

typedef struct StdVideoH265SequenceParameterSet
{
    StdVideoH265ProfileIdc               profile_idc;
    StdVideoH265Level                    level_idc;
    deUint32                             pic_width_in_luma_samples;
    deUint32                             pic_height_in_luma_samples;
    deUint8                              sps_video_parameter_set_id;
    deUint8                              sps_max_sub_layers_minus1;
    deUint8                              sps_seq_parameter_set_id;
    deUint8                              chroma_format_idc;
    deUint8                              bit_depth_luma_minus8;
    deUint8                              bit_depth_chroma_minus8;
    deUint8                              log2_max_pic_order_cnt_lsb_minus4;
    deUint8                              sps_max_dec_pic_buffering_minus1;
    deUint8                              log2_min_luma_coding_block_size_minus3;
    deUint8                              log2_diff_max_min_luma_coding_block_size;
    deUint8                              log2_min_luma_transform_block_size_minus2;
    deUint8                              log2_diff_max_min_luma_transform_block_size;
    deUint8                              max_transform_hierarchy_depth_inter;
    deUint8                              max_transform_hierarchy_depth_intra;
    deUint8                              num_short_term_ref_pic_sets;
    deUint8                              num_long_term_ref_pics_sps;
    deUint8                              pcm_sample_bit_depth_luma_minus1;
    deUint8                              pcm_sample_bit_depth_chroma_minus1;
    deUint8                              log2_min_pcm_luma_coding_block_size_minus3;
    deUint8                              log2_diff_max_min_pcm_luma_coding_block_size;
    deUint32                             conf_win_left_offset;
    deUint32                             conf_win_right_offset;
    deUint32                             conf_win_top_offset;
    deUint32                             conf_win_bottom_offset;
    StdVideoH265DecPicBufMgr*            pDecPicBufMgr;
    StdVideoH265SpsFlags                 flags;
    StdVideoH265ScalingLists*            pScalingLists;             // Must be a valid pointer if sps_scaling_list_data_present_flag is set
    StdVideoH265SequenceParameterSetVui* pSequenceParameterSetVui;  // Must be a valid pointer if StdVideoH265SpsFlags:vui_parameters_present_flag is set palette_max_size;

    // extension SPS flags, valid when std_video_h265_profile_idc_scc_extensions is set
    deUint8                              palette_max_size;
    deUint8                              delta_palette_max_predictor_size;
    deUint8                              motion_vector_resolution_control_idc;
    deUint8                              sps_num_palette_predictor_initializer_minus1;
    StdVideoH265PredictorPaletteEntries* pPredictorPaletteEntries;  // Must be a valid pointer if sps_palette_predictor_initializer_present_flag is set
} StdVideoH265SequenceParameterSet;


typedef struct StdVideoH265PpsFlags {
    deUint32 dependent_slice_segments_enabled_flag : 1;
    deUint32 output_flag_present_flag : 1;
    deUint32 sign_data_hiding_enabled_flag : 1;
    deUint32 cabac_init_present_flag : 1;
    deUint32 constrained_intra_pred_flag : 1;
    deUint32 transform_skip_enabled_flag : 1;
    deUint32 cu_qp_delta_enabled_flag : 1;
    deUint32 pps_slice_chroma_qp_offsets_present_flag : 1;
    deUint32 weighted_pred_flag : 1;
    deUint32 weighted_bipred_flag : 1;
    deUint32 transquant_bypass_enabled_flag : 1;
    deUint32 tiles_enabled_flag : 1;
    deUint32 entropy_coding_sync_enabled_flag : 1;
    deUint32 uniform_spacing_flag : 1;
    deUint32 loop_filter_across_tiles_enabled_flag : 1;
    deUint32 pps_loop_filter_across_slices_enabled_flag : 1;
    deUint32 deblocking_filter_control_present_flag : 1;
    deUint32 deblocking_filter_override_enabled_flag : 1;
    deUint32 pps_deblocking_filter_disabled_flag : 1;
    deUint32 pps_scaling_list_data_present_flag : 1;
    deUint32 lists_modification_present_flag : 1;
    deUint32 slice_segment_header_extension_present_flag : 1;
    deUint32 pps_extension_present_flag : 1;

    // extension PPS flags, valid when std_video_h265_profile_idc_format_range_extensions is set
    deUint32 cross_component_prediction_enabled_flag : 1;
    deUint32 chroma_qp_offset_list_enabled_flag : 1;

    // extension PPS flags, valid when std_video_h265_profile_idc_scc_extensions is set
    deUint32 pps_curr_pic_ref_enabled_flag : 1;
    deUint32 residual_adaptive_colour_transform_enabled_flag : 1;
    deUint32 pps_slice_act_qp_offsets_present_flag : 1;
    deUint32 pps_palette_predictor_initializer_present_flag : 1;
    deUint32 monochrome_palette_flag : 1;
    deUint32 pps_range_extension_flag : 1;
} StdVideoH265PpsFlags;

typedef struct StdVideoH265PictureParameterSet
{
    deUint8                              pps_pic_parameter_set_id;
    deUint8                              pps_seq_parameter_set_id;
    deUint8                              num_extra_slice_header_bits;
    deUint8                              num_ref_idx_l0_default_active_minus1;
    deUint8                              num_ref_idx_l1_default_active_minus1;
    deInt8                               init_qp_minus26;
    deUint8                              diff_cu_qp_delta_depth;
    deInt8                               pps_cb_qp_offset;
    deInt8                               pps_cr_qp_offset;
    deUint8                              num_tile_columns_minus1;
    deUint8                              num_tile_rows_minus1;
    deUint16                             column_width_minus1[19];
    deUint16                             row_height_minus1[21];
    deInt8                               pps_beta_offset_div2;
    deInt8                               pps_tc_offset_div2;
    deUint8                              log2_parallel_merge_level_minus2;
    StdVideoH265PpsFlags                 flags;
    StdVideoH265ScalingLists*            pScalingLists; // Must be a valid pointer if pps_scaling_list_data_present_flag is set

    // extension PPS, valid when std_video_h265_profile_idc_format_range_extensions is set
    deUint8                              log2_max_transform_skip_block_size_minus2;
    deUint8                              diff_cu_chroma_qp_offset_depth;
    deUint8                              chroma_qp_offset_list_len_minus1;
    deInt8                               cb_qp_offset_list[6];
    deInt8                               cr_qp_offset_list[6];
    deUint8                              log2_sao_offset_scale_luma;
    deUint8                              log2_sao_offset_scale_chroma;

    // extension PPS, valid when std_video_h265_profile_idc_scc_extensions is set
    deInt8                               pps_act_y_qp_offset_plus5;
    deInt8                               pps_act_cb_qp_offset_plus5;
    deInt8                               pps_act_cr_qp_offset_plus5;
    deUint8                              pps_num_palette_predictor_initializer;
    deUint8                              luma_bit_depth_entry_minus8;
    deUint8                              chroma_bit_depth_entry_minus8;
    StdVideoH265PredictorPaletteEntries* pPredictorPaletteEntries;  // Must be a valid pointer if pps_palette_predictor_initializer_present_flag is set
} StdVideoH265PictureParameterSet;

#ifdef __cplusplus
}
#endif

#endif // VULKAN_VIDEO_CODEC_H265STD_H_
/*
** Copyright (c) 2019-2020 The Khronos Group Inc.
**
** SPDX-License-Identifier: Apache-2.0
*/

#ifndef VULKAN_VIDEO_CODEC_H264STD_DECODE_H_
#define VULKAN_VIDEO_CODEC_H264STD_DECODE_H_ 1

#ifdef __cplusplus
extern "C" {
#endif



// *************************************************
// Video H.264 Decode related parameters:
// *************************************************

typedef struct StdVideoDecodeH264PictureInfoFlags {
    deUint32 field_pic_flag:1;             // Is field picture
    deUint32 is_intra:1;                   // Is intra picture
    deUint32 bottom_field_flag:1;          // bottom (true) or top (false) field if field_pic_flag is set.
    deUint32 is_reference:1;               // This only applies to picture info, and not to the DPB lists.
    deUint32 complementary_field_pair:1;   // complementary field pair, complementary non-reference field pair, complementary reference field pair
} StdVideoDecodeH264PictureInfoFlags;

typedef struct StdVideoDecodeH264PictureInfo {
    deUint8  seq_parameter_set_id;          // Selecting SPS from the Picture Parameters
    deUint8  pic_parameter_set_id;          // Selecting PPS from the Picture Parameters and the SPS
    deUint16 reserved;                      // for structure members 32-bit packing/alignment
    deUint16 frame_num;                     // 7.4.3 Slice header semantics
    deUint16 idr_pic_id;                    // 7.4.3 Slice header semantics
    // PicOrderCnt is based on TopFieldOrderCnt and BottomFieldOrderCnt. See 8.2.1 Decoding process for picture order count type 0 - 2
    deInt32  PicOrderCnt[2];                // TopFieldOrderCnt and BottomFieldOrderCnt fields.
    StdVideoDecodeH264PictureInfoFlags flags;
} StdVideoDecodeH264PictureInfo;

typedef struct StdVideoDecodeH264ReferenceInfoFlags {
    deUint32 top_field_flag:1;             // Reference is used for top field reference.
    deUint32 bottom_field_flag:1;          // Reference is used for bottom field reference.
    deUint32 is_long_term:1;               // this is a long term reference
    deUint32 is_non_existing:1;            // Must be handled in accordance with 8.2.5.2: Decoding process for gaps in frame_num
} StdVideoDecodeH264ReferenceInfoFlags;

typedef struct StdVideoDecodeH264ReferenceInfo {
    // FrameNum = is_long_term ?  long_term_frame_idx : frame_num
    deUint16 FrameNum;                     // 7.4.3.3 Decoded reference picture marking semantics
    deUint16 reserved;                     // for structure members 32-bit packing/alignment
    deInt32  PicOrderCnt[2];               // TopFieldOrderCnt and BottomFieldOrderCnt fields.
    StdVideoDecodeH264ReferenceInfoFlags flags;
} StdVideoDecodeH264ReferenceInfo;

typedef struct StdVideoDecodeH264MvcElementFlags {
    deUint32 non_idr:1;
    deUint32 anchor_pic:1;
    deUint32 inter_view:1;
} StdVideoDecodeH264MvcElementFlags;

typedef struct StdVideoDecodeH264MvcElement {
    StdVideoDecodeH264MvcElementFlags flags;
    deUint16 viewOrderIndex;
    deUint16 viewId;
    deUint16 temporalId; // move out?
    deUint16 priorityId; // move out?
    deUint16 numOfAnchorRefsInL0;
    deUint16 viewIdOfAnchorRefsInL0[15];
    deUint16 numOfAnchorRefsInL1;
    deUint16 viewIdOfAnchorRefsInL1[15];
    deUint16 numOfNonAnchorRefsInL0;
    deUint16 viewIdOfNonAnchorRefsInL0[15];
    deUint16 numOfNonAnchorRefsInL1;
    deUint16 viewIdOfNonAnchorRefsInL1[15];
} StdVideoDecodeH264MvcElement;

typedef struct StdVideoDecodeH264Mvc {
    deUint32 viewId0;
    deUint32 mvcElementCount;
    StdVideoDecodeH264MvcElement* pMvcElements;
} StdVideoDecodeH264Mvc;


#ifdef __cplusplus
}
#endif

#endif // VULKAN_VIDEO_CODEC_H264STD_DECODE_H_
/*
** Copyright (c) 2019-2021 The Khronos Group Inc.
**
** SPDX-License-Identifier: Apache-2.0
*/

#ifndef VULKAN_VIDEO_CODEC_H265STD_DECODE_H_
#define VULKAN_VIDEO_CODEC_H265STD_DECODE_H_ 1

#ifdef __cplusplus
extern "C" {
#endif



// *************************************************
// Video h265 Decode related parameters:
// *************************************************

typedef struct StdVideoDecodeH265PictureInfoFlags {
    deUint32 IrapPicFlag : 1;
    deUint32 IdrPicFlag  : 1;
    deUint32 IsReference : 1;
    deUint32 short_term_ref_pic_set_sps_flag : 1;
} StdVideoDecodeH265PictureInfoFlags;

typedef struct StdVideoDecodeH265PictureInfo {
    deUint8                            vps_video_parameter_set_id;
    deUint8                            sps_seq_parameter_set_id;
    deUint8                            pps_pic_parameter_set_id;
    deUint8                            num_short_term_ref_pic_sets;
    deInt32                            PicOrderCntVal;
    deUint16                           NumBitsForSTRefPicSetInSlice; // number of bits used in st_ref_pic_set()
                                                                     //when short_term_ref_pic_set_sps_flag is 0; otherwise set to 0.
    deUint8                            NumDeltaPocsOfRefRpsIdx;      // NumDeltaPocs[ RefRpsIdx ] when short_term_ref_pic_set_sps_flag = 1, otherwise 0
    deUint8                            RefPicSetStCurrBefore[8];     // slotIndex as used in VkVideoReferenceSlotKHR structures representing
                                                                     //pReferenceSlots in VkVideoDecodeInfoKHR, 0xff for invalid slotIndex
    deUint8                            RefPicSetStCurrAfter[8];      // slotIndex as used in VkVideoReferenceSlotKHR structures representing
                                                                     //pReferenceSlots in VkVideoDecodeInfoKHR, 0xff for invalid slotIndex
    deUint8                            RefPicSetLtCurr[8];           // slotIndex as used in VkVideoReferenceSlotKHR structures representing
                                                                     //pReferenceSlots in VkVideoDecodeInfoKHR, 0xff for invalid slotIndex
    StdVideoDecodeH265PictureInfoFlags flags;
} StdVideoDecodeH265PictureInfo;

typedef struct StdVideoDecodeH265ReferenceInfoFlags {
    deUint32 is_long_term : 1;
    deUint32 is_non_existing : 1;
} StdVideoDecodeH265ReferenceInfoFlags;

typedef struct StdVideoDecodeH265ReferenceInfo {
    deInt32                              PicOrderCntVal;
    StdVideoDecodeH265ReferenceInfoFlags flags;
} StdVideoDecodeH265ReferenceInfo;

#ifdef __cplusplus
}
#endif

#endif // VULKAN_VIDEO_CODEC_H265STD_DECODE_H_
#ifndef VULKAN_CORE_H_
#define VULKAN_CORE_H_ 1

/*
** Copyright 2015-2021 The Khronos Group Inc.
**
** SPDX-License-Identifier: Apache-2.0
*/

/*
** This header is generated from the Khronos Vulkan XML API Registry.
**
*/


#ifdef __cplusplus
extern "C" {
#endif



#define VK_VERSION_1_0 1


#define VK_DEFINE_HANDLE(object) typedef struct object##_T* object;


#ifndef VK_USE_64_BIT_PTR_DEFINES
    #if defined(__LP64__) || defined(_WIN64) || (defined(__x86_64__) && !defined(__ILP32__) ) || defined(_M_X64) || defined(__ia64) || defined (_M_IA64) || defined(__aarch64__) || defined(__powerpc64__)
        #define VK_USE_64_BIT_PTR_DEFINES 1
    #else
        #define VK_USE_64_BIT_PTR_DEFINES 0
    #endif
#endif


#ifndef VK_DEFINE_NON_DISPATCHABLE_HANDLE
    #if (VK_USE_64_BIT_PTR_DEFINES==1)
        #if (defined(__cplusplus) && (__cplusplus >= 201103L)) || (defined(_MSVC_LANG) && (_MSVC_LANG >= 201103L))
            #define VK_NULL_HANDLE nullptr
        #else
            #define VK_NULL_HANDLE ((void*)0)
        #endif
    #else
        #define VK_NULL_HANDLE 0ULL
    #endif
#endif
#ifndef VK_NULL_HANDLE
    #define VK_NULL_HANDLE 0
#endif


#ifndef VK_DEFINE_NON_DISPATCHABLE_HANDLE
    #if (VK_USE_64_BIT_PTR_DEFINES==1)
        #define VK_DEFINE_NON_DISPATCHABLE_HANDLE(object) typedef struct object##_T *object;
    #else
        #define VK_DEFINE_NON_DISPATCHABLE_HANDLE(object) typedef deUint64 object;
    #endif
#endif

// DEPRECATED: This define is deprecated. VK_MAKE_API_VERSION should be used instead.
#define VK_MAKE_VERSION(major, minor, patch) \
    ((((deUint32)(major)) << 22) | (((deUint32)(minor)) << 12) | ((deUint32)(patch)))

// DEPRECATED: This define has been removed. Specific version defines (e.g. VK_API_VERSION_1_0), or the VK_MAKE_VERSION macro, should be used instead.
//#define VK_API_VERSION VK_MAKE_VERSION(1, 0, 0) // Patch version should always be set to 0

#define VK_MAKE_API_VERSION(variant, major, minor, patch) \
    ((((deUint32)(variant)) << 29) | (((deUint32)(major)) << 22) | (((deUint32)(minor)) << 12) | ((deUint32)(patch)))

// Vulkan 1.0 version number
#define VK_API_VERSION_1_0 VK_MAKE_API_VERSION(0, 1, 0, 0)// Patch version should always be set to 0

// Version of this file
#define VK_HEADER_VERSION 191

// Complete version of this file
#define VK_HEADER_VERSION_COMPLETE VK_MAKE_API_VERSION(0, 1, 2, VK_HEADER_VERSION)

// DEPRECATED: This define is deprecated. VK_API_VERSION_MAJOR should be used instead.
#define VK_VERSION_MAJOR(version) ((deUint32)(version) >> 22)

// DEPRECATED: This define is deprecated. VK_API_VERSION_MINOR should be used instead.
#define VK_VERSION_MINOR(version) (((deUint32)(version) >> 12) & 0x3FFU)

// DEPRECATED: This define is deprecated. VK_API_VERSION_PATCH should be used instead.
#define VK_VERSION_PATCH(version) ((deUint32)(version) & 0xFFFU)

#define VK_API_VERSION_VARIANT(version) ((deUint32)(version) >> 29)
#define VK_API_VERSION_MAJOR(version) (((deUint32)(version) >> 22) & 0x7FU)
#define VK_API_VERSION_MINOR(version) (((deUint32)(version) >> 12) & 0x3FFU)
#define VK_API_VERSION_PATCH(version) ((deUint32)(version) & 0xFFFU)
typedef deUint32 VkBool32;
typedef deUint64 VkDeviceAddress;
typedef deUint64 VkDeviceSize;
typedef deUint32 VkFlags;
typedef deUint32 VkSampleMask;
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkBuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkImage)
VK_DEFINE_HANDLE(VkInstance)
VK_DEFINE_HANDLE(VkPhysicalDevice)
VK_DEFINE_HANDLE(VkDevice)
VK_DEFINE_HANDLE(VkQueue)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSemaphore)
VK_DEFINE_HANDLE(VkCommandBuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkFence)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDeviceMemory)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkEvent)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkQueryPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkBufferView)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkImageView)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkShaderModule)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipelineCache)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipelineLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipeline)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkRenderPass)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorSetLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSampler)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorSet)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkFramebuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkCommandPool)
#define VK_UUID_SIZE                      16U
#define VK_ATTACHMENT_UNUSED              (~0U)
#define VK_FALSE                          0U
#define VK_LOD_CLAMP_NONE                 1000.0F
#define VK_QUEUE_FAMILY_IGNORED           (~0U)
#define VK_REMAINING_ARRAY_LAYERS         (~0U)
#define VK_REMAINING_MIP_LEVELS           (~0U)
#define VK_SUBPASS_EXTERNAL               (~0U)
#define VK_TRUE                           1U
#define VK_WHOLE_SIZE                     (~0ULL)
#define VK_MAX_MEMORY_TYPES               32U
#define VK_MAX_MEMORY_HEAPS               16U
#define VK_MAX_PHYSICAL_DEVICE_NAME_SIZE  256U
#define VK_MAX_EXTENSION_NAME_SIZE        256U
#define VK_MAX_DESCRIPTION_SIZE           256U

typedef enum VkResult {
    VK_SUCCESS = 0,
    VK_NOT_READY = 1,
    VK_TIMEOUT = 2,
    VK_EVENT_SET = 3,
    VK_EVENT_RESET = 4,
    VK_INCOMPLETE = 5,
    VK_ERROR_OUT_OF_HOST_MEMORY = -1,
    VK_ERROR_OUT_OF_DEVICE_MEMORY = -2,
    VK_ERROR_INITIALIZATION_FAILED = -3,
    VK_ERROR_DEVICE_LOST = -4,
    VK_ERROR_MEMORY_MAP_FAILED = -5,
    VK_ERROR_LAYER_NOT_PRESENT = -6,
    VK_ERROR_EXTENSION_NOT_PRESENT = -7,
    VK_ERROR_FEATURE_NOT_PRESENT = -8,
    VK_ERROR_INCOMPATIBLE_DRIVER = -9,
    VK_ERROR_TOO_MANY_OBJECTS = -10,
    VK_ERROR_FORMAT_NOT_SUPPORTED = -11,
    VK_ERROR_FRAGMENTED_POOL = -12,
    VK_ERROR_UNKNOWN = -13,
    VK_ERROR_OUT_OF_POOL_MEMORY = -1000069000,
    VK_ERROR_INVALID_EXTERNAL_HANDLE = -1000072003,
    VK_ERROR_FRAGMENTATION = -1000161000,
    VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS = -1000257000,
    VK_ERROR_SURFACE_LOST_KHR = -1000000000,
    VK_ERROR_NATIVE_WINDOW_IN_USE_KHR = -1000000001,
    VK_SUBOPTIMAL_KHR = 1000001003,
    VK_ERROR_OUT_OF_DATE_KHR = -1000001004,
    VK_ERROR_INCOMPATIBLE_DISPLAY_KHR = -1000003001,
    VK_ERROR_VALIDATION_FAILED_EXT = -1000011001,
    VK_ERROR_INVALID_SHADER_NV = -1000012000,
    VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT = -1000158000,
    VK_ERROR_NOT_PERMITTED_EXT = -1000174001,
    VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT = -1000255000,
    VK_THREAD_IDLE_KHR = 1000268000,
    VK_THREAD_DONE_KHR = 1000268001,
    VK_OPERATION_DEFERRED_KHR = 1000268002,
    VK_OPERATION_NOT_DEFERRED_KHR = 1000268003,
    VK_PIPELINE_COMPILE_REQUIRED_EXT = 1000297000,
    VK_ERROR_OUT_OF_POOL_MEMORY_KHR = VK_ERROR_OUT_OF_POOL_MEMORY,
    VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR = VK_ERROR_INVALID_EXTERNAL_HANDLE,
    VK_ERROR_FRAGMENTATION_EXT = VK_ERROR_FRAGMENTATION,
    VK_ERROR_INVALID_DEVICE_ADDRESS_EXT = VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS,
    VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS_KHR = VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS,
    VK_ERROR_PIPELINE_COMPILE_REQUIRED_EXT = VK_PIPELINE_COMPILE_REQUIRED_EXT,
    VK_RESULT_MAX_ENUM = 0x7FFFFFFF
} VkResult;

typedef enum VkStructureType {
    VK_STRUCTURE_TYPE_APPLICATION_INFO = 0,
    VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO = 1,
    VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO = 2,
    VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO = 3,
    VK_STRUCTURE_TYPE_SUBMIT_INFO = 4,
    VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO = 5,
    VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE = 6,
    VK_STRUCTURE_TYPE_BIND_SPARSE_INFO = 7,
    VK_STRUCTURE_TYPE_FENCE_CREATE_INFO = 8,
    VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO = 9,
    VK_STRUCTURE_TYPE_EVENT_CREATE_INFO = 10,
    VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO = 11,
    VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO = 12,
    VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO = 13,
    VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO = 14,
    VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO = 15,
    VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO = 16,
    VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO = 17,
    VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO = 18,
    VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO = 19,
    VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO = 20,
    VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO = 21,
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO = 22,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO = 23,
    VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO = 24,
    VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO = 25,
    VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO = 26,
    VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO = 27,
    VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO = 28,
    VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO = 29,
    VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO = 30,
    VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO = 31,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO = 32,
    VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO = 33,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO = 34,
    VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET = 35,
    VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET = 36,
    VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO = 37,
    VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO = 38,
    VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO = 39,
    VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO = 40,
    VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO = 41,
    VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO = 42,
    VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO = 43,
    VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER = 44,
    VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER = 45,
    VK_STRUCTURE_TYPE_MEMORY_BARRIER = 46,
    VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO = 47,
    VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO = 48,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES = 1000094000,
    VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO = 1000157000,
    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO = 1000157001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES = 1000083000,
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS = 1000127000,
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO = 1000127001,
    VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO = 1000060000,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO = 1000060003,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO = 1000060004,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO = 1000060005,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO = 1000060006,
    VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO = 1000060013,
    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO = 1000060014,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES = 1000070000,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO = 1000070001,
    VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2 = 1000146000,
    VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2 = 1000146001,
    VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2 = 1000146002,
    VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2 = 1000146003,
    VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2 = 1000146004,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 = 1000059000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 = 1000059001,
    VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2 = 1000059002,
    VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2 = 1000059003,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2 = 1000059004,
    VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2 = 1000059005,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2 = 1000059006,
    VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2 = 1000059007,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2 = 1000059008,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES = 1000117000,
    VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO = 1000117001,
    VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO = 1000117002,
    VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO = 1000117003,
    VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO = 1000053000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES = 1000053001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES = 1000053002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES = 1000120000,
    VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO = 1000145000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES = 1000145001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES = 1000145002,
    VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2 = 1000145003,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO = 1000156000,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO = 1000156001,
    VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO = 1000156002,
    VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO = 1000156003,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES = 1000156004,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES = 1000156005,
    VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO = 1000085000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO = 1000071000,
    VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES = 1000071001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO = 1000071002,
    VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES = 1000071003,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES = 1000071004,
    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO = 1000072000,
    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO = 1000072001,
    VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO = 1000072002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO = 1000112000,
    VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES = 1000112001,
    VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO = 1000113000,
    VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO = 1000077000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO = 1000076000,
    VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES = 1000076001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES = 1000168000,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT = 1000168001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES = 1000063000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES = 49,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES = 50,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES = 51,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES = 52,
    VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO = 1000147000,
    VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2 = 1000109000,
    VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2 = 1000109001,
    VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2 = 1000109002,
    VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2 = 1000109003,
    VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2 = 1000109004,
    VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO = 1000109005,
    VK_STRUCTURE_TYPE_SUBPASS_END_INFO = 1000109006,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES = 1000177000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES = 1000196000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES = 1000180000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES = 1000082000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES = 1000197000,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO = 1000161000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES = 1000161001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES = 1000161002,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO = 1000161003,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT = 1000161004,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES = 1000199000,
    VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE = 1000199001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES = 1000221000,
    VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO = 1000246000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES = 1000130000,
    VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO = 1000130001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES = 1000211000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES = 1000108000,
    VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO = 1000108001,
    VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO = 1000108002,
    VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO = 1000108003,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES = 1000253000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES = 1000175000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES = 1000241000,
    VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT = 1000241001,
    VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT = 1000241002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES = 1000261000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES = 1000207000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES = 1000207001,
    VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO = 1000207002,
    VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO = 1000207003,
    VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO = 1000207004,
    VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO = 1000207005,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES = 1000257000,
    VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO = 1000244001,
    VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO = 1000257002,
    VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO = 1000257003,
    VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO = 1000257004,
    VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR = 1000001000,
    VK_STRUCTURE_TYPE_PRESENT_INFO_KHR = 1000001001,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR = 1000060007,
    VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR = 1000060008,
    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR = 1000060009,
    VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR = 1000060010,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR = 1000060011,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR = 1000060012,
    VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR = 1000002000,
    VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR = 1000002001,
    VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR = 1000003000,
    VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR = 1000004000,
    VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR = 1000005000,
    VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR = 1000006000,
    VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR = 1000008000,
    VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR = 1000009000,
    VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT = 1000011000,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD = 1000018000,
    VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT = 1000022000,
    VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT = 1000022001,
    VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT = 1000022002,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_PROFILE_KHR = 1000023000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR = 1000023001,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_PICTURE_RESOURCE_KHR = 1000023002,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_GET_MEMORY_PROPERTIES_KHR = 1000023003,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_BIND_MEMORY_KHR = 1000023004,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR = 1000023005,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR = 1000023006,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR = 1000023007,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_BEGIN_CODING_INFO_KHR = 1000023008,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_END_CODING_INFO_KHR = 1000023009,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_CODING_CONTROL_INFO_KHR = 1000023010,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_REFERENCE_SLOT_KHR = 1000023011,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_QUEUE_FAMILY_PROPERTIES_2_KHR = 1000023012,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_PROFILES_KHR = 1000023013,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR = 1000023014,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR = 1000023015,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_INFO_KHR = 1000024000,
#endif
    VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV = 1000026000,
    VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV = 1000026001,
    VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV = 1000026002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT = 1000028000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT = 1000028001,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT = 1000028002,
    VK_STRUCTURE_TYPE_CU_MODULE_CREATE_INFO_NVX = 1000029000,
    VK_STRUCTURE_TYPE_CU_FUNCTION_CREATE_INFO_NVX = 1000029001,
    VK_STRUCTURE_TYPE_CU_LAUNCH_INFO_NVX = 1000029002,
    VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX = 1000030000,
    VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX = 1000030001,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_EXT = 1000038000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_EXT = 1000038001,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_EXT = 1000038002,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_EXT = 1000038003,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_VCL_FRAME_INFO_EXT = 1000038004,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_EXT = 1000038005,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_NALU_SLICE_EXT = 1000038006,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_EMIT_PICTURE_PARAMETERS_EXT = 1000038007,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_EXT = 1000038008,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_EXT = 1000040000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_CREATE_INFO_EXT = 1000040001,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_EXT = 1000040002,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_MVC_EXT = 1000040003,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_EXT = 1000040004,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_EXT = 1000040005,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_EXT = 1000040006,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_EXT = 1000040007,
#endif
    VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD = 1000041000,
    VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP = 1000049000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV = 1000050000,
    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV = 1000056000,
    VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV = 1000056001,
    VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV = 1000057000,
    VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV = 1000057001,
    VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV = 1000058000,
    VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT = 1000061000,
    VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN = 1000062000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT = 1000066000,
    VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT = 1000067000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT = 1000067001,
    VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR = 1000073000,
    VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR = 1000073001,
    VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR = 1000073002,
    VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR = 1000073003,
    VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR = 1000074000,
    VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR = 1000074001,
    VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR = 1000074002,
    VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR = 1000075000,
    VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR = 1000078000,
    VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR = 1000078001,
    VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR = 1000078002,
    VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR = 1000078003,
    VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR = 1000079000,
    VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR = 1000079001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR = 1000080000,
    VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT = 1000081000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT = 1000081001,
    VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT = 1000081002,
    VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR = 1000084000,
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV = 1000087000,
    VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT = 1000090000,
    VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT = 1000091000,
    VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT = 1000091001,
    VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT = 1000091002,
    VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT = 1000091003,
    VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE = 1000092000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX = 1000097000,
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV = 1000098000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT = 1000099000,
    VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT = 1000099001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT = 1000101000,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT = 1000101001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT = 1000102000,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT = 1000102001,
    VK_STRUCTURE_TYPE_HDR_METADATA_EXT = 1000105000,
    VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR = 1000111000,
    VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR = 1000114000,
    VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR = 1000114001,
    VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR = 1000114002,
    VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR = 1000115000,
    VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR = 1000115001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR = 1000116000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR = 1000116001,
    VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR = 1000116002,
    VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR = 1000116003,
    VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR = 1000116004,
    VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR = 1000116005,
    VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR = 1000116006,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR = 1000119000,
    VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR = 1000119001,
    VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR = 1000119002,
    VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR = 1000121000,
    VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR = 1000121001,
    VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR = 1000121002,
    VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR = 1000121003,
    VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR = 1000121004,
    VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK = 1000122000,
    VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK = 1000123000,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT = 1000128000,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT = 1000128001,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT = 1000128002,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT = 1000128003,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT = 1000128004,
    VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID = 1000129000,
    VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID = 1000129001,
    VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID = 1000129002,
    VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID = 1000129003,
    VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID = 1000129004,
    VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID = 1000129005,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT = 1000138000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT = 1000138001,
    VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT = 1000138002,
    VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT = 1000138003,
    VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT = 1000143000,
    VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT = 1000143001,
    VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT = 1000143002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT = 1000143003,
    VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT = 1000143004,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT = 1000148000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT = 1000148001,
    VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT = 1000148002,
    VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV = 1000149000,
    VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR = 1000150007,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR = 1000150000,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR = 1000150002,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR = 1000150003,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR = 1000150004,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR = 1000150005,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR = 1000150006,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR = 1000150009,
    VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR = 1000150010,
    VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR = 1000150011,
    VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR = 1000150012,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR = 1000150013,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR = 1000150014,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR = 1000150017,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR = 1000150020,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR = 1000347000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR = 1000347001,
    VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR = 1000150015,
    VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR = 1000150016,
    VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR = 1000150018,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR = 1000348013,
    VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV = 1000152000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV = 1000154000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV = 1000154001,
    VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT = 1000158000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT = 1000158002,
    VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT = 1000158003,
    VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT = 1000158004,
    VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT = 1000158005,
    VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT = 1000160000,
    VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT = 1000160001,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR = 1000163000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR = 1000163001,
#endif
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV = 1000164000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV = 1000164001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV = 1000164002,
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV = 1000164005,
    VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV = 1000165000,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV = 1000165001,
    VK_STRUCTURE_TYPE_GEOMETRY_NV = 1000165003,
    VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV = 1000165004,
    VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV = 1000165005,
    VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV = 1000165006,
    VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV = 1000165007,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV = 1000165008,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV = 1000165009,
    VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV = 1000165011,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV = 1000165012,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV = 1000166000,
    VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV = 1000166001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT = 1000170000,
    VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT = 1000170001,
    VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT = 1000174000,
    VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT = 1000178000,
    VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT = 1000178001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT = 1000178002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR = 1000181000,
    VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD = 1000183000,
    VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT = 1000184000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD = 1000185000,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_EXT = 1000187000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_CREATE_INFO_EXT = 1000187001,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_EXT = 1000187002,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_EXT = 1000187003,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_EXT = 1000187004,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_EXT = 1000187005,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_EXT = 1000187006,
#endif
    VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD = 1000189000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT = 1000190000,
    VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT = 1000190001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT = 1000190002,
    VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP = 1000191000,
    VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT = 1000192000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV = 1000201000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV = 1000202000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV = 1000202001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV = 1000203000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV = 1000204000,
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV = 1000205000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV = 1000205002,
    VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV = 1000206000,
    VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV = 1000206001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL = 1000209000,
    VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL = 1000210000,
    VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL = 1000210001,
    VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL = 1000210002,
    VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL = 1000210003,
    VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL = 1000210004,
    VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL = 1000210005,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT = 1000212000,
    VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD = 1000213000,
    VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD = 1000213001,
    VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA = 1000214000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES_KHR = 1000215000,
    VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT = 1000217000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT = 1000218000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT = 1000218001,
    VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT = 1000218002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT = 1000225000,
    VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT = 1000225001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT = 1000225002,
    VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR = 1000226000,
    VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR = 1000226001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR = 1000226002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR = 1000226003,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR = 1000226004,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD = 1000227000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD = 1000229000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT = 1000234000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT = 1000237000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT = 1000238000,
    VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT = 1000238001,
    VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR = 1000239000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV = 1000240000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT = 1000244000,
    VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT = 1000244002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT = 1000245000,
    VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT = 1000247000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR = 1000248000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV = 1000249000,
    VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV = 1000249001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV = 1000249002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV = 1000250000,
    VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV = 1000250001,
    VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV = 1000250002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT = 1000251000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT = 1000252000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT = 1000254000,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT = 1000254001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT = 1000254002,
    VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT = 1000255000,
    VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT = 1000255002,
    VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT = 1000255001,
    VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT = 1000256000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT = 1000259000,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT = 1000259001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT = 1000259002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT = 1000260000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT = 1000265000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT = 1000267000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR = 1000269000,
    VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR = 1000269001,
    VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR = 1000269002,
    VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR = 1000269003,
    VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR = 1000269004,
    VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR = 1000269005,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT = 1000273000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT = 1000276000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV = 1000277000,
    VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV = 1000277001,
    VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV = 1000277002,
    VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV = 1000277003,
    VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV = 1000277004,
    VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV = 1000277005,
    VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV = 1000277006,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV = 1000277007,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV = 1000278000,
    VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV = 1000278001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES_KHR = 1000280000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES_KHR = 1000280001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT = 1000281000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT = 1000281001,
    VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM = 1000282000,
    VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM = 1000282001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT = 1000284000,
    VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT = 1000284001,
    VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT = 1000284002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT = 1000286000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT = 1000286001,
    VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT = 1000287000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT = 1000287001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT = 1000287002,
    VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR = 1000290000,
    VK_STRUCTURE_TYPE_PRESENT_ID_KHR = 1000294000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR = 1000294001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT = 1000295000,
    VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO_EXT = 1000295001,
    VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO_EXT = 1000295002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT = 1000297000,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_ENCODE_INFO_KHR = 1000299000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR = 1000299001,
#endif
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV = 1000300000,
    VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV = 1000300001,
    VK_STRUCTURE_TYPE_MEMORY_BARRIER_2_KHR = 1000314000,
    VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2_KHR = 1000314001,
    VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2_KHR = 1000314002,
    VK_STRUCTURE_TYPE_DEPENDENCY_INFO_KHR = 1000314003,
    VK_STRUCTURE_TYPE_SUBMIT_INFO_2_KHR = 1000314004,
    VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO_KHR = 1000314005,
    VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO_KHR = 1000314006,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES_KHR = 1000314007,
    VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV = 1000314008,
    VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV = 1000314009,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_KHR = 1000320000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_KHR = 1000320001,
    VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_KHR = 1000320002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR = 1000323000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES_KHR = 1000325000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV = 1000326000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV = 1000326001,
    VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV = 1000326002,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV = 1000327000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV = 1000327001,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV = 1000327002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT = 1000330000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT = 1000332000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT = 1000332001,
    VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM = 1000333000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT = 1000335000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR = 1000336000,
    VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2_KHR = 1000337000,
    VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2_KHR = 1000337001,
    VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2_KHR = 1000337002,
    VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2_KHR = 1000337003,
    VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2_KHR = 1000337004,
    VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2_KHR = 1000337005,
    VK_STRUCTURE_TYPE_BUFFER_COPY_2_KHR = 1000337006,
    VK_STRUCTURE_TYPE_IMAGE_COPY_2_KHR = 1000337007,
    VK_STRUCTURE_TYPE_IMAGE_BLIT_2_KHR = 1000337008,
    VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2_KHR = 1000337009,
    VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2_KHR = 1000337010,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT = 1000340000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT = 1000344000,
    VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT = 1000346000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_VALVE = 1000351000,
    VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_VALVE = 1000351002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT = 1000352000,
    VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT = 1000352001,
    VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT = 1000352002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT = 1000353000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT = 1000356000,
    VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_EXTENDED_KHR = 1000360000,
    VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA = 1000364000,
    VK_STRUCTURE_TYPE_MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA = 1000364001,
    VK_STRUCTURE_TYPE_MEMORY_GET_ZIRCON_HANDLE_INFO_FUCHSIA = 1000364002,
    VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_ZIRCON_HANDLE_INFO_FUCHSIA = 1000365000,
    VK_STRUCTURE_TYPE_SEMAPHORE_GET_ZIRCON_HANDLE_INFO_FUCHSIA = 1000365001,
    VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI = 1000369000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI = 1000369001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI = 1000369002,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI = 1000370000,
    VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV = 1000371000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV = 1000371001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT = 1000377000,
    VK_STRUCTURE_TYPE_SCREEN_SURFACE_CREATE_INFO_QNX = 1000378000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT = 1000381000,
    VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT = 1000381001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_EXT = 1000388000,
    VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_EXT = 1000388001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT = 1000392000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT = 1000392001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT = 1000411000,
    VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT = 1000411001,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT = 1000412000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES_KHR = 1000413000,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES_KHR = 1000413001,
    VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS_KHR = 1000413002,
    VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS_KHR = 1000413003,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES,
    VK_STRUCTURE_TYPE_DEBUG_REPORT_CREATE_INFO_EXT = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT,
    VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2,
    VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2,
    VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR = VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2,
    VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR = VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2,
    VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR = VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2,
    VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHR = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHR = VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHR = VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHR = VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHR = VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO,
    VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO_KHR = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO,
    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO_KHR = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO,
    VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHR = VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO,
    VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHR = VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES,
    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO,
    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO,
    VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHR = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO,
    VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR = VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES,
    VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT16_INT8_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES,
    VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO,
    VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES,
    VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO,
    VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR = VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO,
    VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR = VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO,
    VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR = VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2,
    VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR = VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2,
    VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR = VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2,
    VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR = VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2,
    VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2,
    VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR = VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO,
    VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR = VK_STRUCTURE_TYPE_SUBPASS_END_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO,
    VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES_KHR = VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES,
    VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES,
    VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO,
    VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO,
    VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES_KHR,
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS,
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES,
    VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT = VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO,
    VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR = VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2,
    VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR = VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2,
    VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR = VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2,
    VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2,
    VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR = VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2,
    VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO_KHR = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO,
    VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO_KHR = VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO,
    VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO_KHR = VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES_KHR = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES,
    VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHR = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO,
    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHR = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT_KHR = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES,
    VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR = VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES,
    VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO,
    VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO_KHR = VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO,
    VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO_KHR = VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO,
    VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO_KHR = VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO,
    VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL = VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES,
    VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT_KHR = VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT,
    VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT_KHR = VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_ADDRESS_FEATURES_EXT = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT,
    VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO,
    VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT = VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_KHR = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES,
    VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_KHR = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO,
    VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO_KHR = VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO,
    VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO_KHR = VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO,
    VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO_KHR = VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES,
    VK_STRUCTURE_TYPE_MAX_ENUM = 0x7FFFFFFF
} VkStructureType;

typedef enum VkImageLayout {
    VK_IMAGE_LAYOUT_UNDEFINED = 0,
    VK_IMAGE_LAYOUT_GENERAL = 1,
    VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL = 2,
    VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL = 3,
    VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL = 4,
    VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL = 5,
    VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL = 6,
    VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL = 7,
    VK_IMAGE_LAYOUT_PREINITIALIZED = 8,
    VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL = 1000117000,
    VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL = 1000117001,
    VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL = 1000241000,
    VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL = 1000241001,
    VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL = 1000241002,
    VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL = 1000241003,
    VK_IMAGE_LAYOUT_PRESENT_SRC_KHR = 1000001002,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_LAYOUT_VIDEO_DECODE_DST_KHR = 1000024000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_LAYOUT_VIDEO_DECODE_SRC_KHR = 1000024001,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_LAYOUT_VIDEO_DECODE_DPB_KHR = 1000024002,
#endif
    VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR = 1000111000,
    VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT = 1000218000,
    VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR = 1000164003,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_LAYOUT_VIDEO_ENCODE_DST_KHR = 1000299000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_LAYOUT_VIDEO_ENCODE_SRC_KHR = 1000299001,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_LAYOUT_VIDEO_ENCODE_DPB_KHR = 1000299002,
#endif
    VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL_KHR = 1000314000,
    VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL_KHR = 1000314001,
    VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR = VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL,
    VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR = VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL,
    VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV = VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR,
    VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL_KHR = VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL,
    VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL_KHR = VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL,
    VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL_KHR = VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL,
    VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL_KHR = VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL,
    VK_IMAGE_LAYOUT_MAX_ENUM = 0x7FFFFFFF
} VkImageLayout;

typedef enum VkObjectType {
    VK_OBJECT_TYPE_UNKNOWN = 0,
    VK_OBJECT_TYPE_INSTANCE = 1,
    VK_OBJECT_TYPE_PHYSICAL_DEVICE = 2,
    VK_OBJECT_TYPE_DEVICE = 3,
    VK_OBJECT_TYPE_QUEUE = 4,
    VK_OBJECT_TYPE_SEMAPHORE = 5,
    VK_OBJECT_TYPE_COMMAND_BUFFER = 6,
    VK_OBJECT_TYPE_FENCE = 7,
    VK_OBJECT_TYPE_DEVICE_MEMORY = 8,
    VK_OBJECT_TYPE_BUFFER = 9,
    VK_OBJECT_TYPE_IMAGE = 10,
    VK_OBJECT_TYPE_EVENT = 11,
    VK_OBJECT_TYPE_QUERY_POOL = 12,
    VK_OBJECT_TYPE_BUFFER_VIEW = 13,
    VK_OBJECT_TYPE_IMAGE_VIEW = 14,
    VK_OBJECT_TYPE_SHADER_MODULE = 15,
    VK_OBJECT_TYPE_PIPELINE_CACHE = 16,
    VK_OBJECT_TYPE_PIPELINE_LAYOUT = 17,
    VK_OBJECT_TYPE_RENDER_PASS = 18,
    VK_OBJECT_TYPE_PIPELINE = 19,
    VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT = 20,
    VK_OBJECT_TYPE_SAMPLER = 21,
    VK_OBJECT_TYPE_DESCRIPTOR_POOL = 22,
    VK_OBJECT_TYPE_DESCRIPTOR_SET = 23,
    VK_OBJECT_TYPE_FRAMEBUFFER = 24,
    VK_OBJECT_TYPE_COMMAND_POOL = 25,
    VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION = 1000156000,
    VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE = 1000085000,
    VK_OBJECT_TYPE_SURFACE_KHR = 1000000000,
    VK_OBJECT_TYPE_SWAPCHAIN_KHR = 1000001000,
    VK_OBJECT_TYPE_DISPLAY_KHR = 1000002000,
    VK_OBJECT_TYPE_DISPLAY_MODE_KHR = 1000002001,
    VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT = 1000011000,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_OBJECT_TYPE_VIDEO_SESSION_KHR = 1000023000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_OBJECT_TYPE_VIDEO_SESSION_PARAMETERS_KHR = 1000023001,
#endif
    VK_OBJECT_TYPE_CU_MODULE_NVX = 1000029000,
    VK_OBJECT_TYPE_CU_FUNCTION_NVX = 1000029001,
    VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT = 1000128000,
    VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR = 1000150000,
    VK_OBJECT_TYPE_VALIDATION_CACHE_EXT = 1000160000,
    VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV = 1000165000,
    VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL = 1000210000,
    VK_OBJECT_TYPE_DEFERRED_OPERATION_KHR = 1000268000,
    VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NV = 1000277000,
    VK_OBJECT_TYPE_PRIVATE_DATA_SLOT_EXT = 1000295000,
    VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR = VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE,
    VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR = VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION,
    VK_OBJECT_TYPE_MAX_ENUM = 0x7FFFFFFF
} VkObjectType;

typedef enum VkPipelineCacheHeaderVersion {
    VK_PIPELINE_CACHE_HEADER_VERSION_ONE = 1,
    VK_PIPELINE_CACHE_HEADER_VERSION_MAX_ENUM = 0x7FFFFFFF
} VkPipelineCacheHeaderVersion;

typedef enum VkVendorId {
    VK_VENDOR_ID_VIV = 0x10001,
    VK_VENDOR_ID_VSI = 0x10002,
    VK_VENDOR_ID_KAZAN = 0x10003,
    VK_VENDOR_ID_CODEPLAY = 0x10004,
    VK_VENDOR_ID_MESA = 0x10005,
    VK_VENDOR_ID_POCL = 0x10006,
    VK_VENDOR_ID_MAX_ENUM = 0x7FFFFFFF
} VkVendorId;

typedef enum VkSystemAllocationScope {
    VK_SYSTEM_ALLOCATION_SCOPE_COMMAND = 0,
    VK_SYSTEM_ALLOCATION_SCOPE_OBJECT = 1,
    VK_SYSTEM_ALLOCATION_SCOPE_CACHE = 2,
    VK_SYSTEM_ALLOCATION_SCOPE_DEVICE = 3,
    VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE = 4,
    VK_SYSTEM_ALLOCATION_SCOPE_MAX_ENUM = 0x7FFFFFFF
} VkSystemAllocationScope;

typedef enum VkInternalAllocationType {
    VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE = 0,
    VK_INTERNAL_ALLOCATION_TYPE_MAX_ENUM = 0x7FFFFFFF
} VkInternalAllocationType;

typedef enum VkFormat {
    VK_FORMAT_UNDEFINED = 0,
    VK_FORMAT_R4G4_UNORM_PACK8 = 1,
    VK_FORMAT_R4G4B4A4_UNORM_PACK16 = 2,
    VK_FORMAT_B4G4R4A4_UNORM_PACK16 = 3,
    VK_FORMAT_R5G6B5_UNORM_PACK16 = 4,
    VK_FORMAT_B5G6R5_UNORM_PACK16 = 5,
    VK_FORMAT_R5G5B5A1_UNORM_PACK16 = 6,
    VK_FORMAT_B5G5R5A1_UNORM_PACK16 = 7,
    VK_FORMAT_A1R5G5B5_UNORM_PACK16 = 8,
    VK_FORMAT_R8_UNORM = 9,
    VK_FORMAT_R8_SNORM = 10,
    VK_FORMAT_R8_USCALED = 11,
    VK_FORMAT_R8_SSCALED = 12,
    VK_FORMAT_R8_UINT = 13,
    VK_FORMAT_R8_SINT = 14,
    VK_FORMAT_R8_SRGB = 15,
    VK_FORMAT_R8G8_UNORM = 16,
    VK_FORMAT_R8G8_SNORM = 17,
    VK_FORMAT_R8G8_USCALED = 18,
    VK_FORMAT_R8G8_SSCALED = 19,
    VK_FORMAT_R8G8_UINT = 20,
    VK_FORMAT_R8G8_SINT = 21,
    VK_FORMAT_R8G8_SRGB = 22,
    VK_FORMAT_R8G8B8_UNORM = 23,
    VK_FORMAT_R8G8B8_SNORM = 24,
    VK_FORMAT_R8G8B8_USCALED = 25,
    VK_FORMAT_R8G8B8_SSCALED = 26,
    VK_FORMAT_R8G8B8_UINT = 27,
    VK_FORMAT_R8G8B8_SINT = 28,
    VK_FORMAT_R8G8B8_SRGB = 29,
    VK_FORMAT_B8G8R8_UNORM = 30,
    VK_FORMAT_B8G8R8_SNORM = 31,
    VK_FORMAT_B8G8R8_USCALED = 32,
    VK_FORMAT_B8G8R8_SSCALED = 33,
    VK_FORMAT_B8G8R8_UINT = 34,
    VK_FORMAT_B8G8R8_SINT = 35,
    VK_FORMAT_B8G8R8_SRGB = 36,
    VK_FORMAT_R8G8B8A8_UNORM = 37,
    VK_FORMAT_R8G8B8A8_SNORM = 38,
    VK_FORMAT_R8G8B8A8_USCALED = 39,
    VK_FORMAT_R8G8B8A8_SSCALED = 40,
    VK_FORMAT_R8G8B8A8_UINT = 41,
    VK_FORMAT_R8G8B8A8_SINT = 42,
    VK_FORMAT_R8G8B8A8_SRGB = 43,
    VK_FORMAT_B8G8R8A8_UNORM = 44,
    VK_FORMAT_B8G8R8A8_SNORM = 45,
    VK_FORMAT_B8G8R8A8_USCALED = 46,
    VK_FORMAT_B8G8R8A8_SSCALED = 47,
    VK_FORMAT_B8G8R8A8_UINT = 48,
    VK_FORMAT_B8G8R8A8_SINT = 49,
    VK_FORMAT_B8G8R8A8_SRGB = 50,
    VK_FORMAT_A8B8G8R8_UNORM_PACK32 = 51,
    VK_FORMAT_A8B8G8R8_SNORM_PACK32 = 52,
    VK_FORMAT_A8B8G8R8_USCALED_PACK32 = 53,
    VK_FORMAT_A8B8G8R8_SSCALED_PACK32 = 54,
    VK_FORMAT_A8B8G8R8_UINT_PACK32 = 55,
    VK_FORMAT_A8B8G8R8_SINT_PACK32 = 56,
    VK_FORMAT_A8B8G8R8_SRGB_PACK32 = 57,
    VK_FORMAT_A2R10G10B10_UNORM_PACK32 = 58,
    VK_FORMAT_A2R10G10B10_SNORM_PACK32 = 59,
    VK_FORMAT_A2R10G10B10_USCALED_PACK32 = 60,
    VK_FORMAT_A2R10G10B10_SSCALED_PACK32 = 61,
    VK_FORMAT_A2R10G10B10_UINT_PACK32 = 62,
    VK_FORMAT_A2R10G10B10_SINT_PACK32 = 63,
    VK_FORMAT_A2B10G10R10_UNORM_PACK32 = 64,
    VK_FORMAT_A2B10G10R10_SNORM_PACK32 = 65,
    VK_FORMAT_A2B10G10R10_USCALED_PACK32 = 66,
    VK_FORMAT_A2B10G10R10_SSCALED_PACK32 = 67,
    VK_FORMAT_A2B10G10R10_UINT_PACK32 = 68,
    VK_FORMAT_A2B10G10R10_SINT_PACK32 = 69,
    VK_FORMAT_R16_UNORM = 70,
    VK_FORMAT_R16_SNORM = 71,
    VK_FORMAT_R16_USCALED = 72,
    VK_FORMAT_R16_SSCALED = 73,
    VK_FORMAT_R16_UINT = 74,
    VK_FORMAT_R16_SINT = 75,
    VK_FORMAT_R16_SFLOAT = 76,
    VK_FORMAT_R16G16_UNORM = 77,
    VK_FORMAT_R16G16_SNORM = 78,
    VK_FORMAT_R16G16_USCALED = 79,
    VK_FORMAT_R16G16_SSCALED = 80,
    VK_FORMAT_R16G16_UINT = 81,
    VK_FORMAT_R16G16_SINT = 82,
    VK_FORMAT_R16G16_SFLOAT = 83,
    VK_FORMAT_R16G16B16_UNORM = 84,
    VK_FORMAT_R16G16B16_SNORM = 85,
    VK_FORMAT_R16G16B16_USCALED = 86,
    VK_FORMAT_R16G16B16_SSCALED = 87,
    VK_FORMAT_R16G16B16_UINT = 88,
    VK_FORMAT_R16G16B16_SINT = 89,
    VK_FORMAT_R16G16B16_SFLOAT = 90,
    VK_FORMAT_R16G16B16A16_UNORM = 91,
    VK_FORMAT_R16G16B16A16_SNORM = 92,
    VK_FORMAT_R16G16B16A16_USCALED = 93,
    VK_FORMAT_R16G16B16A16_SSCALED = 94,
    VK_FORMAT_R16G16B16A16_UINT = 95,
    VK_FORMAT_R16G16B16A16_SINT = 96,
    VK_FORMAT_R16G16B16A16_SFLOAT = 97,
    VK_FORMAT_R32_UINT = 98,
    VK_FORMAT_R32_SINT = 99,
    VK_FORMAT_R32_SFLOAT = 100,
    VK_FORMAT_R32G32_UINT = 101,
    VK_FORMAT_R32G32_SINT = 102,
    VK_FORMAT_R32G32_SFLOAT = 103,
    VK_FORMAT_R32G32B32_UINT = 104,
    VK_FORMAT_R32G32B32_SINT = 105,
    VK_FORMAT_R32G32B32_SFLOAT = 106,
    VK_FORMAT_R32G32B32A32_UINT = 107,
    VK_FORMAT_R32G32B32A32_SINT = 108,
    VK_FORMAT_R32G32B32A32_SFLOAT = 109,
    VK_FORMAT_R64_UINT = 110,
    VK_FORMAT_R64_SINT = 111,
    VK_FORMAT_R64_SFLOAT = 112,
    VK_FORMAT_R64G64_UINT = 113,
    VK_FORMAT_R64G64_SINT = 114,
    VK_FORMAT_R64G64_SFLOAT = 115,
    VK_FORMAT_R64G64B64_UINT = 116,
    VK_FORMAT_R64G64B64_SINT = 117,
    VK_FORMAT_R64G64B64_SFLOAT = 118,
    VK_FORMAT_R64G64B64A64_UINT = 119,
    VK_FORMAT_R64G64B64A64_SINT = 120,
    VK_FORMAT_R64G64B64A64_SFLOAT = 121,
    VK_FORMAT_B10G11R11_UFLOAT_PACK32 = 122,
    VK_FORMAT_E5B9G9R9_UFLOAT_PACK32 = 123,
    VK_FORMAT_D16_UNORM = 124,
    VK_FORMAT_X8_D24_UNORM_PACK32 = 125,
    VK_FORMAT_D32_SFLOAT = 126,
    VK_FORMAT_S8_UINT = 127,
    VK_FORMAT_D16_UNORM_S8_UINT = 128,
    VK_FORMAT_D24_UNORM_S8_UINT = 129,
    VK_FORMAT_D32_SFLOAT_S8_UINT = 130,
    VK_FORMAT_BC1_RGB_UNORM_BLOCK = 131,
    VK_FORMAT_BC1_RGB_SRGB_BLOCK = 132,
    VK_FORMAT_BC1_RGBA_UNORM_BLOCK = 133,
    VK_FORMAT_BC1_RGBA_SRGB_BLOCK = 134,
    VK_FORMAT_BC2_UNORM_BLOCK = 135,
    VK_FORMAT_BC2_SRGB_BLOCK = 136,
    VK_FORMAT_BC3_UNORM_BLOCK = 137,
    VK_FORMAT_BC3_SRGB_BLOCK = 138,
    VK_FORMAT_BC4_UNORM_BLOCK = 139,
    VK_FORMAT_BC4_SNORM_BLOCK = 140,
    VK_FORMAT_BC5_UNORM_BLOCK = 141,
    VK_FORMAT_BC5_SNORM_BLOCK = 142,
    VK_FORMAT_BC6H_UFLOAT_BLOCK = 143,
    VK_FORMAT_BC6H_SFLOAT_BLOCK = 144,
    VK_FORMAT_BC7_UNORM_BLOCK = 145,
    VK_FORMAT_BC7_SRGB_BLOCK = 146,
    VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK = 147,
    VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK = 148,
    VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK = 149,
    VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK = 150,
    VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK = 151,
    VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK = 152,
    VK_FORMAT_EAC_R11_UNORM_BLOCK = 153,
    VK_FORMAT_EAC_R11_SNORM_BLOCK = 154,
    VK_FORMAT_EAC_R11G11_UNORM_BLOCK = 155,
    VK_FORMAT_EAC_R11G11_SNORM_BLOCK = 156,
    VK_FORMAT_ASTC_4x4_UNORM_BLOCK = 157,
    VK_FORMAT_ASTC_4x4_SRGB_BLOCK = 158,
    VK_FORMAT_ASTC_5x4_UNORM_BLOCK = 159,
    VK_FORMAT_ASTC_5x4_SRGB_BLOCK = 160,
    VK_FORMAT_ASTC_5x5_UNORM_BLOCK = 161,
    VK_FORMAT_ASTC_5x5_SRGB_BLOCK = 162,
    VK_FORMAT_ASTC_6x5_UNORM_BLOCK = 163,
    VK_FORMAT_ASTC_6x5_SRGB_BLOCK = 164,
    VK_FORMAT_ASTC_6x6_UNORM_BLOCK = 165,
    VK_FORMAT_ASTC_6x6_SRGB_BLOCK = 166,
    VK_FORMAT_ASTC_8x5_UNORM_BLOCK = 167,
    VK_FORMAT_ASTC_8x5_SRGB_BLOCK = 168,
    VK_FORMAT_ASTC_8x6_UNORM_BLOCK = 169,
    VK_FORMAT_ASTC_8x6_SRGB_BLOCK = 170,
    VK_FORMAT_ASTC_8x8_UNORM_BLOCK = 171,
    VK_FORMAT_ASTC_8x8_SRGB_BLOCK = 172,
    VK_FORMAT_ASTC_10x5_UNORM_BLOCK = 173,
    VK_FORMAT_ASTC_10x5_SRGB_BLOCK = 174,
    VK_FORMAT_ASTC_10x6_UNORM_BLOCK = 175,
    VK_FORMAT_ASTC_10x6_SRGB_BLOCK = 176,
    VK_FORMAT_ASTC_10x8_UNORM_BLOCK = 177,
    VK_FORMAT_ASTC_10x8_SRGB_BLOCK = 178,
    VK_FORMAT_ASTC_10x10_UNORM_BLOCK = 179,
    VK_FORMAT_ASTC_10x10_SRGB_BLOCK = 180,
    VK_FORMAT_ASTC_12x10_UNORM_BLOCK = 181,
    VK_FORMAT_ASTC_12x10_SRGB_BLOCK = 182,
    VK_FORMAT_ASTC_12x12_UNORM_BLOCK = 183,
    VK_FORMAT_ASTC_12x12_SRGB_BLOCK = 184,
    VK_FORMAT_G8B8G8R8_422_UNORM = 1000156000,
    VK_FORMAT_B8G8R8G8_422_UNORM = 1000156001,
    VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM = 1000156002,
    VK_FORMAT_G8_B8R8_2PLANE_420_UNORM = 1000156003,
    VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM = 1000156004,
    VK_FORMAT_G8_B8R8_2PLANE_422_UNORM = 1000156005,
    VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM = 1000156006,
    VK_FORMAT_R10X6_UNORM_PACK16 = 1000156007,
    VK_FORMAT_R10X6G10X6_UNORM_2PACK16 = 1000156008,
    VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16 = 1000156009,
    VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16 = 1000156010,
    VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16 = 1000156011,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16 = 1000156012,
    VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16 = 1000156013,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16 = 1000156014,
    VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16 = 1000156015,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16 = 1000156016,
    VK_FORMAT_R12X4_UNORM_PACK16 = 1000156017,
    VK_FORMAT_R12X4G12X4_UNORM_2PACK16 = 1000156018,
    VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16 = 1000156019,
    VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16 = 1000156020,
    VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16 = 1000156021,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16 = 1000156022,
    VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16 = 1000156023,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16 = 1000156024,
    VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16 = 1000156025,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16 = 1000156026,
    VK_FORMAT_G16B16G16R16_422_UNORM = 1000156027,
    VK_FORMAT_B16G16R16G16_422_UNORM = 1000156028,
    VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM = 1000156029,
    VK_FORMAT_G16_B16R16_2PLANE_420_UNORM = 1000156030,
    VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM = 1000156031,
    VK_FORMAT_G16_B16R16_2PLANE_422_UNORM = 1000156032,
    VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM = 1000156033,
    VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG = 1000054000,
    VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG = 1000054001,
    VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG = 1000054002,
    VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG = 1000054003,
    VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG = 1000054004,
    VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG = 1000054005,
    VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG = 1000054006,
    VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG = 1000054007,
    VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT = 1000066000,
    VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT = 1000066001,
    VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT = 1000066002,
    VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT = 1000066003,
    VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT = 1000066004,
    VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT = 1000066005,
    VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT = 1000066006,
    VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT = 1000066007,
    VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT = 1000066008,
    VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT = 1000066009,
    VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT = 1000066010,
    VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT = 1000066011,
    VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT = 1000066012,
    VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT = 1000066013,
    VK_FORMAT_G8_B8R8_2PLANE_444_UNORM_EXT = 1000330000,
    VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16_EXT = 1000330001,
    VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16_EXT = 1000330002,
    VK_FORMAT_G16_B16R16_2PLANE_444_UNORM_EXT = 1000330003,
    VK_FORMAT_A4R4G4B4_UNORM_PACK16_EXT = 1000340000,
    VK_FORMAT_A4B4G4R4_UNORM_PACK16_EXT = 1000340001,
    VK_FORMAT_G8B8G8R8_422_UNORM_KHR = VK_FORMAT_G8B8G8R8_422_UNORM,
    VK_FORMAT_B8G8R8G8_422_UNORM_KHR = VK_FORMAT_B8G8R8G8_422_UNORM,
    VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM_KHR = VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM,
    VK_FORMAT_G8_B8R8_2PLANE_420_UNORM_KHR = VK_FORMAT_G8_B8R8_2PLANE_420_UNORM,
    VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM_KHR = VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM,
    VK_FORMAT_G8_B8R8_2PLANE_422_UNORM_KHR = VK_FORMAT_G8_B8R8_2PLANE_422_UNORM,
    VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM_KHR = VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM,
    VK_FORMAT_R10X6_UNORM_PACK16_KHR = VK_FORMAT_R10X6_UNORM_PACK16,
    VK_FORMAT_R10X6G10X6_UNORM_2PACK16_KHR = VK_FORMAT_R10X6G10X6_UNORM_2PACK16,
    VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16_KHR = VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16,
    VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16_KHR = VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16,
    VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16_KHR = VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16_KHR = VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16,
    VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16_KHR = VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16_KHR = VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16,
    VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16_KHR = VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16_KHR = VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16,
    VK_FORMAT_R12X4_UNORM_PACK16_KHR = VK_FORMAT_R12X4_UNORM_PACK16,
    VK_FORMAT_R12X4G12X4_UNORM_2PACK16_KHR = VK_FORMAT_R12X4G12X4_UNORM_2PACK16,
    VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16_KHR = VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16,
    VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16_KHR = VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16,
    VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16_KHR = VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16_KHR = VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16,
    VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16_KHR = VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16_KHR = VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16,
    VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16_KHR = VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16_KHR = VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16,
    VK_FORMAT_G16B16G16R16_422_UNORM_KHR = VK_FORMAT_G16B16G16R16_422_UNORM,
    VK_FORMAT_B16G16R16G16_422_UNORM_KHR = VK_FORMAT_B16G16R16G16_422_UNORM,
    VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM_KHR = VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM,
    VK_FORMAT_G16_B16R16_2PLANE_420_UNORM_KHR = VK_FORMAT_G16_B16R16_2PLANE_420_UNORM,
    VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM_KHR = VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM,
    VK_FORMAT_G16_B16R16_2PLANE_422_UNORM_KHR = VK_FORMAT_G16_B16R16_2PLANE_422_UNORM,
    VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM_KHR = VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM,
    VK_FORMAT_MAX_ENUM = 0x7FFFFFFF
} VkFormat;

typedef enum VkImageTiling {
    VK_IMAGE_TILING_OPTIMAL = 0,
    VK_IMAGE_TILING_LINEAR = 1,
    VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT = 1000158000,
    VK_IMAGE_TILING_MAX_ENUM = 0x7FFFFFFF
} VkImageTiling;

typedef enum VkImageType {
    VK_IMAGE_TYPE_1D = 0,
    VK_IMAGE_TYPE_2D = 1,
    VK_IMAGE_TYPE_3D = 2,
    VK_IMAGE_TYPE_MAX_ENUM = 0x7FFFFFFF
} VkImageType;

typedef enum VkPhysicalDeviceType {
    VK_PHYSICAL_DEVICE_TYPE_OTHER = 0,
    VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU = 1,
    VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU = 2,
    VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU = 3,
    VK_PHYSICAL_DEVICE_TYPE_CPU = 4,
    VK_PHYSICAL_DEVICE_TYPE_MAX_ENUM = 0x7FFFFFFF
} VkPhysicalDeviceType;

typedef enum VkQueryType {
    VK_QUERY_TYPE_OCCLUSION = 0,
    VK_QUERY_TYPE_PIPELINE_STATISTICS = 1,
    VK_QUERY_TYPE_TIMESTAMP = 2,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_QUERY_TYPE_RESULT_STATUS_ONLY_KHR = 1000023000,
#endif
    VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT = 1000028004,
    VK_QUERY_TYPE_PERFORMANCE_QUERY_KHR = 1000116000,
    VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR = 1000150000,
    VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SERIALIZATION_SIZE_KHR = 1000150001,
    VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV = 1000165000,
    VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL = 1000210000,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_QUERY_TYPE_VIDEO_ENCODE_BITSTREAM_BUFFER_RANGE_KHR = 1000299000,
#endif
    VK_QUERY_TYPE_MAX_ENUM = 0x7FFFFFFF
} VkQueryType;

typedef enum VkSharingMode {
    VK_SHARING_MODE_EXCLUSIVE = 0,
    VK_SHARING_MODE_CONCURRENT = 1,
    VK_SHARING_MODE_MAX_ENUM = 0x7FFFFFFF
} VkSharingMode;

typedef enum VkComponentSwizzle {
    VK_COMPONENT_SWIZZLE_IDENTITY = 0,
    VK_COMPONENT_SWIZZLE_ZERO = 1,
    VK_COMPONENT_SWIZZLE_ONE = 2,
    VK_COMPONENT_SWIZZLE_R = 3,
    VK_COMPONENT_SWIZZLE_G = 4,
    VK_COMPONENT_SWIZZLE_B = 5,
    VK_COMPONENT_SWIZZLE_A = 6,
    VK_COMPONENT_SWIZZLE_MAX_ENUM = 0x7FFFFFFF
} VkComponentSwizzle;

typedef enum VkImageViewType {
    VK_IMAGE_VIEW_TYPE_1D = 0,
    VK_IMAGE_VIEW_TYPE_2D = 1,
    VK_IMAGE_VIEW_TYPE_3D = 2,
    VK_IMAGE_VIEW_TYPE_CUBE = 3,
    VK_IMAGE_VIEW_TYPE_1D_ARRAY = 4,
    VK_IMAGE_VIEW_TYPE_2D_ARRAY = 5,
    VK_IMAGE_VIEW_TYPE_CUBE_ARRAY = 6,
    VK_IMAGE_VIEW_TYPE_MAX_ENUM = 0x7FFFFFFF
} VkImageViewType;

typedef enum VkBlendFactor {
    VK_BLEND_FACTOR_ZERO = 0,
    VK_BLEND_FACTOR_ONE = 1,
    VK_BLEND_FACTOR_SRC_COLOR = 2,
    VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR = 3,
    VK_BLEND_FACTOR_DST_COLOR = 4,
    VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR = 5,
    VK_BLEND_FACTOR_SRC_ALPHA = 6,
    VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA = 7,
    VK_BLEND_FACTOR_DST_ALPHA = 8,
    VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA = 9,
    VK_BLEND_FACTOR_CONSTANT_COLOR = 10,
    VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR = 11,
    VK_BLEND_FACTOR_CONSTANT_ALPHA = 12,
    VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA = 13,
    VK_BLEND_FACTOR_SRC_ALPHA_SATURATE = 14,
    VK_BLEND_FACTOR_SRC1_COLOR = 15,
    VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR = 16,
    VK_BLEND_FACTOR_SRC1_ALPHA = 17,
    VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA = 18,
    VK_BLEND_FACTOR_MAX_ENUM = 0x7FFFFFFF
} VkBlendFactor;

typedef enum VkBlendOp {
    VK_BLEND_OP_ADD = 0,
    VK_BLEND_OP_SUBTRACT = 1,
    VK_BLEND_OP_REVERSE_SUBTRACT = 2,
    VK_BLEND_OP_MIN = 3,
    VK_BLEND_OP_MAX = 4,
    VK_BLEND_OP_ZERO_EXT = 1000148000,
    VK_BLEND_OP_SRC_EXT = 1000148001,
    VK_BLEND_OP_DST_EXT = 1000148002,
    VK_BLEND_OP_SRC_OVER_EXT = 1000148003,
    VK_BLEND_OP_DST_OVER_EXT = 1000148004,
    VK_BLEND_OP_SRC_IN_EXT = 1000148005,
    VK_BLEND_OP_DST_IN_EXT = 1000148006,
    VK_BLEND_OP_SRC_OUT_EXT = 1000148007,
    VK_BLEND_OP_DST_OUT_EXT = 1000148008,
    VK_BLEND_OP_SRC_ATOP_EXT = 1000148009,
    VK_BLEND_OP_DST_ATOP_EXT = 1000148010,
    VK_BLEND_OP_XOR_EXT = 1000148011,
    VK_BLEND_OP_MULTIPLY_EXT = 1000148012,
    VK_BLEND_OP_SCREEN_EXT = 1000148013,
    VK_BLEND_OP_OVERLAY_EXT = 1000148014,
    VK_BLEND_OP_DARKEN_EXT = 1000148015,
    VK_BLEND_OP_LIGHTEN_EXT = 1000148016,
    VK_BLEND_OP_COLORDODGE_EXT = 1000148017,
    VK_BLEND_OP_COLORBURN_EXT = 1000148018,
    VK_BLEND_OP_HARDLIGHT_EXT = 1000148019,
    VK_BLEND_OP_SOFTLIGHT_EXT = 1000148020,
    VK_BLEND_OP_DIFFERENCE_EXT = 1000148021,
    VK_BLEND_OP_EXCLUSION_EXT = 1000148022,
    VK_BLEND_OP_INVERT_EXT = 1000148023,
    VK_BLEND_OP_INVERT_RGB_EXT = 1000148024,
    VK_BLEND_OP_LINEARDODGE_EXT = 1000148025,
    VK_BLEND_OP_LINEARBURN_EXT = 1000148026,
    VK_BLEND_OP_VIVIDLIGHT_EXT = 1000148027,
    VK_BLEND_OP_LINEARLIGHT_EXT = 1000148028,
    VK_BLEND_OP_PINLIGHT_EXT = 1000148029,
    VK_BLEND_OP_HARDMIX_EXT = 1000148030,
    VK_BLEND_OP_HSL_HUE_EXT = 1000148031,
    VK_BLEND_OP_HSL_SATURATION_EXT = 1000148032,
    VK_BLEND_OP_HSL_COLOR_EXT = 1000148033,
    VK_BLEND_OP_HSL_LUMINOSITY_EXT = 1000148034,
    VK_BLEND_OP_PLUS_EXT = 1000148035,
    VK_BLEND_OP_PLUS_CLAMPED_EXT = 1000148036,
    VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT = 1000148037,
    VK_BLEND_OP_PLUS_DARKER_EXT = 1000148038,
    VK_BLEND_OP_MINUS_EXT = 1000148039,
    VK_BLEND_OP_MINUS_CLAMPED_EXT = 1000148040,
    VK_BLEND_OP_CONTRAST_EXT = 1000148041,
    VK_BLEND_OP_INVERT_OVG_EXT = 1000148042,
    VK_BLEND_OP_RED_EXT = 1000148043,
    VK_BLEND_OP_GREEN_EXT = 1000148044,
    VK_BLEND_OP_BLUE_EXT = 1000148045,
    VK_BLEND_OP_MAX_ENUM = 0x7FFFFFFF
} VkBlendOp;

typedef enum VkCompareOp {
    VK_COMPARE_OP_NEVER = 0,
    VK_COMPARE_OP_LESS = 1,
    VK_COMPARE_OP_EQUAL = 2,
    VK_COMPARE_OP_LESS_OR_EQUAL = 3,
    VK_COMPARE_OP_GREATER = 4,
    VK_COMPARE_OP_NOT_EQUAL = 5,
    VK_COMPARE_OP_GREATER_OR_EQUAL = 6,
    VK_COMPARE_OP_ALWAYS = 7,
    VK_COMPARE_OP_MAX_ENUM = 0x7FFFFFFF
} VkCompareOp;

typedef enum VkDynamicState {
    VK_DYNAMIC_STATE_VIEWPORT = 0,
    VK_DYNAMIC_STATE_SCISSOR = 1,
    VK_DYNAMIC_STATE_LINE_WIDTH = 2,
    VK_DYNAMIC_STATE_DEPTH_BIAS = 3,
    VK_DYNAMIC_STATE_BLEND_CONSTANTS = 4,
    VK_DYNAMIC_STATE_DEPTH_BOUNDS = 5,
    VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK = 6,
    VK_DYNAMIC_STATE_STENCIL_WRITE_MASK = 7,
    VK_DYNAMIC_STATE_STENCIL_REFERENCE = 8,
    VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV = 1000087000,
    VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT = 1000099000,
    VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT = 1000143000,
    VK_DYNAMIC_STATE_RAY_TRACING_PIPELINE_STACK_SIZE_KHR = 1000347000,
    VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV = 1000164004,
    VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV = 1000164006,
    VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV = 1000205001,
    VK_DYNAMIC_STATE_FRAGMENT_SHADING_RATE_KHR = 1000226000,
    VK_DYNAMIC_STATE_LINE_STIPPLE_EXT = 1000259000,
    VK_DYNAMIC_STATE_CULL_MODE_EXT = 1000267000,
    VK_DYNAMIC_STATE_FRONT_FACE_EXT = 1000267001,
    VK_DYNAMIC_STATE_PRIMITIVE_TOPOLOGY_EXT = 1000267002,
    VK_DYNAMIC_STATE_VIEWPORT_WITH_COUNT_EXT = 1000267003,
    VK_DYNAMIC_STATE_SCISSOR_WITH_COUNT_EXT = 1000267004,
    VK_DYNAMIC_STATE_VERTEX_INPUT_BINDING_STRIDE_EXT = 1000267005,
    VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE_EXT = 1000267006,
    VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE_EXT = 1000267007,
    VK_DYNAMIC_STATE_DEPTH_COMPARE_OP_EXT = 1000267008,
    VK_DYNAMIC_STATE_DEPTH_BOUNDS_TEST_ENABLE_EXT = 1000267009,
    VK_DYNAMIC_STATE_STENCIL_TEST_ENABLE_EXT = 1000267010,
    VK_DYNAMIC_STATE_STENCIL_OP_EXT = 1000267011,
    VK_DYNAMIC_STATE_VERTEX_INPUT_EXT = 1000352000,
    VK_DYNAMIC_STATE_PATCH_CONTROL_POINTS_EXT = 1000377000,
    VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT = 1000377001,
    VK_DYNAMIC_STATE_DEPTH_BIAS_ENABLE_EXT = 1000377002,
    VK_DYNAMIC_STATE_LOGIC_OP_EXT = 1000377003,
    VK_DYNAMIC_STATE_PRIMITIVE_RESTART_ENABLE_EXT = 1000377004,
    VK_DYNAMIC_STATE_COLOR_WRITE_ENABLE_EXT = 1000381000,
    VK_DYNAMIC_STATE_MAX_ENUM = 0x7FFFFFFF
} VkDynamicState;

typedef enum VkFrontFace {
    VK_FRONT_FACE_COUNTER_CLOCKWISE = 0,
    VK_FRONT_FACE_CLOCKWISE = 1,
    VK_FRONT_FACE_MAX_ENUM = 0x7FFFFFFF
} VkFrontFace;

typedef enum VkVertexInputRate {
    VK_VERTEX_INPUT_RATE_VERTEX = 0,
    VK_VERTEX_INPUT_RATE_INSTANCE = 1,
    VK_VERTEX_INPUT_RATE_MAX_ENUM = 0x7FFFFFFF
} VkVertexInputRate;

typedef enum VkPrimitiveTopology {
    VK_PRIMITIVE_TOPOLOGY_POINT_LIST = 0,
    VK_PRIMITIVE_TOPOLOGY_LINE_LIST = 1,
    VK_PRIMITIVE_TOPOLOGY_LINE_STRIP = 2,
    VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST = 3,
    VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP = 4,
    VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN = 5,
    VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY = 6,
    VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY = 7,
    VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY = 8,
    VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY = 9,
    VK_PRIMITIVE_TOPOLOGY_PATCH_LIST = 10,
    VK_PRIMITIVE_TOPOLOGY_MAX_ENUM = 0x7FFFFFFF
} VkPrimitiveTopology;

typedef enum VkPolygonMode {
    VK_POLYGON_MODE_FILL = 0,
    VK_POLYGON_MODE_LINE = 1,
    VK_POLYGON_MODE_POINT = 2,
    VK_POLYGON_MODE_FILL_RECTANGLE_NV = 1000153000,
    VK_POLYGON_MODE_MAX_ENUM = 0x7FFFFFFF
} VkPolygonMode;

typedef enum VkStencilOp {
    VK_STENCIL_OP_KEEP = 0,
    VK_STENCIL_OP_ZERO = 1,
    VK_STENCIL_OP_REPLACE = 2,
    VK_STENCIL_OP_INCREMENT_AND_CLAMP = 3,
    VK_STENCIL_OP_DECREMENT_AND_CLAMP = 4,
    VK_STENCIL_OP_INVERT = 5,
    VK_STENCIL_OP_INCREMENT_AND_WRAP = 6,
    VK_STENCIL_OP_DECREMENT_AND_WRAP = 7,
    VK_STENCIL_OP_MAX_ENUM = 0x7FFFFFFF
} VkStencilOp;

typedef enum VkLogicOp {
    VK_LOGIC_OP_CLEAR = 0,
    VK_LOGIC_OP_AND = 1,
    VK_LOGIC_OP_AND_REVERSE = 2,
    VK_LOGIC_OP_COPY = 3,
    VK_LOGIC_OP_AND_INVERTED = 4,
    VK_LOGIC_OP_NO_OP = 5,
    VK_LOGIC_OP_XOR = 6,
    VK_LOGIC_OP_OR = 7,
    VK_LOGIC_OP_NOR = 8,
    VK_LOGIC_OP_EQUIVALENT = 9,
    VK_LOGIC_OP_INVERT = 10,
    VK_LOGIC_OP_OR_REVERSE = 11,
    VK_LOGIC_OP_COPY_INVERTED = 12,
    VK_LOGIC_OP_OR_INVERTED = 13,
    VK_LOGIC_OP_NAND = 14,
    VK_LOGIC_OP_SET = 15,
    VK_LOGIC_OP_MAX_ENUM = 0x7FFFFFFF
} VkLogicOp;

typedef enum VkBorderColor {
    VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK = 0,
    VK_BORDER_COLOR_INT_TRANSPARENT_BLACK = 1,
    VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK = 2,
    VK_BORDER_COLOR_INT_OPAQUE_BLACK = 3,
    VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE = 4,
    VK_BORDER_COLOR_INT_OPAQUE_WHITE = 5,
    VK_BORDER_COLOR_FLOAT_CUSTOM_EXT = 1000287003,
    VK_BORDER_COLOR_INT_CUSTOM_EXT = 1000287004,
    VK_BORDER_COLOR_MAX_ENUM = 0x7FFFFFFF
} VkBorderColor;

typedef enum VkFilter {
    VK_FILTER_NEAREST = 0,
    VK_FILTER_LINEAR = 1,
    VK_FILTER_CUBIC_IMG = 1000015000,
    VK_FILTER_CUBIC_EXT = VK_FILTER_CUBIC_IMG,
    VK_FILTER_MAX_ENUM = 0x7FFFFFFF
} VkFilter;

typedef enum VkSamplerAddressMode {
    VK_SAMPLER_ADDRESS_MODE_REPEAT = 0,
    VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT = 1,
    VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE = 2,
    VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER = 3,
    VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE = 4,
    VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE_KHR = VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE,
    VK_SAMPLER_ADDRESS_MODE_MAX_ENUM = 0x7FFFFFFF
} VkSamplerAddressMode;

typedef enum VkSamplerMipmapMode {
    VK_SAMPLER_MIPMAP_MODE_NEAREST = 0,
    VK_SAMPLER_MIPMAP_MODE_LINEAR = 1,
    VK_SAMPLER_MIPMAP_MODE_MAX_ENUM = 0x7FFFFFFF
} VkSamplerMipmapMode;

typedef enum VkDescriptorType {
    VK_DESCRIPTOR_TYPE_SAMPLER = 0,
    VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER = 1,
    VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE = 2,
    VK_DESCRIPTOR_TYPE_STORAGE_IMAGE = 3,
    VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER = 4,
    VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER = 5,
    VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER = 6,
    VK_DESCRIPTOR_TYPE_STORAGE_BUFFER = 7,
    VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC = 8,
    VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC = 9,
    VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT = 10,
    VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT = 1000138000,
    VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR = 1000150000,
    VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV = 1000165000,
    VK_DESCRIPTOR_TYPE_MUTABLE_VALVE = 1000351000,
    VK_DESCRIPTOR_TYPE_MAX_ENUM = 0x7FFFFFFF
} VkDescriptorType;

typedef enum VkAttachmentLoadOp {
    VK_ATTACHMENT_LOAD_OP_LOAD = 0,
    VK_ATTACHMENT_LOAD_OP_CLEAR = 1,
    VK_ATTACHMENT_LOAD_OP_DONT_CARE = 2,
    VK_ATTACHMENT_LOAD_OP_NONE_EXT = 1000400000,
    VK_ATTACHMENT_LOAD_OP_MAX_ENUM = 0x7FFFFFFF
} VkAttachmentLoadOp;

typedef enum VkAttachmentStoreOp {
    VK_ATTACHMENT_STORE_OP_STORE = 0,
    VK_ATTACHMENT_STORE_OP_DONT_CARE = 1,
    VK_ATTACHMENT_STORE_OP_NONE_EXT = 1000301000,
    VK_ATTACHMENT_STORE_OP_NONE_QCOM = VK_ATTACHMENT_STORE_OP_NONE_EXT,
    VK_ATTACHMENT_STORE_OP_MAX_ENUM = 0x7FFFFFFF
} VkAttachmentStoreOp;

typedef enum VkPipelineBindPoint {
    VK_PIPELINE_BIND_POINT_GRAPHICS = 0,
    VK_PIPELINE_BIND_POINT_COMPUTE = 1,
    VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR = 1000165000,
    VK_PIPELINE_BIND_POINT_SUBPASS_SHADING_HUAWEI = 1000369003,
    VK_PIPELINE_BIND_POINT_RAY_TRACING_NV = VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR,
    VK_PIPELINE_BIND_POINT_MAX_ENUM = 0x7FFFFFFF
} VkPipelineBindPoint;

typedef enum VkCommandBufferLevel {
    VK_COMMAND_BUFFER_LEVEL_PRIMARY = 0,
    VK_COMMAND_BUFFER_LEVEL_SECONDARY = 1,
    VK_COMMAND_BUFFER_LEVEL_MAX_ENUM = 0x7FFFFFFF
} VkCommandBufferLevel;

typedef enum VkIndexType {
    VK_INDEX_TYPE_UINT16 = 0,
    VK_INDEX_TYPE_UINT32 = 1,
    VK_INDEX_TYPE_NONE_KHR = 1000165000,
    VK_INDEX_TYPE_UINT8_EXT = 1000265000,
    VK_INDEX_TYPE_NONE_NV = VK_INDEX_TYPE_NONE_KHR,
    VK_INDEX_TYPE_MAX_ENUM = 0x7FFFFFFF
} VkIndexType;

typedef enum VkSubpassContents {
    VK_SUBPASS_CONTENTS_INLINE = 0,
    VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS = 1,
    VK_SUBPASS_CONTENTS_MAX_ENUM = 0x7FFFFFFF
} VkSubpassContents;

typedef enum VkAccessFlagBits {
    VK_ACCESS_INDIRECT_COMMAND_READ_BIT = 0x00000001,
    VK_ACCESS_INDEX_READ_BIT = 0x00000002,
    VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT = 0x00000004,
    VK_ACCESS_UNIFORM_READ_BIT = 0x00000008,
    VK_ACCESS_INPUT_ATTACHMENT_READ_BIT = 0x00000010,
    VK_ACCESS_SHADER_READ_BIT = 0x00000020,
    VK_ACCESS_SHADER_WRITE_BIT = 0x00000040,
    VK_ACCESS_COLOR_ATTACHMENT_READ_BIT = 0x00000080,
    VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT = 0x00000100,
    VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT = 0x00000200,
    VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT = 0x00000400,
    VK_ACCESS_TRANSFER_READ_BIT = 0x00000800,
    VK_ACCESS_TRANSFER_WRITE_BIT = 0x00001000,
    VK_ACCESS_HOST_READ_BIT = 0x00002000,
    VK_ACCESS_HOST_WRITE_BIT = 0x00004000,
    VK_ACCESS_MEMORY_READ_BIT = 0x00008000,
    VK_ACCESS_MEMORY_WRITE_BIT = 0x00010000,
    VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT = 0x02000000,
    VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT = 0x04000000,
    VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT = 0x08000000,
    VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT = 0x00100000,
    VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT = 0x00080000,
    VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_KHR = 0x00200000,
    VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_KHR = 0x00400000,
    VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT = 0x01000000,
    VK_ACCESS_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR = 0x00800000,
    VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_NV = 0x00020000,
    VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_NV = 0x00040000,
    VK_ACCESS_NONE_KHR = 0,
    VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV = VK_ACCESS_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR,
    VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV = VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_KHR,
    VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV = VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_KHR,
    VK_ACCESS_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkAccessFlagBits;
typedef VkFlags VkAccessFlags;

typedef enum VkImageAspectFlagBits {
    VK_IMAGE_ASPECT_COLOR_BIT = 0x00000001,
    VK_IMAGE_ASPECT_DEPTH_BIT = 0x00000002,
    VK_IMAGE_ASPECT_STENCIL_BIT = 0x00000004,
    VK_IMAGE_ASPECT_METADATA_BIT = 0x00000008,
    VK_IMAGE_ASPECT_PLANE_0_BIT = 0x00000010,
    VK_IMAGE_ASPECT_PLANE_1_BIT = 0x00000020,
    VK_IMAGE_ASPECT_PLANE_2_BIT = 0x00000040,
    VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT = 0x00000080,
    VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT = 0x00000100,
    VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT = 0x00000200,
    VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT = 0x00000400,
    VK_IMAGE_ASPECT_PLANE_0_BIT_KHR = VK_IMAGE_ASPECT_PLANE_0_BIT,
    VK_IMAGE_ASPECT_PLANE_1_BIT_KHR = VK_IMAGE_ASPECT_PLANE_1_BIT,
    VK_IMAGE_ASPECT_PLANE_2_BIT_KHR = VK_IMAGE_ASPECT_PLANE_2_BIT,
    VK_IMAGE_ASPECT_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkImageAspectFlagBits;
typedef VkFlags VkImageAspectFlags;

typedef enum VkFormatFeatureFlagBits {
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT = 0x00000001,
    VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT = 0x00000002,
    VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT = 0x00000004,
    VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT = 0x00000008,
    VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT = 0x00000010,
    VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT = 0x00000020,
    VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT = 0x00000040,
    VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT = 0x00000080,
    VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT = 0x00000100,
    VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT = 0x00000200,
    VK_FORMAT_FEATURE_BLIT_SRC_BIT = 0x00000400,
    VK_FORMAT_FEATURE_BLIT_DST_BIT = 0x00000800,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT = 0x00001000,
    VK_FORMAT_FEATURE_TRANSFER_SRC_BIT = 0x00004000,
    VK_FORMAT_FEATURE_TRANSFER_DST_BIT = 0x00008000,
    VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT = 0x00020000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT = 0x00040000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT = 0x00080000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT = 0x00100000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT = 0x00200000,
    VK_FORMAT_FEATURE_DISJOINT_BIT = 0x00400000,
    VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT = 0x00800000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT = 0x00010000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG = 0x00002000,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_FORMAT_FEATURE_VIDEO_DECODE_OUTPUT_BIT_KHR = 0x02000000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_FORMAT_FEATURE_VIDEO_DECODE_DPB_BIT_KHR = 0x04000000,
#endif
    VK_FORMAT_FEATURE_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR = 0x20000000,
    VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT = 0x01000000,
    VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR = 0x40000000,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_FORMAT_FEATURE_VIDEO_ENCODE_INPUT_BIT_KHR = 0x08000000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_FORMAT_FEATURE_VIDEO_ENCODE_DPB_BIT_KHR = 0x10000000,
#endif
    VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR = VK_FORMAT_FEATURE_TRANSFER_SRC_BIT,
    VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR = VK_FORMAT_FEATURE_TRANSFER_DST_BIT,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT = VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT,
    VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR = VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT,
    VK_FORMAT_FEATURE_DISJOINT_BIT_KHR = VK_FORMAT_FEATURE_DISJOINT_BIT,
    VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR = VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT = VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG,
    VK_FORMAT_FEATURE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkFormatFeatureFlagBits;
typedef VkFlags VkFormatFeatureFlags;

typedef enum VkImageCreateFlagBits {
    VK_IMAGE_CREATE_SPARSE_BINDING_BIT = 0x00000001,
    VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT = 0x00000002,
    VK_IMAGE_CREATE_SPARSE_ALIASED_BIT = 0x00000004,
    VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT = 0x00000008,
    VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT = 0x00000010,
    VK_IMAGE_CREATE_ALIAS_BIT = 0x00000400,
    VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT = 0x00000040,
    VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT = 0x00000020,
    VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT = 0x00000080,
    VK_IMAGE_CREATE_EXTENDED_USAGE_BIT = 0x00000100,
    VK_IMAGE_CREATE_PROTECTED_BIT = 0x00000800,
    VK_IMAGE_CREATE_DISJOINT_BIT = 0x00000200,
    VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV = 0x00002000,
    VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT = 0x00001000,
    VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT = 0x00004000,
    VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR = VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT,
    VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR = VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT,
    VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR = VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT,
    VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR = VK_IMAGE_CREATE_EXTENDED_USAGE_BIT,
    VK_IMAGE_CREATE_DISJOINT_BIT_KHR = VK_IMAGE_CREATE_DISJOINT_BIT,
    VK_IMAGE_CREATE_ALIAS_BIT_KHR = VK_IMAGE_CREATE_ALIAS_BIT,
    VK_IMAGE_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkImageCreateFlagBits;
typedef VkFlags VkImageCreateFlags;

typedef enum VkSampleCountFlagBits {
    VK_SAMPLE_COUNT_1_BIT = 0x00000001,
    VK_SAMPLE_COUNT_2_BIT = 0x00000002,
    VK_SAMPLE_COUNT_4_BIT = 0x00000004,
    VK_SAMPLE_COUNT_8_BIT = 0x00000008,
    VK_SAMPLE_COUNT_16_BIT = 0x00000010,
    VK_SAMPLE_COUNT_32_BIT = 0x00000020,
    VK_SAMPLE_COUNT_64_BIT = 0x00000040,
    VK_SAMPLE_COUNT_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkSampleCountFlagBits;
typedef VkFlags VkSampleCountFlags;

typedef enum VkImageUsageFlagBits {
    VK_IMAGE_USAGE_TRANSFER_SRC_BIT = 0x00000001,
    VK_IMAGE_USAGE_TRANSFER_DST_BIT = 0x00000002,
    VK_IMAGE_USAGE_SAMPLED_BIT = 0x00000004,
    VK_IMAGE_USAGE_STORAGE_BIT = 0x00000008,
    VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT = 0x00000010,
    VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT = 0x00000020,
    VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT = 0x00000040,
    VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT = 0x00000080,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_USAGE_VIDEO_DECODE_DST_BIT_KHR = 0x00000400,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_USAGE_VIDEO_DECODE_SRC_BIT_KHR = 0x00000800,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_USAGE_VIDEO_DECODE_DPB_BIT_KHR = 0x00001000,
#endif
    VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT = 0x00000200,
    VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR = 0x00000100,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_USAGE_VIDEO_ENCODE_DST_BIT_KHR = 0x00002000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_USAGE_VIDEO_ENCODE_SRC_BIT_KHR = 0x00004000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_IMAGE_USAGE_VIDEO_ENCODE_DPB_BIT_KHR = 0x00008000,
#endif
    VK_IMAGE_USAGE_INVOCATION_MASK_BIT_HUAWEI = 0x00040000,
    VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV = VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR,
    VK_IMAGE_USAGE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkImageUsageFlagBits;
typedef VkFlags VkImageUsageFlags;
typedef VkFlags VkInstanceCreateFlags;

typedef enum VkMemoryHeapFlagBits {
    VK_MEMORY_HEAP_DEVICE_LOCAL_BIT = 0x00000001,
    VK_MEMORY_HEAP_MULTI_INSTANCE_BIT = 0x00000002,
    VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR = VK_MEMORY_HEAP_MULTI_INSTANCE_BIT,
    VK_MEMORY_HEAP_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkMemoryHeapFlagBits;
typedef VkFlags VkMemoryHeapFlags;

typedef enum VkMemoryPropertyFlagBits {
    VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT = 0x00000001,
    VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT = 0x00000002,
    VK_MEMORY_PROPERTY_HOST_COHERENT_BIT = 0x00000004,
    VK_MEMORY_PROPERTY_HOST_CACHED_BIT = 0x00000008,
    VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT = 0x00000010,
    VK_MEMORY_PROPERTY_PROTECTED_BIT = 0x00000020,
    VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD = 0x00000040,
    VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD = 0x00000080,
    VK_MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV = 0x00000100,
    VK_MEMORY_PROPERTY_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkMemoryPropertyFlagBits;
typedef VkFlags VkMemoryPropertyFlags;

typedef enum VkQueueFlagBits {
    VK_QUEUE_GRAPHICS_BIT = 0x00000001,
    VK_QUEUE_COMPUTE_BIT = 0x00000002,
    VK_QUEUE_TRANSFER_BIT = 0x00000004,
    VK_QUEUE_SPARSE_BINDING_BIT = 0x00000008,
    VK_QUEUE_PROTECTED_BIT = 0x00000010,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_QUEUE_VIDEO_DECODE_BIT_KHR = 0x00000020,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_QUEUE_VIDEO_ENCODE_BIT_KHR = 0x00000040,
#endif
    VK_QUEUE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkQueueFlagBits;
typedef VkFlags VkQueueFlags;
typedef VkFlags VkDeviceCreateFlags;

typedef enum VkDeviceQueueCreateFlagBits {
    VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT = 0x00000001,
    VK_DEVICE_QUEUE_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkDeviceQueueCreateFlagBits;
typedef VkFlags VkDeviceQueueCreateFlags;

typedef enum VkPipelineStageFlagBits {
    VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT = 0x00000001,
    VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT = 0x00000002,
    VK_PIPELINE_STAGE_VERTEX_INPUT_BIT = 0x00000004,
    VK_PIPELINE_STAGE_VERTEX_SHADER_BIT = 0x00000008,
    VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT = 0x00000010,
    VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT = 0x00000020,
    VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT = 0x00000040,
    VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT = 0x00000080,
    VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT = 0x00000100,
    VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT = 0x00000200,
    VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT = 0x00000400,
    VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT = 0x00000800,
    VK_PIPELINE_STAGE_TRANSFER_BIT = 0x00001000,
    VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT = 0x00002000,
    VK_PIPELINE_STAGE_HOST_BIT = 0x00004000,
    VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT = 0x00008000,
    VK_PIPELINE_STAGE_ALL_COMMANDS_BIT = 0x00010000,
    VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT = 0x01000000,
    VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT = 0x00040000,
    VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR = 0x02000000,
    VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR = 0x00200000,
    VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV = 0x00080000,
    VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV = 0x00100000,
    VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT = 0x00800000,
    VK_PIPELINE_STAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR = 0x00400000,
    VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_NV = 0x00020000,
    VK_PIPELINE_STAGE_NONE_KHR = 0,
    VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV = VK_PIPELINE_STAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR,
    VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV = VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR,
    VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV = VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR,
    VK_PIPELINE_STAGE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkPipelineStageFlagBits;
typedef VkFlags VkPipelineStageFlags;
typedef VkFlags VkMemoryMapFlags;

typedef enum VkSparseMemoryBindFlagBits {
    VK_SPARSE_MEMORY_BIND_METADATA_BIT = 0x00000001,
    VK_SPARSE_MEMORY_BIND_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkSparseMemoryBindFlagBits;
typedef VkFlags VkSparseMemoryBindFlags;

typedef enum VkSparseImageFormatFlagBits {
    VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT = 0x00000001,
    VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT = 0x00000002,
    VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT = 0x00000004,
    VK_SPARSE_IMAGE_FORMAT_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkSparseImageFormatFlagBits;
typedef VkFlags VkSparseImageFormatFlags;

typedef enum VkFenceCreateFlagBits {
    VK_FENCE_CREATE_SIGNALED_BIT = 0x00000001,
    VK_FENCE_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkFenceCreateFlagBits;
typedef VkFlags VkFenceCreateFlags;
typedef VkFlags VkSemaphoreCreateFlags;

typedef enum VkEventCreateFlagBits {
    VK_EVENT_CREATE_DEVICE_ONLY_BIT_KHR = 0x00000001,
    VK_EVENT_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkEventCreateFlagBits;
typedef VkFlags VkEventCreateFlags;

typedef enum VkQueryPipelineStatisticFlagBits {
    VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT = 0x00000001,
    VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT = 0x00000002,
    VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT = 0x00000004,
    VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT = 0x00000008,
    VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT = 0x00000010,
    VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT = 0x00000020,
    VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT = 0x00000040,
    VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT = 0x00000080,
    VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT = 0x00000100,
    VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT = 0x00000200,
    VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT = 0x00000400,
    VK_QUERY_PIPELINE_STATISTIC_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkQueryPipelineStatisticFlagBits;
typedef VkFlags VkQueryPipelineStatisticFlags;
typedef VkFlags VkQueryPoolCreateFlags;

typedef enum VkQueryResultFlagBits {
    VK_QUERY_RESULT_64_BIT = 0x00000001,
    VK_QUERY_RESULT_WAIT_BIT = 0x00000002,
    VK_QUERY_RESULT_WITH_AVAILABILITY_BIT = 0x00000004,
    VK_QUERY_RESULT_PARTIAL_BIT = 0x00000008,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_QUERY_RESULT_WITH_STATUS_BIT_KHR = 0x00000010,
#endif
    VK_QUERY_RESULT_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkQueryResultFlagBits;
typedef VkFlags VkQueryResultFlags;

typedef enum VkBufferCreateFlagBits {
    VK_BUFFER_CREATE_SPARSE_BINDING_BIT = 0x00000001,
    VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT = 0x00000002,
    VK_BUFFER_CREATE_SPARSE_ALIASED_BIT = 0x00000004,
    VK_BUFFER_CREATE_PROTECTED_BIT = 0x00000008,
    VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT = 0x00000010,
    VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT = VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT,
    VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR = VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT,
    VK_BUFFER_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkBufferCreateFlagBits;
typedef VkFlags VkBufferCreateFlags;

typedef enum VkBufferUsageFlagBits {
    VK_BUFFER_USAGE_TRANSFER_SRC_BIT = 0x00000001,
    VK_BUFFER_USAGE_TRANSFER_DST_BIT = 0x00000002,
    VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT = 0x00000004,
    VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT = 0x00000008,
    VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT = 0x00000010,
    VK_BUFFER_USAGE_STORAGE_BUFFER_BIT = 0x00000020,
    VK_BUFFER_USAGE_INDEX_BUFFER_BIT = 0x00000040,
    VK_BUFFER_USAGE_VERTEX_BUFFER_BIT = 0x00000080,
    VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT = 0x00000100,
    VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT = 0x00020000,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_BUFFER_USAGE_VIDEO_DECODE_SRC_BIT_KHR = 0x00002000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_BUFFER_USAGE_VIDEO_DECODE_DST_BIT_KHR = 0x00004000,
#endif
    VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT = 0x00000800,
    VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT = 0x00001000,
    VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT = 0x00000200,
    VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR = 0x00080000,
    VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR = 0x00100000,
    VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR = 0x00000400,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_BUFFER_USAGE_VIDEO_ENCODE_DST_BIT_KHR = 0x00008000,
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_BUFFER_USAGE_VIDEO_ENCODE_SRC_BIT_KHR = 0x00010000,
#endif
    VK_BUFFER_USAGE_RAY_TRACING_BIT_NV = VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR,
    VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT = VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT,
    VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_KHR = VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT,
    VK_BUFFER_USAGE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkBufferUsageFlagBits;
typedef VkFlags VkBufferUsageFlags;
typedef VkFlags VkBufferViewCreateFlags;

typedef enum VkImageViewCreateFlagBits {
    VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT = 0x00000001,
    VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DEFERRED_BIT_EXT = 0x00000002,
    VK_IMAGE_VIEW_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkImageViewCreateFlagBits;
typedef VkFlags VkImageViewCreateFlags;
typedef VkFlags VkShaderModuleCreateFlags;

typedef enum VkPipelineCacheCreateFlagBits {
    VK_PIPELINE_CACHE_CREATE_EXTERNALLY_SYNCHRONIZED_BIT_EXT = 0x00000001,
    VK_PIPELINE_CACHE_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkPipelineCacheCreateFlagBits;
typedef VkFlags VkPipelineCacheCreateFlags;

typedef enum VkColorComponentFlagBits {
    VK_COLOR_COMPONENT_R_BIT = 0x00000001,
    VK_COLOR_COMPONENT_G_BIT = 0x00000002,
    VK_COLOR_COMPONENT_B_BIT = 0x00000004,
    VK_COLOR_COMPONENT_A_BIT = 0x00000008,
    VK_COLOR_COMPONENT_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkColorComponentFlagBits;
typedef VkFlags VkColorComponentFlags;

typedef enum VkPipelineCreateFlagBits {
    VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT = 0x00000001,
    VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT = 0x00000002,
    VK_PIPELINE_CREATE_DERIVATIVE_BIT = 0x00000004,
    VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT = 0x00000008,
    VK_PIPELINE_CREATE_DISPATCH_BASE_BIT = 0x00000010,
    VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR = 0x00004000,
    VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR = 0x00008000,
    VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR = 0x00010000,
    VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR = 0x00020000,
    VK_PIPELINE_CREATE_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR = 0x00001000,
    VK_PIPELINE_CREATE_RAY_TRACING_SKIP_AABBS_BIT_KHR = 0x00002000,
    VK_PIPELINE_CREATE_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR = 0x00080000,
    VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV = 0x00000020,
    VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR = 0x00000040,
    VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR = 0x00000080,
    VK_PIPELINE_CREATE_INDIRECT_BINDABLE_BIT_NV = 0x00040000,
    VK_PIPELINE_CREATE_LIBRARY_BIT_KHR = 0x00000800,
    VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_EXT = 0x00000100,
    VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT_EXT = 0x00000200,
    VK_PIPELINE_CREATE_RAY_TRACING_ALLOW_MOTION_BIT_NV = 0x00100000,
    VK_PIPELINE_CREATE_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_KHR = 0x00800000,
    VK_PIPELINE_CREATE_LINK_TIME_OPTIMIZATION_BIT_KHR = 0x01000000,
    VK_PIPELINE_CREATE_DISPATCH_BASE = VK_PIPELINE_CREATE_DISPATCH_BASE_BIT,
    VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR = VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT,
    VK_PIPELINE_CREATE_DISPATCH_BASE_KHR = VK_PIPELINE_CREATE_DISPATCH_BASE,
    VK_PIPELINE_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkPipelineCreateFlagBits;
typedef VkFlags VkPipelineCreateFlags;

typedef enum VkPipelineShaderStageCreateFlagBits {
    VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT = 0x00000001,
    VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT = 0x00000002,
    VK_PIPELINE_SHADER_STAGE_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkPipelineShaderStageCreateFlagBits;
typedef VkFlags VkPipelineShaderStageCreateFlags;

typedef enum VkShaderStageFlagBits {
    VK_SHADER_STAGE_VERTEX_BIT = 0x00000001,
    VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT = 0x00000002,
    VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT = 0x00000004,
    VK_SHADER_STAGE_GEOMETRY_BIT = 0x00000008,
    VK_SHADER_STAGE_FRAGMENT_BIT = 0x00000010,
    VK_SHADER_STAGE_COMPUTE_BIT = 0x00000020,
    VK_SHADER_STAGE_ALL_GRAPHICS = 0x0000001F,
    VK_SHADER_STAGE_ALL = 0x7FFFFFFF,
    VK_SHADER_STAGE_RAYGEN_BIT_KHR = 0x00000100,
    VK_SHADER_STAGE_ANY_HIT_BIT_KHR = 0x00000200,
    VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR = 0x00000400,
    VK_SHADER_STAGE_MISS_BIT_KHR = 0x00000800,
    VK_SHADER_STAGE_INTERSECTION_BIT_KHR = 0x00001000,
    VK_SHADER_STAGE_CALLABLE_BIT_KHR = 0x00002000,
    VK_SHADER_STAGE_TASK_BIT_NV = 0x00000040,
    VK_SHADER_STAGE_MESH_BIT_NV = 0x00000080,
    VK_SHADER_STAGE_SUBPASS_SHADING_BIT_HUAWEI = 0x00004000,
    VK_SHADER_STAGE_RAYGEN_BIT_NV = VK_SHADER_STAGE_RAYGEN_BIT_KHR,
    VK_SHADER_STAGE_ANY_HIT_BIT_NV = VK_SHADER_STAGE_ANY_HIT_BIT_KHR,
    VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV = VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR,
    VK_SHADER_STAGE_MISS_BIT_NV = VK_SHADER_STAGE_MISS_BIT_KHR,
    VK_SHADER_STAGE_INTERSECTION_BIT_NV = VK_SHADER_STAGE_INTERSECTION_BIT_KHR,
    VK_SHADER_STAGE_CALLABLE_BIT_NV = VK_SHADER_STAGE_CALLABLE_BIT_KHR,
    VK_SHADER_STAGE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkShaderStageFlagBits;

typedef enum VkCullModeFlagBits {
    VK_CULL_MODE_NONE = 0,
    VK_CULL_MODE_FRONT_BIT = 0x00000001,
    VK_CULL_MODE_BACK_BIT = 0x00000002,
    VK_CULL_MODE_FRONT_AND_BACK = 0x00000003,
    VK_CULL_MODE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkCullModeFlagBits;
typedef VkFlags VkCullModeFlags;
typedef VkFlags VkPipelineVertexInputStateCreateFlags;
typedef VkFlags VkPipelineInputAssemblyStateCreateFlags;
typedef VkFlags VkPipelineTessellationStateCreateFlags;
typedef VkFlags VkPipelineViewportStateCreateFlags;
typedef VkFlags VkPipelineRasterizationStateCreateFlags;
typedef VkFlags VkPipelineMultisampleStateCreateFlags;
typedef VkFlags VkPipelineDepthStencilStateCreateFlags;
typedef VkFlags VkPipelineColorBlendStateCreateFlags;
typedef VkFlags VkPipelineDynamicStateCreateFlags;
typedef VkFlags VkPipelineLayoutCreateFlags;
typedef VkFlags VkShaderStageFlags;

typedef enum VkSamplerCreateFlagBits {
    VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT = 0x00000001,
    VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT = 0x00000002,
    VK_SAMPLER_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkSamplerCreateFlagBits;
typedef VkFlags VkSamplerCreateFlags;

typedef enum VkDescriptorPoolCreateFlagBits {
    VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT = 0x00000001,
    VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT = 0x00000002,
    VK_DESCRIPTOR_POOL_CREATE_HOST_ONLY_BIT_VALVE = 0x00000004,
    VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT = VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT,
    VK_DESCRIPTOR_POOL_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkDescriptorPoolCreateFlagBits;
typedef VkFlags VkDescriptorPoolCreateFlags;
typedef VkFlags VkDescriptorPoolResetFlags;

typedef enum VkDescriptorSetLayoutCreateFlagBits {
    VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT = 0x00000002,
    VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR = 0x00000001,
    VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_VALVE = 0x00000004,
    VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT = VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT,
    VK_DESCRIPTOR_SET_LAYOUT_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkDescriptorSetLayoutCreateFlagBits;
typedef VkFlags VkDescriptorSetLayoutCreateFlags;

typedef enum VkAttachmentDescriptionFlagBits {
    VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT = 0x00000001,
    VK_ATTACHMENT_DESCRIPTION_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkAttachmentDescriptionFlagBits;
typedef VkFlags VkAttachmentDescriptionFlags;

typedef enum VkDependencyFlagBits {
    VK_DEPENDENCY_BY_REGION_BIT = 0x00000001,
    VK_DEPENDENCY_DEVICE_GROUP_BIT = 0x00000004,
    VK_DEPENDENCY_VIEW_LOCAL_BIT = 0x00000002,
    VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR = VK_DEPENDENCY_VIEW_LOCAL_BIT,
    VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR = VK_DEPENDENCY_DEVICE_GROUP_BIT,
    VK_DEPENDENCY_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkDependencyFlagBits;
typedef VkFlags VkDependencyFlags;

typedef enum VkFramebufferCreateFlagBits {
    VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT = 0x00000001,
    VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR = VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT,
    VK_FRAMEBUFFER_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkFramebufferCreateFlagBits;
typedef VkFlags VkFramebufferCreateFlags;

typedef enum VkRenderPassCreateFlagBits {
    VK_RENDER_PASS_CREATE_TRANSFORM_BIT_QCOM = 0x00000002,
    VK_RENDER_PASS_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkRenderPassCreateFlagBits;
typedef VkFlags VkRenderPassCreateFlags;

typedef enum VkSubpassDescriptionFlagBits {
    VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX = 0x00000001,
    VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX = 0x00000002,
    VK_SUBPASS_DESCRIPTION_FRAGMENT_REGION_BIT_QCOM = 0x00000004,
    VK_SUBPASS_DESCRIPTION_SHADER_RESOLVE_BIT_QCOM = 0x00000008,
    VK_SUBPASS_DESCRIPTION_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkSubpassDescriptionFlagBits;
typedef VkFlags VkSubpassDescriptionFlags;

typedef enum VkCommandPoolCreateFlagBits {
    VK_COMMAND_POOL_CREATE_TRANSIENT_BIT = 0x00000001,
    VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT = 0x00000002,
    VK_COMMAND_POOL_CREATE_PROTECTED_BIT = 0x00000004,
    VK_COMMAND_POOL_CREATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkCommandPoolCreateFlagBits;
typedef VkFlags VkCommandPoolCreateFlags;

typedef enum VkCommandPoolResetFlagBits {
    VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT = 0x00000001,
    VK_COMMAND_POOL_RESET_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkCommandPoolResetFlagBits;
typedef VkFlags VkCommandPoolResetFlags;

typedef enum VkCommandBufferUsageFlagBits {
    VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT = 0x00000001,
    VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT = 0x00000002,
    VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT = 0x00000004,
    VK_COMMAND_BUFFER_USAGE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkCommandBufferUsageFlagBits;
typedef VkFlags VkCommandBufferUsageFlags;

typedef enum VkQueryControlFlagBits {
    VK_QUERY_CONTROL_PRECISE_BIT = 0x00000001,
    VK_QUERY_CONTROL_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkQueryControlFlagBits;
typedef VkFlags VkQueryControlFlags;

typedef enum VkCommandBufferResetFlagBits {
    VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT = 0x00000001,
    VK_COMMAND_BUFFER_RESET_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkCommandBufferResetFlagBits;
typedef VkFlags VkCommandBufferResetFlags;

typedef enum VkStencilFaceFlagBits {
    VK_STENCIL_FACE_FRONT_BIT = 0x00000001,
    VK_STENCIL_FACE_BACK_BIT = 0x00000002,
    VK_STENCIL_FACE_FRONT_AND_BACK = 0x00000003,
    VK_STENCIL_FRONT_AND_BACK = VK_STENCIL_FACE_FRONT_AND_BACK,
    VK_STENCIL_FACE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkStencilFaceFlagBits;
typedef VkFlags VkStencilFaceFlags;
typedef struct VkExtent2D {
    deUint32    width;
    deUint32    height;
} VkExtent2D;

typedef struct VkExtent3D {
    deUint32    width;
    deUint32    height;
    deUint32    depth;
} VkExtent3D;

typedef struct VkOffset2D {
    deInt32    x;
    deInt32    y;
} VkOffset2D;

typedef struct VkOffset3D {
    deInt32    x;
    deInt32    y;
    deInt32    z;
} VkOffset3D;

typedef struct VkRect2D {
    VkOffset2D    offset;
    VkExtent2D    extent;
} VkRect2D;

typedef struct VkBaseInStructure {
    VkStructureType                    sType;
    const struct VkBaseInStructure*    pNext;
} VkBaseInStructure;

typedef struct VkBaseOutStructure {
    VkStructureType               sType;
    struct VkBaseOutStructure*    pNext;
} VkBaseOutStructure;

typedef struct VkBufferMemoryBarrier {
    VkStructureType    sType;
    const void*        pNext;
    VkAccessFlags      srcAccessMask;
    VkAccessFlags      dstAccessMask;
    deUint32           srcQueueFamilyIndex;
    deUint32           dstQueueFamilyIndex;
    VkBuffer           buffer;
    VkDeviceSize       offset;
    VkDeviceSize       size;
} VkBufferMemoryBarrier;

typedef struct VkDispatchIndirectCommand {
    deUint32    x;
    deUint32    y;
    deUint32    z;
} VkDispatchIndirectCommand;

typedef struct VkDrawIndexedIndirectCommand {
    deUint32    indexCount;
    deUint32    instanceCount;
    deUint32    firstIndex;
    deInt32     vertexOffset;
    deUint32    firstInstance;
} VkDrawIndexedIndirectCommand;

typedef struct VkDrawIndirectCommand {
    deUint32    vertexCount;
    deUint32    instanceCount;
    deUint32    firstVertex;
    deUint32    firstInstance;
} VkDrawIndirectCommand;

typedef struct VkImageSubresourceRange {
    VkImageAspectFlags    aspectMask;
    deUint32              baseMipLevel;
    deUint32              levelCount;
    deUint32              baseArrayLayer;
    deUint32              layerCount;
} VkImageSubresourceRange;

typedef struct VkImageMemoryBarrier {
    VkStructureType            sType;
    const void*                pNext;
    VkAccessFlags              srcAccessMask;
    VkAccessFlags              dstAccessMask;
    VkImageLayout              oldLayout;
    VkImageLayout              newLayout;
    deUint32                   srcQueueFamilyIndex;
    deUint32                   dstQueueFamilyIndex;
    VkImage                    image;
    VkImageSubresourceRange    subresourceRange;
} VkImageMemoryBarrier;

typedef struct VkMemoryBarrier {
    VkStructureType    sType;
    const void*        pNext;
    VkAccessFlags      srcAccessMask;
    VkAccessFlags      dstAccessMask;
} VkMemoryBarrier;

typedef struct VkPipelineCacheHeaderVersionOne {
    deUint32                        headerSize;
    VkPipelineCacheHeaderVersion    headerVersion;
    deUint32                        vendorID;
    deUint32                        deviceID;
    deUint8                         pipelineCacheUUID[VK_UUID_SIZE];
} VkPipelineCacheHeaderVersionOne;

typedef void* (VKAPI_PTR *PFN_vkAllocationFunction)(
    void*                                       pUserData,
    deUintptr                                      size,
    deUintptr                                      alignment,
    VkSystemAllocationScope                     allocationScope);

typedef void (VKAPI_PTR *PFN_vkFreeFunction)(
    void*                                       pUserData,
    void*                                       pMemory);

typedef void (VKAPI_PTR *PFN_vkInternalAllocationNotification)(
    void*                                       pUserData,
    deUintptr                                      size,
    VkInternalAllocationType                    allocationType,
    VkSystemAllocationScope                     allocationScope);

typedef void (VKAPI_PTR *PFN_vkInternalFreeNotification)(
    void*                                       pUserData,
    deUintptr                                      size,
    VkInternalAllocationType                    allocationType,
    VkSystemAllocationScope                     allocationScope);

typedef void* (VKAPI_PTR *PFN_vkReallocationFunction)(
    void*                                       pUserData,
    void*                                       pOriginal,
    deUintptr                                      size,
    deUintptr                                      alignment,
    VkSystemAllocationScope                     allocationScope);

typedef void (VKAPI_PTR *PFN_vkVoidFunction)(void);
typedef struct VkAllocationCallbacks {
    void*                                   pUserData;
    PFN_vkAllocationFunction                pfnAllocation;
    PFN_vkReallocationFunction              pfnReallocation;
    PFN_vkFreeFunction                      pfnFree;
    PFN_vkInternalAllocationNotification    pfnInternalAllocation;
    PFN_vkInternalFreeNotification          pfnInternalFree;
} VkAllocationCallbacks;

typedef struct VkApplicationInfo {
    VkStructureType    sType;
    const void*        pNext;
    const char*        pApplicationName;
    deUint32           applicationVersion;
    const char*        pEngineName;
    deUint32           engineVersion;
    deUint32           apiVersion;
} VkApplicationInfo;

typedef struct VkFormatProperties {
    VkFormatFeatureFlags    linearTilingFeatures;
    VkFormatFeatureFlags    optimalTilingFeatures;
    VkFormatFeatureFlags    bufferFeatures;
} VkFormatProperties;

typedef struct VkImageFormatProperties {
    VkExtent3D            maxExtent;
    deUint32              maxMipLevels;
    deUint32              maxArrayLayers;
    VkSampleCountFlags    sampleCounts;
    VkDeviceSize          maxResourceSize;
} VkImageFormatProperties;

typedef struct VkInstanceCreateInfo {
    VkStructureType             sType;
    const void*                 pNext;
    VkInstanceCreateFlags       flags;
    const VkApplicationInfo*    pApplicationInfo;
    deUint32                    enabledLayerCount;
    const char* const*          ppEnabledLayerNames;
    deUint32                    enabledExtensionCount;
    const char* const*          ppEnabledExtensionNames;
} VkInstanceCreateInfo;

typedef struct VkMemoryHeap {
    VkDeviceSize         size;
    VkMemoryHeapFlags    flags;
} VkMemoryHeap;

typedef struct VkMemoryType {
    VkMemoryPropertyFlags    propertyFlags;
    deUint32                 heapIndex;
} VkMemoryType;

typedef struct VkPhysicalDeviceFeatures {
    VkBool32    robustBufferAccess;
    VkBool32    fullDrawIndexUint32;
    VkBool32    imageCubeArray;
    VkBool32    independentBlend;
    VkBool32    geometryShader;
    VkBool32    tessellationShader;
    VkBool32    sampleRateShading;
    VkBool32    dualSrcBlend;
    VkBool32    logicOp;
    VkBool32    multiDrawIndirect;
    VkBool32    drawIndirectFirstInstance;
    VkBool32    depthClamp;
    VkBool32    depthBiasClamp;
    VkBool32    fillModeNonSolid;
    VkBool32    depthBounds;
    VkBool32    wideLines;
    VkBool32    largePoints;
    VkBool32    alphaToOne;
    VkBool32    multiViewport;
    VkBool32    samplerAnisotropy;
    VkBool32    textureCompressionETC2;
    VkBool32    textureCompressionASTC_LDR;
    VkBool32    textureCompressionBC;
    VkBool32    occlusionQueryPrecise;
    VkBool32    pipelineStatisticsQuery;
    VkBool32    vertexPipelineStoresAndAtomics;
    VkBool32    fragmentStoresAndAtomics;
    VkBool32    shaderTessellationAndGeometryPointSize;
    VkBool32    shaderImageGatherExtended;
    VkBool32    shaderStorageImageExtendedFormats;
    VkBool32    shaderStorageImageMultisample;
    VkBool32    shaderStorageImageReadWithoutFormat;
    VkBool32    shaderStorageImageWriteWithoutFormat;
    VkBool32    shaderUniformBufferArrayDynamicIndexing;
    VkBool32    shaderSampledImageArrayDynamicIndexing;
    VkBool32    shaderStorageBufferArrayDynamicIndexing;
    VkBool32    shaderStorageImageArrayDynamicIndexing;
    VkBool32    shaderClipDistance;
    VkBool32    shaderCullDistance;
    VkBool32    shaderFloat64;
    VkBool32    shaderInt64;
    VkBool32    shaderInt16;
    VkBool32    shaderResourceResidency;
    VkBool32    shaderResourceMinLod;
    VkBool32    sparseBinding;
    VkBool32    sparseResidencyBuffer;
    VkBool32    sparseResidencyImage2D;
    VkBool32    sparseResidencyImage3D;
    VkBool32    sparseResidency2Samples;
    VkBool32    sparseResidency4Samples;
    VkBool32    sparseResidency8Samples;
    VkBool32    sparseResidency16Samples;
    VkBool32    sparseResidencyAliased;
    VkBool32    variableMultisampleRate;
    VkBool32    inheritedQueries;
} VkPhysicalDeviceFeatures;

typedef struct VkPhysicalDeviceLimits {
    deUint32              maxImageDimension1D;
    deUint32              maxImageDimension2D;
    deUint32              maxImageDimension3D;
    deUint32              maxImageDimensionCube;
    deUint32              maxImageArrayLayers;
    deUint32              maxTexelBufferElements;
    deUint32              maxUniformBufferRange;
    deUint32              maxStorageBufferRange;
    deUint32              maxPushConstantsSize;
    deUint32              maxMemoryAllocationCount;
    deUint32              maxSamplerAllocationCount;
    VkDeviceSize          bufferImageGranularity;
    VkDeviceSize          sparseAddressSpaceSize;
    deUint32              maxBoundDescriptorSets;
    deUint32              maxPerStageDescriptorSamplers;
    deUint32              maxPerStageDescriptorUniformBuffers;
    deUint32              maxPerStageDescriptorStorageBuffers;
    deUint32              maxPerStageDescriptorSampledImages;
    deUint32              maxPerStageDescriptorStorageImages;
    deUint32              maxPerStageDescriptorInputAttachments;
    deUint32              maxPerStageResources;
    deUint32              maxDescriptorSetSamplers;
    deUint32              maxDescriptorSetUniformBuffers;
    deUint32              maxDescriptorSetUniformBuffersDynamic;
    deUint32              maxDescriptorSetStorageBuffers;
    deUint32              maxDescriptorSetStorageBuffersDynamic;
    deUint32              maxDescriptorSetSampledImages;
    deUint32              maxDescriptorSetStorageImages;
    deUint32              maxDescriptorSetInputAttachments;
    deUint32              maxVertexInputAttributes;
    deUint32              maxVertexInputBindings;
    deUint32              maxVertexInputAttributeOffset;
    deUint32              maxVertexInputBindingStride;
    deUint32              maxVertexOutputComponents;
    deUint32              maxTessellationGenerationLevel;
    deUint32              maxTessellationPatchSize;
    deUint32              maxTessellationControlPerVertexInputComponents;
    deUint32              maxTessellationControlPerVertexOutputComponents;
    deUint32              maxTessellationControlPerPatchOutputComponents;
    deUint32              maxTessellationControlTotalOutputComponents;
    deUint32              maxTessellationEvaluationInputComponents;
    deUint32              maxTessellationEvaluationOutputComponents;
    deUint32              maxGeometryShaderInvocations;
    deUint32              maxGeometryInputComponents;
    deUint32              maxGeometryOutputComponents;
    deUint32              maxGeometryOutputVertices;
    deUint32              maxGeometryTotalOutputComponents;
    deUint32              maxFragmentInputComponents;
    deUint32              maxFragmentOutputAttachments;
    deUint32              maxFragmentDualSrcAttachments;
    deUint32              maxFragmentCombinedOutputResources;
    deUint32              maxComputeSharedMemorySize;
    deUint32              maxComputeWorkGroupCount[3];
    deUint32              maxComputeWorkGroupInvocations;
    deUint32              maxComputeWorkGroupSize[3];
    deUint32              subPixelPrecisionBits;
    deUint32              subTexelPrecisionBits;
    deUint32              mipmapPrecisionBits;
    deUint32              maxDrawIndexedIndexValue;
    deUint32              maxDrawIndirectCount;
    float                 maxSamplerLodBias;
    float                 maxSamplerAnisotropy;
    deUint32              maxViewports;
    deUint32              maxViewportDimensions[2];
    float                 viewportBoundsRange[2];
    deUint32              viewportSubPixelBits;
    deUintptr                minMemoryMapAlignment;
    VkDeviceSize          minTexelBufferOffsetAlignment;
    VkDeviceSize          minUniformBufferOffsetAlignment;
    VkDeviceSize          minStorageBufferOffsetAlignment;
    deInt32               minTexelOffset;
    deUint32              maxTexelOffset;
    deInt32               minTexelGatherOffset;
    deUint32              maxTexelGatherOffset;
    float                 minInterpolationOffset;
    float                 maxInterpolationOffset;
    deUint32              subPixelInterpolationOffsetBits;
    deUint32              maxFramebufferWidth;
    deUint32              maxFramebufferHeight;
    deUint32              maxFramebufferLayers;
    VkSampleCountFlags    framebufferColorSampleCounts;
    VkSampleCountFlags    framebufferDepthSampleCounts;
    VkSampleCountFlags    framebufferStencilSampleCounts;
    VkSampleCountFlags    framebufferNoAttachmentsSampleCounts;
    deUint32              maxColorAttachments;
    VkSampleCountFlags    sampledImageColorSampleCounts;
    VkSampleCountFlags    sampledImageIntegerSampleCounts;
    VkSampleCountFlags    sampledImageDepthSampleCounts;
    VkSampleCountFlags    sampledImageStencilSampleCounts;
    VkSampleCountFlags    storageImageSampleCounts;
    deUint32              maxSampleMaskWords;
    VkBool32              timestampComputeAndGraphics;
    float                 timestampPeriod;
    deUint32              maxClipDistances;
    deUint32              maxCullDistances;
    deUint32              maxCombinedClipAndCullDistances;
    deUint32              discreteQueuePriorities;
    float                 pointSizeRange[2];
    float                 lineWidthRange[2];
    float                 pointSizeGranularity;
    float                 lineWidthGranularity;
    VkBool32              strictLines;
    VkBool32              standardSampleLocations;
    VkDeviceSize          optimalBufferCopyOffsetAlignment;
    VkDeviceSize          optimalBufferCopyRowPitchAlignment;
    VkDeviceSize          nonCoherentAtomSize;
} VkPhysicalDeviceLimits;

typedef struct VkPhysicalDeviceMemoryProperties {
    deUint32        memoryTypeCount;
    VkMemoryType    memoryTypes[VK_MAX_MEMORY_TYPES];
    deUint32        memoryHeapCount;
    VkMemoryHeap    memoryHeaps[VK_MAX_MEMORY_HEAPS];
} VkPhysicalDeviceMemoryProperties;

typedef struct VkPhysicalDeviceSparseProperties {
    VkBool32    residencyStandard2DBlockShape;
    VkBool32    residencyStandard2DMultisampleBlockShape;
    VkBool32    residencyStandard3DBlockShape;
    VkBool32    residencyAlignedMipSize;
    VkBool32    residencyNonResidentStrict;
} VkPhysicalDeviceSparseProperties;

typedef struct VkPhysicalDeviceProperties {
    deUint32                            apiVersion;
    deUint32                            driverVersion;
    deUint32                            vendorID;
    deUint32                            deviceID;
    VkPhysicalDeviceType                deviceType;
    char                                deviceName[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE];
    deUint8                             pipelineCacheUUID[VK_UUID_SIZE];
    VkPhysicalDeviceLimits              limits;
    VkPhysicalDeviceSparseProperties    sparseProperties;
} VkPhysicalDeviceProperties;

typedef struct VkQueueFamilyProperties {
    VkQueueFlags    queueFlags;
    deUint32        queueCount;
    deUint32        timestampValidBits;
    VkExtent3D      minImageTransferGranularity;
} VkQueueFamilyProperties;

typedef struct VkDeviceQueueCreateInfo {
    VkStructureType             sType;
    const void*                 pNext;
    VkDeviceQueueCreateFlags    flags;
    deUint32                    queueFamilyIndex;
    deUint32                    queueCount;
    const float*                pQueuePriorities;
} VkDeviceQueueCreateInfo;

typedef struct VkDeviceCreateInfo {
    VkStructureType                    sType;
    const void*                        pNext;
    VkDeviceCreateFlags                flags;
    deUint32                           queueCreateInfoCount;
    const VkDeviceQueueCreateInfo*     pQueueCreateInfos;
    deUint32                           enabledLayerCount;
    const char* const*                 ppEnabledLayerNames;
    deUint32                           enabledExtensionCount;
    const char* const*                 ppEnabledExtensionNames;
    const VkPhysicalDeviceFeatures*    pEnabledFeatures;
} VkDeviceCreateInfo;

typedef struct VkExtensionProperties {
    char        extensionName[VK_MAX_EXTENSION_NAME_SIZE];
    deUint32    specVersion;
} VkExtensionProperties;

typedef struct VkLayerProperties {
    char        layerName[VK_MAX_EXTENSION_NAME_SIZE];
    deUint32    specVersion;
    deUint32    implementationVersion;
    char        description[VK_MAX_DESCRIPTION_SIZE];
} VkLayerProperties;

typedef struct VkSubmitInfo {
    VkStructureType                sType;
    const void*                    pNext;
    deUint32                       waitSemaphoreCount;
    const VkSemaphore*             pWaitSemaphores;
    const VkPipelineStageFlags*    pWaitDstStageMask;
    deUint32                       commandBufferCount;
    const VkCommandBuffer*         pCommandBuffers;
    deUint32                       signalSemaphoreCount;
    const VkSemaphore*             pSignalSemaphores;
} VkSubmitInfo;

typedef struct VkMappedMemoryRange {
    VkStructureType    sType;
    const void*        pNext;
    VkDeviceMemory     memory;
    VkDeviceSize       offset;
    VkDeviceSize       size;
} VkMappedMemoryRange;

typedef struct VkMemoryAllocateInfo {
    VkStructureType    sType;
    const void*        pNext;
    VkDeviceSize       allocationSize;
    deUint32           memoryTypeIndex;
} VkMemoryAllocateInfo;

typedef struct VkMemoryRequirements {
    VkDeviceSize    size;
    VkDeviceSize    alignment;
    deUint32        memoryTypeBits;
} VkMemoryRequirements;

typedef struct VkSparseMemoryBind {
    VkDeviceSize               resourceOffset;
    VkDeviceSize               size;
    VkDeviceMemory             memory;
    VkDeviceSize               memoryOffset;
    VkSparseMemoryBindFlags    flags;
} VkSparseMemoryBind;

typedef struct VkSparseBufferMemoryBindInfo {
    VkBuffer                     buffer;
    deUint32                     bindCount;
    const VkSparseMemoryBind*    pBinds;
} VkSparseBufferMemoryBindInfo;

typedef struct VkSparseImageOpaqueMemoryBindInfo {
    VkImage                      image;
    deUint32                     bindCount;
    const VkSparseMemoryBind*    pBinds;
} VkSparseImageOpaqueMemoryBindInfo;

typedef struct VkImageSubresource {
    VkImageAspectFlags    aspectMask;
    deUint32              mipLevel;
    deUint32              arrayLayer;
} VkImageSubresource;

typedef struct VkSparseImageMemoryBind {
    VkImageSubresource         subresource;
    VkOffset3D                 offset;
    VkExtent3D                 extent;
    VkDeviceMemory             memory;
    VkDeviceSize               memoryOffset;
    VkSparseMemoryBindFlags    flags;
} VkSparseImageMemoryBind;

typedef struct VkSparseImageMemoryBindInfo {
    VkImage                           image;
    deUint32                          bindCount;
    const VkSparseImageMemoryBind*    pBinds;
} VkSparseImageMemoryBindInfo;

typedef struct VkBindSparseInfo {
    VkStructureType                             sType;
    const void*                                 pNext;
    deUint32                                    waitSemaphoreCount;
    const VkSemaphore*                          pWaitSemaphores;
    deUint32                                    bufferBindCount;
    const VkSparseBufferMemoryBindInfo*         pBufferBinds;
    deUint32                                    imageOpaqueBindCount;
    const VkSparseImageOpaqueMemoryBindInfo*    pImageOpaqueBinds;
    deUint32                                    imageBindCount;
    const VkSparseImageMemoryBindInfo*          pImageBinds;
    deUint32                                    signalSemaphoreCount;
    const VkSemaphore*                          pSignalSemaphores;
} VkBindSparseInfo;

typedef struct VkSparseImageFormatProperties {
    VkImageAspectFlags          aspectMask;
    VkExtent3D                  imageGranularity;
    VkSparseImageFormatFlags    flags;
} VkSparseImageFormatProperties;

typedef struct VkSparseImageMemoryRequirements {
    VkSparseImageFormatProperties    formatProperties;
    deUint32                         imageMipTailFirstLod;
    VkDeviceSize                     imageMipTailSize;
    VkDeviceSize                     imageMipTailOffset;
    VkDeviceSize                     imageMipTailStride;
} VkSparseImageMemoryRequirements;

typedef struct VkFenceCreateInfo {
    VkStructureType       sType;
    const void*           pNext;
    VkFenceCreateFlags    flags;
} VkFenceCreateInfo;

typedef struct VkSemaphoreCreateInfo {
    VkStructureType           sType;
    const void*               pNext;
    VkSemaphoreCreateFlags    flags;
} VkSemaphoreCreateInfo;

typedef struct VkEventCreateInfo {
    VkStructureType       sType;
    const void*           pNext;
    VkEventCreateFlags    flags;
} VkEventCreateInfo;

typedef struct VkQueryPoolCreateInfo {
    VkStructureType                  sType;
    const void*                      pNext;
    VkQueryPoolCreateFlags           flags;
    VkQueryType                      queryType;
    deUint32                         queryCount;
    VkQueryPipelineStatisticFlags    pipelineStatistics;
} VkQueryPoolCreateInfo;

typedef struct VkBufferCreateInfo {
    VkStructureType        sType;
    const void*            pNext;
    VkBufferCreateFlags    flags;
    VkDeviceSize           size;
    VkBufferUsageFlags     usage;
    VkSharingMode          sharingMode;
    deUint32               queueFamilyIndexCount;
    const deUint32*        pQueueFamilyIndices;
} VkBufferCreateInfo;

typedef struct VkBufferViewCreateInfo {
    VkStructureType            sType;
    const void*                pNext;
    VkBufferViewCreateFlags    flags;
    VkBuffer                   buffer;
    VkFormat                   format;
    VkDeviceSize               offset;
    VkDeviceSize               range;
} VkBufferViewCreateInfo;

typedef struct VkImageCreateInfo {
    VkStructureType          sType;
    const void*              pNext;
    VkImageCreateFlags       flags;
    VkImageType              imageType;
    VkFormat                 format;
    VkExtent3D               extent;
    deUint32                 mipLevels;
    deUint32                 arrayLayers;
    VkSampleCountFlagBits    samples;
    VkImageTiling            tiling;
    VkImageUsageFlags        usage;
    VkSharingMode            sharingMode;
    deUint32                 queueFamilyIndexCount;
    const deUint32*          pQueueFamilyIndices;
    VkImageLayout            initialLayout;
} VkImageCreateInfo;

typedef struct VkSubresourceLayout {
    VkDeviceSize    offset;
    VkDeviceSize    size;
    VkDeviceSize    rowPitch;
    VkDeviceSize    arrayPitch;
    VkDeviceSize    depthPitch;
} VkSubresourceLayout;

typedef struct VkComponentMapping {
    VkComponentSwizzle    r;
    VkComponentSwizzle    g;
    VkComponentSwizzle    b;
    VkComponentSwizzle    a;
} VkComponentMapping;

typedef struct VkImageViewCreateInfo {
    VkStructureType            sType;
    const void*                pNext;
    VkImageViewCreateFlags     flags;
    VkImage                    image;
    VkImageViewType            viewType;
    VkFormat                   format;
    VkComponentMapping         components;
    VkImageSubresourceRange    subresourceRange;
} VkImageViewCreateInfo;

typedef struct VkShaderModuleCreateInfo {
    VkStructureType              sType;
    const void*                  pNext;
    VkShaderModuleCreateFlags    flags;
    deUintptr                       codeSize;
    const deUint32*              pCode;
} VkShaderModuleCreateInfo;

typedef struct VkPipelineCacheCreateInfo {
    VkStructureType               sType;
    const void*                   pNext;
    VkPipelineCacheCreateFlags    flags;
    deUintptr                        initialDataSize;
    const void*                   pInitialData;
} VkPipelineCacheCreateInfo;

typedef struct VkSpecializationMapEntry {
    deUint32    constantID;
    deUint32    offset;
    deUintptr      size;
} VkSpecializationMapEntry;

typedef struct VkSpecializationInfo {
    deUint32                           mapEntryCount;
    const VkSpecializationMapEntry*    pMapEntries;
    deUintptr                             dataSize;
    const void*                        pData;
} VkSpecializationInfo;

typedef struct VkPipelineShaderStageCreateInfo {
    VkStructureType                     sType;
    const void*                         pNext;
    VkPipelineShaderStageCreateFlags    flags;
    VkShaderStageFlagBits               stage;
    VkShaderModule                      module;
    const char*                         pName;
    const VkSpecializationInfo*         pSpecializationInfo;
} VkPipelineShaderStageCreateInfo;

typedef struct VkComputePipelineCreateInfo {
    VkStructureType                    sType;
    const void*                        pNext;
    VkPipelineCreateFlags              flags;
    VkPipelineShaderStageCreateInfo    stage;
    VkPipelineLayout                   layout;
    VkPipeline                         basePipelineHandle;
    deInt32                            basePipelineIndex;
} VkComputePipelineCreateInfo;

typedef struct VkVertexInputBindingDescription {
    deUint32             binding;
    deUint32             stride;
    VkVertexInputRate    inputRate;
} VkVertexInputBindingDescription;

typedef struct VkVertexInputAttributeDescription {
    deUint32    location;
    deUint32    binding;
    VkFormat    format;
    deUint32    offset;
} VkVertexInputAttributeDescription;

typedef struct VkPipelineVertexInputStateCreateInfo {
    VkStructureType                             sType;
    const void*                                 pNext;
    VkPipelineVertexInputStateCreateFlags       flags;
    deUint32                                    vertexBindingDescriptionCount;
    const VkVertexInputBindingDescription*      pVertexBindingDescriptions;
    deUint32                                    vertexAttributeDescriptionCount;
    const VkVertexInputAttributeDescription*    pVertexAttributeDescriptions;
} VkPipelineVertexInputStateCreateInfo;

typedef struct VkPipelineInputAssemblyStateCreateInfo {
    VkStructureType                            sType;
    const void*                                pNext;
    VkPipelineInputAssemblyStateCreateFlags    flags;
    VkPrimitiveTopology                        topology;
    VkBool32                                   primitiveRestartEnable;
} VkPipelineInputAssemblyStateCreateInfo;

typedef struct VkPipelineTessellationStateCreateInfo {
    VkStructureType                           sType;
    const void*                               pNext;
    VkPipelineTessellationStateCreateFlags    flags;
    deUint32                                  patchControlPoints;
} VkPipelineTessellationStateCreateInfo;

typedef struct VkViewport {
    float    x;
    float    y;
    float    width;
    float    height;
    float    minDepth;
    float    maxDepth;
} VkViewport;

typedef struct VkPipelineViewportStateCreateInfo {
    VkStructureType                       sType;
    const void*                           pNext;
    VkPipelineViewportStateCreateFlags    flags;
    deUint32                              viewportCount;
    const VkViewport*                     pViewports;
    deUint32                              scissorCount;
    const VkRect2D*                       pScissors;
} VkPipelineViewportStateCreateInfo;

typedef struct VkPipelineRasterizationStateCreateInfo {
    VkStructureType                            sType;
    const void*                                pNext;
    VkPipelineRasterizationStateCreateFlags    flags;
    VkBool32                                   depthClampEnable;
    VkBool32                                   rasterizerDiscardEnable;
    VkPolygonMode                              polygonMode;
    VkCullModeFlags                            cullMode;
    VkFrontFace                                frontFace;
    VkBool32                                   depthBiasEnable;
    float                                      depthBiasConstantFactor;
    float                                      depthBiasClamp;
    float                                      depthBiasSlopeFactor;
    float                                      lineWidth;
} VkPipelineRasterizationStateCreateInfo;

typedef struct VkPipelineMultisampleStateCreateInfo {
    VkStructureType                          sType;
    const void*                              pNext;
    VkPipelineMultisampleStateCreateFlags    flags;
    VkSampleCountFlagBits                    rasterizationSamples;
    VkBool32                                 sampleShadingEnable;
    float                                    minSampleShading;
    const VkSampleMask*                      pSampleMask;
    VkBool32                                 alphaToCoverageEnable;
    VkBool32                                 alphaToOneEnable;
} VkPipelineMultisampleStateCreateInfo;

typedef struct VkStencilOpState {
    VkStencilOp    failOp;
    VkStencilOp    passOp;
    VkStencilOp    depthFailOp;
    VkCompareOp    compareOp;
    deUint32       compareMask;
    deUint32       writeMask;
    deUint32       reference;
} VkStencilOpState;

typedef struct VkPipelineDepthStencilStateCreateInfo {
    VkStructureType                           sType;
    const void*                               pNext;
    VkPipelineDepthStencilStateCreateFlags    flags;
    VkBool32                                  depthTestEnable;
    VkBool32                                  depthWriteEnable;
    VkCompareOp                               depthCompareOp;
    VkBool32                                  depthBoundsTestEnable;
    VkBool32                                  stencilTestEnable;
    VkStencilOpState                          front;
    VkStencilOpState                          back;
    float                                     minDepthBounds;
    float                                     maxDepthBounds;
} VkPipelineDepthStencilStateCreateInfo;

typedef struct VkPipelineColorBlendAttachmentState {
    VkBool32                 blendEnable;
    VkBlendFactor            srcColorBlendFactor;
    VkBlendFactor            dstColorBlendFactor;
    VkBlendOp                colorBlendOp;
    VkBlendFactor            srcAlphaBlendFactor;
    VkBlendFactor            dstAlphaBlendFactor;
    VkBlendOp                alphaBlendOp;
    VkColorComponentFlags    colorWriteMask;
} VkPipelineColorBlendAttachmentState;

typedef struct VkPipelineColorBlendStateCreateInfo {
    VkStructureType                               sType;
    const void*                                   pNext;
    VkPipelineColorBlendStateCreateFlags          flags;
    VkBool32                                      logicOpEnable;
    VkLogicOp                                     logicOp;
    deUint32                                      attachmentCount;
    const VkPipelineColorBlendAttachmentState*    pAttachments;
    float                                         blendConstants[4];
} VkPipelineColorBlendStateCreateInfo;

typedef struct VkPipelineDynamicStateCreateInfo {
    VkStructureType                      sType;
    const void*                          pNext;
    VkPipelineDynamicStateCreateFlags    flags;
    deUint32                             dynamicStateCount;
    const VkDynamicState*                pDynamicStates;
} VkPipelineDynamicStateCreateInfo;

typedef struct VkGraphicsPipelineCreateInfo {
    VkStructureType                                  sType;
    const void*                                      pNext;
    VkPipelineCreateFlags                            flags;
    deUint32                                         stageCount;
    const VkPipelineShaderStageCreateInfo*           pStages;
    const VkPipelineVertexInputStateCreateInfo*      pVertexInputState;
    const VkPipelineInputAssemblyStateCreateInfo*    pInputAssemblyState;
    const VkPipelineTessellationStateCreateInfo*     pTessellationState;
    const VkPipelineViewportStateCreateInfo*         pViewportState;
    const VkPipelineRasterizationStateCreateInfo*    pRasterizationState;
    const VkPipelineMultisampleStateCreateInfo*      pMultisampleState;
    const VkPipelineDepthStencilStateCreateInfo*     pDepthStencilState;
    const VkPipelineColorBlendStateCreateInfo*       pColorBlendState;
    const VkPipelineDynamicStateCreateInfo*          pDynamicState;
    VkPipelineLayout                                 layout;
    VkRenderPass                                     renderPass;
    deUint32                                         subpass;
    VkPipeline                                       basePipelineHandle;
    deInt32                                          basePipelineIndex;
} VkGraphicsPipelineCreateInfo;

typedef struct VkPushConstantRange {
    VkShaderStageFlags    stageFlags;
    deUint32              offset;
    deUint32              size;
} VkPushConstantRange;

typedef struct VkPipelineLayoutCreateInfo {
    VkStructureType                 sType;
    const void*                     pNext;
    VkPipelineLayoutCreateFlags     flags;
    deUint32                        setLayoutCount;
    const VkDescriptorSetLayout*    pSetLayouts;
    deUint32                        pushConstantRangeCount;
    const VkPushConstantRange*      pPushConstantRanges;
} VkPipelineLayoutCreateInfo;

typedef struct VkSamplerCreateInfo {
    VkStructureType         sType;
    const void*             pNext;
    VkSamplerCreateFlags    flags;
    VkFilter                magFilter;
    VkFilter                minFilter;
    VkSamplerMipmapMode     mipmapMode;
    VkSamplerAddressMode    addressModeU;
    VkSamplerAddressMode    addressModeV;
    VkSamplerAddressMode    addressModeW;
    float                   mipLodBias;
    VkBool32                anisotropyEnable;
    float                   maxAnisotropy;
    VkBool32                compareEnable;
    VkCompareOp             compareOp;
    float                   minLod;
    float                   maxLod;
    VkBorderColor           borderColor;
    VkBool32                unnormalizedCoordinates;
} VkSamplerCreateInfo;

typedef struct VkCopyDescriptorSet {
    VkStructureType    sType;
    const void*        pNext;
    VkDescriptorSet    srcSet;
    deUint32           srcBinding;
    deUint32           srcArrayElement;
    VkDescriptorSet    dstSet;
    deUint32           dstBinding;
    deUint32           dstArrayElement;
    deUint32           descriptorCount;
} VkCopyDescriptorSet;

typedef struct VkDescriptorBufferInfo {
    VkBuffer        buffer;
    VkDeviceSize    offset;
    VkDeviceSize    range;
} VkDescriptorBufferInfo;

typedef struct VkDescriptorImageInfo {
    VkSampler        sampler;
    VkImageView      imageView;
    VkImageLayout    imageLayout;
} VkDescriptorImageInfo;

typedef struct VkDescriptorPoolSize {
    VkDescriptorType    type;
    deUint32            descriptorCount;
} VkDescriptorPoolSize;

typedef struct VkDescriptorPoolCreateInfo {
    VkStructureType                sType;
    const void*                    pNext;
    VkDescriptorPoolCreateFlags    flags;
    deUint32                       maxSets;
    deUint32                       poolSizeCount;
    const VkDescriptorPoolSize*    pPoolSizes;
} VkDescriptorPoolCreateInfo;

typedef struct VkDescriptorSetAllocateInfo {
    VkStructureType                 sType;
    const void*                     pNext;
    VkDescriptorPool                descriptorPool;
    deUint32                        descriptorSetCount;
    const VkDescriptorSetLayout*    pSetLayouts;
} VkDescriptorSetAllocateInfo;

typedef struct VkDescriptorSetLayoutBinding {
    deUint32              binding;
    VkDescriptorType      descriptorType;
    deUint32              descriptorCount;
    VkShaderStageFlags    stageFlags;
    const VkSampler*      pImmutableSamplers;
} VkDescriptorSetLayoutBinding;

typedef struct VkDescriptorSetLayoutCreateInfo {
    VkStructureType                        sType;
    const void*                            pNext;
    VkDescriptorSetLayoutCreateFlags       flags;
    deUint32                               bindingCount;
    const VkDescriptorSetLayoutBinding*    pBindings;
} VkDescriptorSetLayoutCreateInfo;

typedef struct VkWriteDescriptorSet {
    VkStructureType                  sType;
    const void*                      pNext;
    VkDescriptorSet                  dstSet;
    deUint32                         dstBinding;
    deUint32                         dstArrayElement;
    deUint32                         descriptorCount;
    VkDescriptorType                 descriptorType;
    const VkDescriptorImageInfo*     pImageInfo;
    const VkDescriptorBufferInfo*    pBufferInfo;
    const VkBufferView*              pTexelBufferView;
} VkWriteDescriptorSet;

typedef struct VkAttachmentDescription {
    VkAttachmentDescriptionFlags    flags;
    VkFormat                        format;
    VkSampleCountFlagBits           samples;
    VkAttachmentLoadOp              loadOp;
    VkAttachmentStoreOp             storeOp;
    VkAttachmentLoadOp              stencilLoadOp;
    VkAttachmentStoreOp             stencilStoreOp;
    VkImageLayout                   initialLayout;
    VkImageLayout                   finalLayout;
} VkAttachmentDescription;

typedef struct VkAttachmentReference {
    deUint32         attachment;
    VkImageLayout    layout;
} VkAttachmentReference;

typedef struct VkFramebufferCreateInfo {
    VkStructureType             sType;
    const void*                 pNext;
    VkFramebufferCreateFlags    flags;
    VkRenderPass                renderPass;
    deUint32                    attachmentCount;
    const VkImageView*          pAttachments;
    deUint32                    width;
    deUint32                    height;
    deUint32                    layers;
} VkFramebufferCreateInfo;

typedef struct VkSubpassDescription {
    VkSubpassDescriptionFlags       flags;
    VkPipelineBindPoint             pipelineBindPoint;
    deUint32                        inputAttachmentCount;
    const VkAttachmentReference*    pInputAttachments;
    deUint32                        colorAttachmentCount;
    const VkAttachmentReference*    pColorAttachments;
    const VkAttachmentReference*    pResolveAttachments;
    const VkAttachmentReference*    pDepthStencilAttachment;
    deUint32                        preserveAttachmentCount;
    const deUint32*                 pPreserveAttachments;
} VkSubpassDescription;

typedef struct VkSubpassDependency {
    deUint32                srcSubpass;
    deUint32                dstSubpass;
    VkPipelineStageFlags    srcStageMask;
    VkPipelineStageFlags    dstStageMask;
    VkAccessFlags           srcAccessMask;
    VkAccessFlags           dstAccessMask;
    VkDependencyFlags       dependencyFlags;
} VkSubpassDependency;

typedef struct VkRenderPassCreateInfo {
    VkStructureType                   sType;
    const void*                       pNext;
    VkRenderPassCreateFlags           flags;
    deUint32                          attachmentCount;
    const VkAttachmentDescription*    pAttachments;
    deUint32                          subpassCount;
    const VkSubpassDescription*       pSubpasses;
    deUint32                          dependencyCount;
    const VkSubpassDependency*        pDependencies;
} VkRenderPassCreateInfo;

typedef struct VkCommandPoolCreateInfo {
    VkStructureType             sType;
    const void*                 pNext;
    VkCommandPoolCreateFlags    flags;
    deUint32                    queueFamilyIndex;
} VkCommandPoolCreateInfo;

typedef struct VkCommandBufferAllocateInfo {
    VkStructureType         sType;
    const void*             pNext;
    VkCommandPool           commandPool;
    VkCommandBufferLevel    level;
    deUint32                commandBufferCount;
} VkCommandBufferAllocateInfo;

typedef struct VkCommandBufferInheritanceInfo {
    VkStructureType                  sType;
    const void*                      pNext;
    VkRenderPass                     renderPass;
    deUint32                         subpass;
    VkFramebuffer                    framebuffer;
    VkBool32                         occlusionQueryEnable;
    VkQueryControlFlags              queryFlags;
    VkQueryPipelineStatisticFlags    pipelineStatistics;
} VkCommandBufferInheritanceInfo;

typedef struct VkCommandBufferBeginInfo {
    VkStructureType                          sType;
    const void*                              pNext;
    VkCommandBufferUsageFlags                flags;
    const VkCommandBufferInheritanceInfo*    pInheritanceInfo;
} VkCommandBufferBeginInfo;

typedef struct VkBufferCopy {
    VkDeviceSize    srcOffset;
    VkDeviceSize    dstOffset;
    VkDeviceSize    size;
} VkBufferCopy;

typedef struct VkImageSubresourceLayers {
    VkImageAspectFlags    aspectMask;
    deUint32              mipLevel;
    deUint32              baseArrayLayer;
    deUint32              layerCount;
} VkImageSubresourceLayers;

typedef struct VkBufferImageCopy {
    VkDeviceSize                bufferOffset;
    deUint32                    bufferRowLength;
    deUint32                    bufferImageHeight;
    VkImageSubresourceLayers    imageSubresource;
    VkOffset3D                  imageOffset;
    VkExtent3D                  imageExtent;
} VkBufferImageCopy;

typedef union VkClearColorValue {
    float       float32[4];
    deInt32     int32[4];
    deUint32    uint32[4];
} VkClearColorValue;

typedef struct VkClearDepthStencilValue {
    float       depth;
    deUint32    stencil;
} VkClearDepthStencilValue;

typedef union VkClearValue {
    VkClearColorValue           color;
    VkClearDepthStencilValue    depthStencil;
} VkClearValue;

typedef struct VkClearAttachment {
    VkImageAspectFlags    aspectMask;
    deUint32              colorAttachment;
    VkClearValue          clearValue;
} VkClearAttachment;

typedef struct VkClearRect {
    VkRect2D    rect;
    deUint32    baseArrayLayer;
    deUint32    layerCount;
} VkClearRect;

typedef struct VkImageBlit {
    VkImageSubresourceLayers    srcSubresource;
    VkOffset3D                  srcOffsets[2];
    VkImageSubresourceLayers    dstSubresource;
    VkOffset3D                  dstOffsets[2];
} VkImageBlit;

typedef struct VkImageCopy {
    VkImageSubresourceLayers    srcSubresource;
    VkOffset3D                  srcOffset;
    VkImageSubresourceLayers    dstSubresource;
    VkOffset3D                  dstOffset;
    VkExtent3D                  extent;
} VkImageCopy;

typedef struct VkImageResolve {
    VkImageSubresourceLayers    srcSubresource;
    VkOffset3D                  srcOffset;
    VkImageSubresourceLayers    dstSubresource;
    VkOffset3D                  dstOffset;
    VkExtent3D                  extent;
} VkImageResolve;

typedef struct VkRenderPassBeginInfo {
    VkStructureType        sType;
    const void*            pNext;
    VkRenderPass           renderPass;
    VkFramebuffer          framebuffer;
    VkRect2D               renderArea;
    deUint32               clearValueCount;
    const VkClearValue*    pClearValues;
} VkRenderPassBeginInfo;

typedef VkResult (VKAPI_PTR *PFN_vkCreateInstance)(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance);
typedef void (VKAPI_PTR *PFN_vkDestroyInstance)(VkInstance instance, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkEnumeratePhysicalDevices)(VkInstance instance, deUint32* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceFeatures)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceFormatProperties)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties);
typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceImageFormatProperties)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceProperties)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceQueueFamilyProperties)(VkPhysicalDevice physicalDevice, deUint32* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceMemoryProperties)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties);
typedef PFN_vkVoidFunction (VKAPI_PTR *PFN_vkGetInstanceProcAddr)(VkInstance instance, const char* pName);
typedef PFN_vkVoidFunction (VKAPI_PTR *PFN_vkGetDeviceProcAddr)(VkDevice device, const char* pName);
typedef VkResult (VKAPI_PTR *PFN_vkCreateDevice)(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice);
typedef void (VKAPI_PTR *PFN_vkDestroyDevice)(VkDevice device, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkEnumerateInstanceExtensionProperties)(const char* pLayerName, deUint32* pPropertyCount, VkExtensionProperties* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkEnumerateDeviceExtensionProperties)(VkPhysicalDevice physicalDevice, const char* pLayerName, deUint32* pPropertyCount, VkExtensionProperties* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkEnumerateInstanceLayerProperties)(deUint32* pPropertyCount, VkLayerProperties* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkEnumerateDeviceLayerProperties)(VkPhysicalDevice physicalDevice, deUint32* pPropertyCount, VkLayerProperties* pProperties);
typedef void (VKAPI_PTR *PFN_vkGetDeviceQueue)(VkDevice device, deUint32 queueFamilyIndex, deUint32 queueIndex, VkQueue* pQueue);
typedef VkResult (VKAPI_PTR *PFN_vkQueueSubmit)(VkQueue queue, deUint32 submitCount, const VkSubmitInfo* pSubmits, VkFence fence);
typedef VkResult (VKAPI_PTR *PFN_vkQueueWaitIdle)(VkQueue queue);
typedef VkResult (VKAPI_PTR *PFN_vkDeviceWaitIdle)(VkDevice device);
typedef VkResult (VKAPI_PTR *PFN_vkAllocateMemory)(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory);
typedef void (VKAPI_PTR *PFN_vkFreeMemory)(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkMapMemory)(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData);
typedef void (VKAPI_PTR *PFN_vkUnmapMemory)(VkDevice device, VkDeviceMemory memory);
typedef VkResult (VKAPI_PTR *PFN_vkFlushMappedMemoryRanges)(VkDevice device, deUint32 memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
typedef VkResult (VKAPI_PTR *PFN_vkInvalidateMappedMemoryRanges)(VkDevice device, deUint32 memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
typedef void (VKAPI_PTR *PFN_vkGetDeviceMemoryCommitment)(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes);
typedef VkResult (VKAPI_PTR *PFN_vkBindBufferMemory)(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset);
typedef VkResult (VKAPI_PTR *PFN_vkBindImageMemory)(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset);
typedef void (VKAPI_PTR *PFN_vkGetBufferMemoryRequirements)(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements);
typedef void (VKAPI_PTR *PFN_vkGetImageMemoryRequirements)(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements);
typedef void (VKAPI_PTR *PFN_vkGetImageSparseMemoryRequirements)(VkDevice device, VkImage image, deUint32* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceSparseImageFormatProperties)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, deUint32* pPropertyCount, VkSparseImageFormatProperties* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkQueueBindSparse)(VkQueue queue, deUint32 bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence);
typedef VkResult (VKAPI_PTR *PFN_vkCreateFence)(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
typedef void (VKAPI_PTR *PFN_vkDestroyFence)(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkResetFences)(VkDevice device, deUint32 fenceCount, const VkFence* pFences);
typedef VkResult (VKAPI_PTR *PFN_vkGetFenceStatus)(VkDevice device, VkFence fence);
typedef VkResult (VKAPI_PTR *PFN_vkWaitForFences)(VkDevice device, deUint32 fenceCount, const VkFence* pFences, VkBool32 waitAll, deUint64 timeout);
typedef VkResult (VKAPI_PTR *PFN_vkCreateSemaphore)(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore);
typedef void (VKAPI_PTR *PFN_vkDestroySemaphore)(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkCreateEvent)(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent);
typedef void (VKAPI_PTR *PFN_vkDestroyEvent)(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkGetEventStatus)(VkDevice device, VkEvent event);
typedef VkResult (VKAPI_PTR *PFN_vkSetEvent)(VkDevice device, VkEvent event);
typedef VkResult (VKAPI_PTR *PFN_vkResetEvent)(VkDevice device, VkEvent event);
typedef VkResult (VKAPI_PTR *PFN_vkCreateQueryPool)(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool);
typedef void (VKAPI_PTR *PFN_vkDestroyQueryPool)(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkGetQueryPoolResults)(VkDevice device, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount, deUintptr dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags);
typedef VkResult (VKAPI_PTR *PFN_vkCreateBuffer)(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer);
typedef void (VKAPI_PTR *PFN_vkDestroyBuffer)(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkCreateBufferView)(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView);
typedef void (VKAPI_PTR *PFN_vkDestroyBufferView)(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkCreateImage)(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage);
typedef void (VKAPI_PTR *PFN_vkDestroyImage)(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator);
typedef void (VKAPI_PTR *PFN_vkGetImageSubresourceLayout)(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout);
typedef VkResult (VKAPI_PTR *PFN_vkCreateImageView)(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView);
typedef void (VKAPI_PTR *PFN_vkDestroyImageView)(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkCreateShaderModule)(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule);
typedef void (VKAPI_PTR *PFN_vkDestroyShaderModule)(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkCreatePipelineCache)(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache);
typedef void (VKAPI_PTR *PFN_vkDestroyPipelineCache)(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkGetPipelineCacheData)(VkDevice device, VkPipelineCache pipelineCache, deUintptr* pDataSize, void* pData);
typedef VkResult (VKAPI_PTR *PFN_vkMergePipelineCaches)(VkDevice device, VkPipelineCache dstCache, deUint32 srcCacheCount, const VkPipelineCache* pSrcCaches);
typedef VkResult (VKAPI_PTR *PFN_vkCreateGraphicsPipelines)(VkDevice device, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
typedef VkResult (VKAPI_PTR *PFN_vkCreateComputePipelines)(VkDevice device, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
typedef void (VKAPI_PTR *PFN_vkDestroyPipeline)(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkCreatePipelineLayout)(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout);
typedef void (VKAPI_PTR *PFN_vkDestroyPipelineLayout)(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkCreateSampler)(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler);
typedef void (VKAPI_PTR *PFN_vkDestroySampler)(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkCreateDescriptorSetLayout)(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout);
typedef void (VKAPI_PTR *PFN_vkDestroyDescriptorSetLayout)(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkCreateDescriptorPool)(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool);
typedef void (VKAPI_PTR *PFN_vkDestroyDescriptorPool)(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkResetDescriptorPool)(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags);
typedef VkResult (VKAPI_PTR *PFN_vkAllocateDescriptorSets)(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets);
typedef VkResult (VKAPI_PTR *PFN_vkFreeDescriptorSets)(VkDevice device, VkDescriptorPool descriptorPool, deUint32 descriptorSetCount, const VkDescriptorSet* pDescriptorSets);
typedef void (VKAPI_PTR *PFN_vkUpdateDescriptorSets)(VkDevice device, deUint32 descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, deUint32 descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies);
typedef VkResult (VKAPI_PTR *PFN_vkCreateFramebuffer)(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer);
typedef void (VKAPI_PTR *PFN_vkDestroyFramebuffer)(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkCreateRenderPass)(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
typedef void (VKAPI_PTR *PFN_vkDestroyRenderPass)(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator);
typedef void (VKAPI_PTR *PFN_vkGetRenderAreaGranularity)(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity);
typedef VkResult (VKAPI_PTR *PFN_vkCreateCommandPool)(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool);
typedef void (VKAPI_PTR *PFN_vkDestroyCommandPool)(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkResetCommandPool)(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags);
typedef VkResult (VKAPI_PTR *PFN_vkAllocateCommandBuffers)(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers);
typedef void (VKAPI_PTR *PFN_vkFreeCommandBuffers)(VkDevice device, VkCommandPool commandPool, deUint32 commandBufferCount, const VkCommandBuffer* pCommandBuffers);
typedef VkResult (VKAPI_PTR *PFN_vkBeginCommandBuffer)(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo);
typedef VkResult (VKAPI_PTR *PFN_vkEndCommandBuffer)(VkCommandBuffer commandBuffer);
typedef VkResult (VKAPI_PTR *PFN_vkResetCommandBuffer)(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags);
typedef void (VKAPI_PTR *PFN_vkCmdBindPipeline)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
typedef void (VKAPI_PTR *PFN_vkCmdSetViewport)(VkCommandBuffer commandBuffer, deUint32 firstViewport, deUint32 viewportCount, const VkViewport* pViewports);
typedef void (VKAPI_PTR *PFN_vkCmdSetScissor)(VkCommandBuffer commandBuffer, deUint32 firstScissor, deUint32 scissorCount, const VkRect2D* pScissors);
typedef void (VKAPI_PTR *PFN_vkCmdSetLineWidth)(VkCommandBuffer commandBuffer, float lineWidth);
typedef void (VKAPI_PTR *PFN_vkCmdSetDepthBias)(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);
typedef void (VKAPI_PTR *PFN_vkCmdSetBlendConstants)(VkCommandBuffer commandBuffer, const float blendConstants[4]);
typedef void (VKAPI_PTR *PFN_vkCmdSetDepthBounds)(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds);
typedef void (VKAPI_PTR *PFN_vkCmdSetStencilCompareMask)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 compareMask);
typedef void (VKAPI_PTR *PFN_vkCmdSetStencilWriteMask)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 writeMask);
typedef void (VKAPI_PTR *PFN_vkCmdSetStencilReference)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 reference);
typedef void (VKAPI_PTR *PFN_vkCmdBindDescriptorSets)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, deUint32 firstSet, deUint32 descriptorSetCount, const VkDescriptorSet* pDescriptorSets, deUint32 dynamicOffsetCount, const deUint32* pDynamicOffsets);
typedef void (VKAPI_PTR *PFN_vkCmdBindIndexBuffer)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
typedef void (VKAPI_PTR *PFN_vkCmdBindVertexBuffers)(VkCommandBuffer commandBuffer, deUint32 firstBinding, deUint32 bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets);
typedef void (VKAPI_PTR *PFN_vkCmdDraw)(VkCommandBuffer commandBuffer, deUint32 vertexCount, deUint32 instanceCount, deUint32 firstVertex, deUint32 firstInstance);
typedef void (VKAPI_PTR *PFN_vkCmdDrawIndexed)(VkCommandBuffer commandBuffer, deUint32 indexCount, deUint32 instanceCount, deUint32 firstIndex, deInt32 vertexOffset, deUint32 firstInstance);
typedef void (VKAPI_PTR *PFN_vkCmdDrawIndirect)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 drawCount, deUint32 stride);
typedef void (VKAPI_PTR *PFN_vkCmdDrawIndexedIndirect)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 drawCount, deUint32 stride);
typedef void (VKAPI_PTR *PFN_vkCmdDispatch)(VkCommandBuffer commandBuffer, deUint32 groupCountX, deUint32 groupCountY, deUint32 groupCountZ);
typedef void (VKAPI_PTR *PFN_vkCmdDispatchIndirect)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset);
typedef void (VKAPI_PTR *PFN_vkCmdCopyBuffer)(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, deUint32 regionCount, const VkBufferCopy* pRegions);
typedef void (VKAPI_PTR *PFN_vkCmdCopyImage)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageCopy* pRegions);
typedef void (VKAPI_PTR *PFN_vkCmdBlitImage)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageBlit* pRegions, VkFilter filter);
typedef void (VKAPI_PTR *PFN_vkCmdCopyBufferToImage)(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkBufferImageCopy* pRegions);
typedef void (VKAPI_PTR *PFN_vkCmdCopyImageToBuffer)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, deUint32 regionCount, const VkBufferImageCopy* pRegions);
typedef void (VKAPI_PTR *PFN_vkCmdUpdateBuffer)(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData);
typedef void (VKAPI_PTR *PFN_vkCmdFillBuffer)(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, deUint32 data);
typedef void (VKAPI_PTR *PFN_vkCmdClearColorImage)(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, deUint32 rangeCount, const VkImageSubresourceRange* pRanges);
typedef void (VKAPI_PTR *PFN_vkCmdClearDepthStencilImage)(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, deUint32 rangeCount, const VkImageSubresourceRange* pRanges);
typedef void (VKAPI_PTR *PFN_vkCmdClearAttachments)(VkCommandBuffer commandBuffer, deUint32 attachmentCount, const VkClearAttachment* pAttachments, deUint32 rectCount, const VkClearRect* pRects);
typedef void (VKAPI_PTR *PFN_vkCmdResolveImage)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageResolve* pRegions);
typedef void (VKAPI_PTR *PFN_vkCmdSetEvent)(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
typedef void (VKAPI_PTR *PFN_vkCmdResetEvent)(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
typedef void (VKAPI_PTR *PFN_vkCmdWaitEvents)(VkCommandBuffer commandBuffer, deUint32 eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, deUint32 memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, deUint32 bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, deUint32 imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
typedef void (VKAPI_PTR *PFN_vkCmdPipelineBarrier)(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, deUint32 memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, deUint32 bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, deUint32 imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
typedef void (VKAPI_PTR *PFN_vkCmdBeginQuery)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query, VkQueryControlFlags flags);
typedef void (VKAPI_PTR *PFN_vkCmdEndQuery)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query);
typedef void (VKAPI_PTR *PFN_vkCmdResetQueryPool)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount);
typedef void (VKAPI_PTR *PFN_vkCmdWriteTimestamp)(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, deUint32 query);
typedef void (VKAPI_PTR *PFN_vkCmdCopyQueryPoolResults)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags);
typedef void (VKAPI_PTR *PFN_vkCmdPushConstants)(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, deUint32 offset, deUint32 size, const void* pValues);
typedef void (VKAPI_PTR *PFN_vkCmdBeginRenderPass)(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents);
typedef void (VKAPI_PTR *PFN_vkCmdNextSubpass)(VkCommandBuffer commandBuffer, VkSubpassContents contents);
typedef void (VKAPI_PTR *PFN_vkCmdEndRenderPass)(VkCommandBuffer commandBuffer);
typedef void (VKAPI_PTR *PFN_vkCmdExecuteCommands)(VkCommandBuffer commandBuffer, deUint32 commandBufferCount, const VkCommandBuffer* pCommandBuffers);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateInstance(
    const VkInstanceCreateInfo*                 pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkInstance*                                 pInstance);

VKAPI_ATTR void VKAPI_CALL vkDestroyInstance(
    VkInstance                                  instance,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDevices(
    VkInstance                                  instance,
    deUint32*                                   pPhysicalDeviceCount,
    VkPhysicalDevice*                           pPhysicalDevices);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures*                   pFeatures);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties*                         pFormatProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkImageFormatProperties*                    pImageFormatProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties*                 pProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties*                    pQueueFamilyProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties*           pMemoryProperties);

VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr(
    VkInstance                                  instance,
    const char*                                 pName);

VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetDeviceProcAddr(
    VkDevice                                    device,
    const char*                                 pName);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDevice(
    VkPhysicalDevice                            physicalDevice,
    const VkDeviceCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDevice*                                   pDevice);

VKAPI_ATTR void VKAPI_CALL vkDestroyDevice(
    VkDevice                                    device,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceExtensionProperties(
    const char*                                 pLayerName,
    deUint32*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceExtensionProperties(
    VkPhysicalDevice                            physicalDevice,
    const char*                                 pLayerName,
    deUint32*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceLayerProperties(
    deUint32*                                   pPropertyCount,
    VkLayerProperties*                          pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceLayerProperties(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pPropertyCount,
    VkLayerProperties*                          pProperties);

VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue(
    VkDevice                                    device,
    deUint32                                    queueFamilyIndex,
    deUint32                                    queueIndex,
    VkQueue*                                    pQueue);

VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit(
    VkQueue                                     queue,
    deUint32                                    submitCount,
    const VkSubmitInfo*                         pSubmits,
    VkFence                                     fence);

VKAPI_ATTR VkResult VKAPI_CALL vkQueueWaitIdle(
    VkQueue                                     queue);

VKAPI_ATTR VkResult VKAPI_CALL vkDeviceWaitIdle(
    VkDevice                                    device);

VKAPI_ATTR VkResult VKAPI_CALL vkAllocateMemory(
    VkDevice                                    device,
    const VkMemoryAllocateInfo*                 pAllocateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDeviceMemory*                             pMemory);

VKAPI_ATTR void VKAPI_CALL vkFreeMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkMapMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    void**                                      ppData);

VKAPI_ATTR void VKAPI_CALL vkUnmapMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory);

VKAPI_ATTR VkResult VKAPI_CALL vkFlushMappedMemoryRanges(
    VkDevice                                    device,
    deUint32                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges);

VKAPI_ATTR VkResult VKAPI_CALL vkInvalidateMappedMemoryRanges(
    VkDevice                                    device,
    deUint32                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges);

VKAPI_ATTR void VKAPI_CALL vkGetDeviceMemoryCommitment(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize*                               pCommittedMemoryInBytes);

VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset);

VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory(
    VkDevice                                    device,
    VkImage                                     image,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset);

VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkMemoryRequirements*                       pMemoryRequirements);

VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements(
    VkDevice                                    device,
    VkImage                                     image,
    VkMemoryRequirements*                       pMemoryRequirements);

VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements(
    VkDevice                                    device,
    VkImage                                     image,
    deUint32*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements*            pSparseMemoryRequirements);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceSparseImageFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    deUint32*                                   pPropertyCount,
    VkSparseImageFormatProperties*              pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkQueueBindSparse(
    VkQueue                                     queue,
    deUint32                                    bindInfoCount,
    const VkBindSparseInfo*                     pBindInfo,
    VkFence                                     fence);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateFence(
    VkDevice                                    device,
    const VkFenceCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);

VKAPI_ATTR void VKAPI_CALL vkDestroyFence(
    VkDevice                                    device,
    VkFence                                     fence,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkResetFences(
    VkDevice                                    device,
    deUint32                                    fenceCount,
    const VkFence*                              pFences);

VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceStatus(
    VkDevice                                    device,
    VkFence                                     fence);

VKAPI_ATTR VkResult VKAPI_CALL vkWaitForFences(
    VkDevice                                    device,
    deUint32                                    fenceCount,
    const VkFence*                              pFences,
    VkBool32                                    waitAll,
    deUint64                                    timeout);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateSemaphore(
    VkDevice                                    device,
    const VkSemaphoreCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSemaphore*                                pSemaphore);

VKAPI_ATTR void VKAPI_CALL vkDestroySemaphore(
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateEvent(
    VkDevice                                    device,
    const VkEventCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkEvent*                                    pEvent);

VKAPI_ATTR void VKAPI_CALL vkDestroyEvent(
    VkDevice                                    device,
    VkEvent                                     event,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkGetEventStatus(
    VkDevice                                    device,
    VkEvent                                     event);

VKAPI_ATTR VkResult VKAPI_CALL vkSetEvent(
    VkDevice                                    device,
    VkEvent                                     event);

VKAPI_ATTR VkResult VKAPI_CALL vkResetEvent(
    VkDevice                                    device,
    VkEvent                                     event);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateQueryPool(
    VkDevice                                    device,
    const VkQueryPoolCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkQueryPool*                                pQueryPool);

VKAPI_ATTR void VKAPI_CALL vkDestroyQueryPool(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkGetQueryPoolResults(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    deUint32                                    firstQuery,
    deUint32                                    queryCount,
    deUintptr                                      dataSize,
    void*                                       pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateBuffer(
    VkDevice                                    device,
    const VkBufferCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBuffer*                                   pBuffer);

VKAPI_ATTR void VKAPI_CALL vkDestroyBuffer(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateBufferView(
    VkDevice                                    device,
    const VkBufferViewCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBufferView*                               pView);

VKAPI_ATTR void VKAPI_CALL vkDestroyBufferView(
    VkDevice                                    device,
    VkBufferView                                bufferView,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateImage(
    VkDevice                                    device,
    const VkImageCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImage*                                    pImage);

VKAPI_ATTR void VKAPI_CALL vkDestroyImage(
    VkDevice                                    device,
    VkImage                                     image,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR void VKAPI_CALL vkGetImageSubresourceLayout(
    VkDevice                                    device,
    VkImage                                     image,
    const VkImageSubresource*                   pSubresource,
    VkSubresourceLayout*                        pLayout);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateImageView(
    VkDevice                                    device,
    const VkImageViewCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImageView*                                pView);

VKAPI_ATTR void VKAPI_CALL vkDestroyImageView(
    VkDevice                                    device,
    VkImageView                                 imageView,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateShaderModule(
    VkDevice                                    device,
    const VkShaderModuleCreateInfo*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkShaderModule*                             pShaderModule);

VKAPI_ATTR void VKAPI_CALL vkDestroyShaderModule(
    VkDevice                                    device,
    VkShaderModule                              shaderModule,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineCache(
    VkDevice                                    device,
    const VkPipelineCacheCreateInfo*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineCache*                            pPipelineCache);

VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineCache(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineCacheData(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    deUintptr*                                     pDataSize,
    void*                                       pData);

VKAPI_ATTR VkResult VKAPI_CALL vkMergePipelineCaches(
    VkDevice                                    device,
    VkPipelineCache                             dstCache,
    deUint32                                    srcCacheCount,
    const VkPipelineCache*                      pSrcCaches);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateGraphicsPipelines(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    deUint32                                    createInfoCount,
    const VkGraphicsPipelineCreateInfo*         pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateComputePipelines(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    deUint32                                    createInfoCount,
    const VkComputePipelineCreateInfo*          pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);

VKAPI_ATTR void VKAPI_CALL vkDestroyPipeline(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineLayout(
    VkDevice                                    device,
    const VkPipelineLayoutCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineLayout*                           pPipelineLayout);

VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineLayout(
    VkDevice                                    device,
    VkPipelineLayout                            pipelineLayout,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateSampler(
    VkDevice                                    device,
    const VkSamplerCreateInfo*                  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSampler*                                  pSampler);

VKAPI_ATTR void VKAPI_CALL vkDestroySampler(
    VkDevice                                    device,
    VkSampler                                   sampler,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorSetLayout(
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorSetLayout*                      pSetLayout);

VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorSetLayout(
    VkDevice                                    device,
    VkDescriptorSetLayout                       descriptorSetLayout,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorPool(
    VkDevice                                    device,
    const VkDescriptorPoolCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorPool*                           pDescriptorPool);

VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkResetDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags);

VKAPI_ATTR VkResult VKAPI_CALL vkAllocateDescriptorSets(
    VkDevice                                    device,
    const VkDescriptorSetAllocateInfo*          pAllocateInfo,
    VkDescriptorSet*                            pDescriptorSets);

VKAPI_ATTR VkResult VKAPI_CALL vkFreeDescriptorSets(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    deUint32                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets);

VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSets(
    VkDevice                                    device,
    deUint32                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites,
    deUint32                                    descriptorCopyCount,
    const VkCopyDescriptorSet*                  pDescriptorCopies);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateFramebuffer(
    VkDevice                                    device,
    const VkFramebufferCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFramebuffer*                              pFramebuffer);

VKAPI_ATTR void VKAPI_CALL vkDestroyFramebuffer(
    VkDevice                                    device,
    VkFramebuffer                               framebuffer,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass(
    VkDevice                                    device,
    const VkRenderPassCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass);

VKAPI_ATTR void VKAPI_CALL vkDestroyRenderPass(
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR void VKAPI_CALL vkGetRenderAreaGranularity(
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    VkExtent2D*                                 pGranularity);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateCommandPool(
    VkDevice                                    device,
    const VkCommandPoolCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkCommandPool*                              pCommandPool);

VKAPI_ATTR void VKAPI_CALL vkDestroyCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolResetFlags                     flags);

VKAPI_ATTR VkResult VKAPI_CALL vkAllocateCommandBuffers(
    VkDevice                                    device,
    const VkCommandBufferAllocateInfo*          pAllocateInfo,
    VkCommandBuffer*                            pCommandBuffers);

VKAPI_ATTR void VKAPI_CALL vkFreeCommandBuffers(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    deUint32                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers);

VKAPI_ATTR VkResult VKAPI_CALL vkBeginCommandBuffer(
    VkCommandBuffer                             commandBuffer,
    const VkCommandBufferBeginInfo*             pBeginInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkEndCommandBuffer(
    VkCommandBuffer                             commandBuffer);

VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandBuffer(
    VkCommandBuffer                             commandBuffer,
    VkCommandBufferResetFlags                   flags);

VKAPI_ATTR void VKAPI_CALL vkCmdBindPipeline(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipeline                                  pipeline);

VKAPI_ATTR void VKAPI_CALL vkCmdSetViewport(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    firstViewport,
    deUint32                                    viewportCount,
    const VkViewport*                           pViewports);

VKAPI_ATTR void VKAPI_CALL vkCmdSetScissor(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    firstScissor,
    deUint32                                    scissorCount,
    const VkRect2D*                             pScissors);

VKAPI_ATTR void VKAPI_CALL vkCmdSetLineWidth(
    VkCommandBuffer                             commandBuffer,
    float                                       lineWidth);

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBias(
    VkCommandBuffer                             commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor);

VKAPI_ATTR void VKAPI_CALL vkCmdSetBlendConstants(
    VkCommandBuffer                             commandBuffer,
    const float                                 blendConstants[4]);

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBounds(
    VkCommandBuffer                             commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds);

VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilCompareMask(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    deUint32                                    compareMask);

VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilWriteMask(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    deUint32                                    writeMask);

VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilReference(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    deUint32                                    reference);

VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorSets(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    deUint32                                    firstSet,
    deUint32                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets,
    deUint32                                    dynamicOffsetCount,
    const deUint32*                             pDynamicOffsets);

VKAPI_ATTR void VKAPI_CALL vkCmdBindIndexBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType);

VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    firstBinding,
    deUint32                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets);

VKAPI_ATTR void VKAPI_CALL vkCmdDraw(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    vertexCount,
    deUint32                                    instanceCount,
    deUint32                                    firstVertex,
    deUint32                                    firstInstance);

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexed(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    indexCount,
    deUint32                                    instanceCount,
    deUint32                                    firstIndex,
    deInt32                                     vertexOffset,
    deUint32                                    firstInstance);

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    deUint32                                    drawCount,
    deUint32                                    stride);

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    deUint32                                    drawCount,
    deUint32                                    stride);

VKAPI_ATTR void VKAPI_CALL vkCmdDispatch(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    groupCountX,
    deUint32                                    groupCountY,
    deUint32                                    groupCountZ);

VKAPI_ATTR void VKAPI_CALL vkCmdDispatchIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkBuffer                                    dstBuffer,
    deUint32                                    regionCount,
    const VkBufferCopy*                         pRegions);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    deUint32                                    regionCount,
    const VkImageCopy*                          pRegions);

VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    deUint32                                    regionCount,
    const VkImageBlit*                          pRegions,
    VkFilter                                    filter);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    deUint32                                    regionCount,
    const VkBufferImageCopy*                    pRegions);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkBuffer                                    dstBuffer,
    deUint32                                    regionCount,
    const VkBufferImageCopy*                    pRegions);

VKAPI_ATTR void VKAPI_CALL vkCmdUpdateBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const void*                                 pData);

VKAPI_ATTR void VKAPI_CALL vkCmdFillBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    deUint32                                    data);

VKAPI_ATTR void VKAPI_CALL vkCmdClearColorImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearColorValue*                    pColor,
    deUint32                                    rangeCount,
    const VkImageSubresourceRange*              pRanges);

VKAPI_ATTR void VKAPI_CALL vkCmdClearDepthStencilImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearDepthStencilValue*             pDepthStencil,
    deUint32                                    rangeCount,
    const VkImageSubresourceRange*              pRanges);

VKAPI_ATTR void VKAPI_CALL vkCmdClearAttachments(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    attachmentCount,
    const VkClearAttachment*                    pAttachments,
    deUint32                                    rectCount,
    const VkClearRect*                          pRects);

VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    deUint32                                    regionCount,
    const VkImageResolve*                       pRegions);

VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask);

VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask);

VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    eventCount,
    const VkEvent*                              pEvents,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    deUint32                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    deUint32                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    deUint32                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers);

VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    VkDependencyFlags                           dependencyFlags,
    deUint32                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    deUint32                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    deUint32                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers);

VKAPI_ATTR void VKAPI_CALL vkCmdBeginQuery(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    deUint32                                    query,
    VkQueryControlFlags                         flags);

VKAPI_ATTR void VKAPI_CALL vkCmdEndQuery(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    deUint32                                    query);

VKAPI_ATTR void VKAPI_CALL vkCmdResetQueryPool(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    deUint32                                    firstQuery,
    deUint32                                    queryCount);

VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    VkQueryPool                                 queryPool,
    deUint32                                    query);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyQueryPoolResults(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    deUint32                                    firstQuery,
    deUint32                                    queryCount,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags);

VKAPI_ATTR void VKAPI_CALL vkCmdPushConstants(
    VkCommandBuffer                             commandBuffer,
    VkPipelineLayout                            layout,
    VkShaderStageFlags                          stageFlags,
    deUint32                                    offset,
    deUint32                                    size,
    const void*                                 pValues);

VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass(
    VkCommandBuffer                             commandBuffer,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    VkSubpassContents                           contents);

VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass(
    VkCommandBuffer                             commandBuffer,
    VkSubpassContents                           contents);

VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass(
    VkCommandBuffer                             commandBuffer);

VKAPI_ATTR void VKAPI_CALL vkCmdExecuteCommands(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers);
#endif


#define VK_VERSION_1_1 1
// Vulkan 1.1 version number
#define VK_API_VERSION_1_1 VK_MAKE_API_VERSION(0, 1, 1, 0)// Patch version should always be set to 0

VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSamplerYcbcrConversion)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorUpdateTemplate)
#define VK_MAX_DEVICE_GROUP_SIZE          32U
#define VK_LUID_SIZE                      8U
#define VK_QUEUE_FAMILY_EXTERNAL          (~1U)

typedef enum VkPointClippingBehavior {
    VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES = 0,
    VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY = 1,
    VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES_KHR = VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES,
    VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY_KHR = VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY,
    VK_POINT_CLIPPING_BEHAVIOR_MAX_ENUM = 0x7FFFFFFF
} VkPointClippingBehavior;

typedef enum VkTessellationDomainOrigin {
    VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT = 0,
    VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT = 1,
    VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT_KHR = VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT,
    VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT_KHR = VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT,
    VK_TESSELLATION_DOMAIN_ORIGIN_MAX_ENUM = 0x7FFFFFFF
} VkTessellationDomainOrigin;

typedef enum VkSamplerYcbcrModelConversion {
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY = 0,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY = 1,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709 = 2,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601 = 3,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020 = 4,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY_KHR = VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY_KHR = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709_KHR = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601_KHR = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020_KHR = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_MAX_ENUM = 0x7FFFFFFF
} VkSamplerYcbcrModelConversion;

typedef enum VkSamplerYcbcrRange {
    VK_SAMPLER_YCBCR_RANGE_ITU_FULL = 0,
    VK_SAMPLER_YCBCR_RANGE_ITU_NARROW = 1,
    VK_SAMPLER_YCBCR_RANGE_ITU_FULL_KHR = VK_SAMPLER_YCBCR_RANGE_ITU_FULL,
    VK_SAMPLER_YCBCR_RANGE_ITU_NARROW_KHR = VK_SAMPLER_YCBCR_RANGE_ITU_NARROW,
    VK_SAMPLER_YCBCR_RANGE_MAX_ENUM = 0x7FFFFFFF
} VkSamplerYcbcrRange;

typedef enum VkChromaLocation {
    VK_CHROMA_LOCATION_COSITED_EVEN = 0,
    VK_CHROMA_LOCATION_MIDPOINT = 1,
    VK_CHROMA_LOCATION_COSITED_EVEN_KHR = VK_CHROMA_LOCATION_COSITED_EVEN,
    VK_CHROMA_LOCATION_MIDPOINT_KHR = VK_CHROMA_LOCATION_MIDPOINT,
    VK_CHROMA_LOCATION_MAX_ENUM = 0x7FFFFFFF
} VkChromaLocation;

typedef enum VkDescriptorUpdateTemplateType {
    VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET = 0,
    VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR = 1,
    VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR = VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET,
    VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_MAX_ENUM = 0x7FFFFFFF
} VkDescriptorUpdateTemplateType;

typedef enum VkSubgroupFeatureFlagBits {
    VK_SUBGROUP_FEATURE_BASIC_BIT = 0x00000001,
    VK_SUBGROUP_FEATURE_VOTE_BIT = 0x00000002,
    VK_SUBGROUP_FEATURE_ARITHMETIC_BIT = 0x00000004,
    VK_SUBGROUP_FEATURE_BALLOT_BIT = 0x00000008,
    VK_SUBGROUP_FEATURE_SHUFFLE_BIT = 0x00000010,
    VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT = 0x00000020,
    VK_SUBGROUP_FEATURE_CLUSTERED_BIT = 0x00000040,
    VK_SUBGROUP_FEATURE_QUAD_BIT = 0x00000080,
    VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV = 0x00000100,
    VK_SUBGROUP_FEATURE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkSubgroupFeatureFlagBits;
typedef VkFlags VkSubgroupFeatureFlags;

typedef enum VkPeerMemoryFeatureFlagBits {
    VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT = 0x00000001,
    VK_PEER_MEMORY_FEATURE_COPY_DST_BIT = 0x00000002,
    VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT = 0x00000004,
    VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT = 0x00000008,
    VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR = VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT,
    VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR = VK_PEER_MEMORY_FEATURE_COPY_DST_BIT,
    VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR = VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT,
    VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR = VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT,
    VK_PEER_MEMORY_FEATURE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkPeerMemoryFeatureFlagBits;
typedef VkFlags VkPeerMemoryFeatureFlags;

typedef enum VkMemoryAllocateFlagBits {
    VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT = 0x00000001,
    VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT = 0x00000002,
    VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT = 0x00000004,
    VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR = VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT,
    VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT_KHR = VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT,
    VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR = VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT,
    VK_MEMORY_ALLOCATE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkMemoryAllocateFlagBits;
typedef VkFlags VkMemoryAllocateFlags;
typedef VkFlags VkCommandPoolTrimFlags;
typedef VkFlags VkDescriptorUpdateTemplateCreateFlags;

typedef enum VkExternalMemoryHandleTypeFlagBits {
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT = 0x00000001,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT = 0x00000002,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT = 0x00000004,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT = 0x00000008,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT = 0x00000010,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT = 0x00000020,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT = 0x00000040,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT = 0x00000200,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID = 0x00000400,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT = 0x00000080,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT = 0x00000100,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_ZIRCON_VMO_BIT_FUCHSIA = 0x00000800,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_RDMA_ADDRESS_BIT_NV = 0x00001000,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkExternalMemoryHandleTypeFlagBits;
typedef VkFlags VkExternalMemoryHandleTypeFlags;

typedef enum VkExternalMemoryFeatureFlagBits {
    VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT = 0x00000001,
    VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT = 0x00000002,
    VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT = 0x00000004,
    VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT,
    VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT,
    VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT,
    VK_EXTERNAL_MEMORY_FEATURE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkExternalMemoryFeatureFlagBits;
typedef VkFlags VkExternalMemoryFeatureFlags;

typedef enum VkExternalFenceHandleTypeFlagBits {
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT = 0x00000001,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT = 0x00000002,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT = 0x00000004,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT = 0x00000008,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR = VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkExternalFenceHandleTypeFlagBits;
typedef VkFlags VkExternalFenceHandleTypeFlags;

typedef enum VkExternalFenceFeatureFlagBits {
    VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT = 0x00000001,
    VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT = 0x00000002,
    VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR = VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT,
    VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR = VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT,
    VK_EXTERNAL_FENCE_FEATURE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkExternalFenceFeatureFlagBits;
typedef VkFlags VkExternalFenceFeatureFlags;

typedef enum VkFenceImportFlagBits {
    VK_FENCE_IMPORT_TEMPORARY_BIT = 0x00000001,
    VK_FENCE_IMPORT_TEMPORARY_BIT_KHR = VK_FENCE_IMPORT_TEMPORARY_BIT,
    VK_FENCE_IMPORT_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkFenceImportFlagBits;
typedef VkFlags VkFenceImportFlags;

typedef enum VkSemaphoreImportFlagBits {
    VK_SEMAPHORE_IMPORT_TEMPORARY_BIT = 0x00000001,
    VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR = VK_SEMAPHORE_IMPORT_TEMPORARY_BIT,
    VK_SEMAPHORE_IMPORT_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkSemaphoreImportFlagBits;
typedef VkFlags VkSemaphoreImportFlags;

typedef enum VkExternalSemaphoreHandleTypeFlagBits {
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT = 0x00000001,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT = 0x00000002,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT = 0x00000004,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT = 0x00000008,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT = 0x00000010,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_ZIRCON_EVENT_BIT_FUCHSIA = 0x00000080,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D11_FENCE_BIT = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkExternalSemaphoreHandleTypeFlagBits;
typedef VkFlags VkExternalSemaphoreHandleTypeFlags;

typedef enum VkExternalSemaphoreFeatureFlagBits {
    VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT = 0x00000001,
    VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT = 0x00000002,
    VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT,
    VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR = VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT,
    VK_EXTERNAL_SEMAPHORE_FEATURE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkExternalSemaphoreFeatureFlagBits;
typedef VkFlags VkExternalSemaphoreFeatureFlags;
typedef struct VkPhysicalDeviceSubgroupProperties {
    VkStructureType           sType;
    void*                     pNext;
    deUint32                  subgroupSize;
    VkShaderStageFlags        supportedStages;
    VkSubgroupFeatureFlags    supportedOperations;
    VkBool32                  quadOperationsInAllStages;
} VkPhysicalDeviceSubgroupProperties;

typedef struct VkBindBufferMemoryInfo {
    VkStructureType    sType;
    const void*        pNext;
    VkBuffer           buffer;
    VkDeviceMemory     memory;
    VkDeviceSize       memoryOffset;
} VkBindBufferMemoryInfo;

typedef struct VkBindImageMemoryInfo {
    VkStructureType    sType;
    const void*        pNext;
    VkImage            image;
    VkDeviceMemory     memory;
    VkDeviceSize       memoryOffset;
} VkBindImageMemoryInfo;

typedef struct VkPhysicalDevice16BitStorageFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           storageBuffer16BitAccess;
    VkBool32           uniformAndStorageBuffer16BitAccess;
    VkBool32           storagePushConstant16;
    VkBool32           storageInputOutput16;
} VkPhysicalDevice16BitStorageFeatures;

typedef struct VkMemoryDedicatedRequirements {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           prefersDedicatedAllocation;
    VkBool32           requiresDedicatedAllocation;
} VkMemoryDedicatedRequirements;

typedef struct VkMemoryDedicatedAllocateInfo {
    VkStructureType    sType;
    const void*        pNext;
    VkImage            image;
    VkBuffer           buffer;
} VkMemoryDedicatedAllocateInfo;

typedef struct VkMemoryAllocateFlagsInfo {
    VkStructureType          sType;
    const void*              pNext;
    VkMemoryAllocateFlags    flags;
    deUint32                 deviceMask;
} VkMemoryAllocateFlagsInfo;

typedef struct VkDeviceGroupRenderPassBeginInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           deviceMask;
    deUint32           deviceRenderAreaCount;
    const VkRect2D*    pDeviceRenderAreas;
} VkDeviceGroupRenderPassBeginInfo;

typedef struct VkDeviceGroupCommandBufferBeginInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           deviceMask;
} VkDeviceGroupCommandBufferBeginInfo;

typedef struct VkDeviceGroupSubmitInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           waitSemaphoreCount;
    const deUint32*    pWaitSemaphoreDeviceIndices;
    deUint32           commandBufferCount;
    const deUint32*    pCommandBufferDeviceMasks;
    deUint32           signalSemaphoreCount;
    const deUint32*    pSignalSemaphoreDeviceIndices;
} VkDeviceGroupSubmitInfo;

typedef struct VkDeviceGroupBindSparseInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           resourceDeviceIndex;
    deUint32           memoryDeviceIndex;
} VkDeviceGroupBindSparseInfo;

typedef struct VkBindBufferMemoryDeviceGroupInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           deviceIndexCount;
    const deUint32*    pDeviceIndices;
} VkBindBufferMemoryDeviceGroupInfo;

typedef struct VkBindImageMemoryDeviceGroupInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           deviceIndexCount;
    const deUint32*    pDeviceIndices;
    deUint32           splitInstanceBindRegionCount;
    const VkRect2D*    pSplitInstanceBindRegions;
} VkBindImageMemoryDeviceGroupInfo;

typedef struct VkPhysicalDeviceGroupProperties {
    VkStructureType     sType;
    void*               pNext;
    deUint32            physicalDeviceCount;
    VkPhysicalDevice    physicalDevices[VK_MAX_DEVICE_GROUP_SIZE];
    VkBool32            subsetAllocation;
} VkPhysicalDeviceGroupProperties;

typedef struct VkDeviceGroupDeviceCreateInfo {
    VkStructureType            sType;
    const void*                pNext;
    deUint32                   physicalDeviceCount;
    const VkPhysicalDevice*    pPhysicalDevices;
} VkDeviceGroupDeviceCreateInfo;

typedef struct VkBufferMemoryRequirementsInfo2 {
    VkStructureType    sType;
    const void*        pNext;
    VkBuffer           buffer;
} VkBufferMemoryRequirementsInfo2;

typedef struct VkImageMemoryRequirementsInfo2 {
    VkStructureType    sType;
    const void*        pNext;
    VkImage            image;
} VkImageMemoryRequirementsInfo2;

typedef struct VkImageSparseMemoryRequirementsInfo2 {
    VkStructureType    sType;
    const void*        pNext;
    VkImage            image;
} VkImageSparseMemoryRequirementsInfo2;

typedef struct VkMemoryRequirements2 {
    VkStructureType         sType;
    void*                   pNext;
    VkMemoryRequirements    memoryRequirements;
} VkMemoryRequirements2;

typedef struct VkSparseImageMemoryRequirements2 {
    VkStructureType                    sType;
    void*                              pNext;
    VkSparseImageMemoryRequirements    memoryRequirements;
} VkSparseImageMemoryRequirements2;

typedef struct VkPhysicalDeviceFeatures2 {
    VkStructureType             sType;
    void*                       pNext;
    VkPhysicalDeviceFeatures    features;
} VkPhysicalDeviceFeatures2;

typedef struct VkPhysicalDeviceProperties2 {
    VkStructureType               sType;
    void*                         pNext;
    VkPhysicalDeviceProperties    properties;
} VkPhysicalDeviceProperties2;

typedef struct VkFormatProperties2 {
    VkStructureType       sType;
    void*                 pNext;
    VkFormatProperties    formatProperties;
} VkFormatProperties2;

typedef struct VkImageFormatProperties2 {
    VkStructureType            sType;
    void*                      pNext;
    VkImageFormatProperties    imageFormatProperties;
} VkImageFormatProperties2;

typedef struct VkPhysicalDeviceImageFormatInfo2 {
    VkStructureType       sType;
    const void*           pNext;
    VkFormat              format;
    VkImageType           type;
    VkImageTiling         tiling;
    VkImageUsageFlags     usage;
    VkImageCreateFlags    flags;
} VkPhysicalDeviceImageFormatInfo2;

typedef struct VkQueueFamilyProperties2 {
    VkStructureType            sType;
    void*                      pNext;
    VkQueueFamilyProperties    queueFamilyProperties;
} VkQueueFamilyProperties2;

typedef struct VkPhysicalDeviceMemoryProperties2 {
    VkStructureType                     sType;
    void*                               pNext;
    VkPhysicalDeviceMemoryProperties    memoryProperties;
} VkPhysicalDeviceMemoryProperties2;

typedef struct VkSparseImageFormatProperties2 {
    VkStructureType                  sType;
    void*                            pNext;
    VkSparseImageFormatProperties    properties;
} VkSparseImageFormatProperties2;

typedef struct VkPhysicalDeviceSparseImageFormatInfo2 {
    VkStructureType          sType;
    const void*              pNext;
    VkFormat                 format;
    VkImageType              type;
    VkSampleCountFlagBits    samples;
    VkImageUsageFlags        usage;
    VkImageTiling            tiling;
} VkPhysicalDeviceSparseImageFormatInfo2;

typedef struct VkPhysicalDevicePointClippingProperties {
    VkStructureType            sType;
    void*                      pNext;
    VkPointClippingBehavior    pointClippingBehavior;
} VkPhysicalDevicePointClippingProperties;

typedef struct VkInputAttachmentAspectReference {
    deUint32              subpass;
    deUint32              inputAttachmentIndex;
    VkImageAspectFlags    aspectMask;
} VkInputAttachmentAspectReference;

typedef struct VkRenderPassInputAttachmentAspectCreateInfo {
    VkStructureType                            sType;
    const void*                                pNext;
    deUint32                                   aspectReferenceCount;
    const VkInputAttachmentAspectReference*    pAspectReferences;
} VkRenderPassInputAttachmentAspectCreateInfo;

typedef struct VkImageViewUsageCreateInfo {
    VkStructureType      sType;
    const void*          pNext;
    VkImageUsageFlags    usage;
} VkImageViewUsageCreateInfo;

typedef struct VkPipelineTessellationDomainOriginStateCreateInfo {
    VkStructureType               sType;
    const void*                   pNext;
    VkTessellationDomainOrigin    domainOrigin;
} VkPipelineTessellationDomainOriginStateCreateInfo;

typedef struct VkRenderPassMultiviewCreateInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           subpassCount;
    const deUint32*    pViewMasks;
    deUint32           dependencyCount;
    const deInt32*     pViewOffsets;
    deUint32           correlationMaskCount;
    const deUint32*    pCorrelationMasks;
} VkRenderPassMultiviewCreateInfo;

typedef struct VkPhysicalDeviceMultiviewFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           multiview;
    VkBool32           multiviewGeometryShader;
    VkBool32           multiviewTessellationShader;
} VkPhysicalDeviceMultiviewFeatures;

typedef struct VkPhysicalDeviceMultiviewProperties {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxMultiviewViewCount;
    deUint32           maxMultiviewInstanceIndex;
} VkPhysicalDeviceMultiviewProperties;

typedef struct VkPhysicalDeviceVariablePointersFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           variablePointersStorageBuffer;
    VkBool32           variablePointers;
} VkPhysicalDeviceVariablePointersFeatures;

typedef VkPhysicalDeviceVariablePointersFeatures VkPhysicalDeviceVariablePointerFeatures;

typedef struct VkPhysicalDeviceProtectedMemoryFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           protectedMemory;
} VkPhysicalDeviceProtectedMemoryFeatures;

typedef struct VkPhysicalDeviceProtectedMemoryProperties {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           protectedNoFault;
} VkPhysicalDeviceProtectedMemoryProperties;

typedef struct VkDeviceQueueInfo2 {
    VkStructureType             sType;
    const void*                 pNext;
    VkDeviceQueueCreateFlags    flags;
    deUint32                    queueFamilyIndex;
    deUint32                    queueIndex;
} VkDeviceQueueInfo2;

typedef struct VkProtectedSubmitInfo {
    VkStructureType    sType;
    const void*        pNext;
    VkBool32           protectedSubmit;
} VkProtectedSubmitInfo;

typedef struct VkSamplerYcbcrConversionCreateInfo {
    VkStructureType                  sType;
    const void*                      pNext;
    VkFormat                         format;
    VkSamplerYcbcrModelConversion    ycbcrModel;
    VkSamplerYcbcrRange              ycbcrRange;
    VkComponentMapping               components;
    VkChromaLocation                 xChromaOffset;
    VkChromaLocation                 yChromaOffset;
    VkFilter                         chromaFilter;
    VkBool32                         forceExplicitReconstruction;
} VkSamplerYcbcrConversionCreateInfo;

typedef struct VkSamplerYcbcrConversionInfo {
    VkStructureType             sType;
    const void*                 pNext;
    VkSamplerYcbcrConversion    conversion;
} VkSamplerYcbcrConversionInfo;

typedef struct VkBindImagePlaneMemoryInfo {
    VkStructureType          sType;
    const void*              pNext;
    VkImageAspectFlagBits    planeAspect;
} VkBindImagePlaneMemoryInfo;

typedef struct VkImagePlaneMemoryRequirementsInfo {
    VkStructureType          sType;
    const void*              pNext;
    VkImageAspectFlagBits    planeAspect;
} VkImagePlaneMemoryRequirementsInfo;

typedef struct VkPhysicalDeviceSamplerYcbcrConversionFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           samplerYcbcrConversion;
} VkPhysicalDeviceSamplerYcbcrConversionFeatures;

typedef struct VkSamplerYcbcrConversionImageFormatProperties {
    VkStructureType    sType;
    void*              pNext;
    deUint32           combinedImageSamplerDescriptorCount;
} VkSamplerYcbcrConversionImageFormatProperties;

typedef struct VkDescriptorUpdateTemplateEntry {
    deUint32            dstBinding;
    deUint32            dstArrayElement;
    deUint32            descriptorCount;
    VkDescriptorType    descriptorType;
    deUintptr              offset;
    deUintptr              stride;
} VkDescriptorUpdateTemplateEntry;

typedef struct VkDescriptorUpdateTemplateCreateInfo {
    VkStructureType                           sType;
    const void*                               pNext;
    VkDescriptorUpdateTemplateCreateFlags     flags;
    deUint32                                  descriptorUpdateEntryCount;
    const VkDescriptorUpdateTemplateEntry*    pDescriptorUpdateEntries;
    VkDescriptorUpdateTemplateType            templateType;
    VkDescriptorSetLayout                     descriptorSetLayout;
    VkPipelineBindPoint                       pipelineBindPoint;
    VkPipelineLayout                          pipelineLayout;
    deUint32                                  set;
} VkDescriptorUpdateTemplateCreateInfo;

typedef struct VkExternalMemoryProperties {
    VkExternalMemoryFeatureFlags       externalMemoryFeatures;
    VkExternalMemoryHandleTypeFlags    exportFromImportedHandleTypes;
    VkExternalMemoryHandleTypeFlags    compatibleHandleTypes;
} VkExternalMemoryProperties;

typedef struct VkPhysicalDeviceExternalImageFormatInfo {
    VkStructureType                       sType;
    const void*                           pNext;
    VkExternalMemoryHandleTypeFlagBits    handleType;
} VkPhysicalDeviceExternalImageFormatInfo;

typedef struct VkExternalImageFormatProperties {
    VkStructureType               sType;
    void*                         pNext;
    VkExternalMemoryProperties    externalMemoryProperties;
} VkExternalImageFormatProperties;

typedef struct VkPhysicalDeviceExternalBufferInfo {
    VkStructureType                       sType;
    const void*                           pNext;
    VkBufferCreateFlags                   flags;
    VkBufferUsageFlags                    usage;
    VkExternalMemoryHandleTypeFlagBits    handleType;
} VkPhysicalDeviceExternalBufferInfo;

typedef struct VkExternalBufferProperties {
    VkStructureType               sType;
    void*                         pNext;
    VkExternalMemoryProperties    externalMemoryProperties;
} VkExternalBufferProperties;

typedef struct VkPhysicalDeviceIDProperties {
    VkStructureType    sType;
    void*              pNext;
    deUint8            deviceUUID[VK_UUID_SIZE];
    deUint8            driverUUID[VK_UUID_SIZE];
    deUint8            deviceLUID[VK_LUID_SIZE];
    deUint32           deviceNodeMask;
    VkBool32           deviceLUIDValid;
} VkPhysicalDeviceIDProperties;

typedef struct VkExternalMemoryImageCreateInfo {
    VkStructureType                    sType;
    const void*                        pNext;
    VkExternalMemoryHandleTypeFlags    handleTypes;
} VkExternalMemoryImageCreateInfo;

typedef struct VkExternalMemoryBufferCreateInfo {
    VkStructureType                    sType;
    const void*                        pNext;
    VkExternalMemoryHandleTypeFlags    handleTypes;
} VkExternalMemoryBufferCreateInfo;

typedef struct VkExportMemoryAllocateInfo {
    VkStructureType                    sType;
    const void*                        pNext;
    VkExternalMemoryHandleTypeFlags    handleTypes;
} VkExportMemoryAllocateInfo;

typedef struct VkPhysicalDeviceExternalFenceInfo {
    VkStructureType                      sType;
    const void*                          pNext;
    VkExternalFenceHandleTypeFlagBits    handleType;
} VkPhysicalDeviceExternalFenceInfo;

typedef struct VkExternalFenceProperties {
    VkStructureType                   sType;
    void*                             pNext;
    VkExternalFenceHandleTypeFlags    exportFromImportedHandleTypes;
    VkExternalFenceHandleTypeFlags    compatibleHandleTypes;
    VkExternalFenceFeatureFlags       externalFenceFeatures;
} VkExternalFenceProperties;

typedef struct VkExportFenceCreateInfo {
    VkStructureType                   sType;
    const void*                       pNext;
    VkExternalFenceHandleTypeFlags    handleTypes;
} VkExportFenceCreateInfo;

typedef struct VkExportSemaphoreCreateInfo {
    VkStructureType                       sType;
    const void*                           pNext;
    VkExternalSemaphoreHandleTypeFlags    handleTypes;
} VkExportSemaphoreCreateInfo;

typedef struct VkPhysicalDeviceExternalSemaphoreInfo {
    VkStructureType                          sType;
    const void*                              pNext;
    VkExternalSemaphoreHandleTypeFlagBits    handleType;
} VkPhysicalDeviceExternalSemaphoreInfo;

typedef struct VkExternalSemaphoreProperties {
    VkStructureType                       sType;
    void*                                 pNext;
    VkExternalSemaphoreHandleTypeFlags    exportFromImportedHandleTypes;
    VkExternalSemaphoreHandleTypeFlags    compatibleHandleTypes;
    VkExternalSemaphoreFeatureFlags       externalSemaphoreFeatures;
} VkExternalSemaphoreProperties;

typedef struct VkPhysicalDeviceMaintenance3Properties {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxPerSetDescriptors;
    VkDeviceSize       maxMemoryAllocationSize;
} VkPhysicalDeviceMaintenance3Properties;

typedef struct VkDescriptorSetLayoutSupport {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           supported;
} VkDescriptorSetLayoutSupport;

typedef struct VkPhysicalDeviceShaderDrawParametersFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderDrawParameters;
} VkPhysicalDeviceShaderDrawParametersFeatures;

typedef VkPhysicalDeviceShaderDrawParametersFeatures VkPhysicalDeviceShaderDrawParameterFeatures;

typedef VkResult (VKAPI_PTR *PFN_vkEnumerateInstanceVersion)(deUint32* pApiVersion);
typedef VkResult (VKAPI_PTR *PFN_vkBindBufferMemory2)(VkDevice device, deUint32 bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
typedef VkResult (VKAPI_PTR *PFN_vkBindImageMemory2)(VkDevice device, deUint32 bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
typedef void (VKAPI_PTR *PFN_vkGetDeviceGroupPeerMemoryFeatures)(VkDevice device, deUint32 heapIndex, deUint32 localDeviceIndex, deUint32 remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
typedef void (VKAPI_PTR *PFN_vkCmdSetDeviceMask)(VkCommandBuffer commandBuffer, deUint32 deviceMask);
typedef void (VKAPI_PTR *PFN_vkCmdDispatchBase)(VkCommandBuffer commandBuffer, deUint32 baseGroupX, deUint32 baseGroupY, deUint32 baseGroupZ, deUint32 groupCountX, deUint32 groupCountY, deUint32 groupCountZ);
typedef VkResult (VKAPI_PTR *PFN_vkEnumeratePhysicalDeviceGroups)(VkInstance instance, deUint32* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
typedef void (VKAPI_PTR *PFN_vkGetImageMemoryRequirements2)(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
typedef void (VKAPI_PTR *PFN_vkGetBufferMemoryRequirements2)(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
typedef void (VKAPI_PTR *PFN_vkGetImageSparseMemoryRequirements2)(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, deUint32* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceFeatures2)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceProperties2)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceFormatProperties2)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties);
typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceImageFormatProperties2)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceQueueFamilyProperties2)(VkPhysicalDevice physicalDevice, deUint32* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceMemoryProperties2)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, deUint32* pPropertyCount, VkSparseImageFormatProperties2* pProperties);
typedef void (VKAPI_PTR *PFN_vkTrimCommandPool)(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
typedef void (VKAPI_PTR *PFN_vkGetDeviceQueue2)(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue);
typedef VkResult (VKAPI_PTR *PFN_vkCreateSamplerYcbcrConversion)(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion);
typedef void (VKAPI_PTR *PFN_vkDestroySamplerYcbcrConversion)(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkCreateDescriptorUpdateTemplate)(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate);
typedef void (VKAPI_PTR *PFN_vkDestroyDescriptorUpdateTemplate)(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator);
typedef void (VKAPI_PTR *PFN_vkUpdateDescriptorSetWithTemplate)(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceExternalBufferProperties)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceExternalFenceProperties)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties);
typedef void (VKAPI_PTR *PFN_vkGetDescriptorSetLayoutSupport)(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceVersion(
    deUint32*                                   pApiVersion);

VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory2(
    VkDevice                                    device,
    deUint32                                    bindInfoCount,
    const VkBindBufferMemoryInfo*               pBindInfos);

VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory2(
    VkDevice                                    device,
    deUint32                                    bindInfoCount,
    const VkBindImageMemoryInfo*                pBindInfos);

VKAPI_ATTR void VKAPI_CALL vkGetDeviceGroupPeerMemoryFeatures(
    VkDevice                                    device,
    deUint32                                    heapIndex,
    deUint32                                    localDeviceIndex,
    deUint32                                    remoteDeviceIndex,
    VkPeerMemoryFeatureFlags*                   pPeerMemoryFeatures);

VKAPI_ATTR void VKAPI_CALL vkCmdSetDeviceMask(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    deviceMask);

VKAPI_ATTR void VKAPI_CALL vkCmdDispatchBase(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    baseGroupX,
    deUint32                                    baseGroupY,
    deUint32                                    baseGroupZ,
    deUint32                                    groupCountX,
    deUint32                                    groupCountY,
    deUint32                                    groupCountZ);

VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDeviceGroups(
    VkInstance                                  instance,
    deUint32*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupProperties*            pPhysicalDeviceGroupProperties);

VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements2(
    VkDevice                                    device,
    const VkImageMemoryRequirementsInfo2*       pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements);

VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements2(
    VkDevice                                    device,
    const VkBufferMemoryRequirementsInfo2*      pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements);

VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements2(
    VkDevice                                    device,
    const VkImageSparseMemoryRequirementsInfo2* pInfo,
    deUint32*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2*           pSparseMemoryRequirements);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures2(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures2*                  pFeatures);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties2(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties2*                pProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties2(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties2*                        pFormatProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties2(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceImageFormatInfo2*     pImageFormatInfo,
    VkImageFormatProperties2*                   pImageFormatProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties2(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2*                   pQueueFamilyProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties2(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties2*          pMemoryProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceSparseImageFormatProperties2(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
    deUint32*                                   pPropertyCount,
    VkSparseImageFormatProperties2*             pProperties);

VKAPI_ATTR void VKAPI_CALL vkTrimCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolTrimFlags                      flags);

VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue2(
    VkDevice                                    device,
    const VkDeviceQueueInfo2*                   pQueueInfo,
    VkQueue*                                    pQueue);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateSamplerYcbcrConversion(
    VkDevice                                    device,
    const VkSamplerYcbcrConversionCreateInfo*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSamplerYcbcrConversion*                   pYcbcrConversion);

VKAPI_ATTR void VKAPI_CALL vkDestroySamplerYcbcrConversion(
    VkDevice                                    device,
    VkSamplerYcbcrConversion                    ycbcrConversion,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorUpdateTemplate(
    VkDevice                                    device,
    const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorUpdateTemplate*                 pDescriptorUpdateTemplate);

VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorUpdateTemplate(
    VkDevice                                    device,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSetWithTemplate(
    VkDevice                                    device,
    VkDescriptorSet                             descriptorSet,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const void*                                 pData);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalBufferProperties(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalBufferInfo*   pExternalBufferInfo,
    VkExternalBufferProperties*                 pExternalBufferProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalFenceProperties(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalFenceInfo*    pExternalFenceInfo,
    VkExternalFenceProperties*                  pExternalFenceProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalSemaphoreProperties(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties*              pExternalSemaphoreProperties);

VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutSupport(
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    VkDescriptorSetLayoutSupport*               pSupport);
#endif


#define VK_VERSION_1_2 1
// Vulkan 1.2 version number
#define VK_API_VERSION_1_2 VK_MAKE_API_VERSION(0, 1, 2, 0)// Patch version should always be set to 0

#define VK_MAX_DRIVER_NAME_SIZE           256U
#define VK_MAX_DRIVER_INFO_SIZE           256U

typedef enum VkDriverId {
    VK_DRIVER_ID_AMD_PROPRIETARY = 1,
    VK_DRIVER_ID_AMD_OPEN_SOURCE = 2,
    VK_DRIVER_ID_MESA_RADV = 3,
    VK_DRIVER_ID_NVIDIA_PROPRIETARY = 4,
    VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS = 5,
    VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA = 6,
    VK_DRIVER_ID_IMAGINATION_PROPRIETARY = 7,
    VK_DRIVER_ID_QUALCOMM_PROPRIETARY = 8,
    VK_DRIVER_ID_ARM_PROPRIETARY = 9,
    VK_DRIVER_ID_GOOGLE_SWIFTSHADER = 10,
    VK_DRIVER_ID_GGP_PROPRIETARY = 11,
    VK_DRIVER_ID_BROADCOM_PROPRIETARY = 12,
    VK_DRIVER_ID_MESA_LLVMPIPE = 13,
    VK_DRIVER_ID_MOLTENVK = 14,
    VK_DRIVER_ID_COREAVI_PROPRIETARY = 15,
    VK_DRIVER_ID_JUICE_PROPRIETARY = 16,
    VK_DRIVER_ID_VERISILICON_PROPRIETARY = 17,
    VK_DRIVER_ID_MESA_TURNIP = 18,
    VK_DRIVER_ID_MESA_V3DV = 19,
    VK_DRIVER_ID_MESA_PANVK = 20,
    VK_DRIVER_ID_AMD_PROPRIETARY_KHR = VK_DRIVER_ID_AMD_PROPRIETARY,
    VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR = VK_DRIVER_ID_AMD_OPEN_SOURCE,
    VK_DRIVER_ID_MESA_RADV_KHR = VK_DRIVER_ID_MESA_RADV,
    VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR = VK_DRIVER_ID_NVIDIA_PROPRIETARY,
    VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR = VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS,
    VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR = VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA,
    VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR = VK_DRIVER_ID_IMAGINATION_PROPRIETARY,
    VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR = VK_DRIVER_ID_QUALCOMM_PROPRIETARY,
    VK_DRIVER_ID_ARM_PROPRIETARY_KHR = VK_DRIVER_ID_ARM_PROPRIETARY,
    VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR = VK_DRIVER_ID_GOOGLE_SWIFTSHADER,
    VK_DRIVER_ID_GGP_PROPRIETARY_KHR = VK_DRIVER_ID_GGP_PROPRIETARY,
    VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR = VK_DRIVER_ID_BROADCOM_PROPRIETARY,
    VK_DRIVER_ID_MAX_ENUM = 0x7FFFFFFF
} VkDriverId;

typedef enum VkShaderFloatControlsIndependence {
    VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY = 0,
    VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL = 1,
    VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE = 2,
    VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR = VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY,
    VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR = VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL,
    VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR = VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE,
    VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_MAX_ENUM = 0x7FFFFFFF
} VkShaderFloatControlsIndependence;

typedef enum VkSamplerReductionMode {
    VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE = 0,
    VK_SAMPLER_REDUCTION_MODE_MIN = 1,
    VK_SAMPLER_REDUCTION_MODE_MAX = 2,
    VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT = VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE,
    VK_SAMPLER_REDUCTION_MODE_MIN_EXT = VK_SAMPLER_REDUCTION_MODE_MIN,
    VK_SAMPLER_REDUCTION_MODE_MAX_EXT = VK_SAMPLER_REDUCTION_MODE_MAX,
    VK_SAMPLER_REDUCTION_MODE_MAX_ENUM = 0x7FFFFFFF
} VkSamplerReductionMode;

typedef enum VkSemaphoreType {
    VK_SEMAPHORE_TYPE_BINARY = 0,
    VK_SEMAPHORE_TYPE_TIMELINE = 1,
    VK_SEMAPHORE_TYPE_BINARY_KHR = VK_SEMAPHORE_TYPE_BINARY,
    VK_SEMAPHORE_TYPE_TIMELINE_KHR = VK_SEMAPHORE_TYPE_TIMELINE,
    VK_SEMAPHORE_TYPE_MAX_ENUM = 0x7FFFFFFF
} VkSemaphoreType;

typedef enum VkResolveModeFlagBits {
    VK_RESOLVE_MODE_NONE = 0,
    VK_RESOLVE_MODE_SAMPLE_ZERO_BIT = 0x00000001,
    VK_RESOLVE_MODE_AVERAGE_BIT = 0x00000002,
    VK_RESOLVE_MODE_MIN_BIT = 0x00000004,
    VK_RESOLVE_MODE_MAX_BIT = 0x00000008,
    VK_RESOLVE_MODE_NONE_KHR = VK_RESOLVE_MODE_NONE,
    VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR = VK_RESOLVE_MODE_SAMPLE_ZERO_BIT,
    VK_RESOLVE_MODE_AVERAGE_BIT_KHR = VK_RESOLVE_MODE_AVERAGE_BIT,
    VK_RESOLVE_MODE_MIN_BIT_KHR = VK_RESOLVE_MODE_MIN_BIT,
    VK_RESOLVE_MODE_MAX_BIT_KHR = VK_RESOLVE_MODE_MAX_BIT,
    VK_RESOLVE_MODE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkResolveModeFlagBits;
typedef VkFlags VkResolveModeFlags;

typedef enum VkDescriptorBindingFlagBits {
    VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT = 0x00000001,
    VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT = 0x00000002,
    VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT = 0x00000004,
    VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT = 0x00000008,
    VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT = VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT,
    VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT = VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT,
    VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT = VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT,
    VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT = VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT,
    VK_DESCRIPTOR_BINDING_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkDescriptorBindingFlagBits;
typedef VkFlags VkDescriptorBindingFlags;

typedef enum VkSemaphoreWaitFlagBits {
    VK_SEMAPHORE_WAIT_ANY_BIT = 0x00000001,
    VK_SEMAPHORE_WAIT_ANY_BIT_KHR = VK_SEMAPHORE_WAIT_ANY_BIT,
    VK_SEMAPHORE_WAIT_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkSemaphoreWaitFlagBits;
typedef VkFlags VkSemaphoreWaitFlags;
typedef struct VkPhysicalDeviceVulkan11Features {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           storageBuffer16BitAccess;
    VkBool32           uniformAndStorageBuffer16BitAccess;
    VkBool32           storagePushConstant16;
    VkBool32           storageInputOutput16;
    VkBool32           multiview;
    VkBool32           multiviewGeometryShader;
    VkBool32           multiviewTessellationShader;
    VkBool32           variablePointersStorageBuffer;
    VkBool32           variablePointers;
    VkBool32           protectedMemory;
    VkBool32           samplerYcbcrConversion;
    VkBool32           shaderDrawParameters;
} VkPhysicalDeviceVulkan11Features;

typedef struct VkPhysicalDeviceVulkan11Properties {
    VkStructureType            sType;
    void*                      pNext;
    deUint8                    deviceUUID[VK_UUID_SIZE];
    deUint8                    driverUUID[VK_UUID_SIZE];
    deUint8                    deviceLUID[VK_LUID_SIZE];
    deUint32                   deviceNodeMask;
    VkBool32                   deviceLUIDValid;
    deUint32                   subgroupSize;
    VkShaderStageFlags         subgroupSupportedStages;
    VkSubgroupFeatureFlags     subgroupSupportedOperations;
    VkBool32                   subgroupQuadOperationsInAllStages;
    VkPointClippingBehavior    pointClippingBehavior;
    deUint32                   maxMultiviewViewCount;
    deUint32                   maxMultiviewInstanceIndex;
    VkBool32                   protectedNoFault;
    deUint32                   maxPerSetDescriptors;
    VkDeviceSize               maxMemoryAllocationSize;
} VkPhysicalDeviceVulkan11Properties;

typedef struct VkPhysicalDeviceVulkan12Features {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           samplerMirrorClampToEdge;
    VkBool32           drawIndirectCount;
    VkBool32           storageBuffer8BitAccess;
    VkBool32           uniformAndStorageBuffer8BitAccess;
    VkBool32           storagePushConstant8;
    VkBool32           shaderBufferInt64Atomics;
    VkBool32           shaderSharedInt64Atomics;
    VkBool32           shaderFloat16;
    VkBool32           shaderInt8;
    VkBool32           descriptorIndexing;
    VkBool32           shaderInputAttachmentArrayDynamicIndexing;
    VkBool32           shaderUniformTexelBufferArrayDynamicIndexing;
    VkBool32           shaderStorageTexelBufferArrayDynamicIndexing;
    VkBool32           shaderUniformBufferArrayNonUniformIndexing;
    VkBool32           shaderSampledImageArrayNonUniformIndexing;
    VkBool32           shaderStorageBufferArrayNonUniformIndexing;
    VkBool32           shaderStorageImageArrayNonUniformIndexing;
    VkBool32           shaderInputAttachmentArrayNonUniformIndexing;
    VkBool32           shaderUniformTexelBufferArrayNonUniformIndexing;
    VkBool32           shaderStorageTexelBufferArrayNonUniformIndexing;
    VkBool32           descriptorBindingUniformBufferUpdateAfterBind;
    VkBool32           descriptorBindingSampledImageUpdateAfterBind;
    VkBool32           descriptorBindingStorageImageUpdateAfterBind;
    VkBool32           descriptorBindingStorageBufferUpdateAfterBind;
    VkBool32           descriptorBindingUniformTexelBufferUpdateAfterBind;
    VkBool32           descriptorBindingStorageTexelBufferUpdateAfterBind;
    VkBool32           descriptorBindingUpdateUnusedWhilePending;
    VkBool32           descriptorBindingPartiallyBound;
    VkBool32           descriptorBindingVariableDescriptorCount;
    VkBool32           runtimeDescriptorArray;
    VkBool32           samplerFilterMinmax;
    VkBool32           scalarBlockLayout;
    VkBool32           imagelessFramebuffer;
    VkBool32           uniformBufferStandardLayout;
    VkBool32           shaderSubgroupExtendedTypes;
    VkBool32           separateDepthStencilLayouts;
    VkBool32           hostQueryReset;
    VkBool32           timelineSemaphore;
    VkBool32           bufferDeviceAddress;
    VkBool32           bufferDeviceAddressCaptureReplay;
    VkBool32           bufferDeviceAddressMultiDevice;
    VkBool32           vulkanMemoryModel;
    VkBool32           vulkanMemoryModelDeviceScope;
    VkBool32           vulkanMemoryModelAvailabilityVisibilityChains;
    VkBool32           shaderOutputViewportIndex;
    VkBool32           shaderOutputLayer;
    VkBool32           subgroupBroadcastDynamicId;
} VkPhysicalDeviceVulkan12Features;

typedef struct VkConformanceVersion {
    deUint8    major;
    deUint8    minor;
    deUint8    subminor;
    deUint8    patch;
} VkConformanceVersion;

typedef struct VkPhysicalDeviceVulkan12Properties {
    VkStructureType                      sType;
    void*                                pNext;
    VkDriverId                           driverID;
    char                                 driverName[VK_MAX_DRIVER_NAME_SIZE];
    char                                 driverInfo[VK_MAX_DRIVER_INFO_SIZE];
    VkConformanceVersion                 conformanceVersion;
    VkShaderFloatControlsIndependence    denormBehaviorIndependence;
    VkShaderFloatControlsIndependence    roundingModeIndependence;
    VkBool32                             shaderSignedZeroInfNanPreserveFloat16;
    VkBool32                             shaderSignedZeroInfNanPreserveFloat32;
    VkBool32                             shaderSignedZeroInfNanPreserveFloat64;
    VkBool32                             shaderDenormPreserveFloat16;
    VkBool32                             shaderDenormPreserveFloat32;
    VkBool32                             shaderDenormPreserveFloat64;
    VkBool32                             shaderDenormFlushToZeroFloat16;
    VkBool32                             shaderDenormFlushToZeroFloat32;
    VkBool32                             shaderDenormFlushToZeroFloat64;
    VkBool32                             shaderRoundingModeRTEFloat16;
    VkBool32                             shaderRoundingModeRTEFloat32;
    VkBool32                             shaderRoundingModeRTEFloat64;
    VkBool32                             shaderRoundingModeRTZFloat16;
    VkBool32                             shaderRoundingModeRTZFloat32;
    VkBool32                             shaderRoundingModeRTZFloat64;
    deUint32                             maxUpdateAfterBindDescriptorsInAllPools;
    VkBool32                             shaderUniformBufferArrayNonUniformIndexingNative;
    VkBool32                             shaderSampledImageArrayNonUniformIndexingNative;
    VkBool32                             shaderStorageBufferArrayNonUniformIndexingNative;
    VkBool32                             shaderStorageImageArrayNonUniformIndexingNative;
    VkBool32                             shaderInputAttachmentArrayNonUniformIndexingNative;
    VkBool32                             robustBufferAccessUpdateAfterBind;
    VkBool32                             quadDivergentImplicitLod;
    deUint32                             maxPerStageDescriptorUpdateAfterBindSamplers;
    deUint32                             maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    deUint32                             maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    deUint32                             maxPerStageDescriptorUpdateAfterBindSampledImages;
    deUint32                             maxPerStageDescriptorUpdateAfterBindStorageImages;
    deUint32                             maxPerStageDescriptorUpdateAfterBindInputAttachments;
    deUint32                             maxPerStageUpdateAfterBindResources;
    deUint32                             maxDescriptorSetUpdateAfterBindSamplers;
    deUint32                             maxDescriptorSetUpdateAfterBindUniformBuffers;
    deUint32                             maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    deUint32                             maxDescriptorSetUpdateAfterBindStorageBuffers;
    deUint32                             maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    deUint32                             maxDescriptorSetUpdateAfterBindSampledImages;
    deUint32                             maxDescriptorSetUpdateAfterBindStorageImages;
    deUint32                             maxDescriptorSetUpdateAfterBindInputAttachments;
    VkResolveModeFlags                   supportedDepthResolveModes;
    VkResolveModeFlags                   supportedStencilResolveModes;
    VkBool32                             independentResolveNone;
    VkBool32                             independentResolve;
    VkBool32                             filterMinmaxSingleComponentFormats;
    VkBool32                             filterMinmaxImageComponentMapping;
    deUint64                             maxTimelineSemaphoreValueDifference;
    VkSampleCountFlags                   framebufferIntegerColorSampleCounts;
} VkPhysicalDeviceVulkan12Properties;

typedef struct VkImageFormatListCreateInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           viewFormatCount;
    const VkFormat*    pViewFormats;
} VkImageFormatListCreateInfo;

typedef struct VkAttachmentDescription2 {
    VkStructureType                 sType;
    const void*                     pNext;
    VkAttachmentDescriptionFlags    flags;
    VkFormat                        format;
    VkSampleCountFlagBits           samples;
    VkAttachmentLoadOp              loadOp;
    VkAttachmentStoreOp             storeOp;
    VkAttachmentLoadOp              stencilLoadOp;
    VkAttachmentStoreOp             stencilStoreOp;
    VkImageLayout                   initialLayout;
    VkImageLayout                   finalLayout;
} VkAttachmentDescription2;

typedef struct VkAttachmentReference2 {
    VkStructureType       sType;
    const void*           pNext;
    deUint32              attachment;
    VkImageLayout         layout;
    VkImageAspectFlags    aspectMask;
} VkAttachmentReference2;

typedef struct VkSubpassDescription2 {
    VkStructureType                  sType;
    const void*                      pNext;
    VkSubpassDescriptionFlags        flags;
    VkPipelineBindPoint              pipelineBindPoint;
    deUint32                         viewMask;
    deUint32                         inputAttachmentCount;
    const VkAttachmentReference2*    pInputAttachments;
    deUint32                         colorAttachmentCount;
    const VkAttachmentReference2*    pColorAttachments;
    const VkAttachmentReference2*    pResolveAttachments;
    const VkAttachmentReference2*    pDepthStencilAttachment;
    deUint32                         preserveAttachmentCount;
    const deUint32*                  pPreserveAttachments;
} VkSubpassDescription2;

typedef struct VkSubpassDependency2 {
    VkStructureType         sType;
    const void*             pNext;
    deUint32                srcSubpass;
    deUint32                dstSubpass;
    VkPipelineStageFlags    srcStageMask;
    VkPipelineStageFlags    dstStageMask;
    VkAccessFlags           srcAccessMask;
    VkAccessFlags           dstAccessMask;
    VkDependencyFlags       dependencyFlags;
    deInt32                 viewOffset;
} VkSubpassDependency2;

typedef struct VkRenderPassCreateInfo2 {
    VkStructureType                    sType;
    const void*                        pNext;
    VkRenderPassCreateFlags            flags;
    deUint32                           attachmentCount;
    const VkAttachmentDescription2*    pAttachments;
    deUint32                           subpassCount;
    const VkSubpassDescription2*       pSubpasses;
    deUint32                           dependencyCount;
    const VkSubpassDependency2*        pDependencies;
    deUint32                           correlatedViewMaskCount;
    const deUint32*                    pCorrelatedViewMasks;
} VkRenderPassCreateInfo2;

typedef struct VkSubpassBeginInfo {
    VkStructureType      sType;
    const void*          pNext;
    VkSubpassContents    contents;
} VkSubpassBeginInfo;

typedef struct VkSubpassEndInfo {
    VkStructureType    sType;
    const void*        pNext;
} VkSubpassEndInfo;

typedef struct VkPhysicalDevice8BitStorageFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           storageBuffer8BitAccess;
    VkBool32           uniformAndStorageBuffer8BitAccess;
    VkBool32           storagePushConstant8;
} VkPhysicalDevice8BitStorageFeatures;

typedef struct VkPhysicalDeviceDriverProperties {
    VkStructureType         sType;
    void*                   pNext;
    VkDriverId              driverID;
    char                    driverName[VK_MAX_DRIVER_NAME_SIZE];
    char                    driverInfo[VK_MAX_DRIVER_INFO_SIZE];
    VkConformanceVersion    conformanceVersion;
} VkPhysicalDeviceDriverProperties;

typedef struct VkPhysicalDeviceShaderAtomicInt64Features {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderBufferInt64Atomics;
    VkBool32           shaderSharedInt64Atomics;
} VkPhysicalDeviceShaderAtomicInt64Features;

typedef struct VkPhysicalDeviceShaderFloat16Int8Features {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderFloat16;
    VkBool32           shaderInt8;
} VkPhysicalDeviceShaderFloat16Int8Features;

typedef struct VkPhysicalDeviceFloatControlsProperties {
    VkStructureType                      sType;
    void*                                pNext;
    VkShaderFloatControlsIndependence    denormBehaviorIndependence;
    VkShaderFloatControlsIndependence    roundingModeIndependence;
    VkBool32                             shaderSignedZeroInfNanPreserveFloat16;
    VkBool32                             shaderSignedZeroInfNanPreserveFloat32;
    VkBool32                             shaderSignedZeroInfNanPreserveFloat64;
    VkBool32                             shaderDenormPreserveFloat16;
    VkBool32                             shaderDenormPreserveFloat32;
    VkBool32                             shaderDenormPreserveFloat64;
    VkBool32                             shaderDenormFlushToZeroFloat16;
    VkBool32                             shaderDenormFlushToZeroFloat32;
    VkBool32                             shaderDenormFlushToZeroFloat64;
    VkBool32                             shaderRoundingModeRTEFloat16;
    VkBool32                             shaderRoundingModeRTEFloat32;
    VkBool32                             shaderRoundingModeRTEFloat64;
    VkBool32                             shaderRoundingModeRTZFloat16;
    VkBool32                             shaderRoundingModeRTZFloat32;
    VkBool32                             shaderRoundingModeRTZFloat64;
} VkPhysicalDeviceFloatControlsProperties;

typedef struct VkDescriptorSetLayoutBindingFlagsCreateInfo {
    VkStructureType                    sType;
    const void*                        pNext;
    deUint32                           bindingCount;
    const VkDescriptorBindingFlags*    pBindingFlags;
} VkDescriptorSetLayoutBindingFlagsCreateInfo;

typedef struct VkPhysicalDeviceDescriptorIndexingFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderInputAttachmentArrayDynamicIndexing;
    VkBool32           shaderUniformTexelBufferArrayDynamicIndexing;
    VkBool32           shaderStorageTexelBufferArrayDynamicIndexing;
    VkBool32           shaderUniformBufferArrayNonUniformIndexing;
    VkBool32           shaderSampledImageArrayNonUniformIndexing;
    VkBool32           shaderStorageBufferArrayNonUniformIndexing;
    VkBool32           shaderStorageImageArrayNonUniformIndexing;
    VkBool32           shaderInputAttachmentArrayNonUniformIndexing;
    VkBool32           shaderUniformTexelBufferArrayNonUniformIndexing;
    VkBool32           shaderStorageTexelBufferArrayNonUniformIndexing;
    VkBool32           descriptorBindingUniformBufferUpdateAfterBind;
    VkBool32           descriptorBindingSampledImageUpdateAfterBind;
    VkBool32           descriptorBindingStorageImageUpdateAfterBind;
    VkBool32           descriptorBindingStorageBufferUpdateAfterBind;
    VkBool32           descriptorBindingUniformTexelBufferUpdateAfterBind;
    VkBool32           descriptorBindingStorageTexelBufferUpdateAfterBind;
    VkBool32           descriptorBindingUpdateUnusedWhilePending;
    VkBool32           descriptorBindingPartiallyBound;
    VkBool32           descriptorBindingVariableDescriptorCount;
    VkBool32           runtimeDescriptorArray;
} VkPhysicalDeviceDescriptorIndexingFeatures;

typedef struct VkPhysicalDeviceDescriptorIndexingProperties {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxUpdateAfterBindDescriptorsInAllPools;
    VkBool32           shaderUniformBufferArrayNonUniformIndexingNative;
    VkBool32           shaderSampledImageArrayNonUniformIndexingNative;
    VkBool32           shaderStorageBufferArrayNonUniformIndexingNative;
    VkBool32           shaderStorageImageArrayNonUniformIndexingNative;
    VkBool32           shaderInputAttachmentArrayNonUniformIndexingNative;
    VkBool32           robustBufferAccessUpdateAfterBind;
    VkBool32           quadDivergentImplicitLod;
    deUint32           maxPerStageDescriptorUpdateAfterBindSamplers;
    deUint32           maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    deUint32           maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    deUint32           maxPerStageDescriptorUpdateAfterBindSampledImages;
    deUint32           maxPerStageDescriptorUpdateAfterBindStorageImages;
    deUint32           maxPerStageDescriptorUpdateAfterBindInputAttachments;
    deUint32           maxPerStageUpdateAfterBindResources;
    deUint32           maxDescriptorSetUpdateAfterBindSamplers;
    deUint32           maxDescriptorSetUpdateAfterBindUniformBuffers;
    deUint32           maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    deUint32           maxDescriptorSetUpdateAfterBindStorageBuffers;
    deUint32           maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    deUint32           maxDescriptorSetUpdateAfterBindSampledImages;
    deUint32           maxDescriptorSetUpdateAfterBindStorageImages;
    deUint32           maxDescriptorSetUpdateAfterBindInputAttachments;
} VkPhysicalDeviceDescriptorIndexingProperties;

typedef struct VkDescriptorSetVariableDescriptorCountAllocateInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           descriptorSetCount;
    const deUint32*    pDescriptorCounts;
} VkDescriptorSetVariableDescriptorCountAllocateInfo;

typedef struct VkDescriptorSetVariableDescriptorCountLayoutSupport {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxVariableDescriptorCount;
} VkDescriptorSetVariableDescriptorCountLayoutSupport;

typedef struct VkSubpassDescriptionDepthStencilResolve {
    VkStructureType                  sType;
    const void*                      pNext;
    VkResolveModeFlagBits            depthResolveMode;
    VkResolveModeFlagBits            stencilResolveMode;
    const VkAttachmentReference2*    pDepthStencilResolveAttachment;
} VkSubpassDescriptionDepthStencilResolve;

typedef struct VkPhysicalDeviceDepthStencilResolveProperties {
    VkStructureType       sType;
    void*                 pNext;
    VkResolveModeFlags    supportedDepthResolveModes;
    VkResolveModeFlags    supportedStencilResolveModes;
    VkBool32              independentResolveNone;
    VkBool32              independentResolve;
} VkPhysicalDeviceDepthStencilResolveProperties;

typedef struct VkPhysicalDeviceScalarBlockLayoutFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           scalarBlockLayout;
} VkPhysicalDeviceScalarBlockLayoutFeatures;

typedef struct VkImageStencilUsageCreateInfo {
    VkStructureType      sType;
    const void*          pNext;
    VkImageUsageFlags    stencilUsage;
} VkImageStencilUsageCreateInfo;

typedef struct VkSamplerReductionModeCreateInfo {
    VkStructureType           sType;
    const void*               pNext;
    VkSamplerReductionMode    reductionMode;
} VkSamplerReductionModeCreateInfo;

typedef struct VkPhysicalDeviceSamplerFilterMinmaxProperties {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           filterMinmaxSingleComponentFormats;
    VkBool32           filterMinmaxImageComponentMapping;
} VkPhysicalDeviceSamplerFilterMinmaxProperties;

typedef struct VkPhysicalDeviceVulkanMemoryModelFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           vulkanMemoryModel;
    VkBool32           vulkanMemoryModelDeviceScope;
    VkBool32           vulkanMemoryModelAvailabilityVisibilityChains;
} VkPhysicalDeviceVulkanMemoryModelFeatures;

typedef struct VkPhysicalDeviceImagelessFramebufferFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           imagelessFramebuffer;
} VkPhysicalDeviceImagelessFramebufferFeatures;

typedef struct VkFramebufferAttachmentImageInfo {
    VkStructureType       sType;
    const void*           pNext;
    VkImageCreateFlags    flags;
    VkImageUsageFlags     usage;
    deUint32              width;
    deUint32              height;
    deUint32              layerCount;
    deUint32              viewFormatCount;
    const VkFormat*       pViewFormats;
} VkFramebufferAttachmentImageInfo;

typedef struct VkFramebufferAttachmentsCreateInfo {
    VkStructureType                            sType;
    const void*                                pNext;
    deUint32                                   attachmentImageInfoCount;
    const VkFramebufferAttachmentImageInfo*    pAttachmentImageInfos;
} VkFramebufferAttachmentsCreateInfo;

typedef struct VkRenderPassAttachmentBeginInfo {
    VkStructureType       sType;
    const void*           pNext;
    deUint32              attachmentCount;
    const VkImageView*    pAttachments;
} VkRenderPassAttachmentBeginInfo;

typedef struct VkPhysicalDeviceUniformBufferStandardLayoutFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           uniformBufferStandardLayout;
} VkPhysicalDeviceUniformBufferStandardLayoutFeatures;

typedef struct VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderSubgroupExtendedTypes;
} VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures;

typedef struct VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           separateDepthStencilLayouts;
} VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures;

typedef struct VkAttachmentReferenceStencilLayout {
    VkStructureType    sType;
    void*              pNext;
    VkImageLayout      stencilLayout;
} VkAttachmentReferenceStencilLayout;

typedef struct VkAttachmentDescriptionStencilLayout {
    VkStructureType    sType;
    void*              pNext;
    VkImageLayout      stencilInitialLayout;
    VkImageLayout      stencilFinalLayout;
} VkAttachmentDescriptionStencilLayout;

typedef struct VkPhysicalDeviceHostQueryResetFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           hostQueryReset;
} VkPhysicalDeviceHostQueryResetFeatures;

typedef struct VkPhysicalDeviceTimelineSemaphoreFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           timelineSemaphore;
} VkPhysicalDeviceTimelineSemaphoreFeatures;

typedef struct VkPhysicalDeviceTimelineSemaphoreProperties {
    VkStructureType    sType;
    void*              pNext;
    deUint64           maxTimelineSemaphoreValueDifference;
} VkPhysicalDeviceTimelineSemaphoreProperties;

typedef struct VkSemaphoreTypeCreateInfo {
    VkStructureType    sType;
    const void*        pNext;
    VkSemaphoreType    semaphoreType;
    deUint64           initialValue;
} VkSemaphoreTypeCreateInfo;

typedef struct VkTimelineSemaphoreSubmitInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           waitSemaphoreValueCount;
    const deUint64*    pWaitSemaphoreValues;
    deUint32           signalSemaphoreValueCount;
    const deUint64*    pSignalSemaphoreValues;
} VkTimelineSemaphoreSubmitInfo;

typedef struct VkSemaphoreWaitInfo {
    VkStructureType         sType;
    const void*             pNext;
    VkSemaphoreWaitFlags    flags;
    deUint32                semaphoreCount;
    const VkSemaphore*      pSemaphores;
    const deUint64*         pValues;
} VkSemaphoreWaitInfo;

typedef struct VkSemaphoreSignalInfo {
    VkStructureType    sType;
    const void*        pNext;
    VkSemaphore        semaphore;
    deUint64           value;
} VkSemaphoreSignalInfo;

typedef struct VkPhysicalDeviceBufferDeviceAddressFeatures {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           bufferDeviceAddress;
    VkBool32           bufferDeviceAddressCaptureReplay;
    VkBool32           bufferDeviceAddressMultiDevice;
} VkPhysicalDeviceBufferDeviceAddressFeatures;

typedef struct VkBufferDeviceAddressInfo {
    VkStructureType    sType;
    const void*        pNext;
    VkBuffer           buffer;
} VkBufferDeviceAddressInfo;

typedef struct VkBufferOpaqueCaptureAddressCreateInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint64           opaqueCaptureAddress;
} VkBufferOpaqueCaptureAddressCreateInfo;

typedef struct VkMemoryOpaqueCaptureAddressAllocateInfo {
    VkStructureType    sType;
    const void*        pNext;
    deUint64           opaqueCaptureAddress;
} VkMemoryOpaqueCaptureAddressAllocateInfo;

typedef struct VkDeviceMemoryOpaqueCaptureAddressInfo {
    VkStructureType    sType;
    const void*        pNext;
    VkDeviceMemory     memory;
} VkDeviceMemoryOpaqueCaptureAddressInfo;

typedef void (VKAPI_PTR *PFN_vkCmdDrawIndirectCount)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride);
typedef void (VKAPI_PTR *PFN_vkCmdDrawIndexedIndirectCount)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride);
typedef VkResult (VKAPI_PTR *PFN_vkCreateRenderPass2)(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
typedef void (VKAPI_PTR *PFN_vkCmdBeginRenderPass2)(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo*      pRenderPassBegin, const VkSubpassBeginInfo*      pSubpassBeginInfo);
typedef void (VKAPI_PTR *PFN_vkCmdNextSubpass2)(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo*      pSubpassBeginInfo, const VkSubpassEndInfo*        pSubpassEndInfo);
typedef void (VKAPI_PTR *PFN_vkCmdEndRenderPass2)(VkCommandBuffer commandBuffer, const VkSubpassEndInfo*        pSubpassEndInfo);
typedef void (VKAPI_PTR *PFN_vkResetQueryPool)(VkDevice device, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount);
typedef VkResult (VKAPI_PTR *PFN_vkGetSemaphoreCounterValue)(VkDevice device, VkSemaphore semaphore, deUint64* pValue);
typedef VkResult (VKAPI_PTR *PFN_vkWaitSemaphores)(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, deUint64 timeout);
typedef VkResult (VKAPI_PTR *PFN_vkSignalSemaphore)(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo);
typedef VkDeviceAddress (VKAPI_PTR *PFN_vkGetBufferDeviceAddress)(VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
typedef deUint64 (VKAPI_PTR *PFN_vkGetBufferOpaqueCaptureAddress)(VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
typedef deUint64 (VKAPI_PTR *PFN_vkGetDeviceMemoryOpaqueCaptureAddress)(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCount(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    deUint32                                    maxDrawCount,
    deUint32                                    stride);

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCount(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    deUint32                                    maxDrawCount,
    deUint32                                    stride);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass2(
    VkDevice                                    device,
    const VkRenderPassCreateInfo2*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass);

VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass2(
    VkCommandBuffer                             commandBuffer,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    const VkSubpassBeginInfo*                   pSubpassBeginInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass2(
    VkCommandBuffer                             commandBuffer,
    const VkSubpassBeginInfo*                   pSubpassBeginInfo,
    const VkSubpassEndInfo*                     pSubpassEndInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass2(
    VkCommandBuffer                             commandBuffer,
    const VkSubpassEndInfo*                     pSubpassEndInfo);

VKAPI_ATTR void VKAPI_CALL vkResetQueryPool(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    deUint32                                    firstQuery,
    deUint32                                    queryCount);

VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreCounterValue(
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    deUint64*                                   pValue);

VKAPI_ATTR VkResult VKAPI_CALL vkWaitSemaphores(
    VkDevice                                    device,
    const VkSemaphoreWaitInfo*                  pWaitInfo,
    deUint64                                    timeout);

VKAPI_ATTR VkResult VKAPI_CALL vkSignalSemaphore(
    VkDevice                                    device,
    const VkSemaphoreSignalInfo*                pSignalInfo);

VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddress(
    VkDevice                                    device,
    const VkBufferDeviceAddressInfo*            pInfo);

VKAPI_ATTR deUint64 VKAPI_CALL vkGetBufferOpaqueCaptureAddress(
    VkDevice                                    device,
    const VkBufferDeviceAddressInfo*            pInfo);

VKAPI_ATTR deUint64 VKAPI_CALL vkGetDeviceMemoryOpaqueCaptureAddress(
    VkDevice                                    device,
    const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
#endif


#define VK_KHR_surface 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSurfaceKHR)
#define VK_KHR_SURFACE_SPEC_VERSION       25
#define VK_KHR_SURFACE_EXTENSION_NAME     "VK_KHR_surface"

typedef enum VkPresentModeKHR {
    VK_PRESENT_MODE_IMMEDIATE_KHR = 0,
    VK_PRESENT_MODE_MAILBOX_KHR = 1,
    VK_PRESENT_MODE_FIFO_KHR = 2,
    VK_PRESENT_MODE_FIFO_RELAXED_KHR = 3,
    VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR = 1000111000,
    VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR = 1000111001,
    VK_PRESENT_MODE_MAX_ENUM_KHR = 0x7FFFFFFF
} VkPresentModeKHR;

typedef enum VkColorSpaceKHR {
    VK_COLOR_SPACE_SRGB_NONLINEAR_KHR = 0,
    VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT = 1000104001,
    VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT = 1000104002,
    VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT = 1000104003,
    VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT = 1000104004,
    VK_COLOR_SPACE_BT709_LINEAR_EXT = 1000104005,
    VK_COLOR_SPACE_BT709_NONLINEAR_EXT = 1000104006,
    VK_COLOR_SPACE_BT2020_LINEAR_EXT = 1000104007,
    VK_COLOR_SPACE_HDR10_ST2084_EXT = 1000104008,
    VK_COLOR_SPACE_DOLBYVISION_EXT = 1000104009,
    VK_COLOR_SPACE_HDR10_HLG_EXT = 1000104010,
    VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT = 1000104011,
    VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT = 1000104012,
    VK_COLOR_SPACE_PASS_THROUGH_EXT = 1000104013,
    VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT = 1000104014,
    VK_COLOR_SPACE_DISPLAY_NATIVE_AMD = 1000213000,
    VK_COLORSPACE_SRGB_NONLINEAR_KHR = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR,
    VK_COLOR_SPACE_DCI_P3_LINEAR_EXT = VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT,
    VK_COLOR_SPACE_MAX_ENUM_KHR = 0x7FFFFFFF
} VkColorSpaceKHR;

typedef enum VkSurfaceTransformFlagBitsKHR {
    VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR = 0x00000001,
    VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR = 0x00000002,
    VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR = 0x00000004,
    VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR = 0x00000008,
    VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR = 0x00000010,
    VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR = 0x00000020,
    VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR = 0x00000040,
    VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR = 0x00000080,
    VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR = 0x00000100,
    VK_SURFACE_TRANSFORM_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkSurfaceTransformFlagBitsKHR;

typedef enum VkCompositeAlphaFlagBitsKHR {
    VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR = 0x00000001,
    VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR = 0x00000002,
    VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR = 0x00000004,
    VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR = 0x00000008,
    VK_COMPOSITE_ALPHA_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkCompositeAlphaFlagBitsKHR;
typedef VkFlags VkCompositeAlphaFlagsKHR;
typedef VkFlags VkSurfaceTransformFlagsKHR;
typedef struct VkSurfaceCapabilitiesKHR {
    deUint32                         minImageCount;
    deUint32                         maxImageCount;
    VkExtent2D                       currentExtent;
    VkExtent2D                       minImageExtent;
    VkExtent2D                       maxImageExtent;
    deUint32                         maxImageArrayLayers;
    VkSurfaceTransformFlagsKHR       supportedTransforms;
    VkSurfaceTransformFlagBitsKHR    currentTransform;
    VkCompositeAlphaFlagsKHR         supportedCompositeAlpha;
    VkImageUsageFlags                supportedUsageFlags;
} VkSurfaceCapabilitiesKHR;

typedef struct VkSurfaceFormatKHR {
    VkFormat           format;
    VkColorSpaceKHR    colorSpace;
} VkSurfaceFormatKHR;

typedef void (VKAPI_PTR *PFN_vkDestroySurfaceKHR)(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceSurfaceSupportKHR)(VkPhysicalDevice physicalDevice, deUint32 queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported);
typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities);
typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, deUint32* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats);
typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, deUint32* pPresentModeCount, VkPresentModeKHR* pPresentModes);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkDestroySurfaceKHR(
    VkInstance                                  instance,
    VkSurfaceKHR                                surface,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    deUint32                                    queueFamilyIndex,
    VkSurfaceKHR                                surface,
    VkBool32*                                   pSupported);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilitiesKHR*                   pSurfaceCapabilities);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceFormatsKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    deUint32*                                   pSurfaceFormatCount,
    VkSurfaceFormatKHR*                         pSurfaceFormats);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfacePresentModesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    deUint32*                                   pPresentModeCount,
    VkPresentModeKHR*                           pPresentModes);
#endif


#define VK_KHR_swapchain 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSwapchainKHR)
#define VK_KHR_SWAPCHAIN_SPEC_VERSION     70
#define VK_KHR_SWAPCHAIN_EXTENSION_NAME   "VK_KHR_swapchain"

typedef enum VkSwapchainCreateFlagBitsKHR {
    VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR = 0x00000001,
    VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR = 0x00000002,
    VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR = 0x00000004,
    VK_SWAPCHAIN_CREATE_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkSwapchainCreateFlagBitsKHR;
typedef VkFlags VkSwapchainCreateFlagsKHR;

typedef enum VkDeviceGroupPresentModeFlagBitsKHR {
    VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR = 0x00000001,
    VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR = 0x00000002,
    VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR = 0x00000004,
    VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR = 0x00000008,
    VK_DEVICE_GROUP_PRESENT_MODE_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkDeviceGroupPresentModeFlagBitsKHR;
typedef VkFlags VkDeviceGroupPresentModeFlagsKHR;
typedef struct VkSwapchainCreateInfoKHR {
    VkStructureType                  sType;
    const void*                      pNext;
    VkSwapchainCreateFlagsKHR        flags;
    VkSurfaceKHR                     surface;
    deUint32                         minImageCount;
    VkFormat                         imageFormat;
    VkColorSpaceKHR                  imageColorSpace;
    VkExtent2D                       imageExtent;
    deUint32                         imageArrayLayers;
    VkImageUsageFlags                imageUsage;
    VkSharingMode                    imageSharingMode;
    deUint32                         queueFamilyIndexCount;
    const deUint32*                  pQueueFamilyIndices;
    VkSurfaceTransformFlagBitsKHR    preTransform;
    VkCompositeAlphaFlagBitsKHR      compositeAlpha;
    VkPresentModeKHR                 presentMode;
    VkBool32                         clipped;
    VkSwapchainKHR                   oldSwapchain;
} VkSwapchainCreateInfoKHR;

typedef struct VkPresentInfoKHR {
    VkStructureType          sType;
    const void*              pNext;
    deUint32                 waitSemaphoreCount;
    const VkSemaphore*       pWaitSemaphores;
    deUint32                 swapchainCount;
    const VkSwapchainKHR*    pSwapchains;
    const deUint32*          pImageIndices;
    VkResult*                pResults;
} VkPresentInfoKHR;

typedef struct VkImageSwapchainCreateInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    VkSwapchainKHR     swapchain;
} VkImageSwapchainCreateInfoKHR;

typedef struct VkBindImageMemorySwapchainInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    VkSwapchainKHR     swapchain;
    deUint32           imageIndex;
} VkBindImageMemorySwapchainInfoKHR;

typedef struct VkAcquireNextImageInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    VkSwapchainKHR     swapchain;
    deUint64           timeout;
    VkSemaphore        semaphore;
    VkFence            fence;
    deUint32           deviceMask;
} VkAcquireNextImageInfoKHR;

typedef struct VkDeviceGroupPresentCapabilitiesKHR {
    VkStructureType                     sType;
    void*                               pNext;
    deUint32                            presentMask[VK_MAX_DEVICE_GROUP_SIZE];
    VkDeviceGroupPresentModeFlagsKHR    modes;
} VkDeviceGroupPresentCapabilitiesKHR;

typedef struct VkDeviceGroupPresentInfoKHR {
    VkStructureType                        sType;
    const void*                            pNext;
    deUint32                               swapchainCount;
    const deUint32*                        pDeviceMasks;
    VkDeviceGroupPresentModeFlagBitsKHR    mode;
} VkDeviceGroupPresentInfoKHR;

typedef struct VkDeviceGroupSwapchainCreateInfoKHR {
    VkStructureType                     sType;
    const void*                         pNext;
    VkDeviceGroupPresentModeFlagsKHR    modes;
} VkDeviceGroupSwapchainCreateInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkCreateSwapchainKHR)(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain);
typedef void (VKAPI_PTR *PFN_vkDestroySwapchainKHR)(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkGetSwapchainImagesKHR)(VkDevice device, VkSwapchainKHR swapchain, deUint32* pSwapchainImageCount, VkImage* pSwapchainImages);
typedef VkResult (VKAPI_PTR *PFN_vkAcquireNextImageKHR)(VkDevice device, VkSwapchainKHR swapchain, deUint64 timeout, VkSemaphore semaphore, VkFence fence, deUint32* pImageIndex);
typedef VkResult (VKAPI_PTR *PFN_vkQueuePresentKHR)(VkQueue queue, const VkPresentInfoKHR* pPresentInfo);
typedef VkResult (VKAPI_PTR *PFN_vkGetDeviceGroupPresentCapabilitiesKHR)(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities);
typedef VkResult (VKAPI_PTR *PFN_vkGetDeviceGroupSurfacePresentModesKHR)(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes);
typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDevicePresentRectanglesKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, deUint32* pRectCount, VkRect2D* pRects);
typedef VkResult (VKAPI_PTR *PFN_vkAcquireNextImage2KHR)(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, deUint32* pImageIndex);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateSwapchainKHR(
    VkDevice                                    device,
    const VkSwapchainCreateInfoKHR*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchain);

VKAPI_ATTR void VKAPI_CALL vkDestroySwapchainKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainImagesKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    deUint32*                                   pSwapchainImageCount,
    VkImage*                                    pSwapchainImages);

VKAPI_ATTR VkResult VKAPI_CALL vkAcquireNextImageKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    deUint64                                    timeout,
    VkSemaphore                                 semaphore,
    VkFence                                     fence,
    deUint32*                                   pImageIndex);

VKAPI_ATTR VkResult VKAPI_CALL vkQueuePresentKHR(
    VkQueue                                     queue,
    const VkPresentInfoKHR*                     pPresentInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupPresentCapabilitiesKHR(
    VkDevice                                    device,
    VkDeviceGroupPresentCapabilitiesKHR*        pDeviceGroupPresentCapabilities);

VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupSurfacePresentModesKHR(
    VkDevice                                    device,
    VkSurfaceKHR                                surface,
    VkDeviceGroupPresentModeFlagsKHR*           pModes);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDevicePresentRectanglesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    deUint32*                                   pRectCount,
    VkRect2D*                                   pRects);

VKAPI_ATTR VkResult VKAPI_CALL vkAcquireNextImage2KHR(
    VkDevice                                    device,
    const VkAcquireNextImageInfoKHR*            pAcquireInfo,
    deUint32*                                   pImageIndex);
#endif


#define VK_KHR_display 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDisplayKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDisplayModeKHR)
#define VK_KHR_DISPLAY_SPEC_VERSION       23
#define VK_KHR_DISPLAY_EXTENSION_NAME     "VK_KHR_display"
typedef VkFlags VkDisplayModeCreateFlagsKHR;

typedef enum VkDisplayPlaneAlphaFlagBitsKHR {
    VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR = 0x00000001,
    VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR = 0x00000002,
    VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR = 0x00000004,
    VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR = 0x00000008,
    VK_DISPLAY_PLANE_ALPHA_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkDisplayPlaneAlphaFlagBitsKHR;
typedef VkFlags VkDisplayPlaneAlphaFlagsKHR;
typedef VkFlags VkDisplaySurfaceCreateFlagsKHR;
typedef struct VkDisplayModeParametersKHR {
    VkExtent2D    visibleRegion;
    deUint32      refreshRate;
} VkDisplayModeParametersKHR;

typedef struct VkDisplayModeCreateInfoKHR {
    VkStructureType                sType;
    const void*                    pNext;
    VkDisplayModeCreateFlagsKHR    flags;
    VkDisplayModeParametersKHR     parameters;
} VkDisplayModeCreateInfoKHR;

typedef struct VkDisplayModePropertiesKHR {
    VkDisplayModeKHR              displayMode;
    VkDisplayModeParametersKHR    parameters;
} VkDisplayModePropertiesKHR;

typedef struct VkDisplayPlaneCapabilitiesKHR {
    VkDisplayPlaneAlphaFlagsKHR    supportedAlpha;
    VkOffset2D                     minSrcPosition;
    VkOffset2D                     maxSrcPosition;
    VkExtent2D                     minSrcExtent;
    VkExtent2D                     maxSrcExtent;
    VkOffset2D                     minDstPosition;
    VkOffset2D                     maxDstPosition;
    VkExtent2D                     minDstExtent;
    VkExtent2D                     maxDstExtent;
} VkDisplayPlaneCapabilitiesKHR;

typedef struct VkDisplayPlanePropertiesKHR {
    VkDisplayKHR    currentDisplay;
    deUint32        currentStackIndex;
} VkDisplayPlanePropertiesKHR;

typedef struct VkDisplayPropertiesKHR {
    VkDisplayKHR                  display;
    const char*                   displayName;
    VkExtent2D                    physicalDimensions;
    VkExtent2D                    physicalResolution;
    VkSurfaceTransformFlagsKHR    supportedTransforms;
    VkBool32                      planeReorderPossible;
    VkBool32                      persistentContent;
} VkDisplayPropertiesKHR;

typedef struct VkDisplaySurfaceCreateInfoKHR {
    VkStructureType                   sType;
    const void*                       pNext;
    VkDisplaySurfaceCreateFlagsKHR    flags;
    VkDisplayModeKHR                  displayMode;
    deUint32                          planeIndex;
    deUint32                          planeStackIndex;
    VkSurfaceTransformFlagBitsKHR     transform;
    float                             globalAlpha;
    VkDisplayPlaneAlphaFlagBitsKHR    alphaMode;
    VkExtent2D                        imageExtent;
} VkDisplaySurfaceCreateInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)(VkPhysicalDevice physicalDevice, deUint32* pPropertyCount, VkDisplayPropertiesKHR* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)(VkPhysicalDevice physicalDevice, deUint32* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkGetDisplayPlaneSupportedDisplaysKHR)(VkPhysicalDevice physicalDevice, deUint32 planeIndex, deUint32* pDisplayCount, VkDisplayKHR* pDisplays);
typedef VkResult (VKAPI_PTR *PFN_vkGetDisplayModePropertiesKHR)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, deUint32* pPropertyCount, VkDisplayModePropertiesKHR* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkCreateDisplayModeKHR)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode);
typedef VkResult (VKAPI_PTR *PFN_vkGetDisplayPlaneCapabilitiesKHR)(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, deUint32 planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities);
typedef VkResult (VKAPI_PTR *PFN_vkCreateDisplayPlaneSurfaceKHR)(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pPropertyCount,
    VkDisplayPropertiesKHR*                     pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pPropertyCount,
    VkDisplayPlanePropertiesKHR*                pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneSupportedDisplaysKHR(
    VkPhysicalDevice                            physicalDevice,
    deUint32                                    planeIndex,
    deUint32*                                   pDisplayCount,
    VkDisplayKHR*                               pDisplays);

VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayModePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    deUint32*                                   pPropertyCount,
    VkDisplayModePropertiesKHR*                 pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayModeKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    const VkDisplayModeCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDisplayModeKHR*                           pMode);

VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneCapabilitiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayModeKHR                            mode,
    deUint32                                    planeIndex,
    VkDisplayPlaneCapabilitiesKHR*              pCapabilities);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayPlaneSurfaceKHR(
    VkInstance                                  instance,
    const VkDisplaySurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif


#define VK_KHR_display_swapchain 1
#define VK_KHR_DISPLAY_SWAPCHAIN_SPEC_VERSION 10
#define VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME "VK_KHR_display_swapchain"
typedef struct VkDisplayPresentInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    VkRect2D           srcRect;
    VkRect2D           dstRect;
    VkBool32           persistent;
} VkDisplayPresentInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkCreateSharedSwapchainsKHR)(VkDevice device, deUint32 swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateSharedSwapchainsKHR(
    VkDevice                                    device,
    deUint32                                    swapchainCount,
    const VkSwapchainCreateInfoKHR*             pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchains);
#endif


#define VK_KHR_sampler_mirror_clamp_to_edge 1
#define VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_SPEC_VERSION 3
#define VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_EXTENSION_NAME "VK_KHR_sampler_mirror_clamp_to_edge"


#define VK_KHR_multiview 1
#define VK_KHR_MULTIVIEW_SPEC_VERSION     1
#define VK_KHR_MULTIVIEW_EXTENSION_NAME   "VK_KHR_multiview"
typedef VkRenderPassMultiviewCreateInfo VkRenderPassMultiviewCreateInfoKHR;

typedef VkPhysicalDeviceMultiviewFeatures VkPhysicalDeviceMultiviewFeaturesKHR;

typedef VkPhysicalDeviceMultiviewProperties VkPhysicalDeviceMultiviewPropertiesKHR;



#define VK_KHR_get_physical_device_properties2 1
#define VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_SPEC_VERSION 2
#define VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME "VK_KHR_get_physical_device_properties2"
typedef VkPhysicalDeviceFeatures2 VkPhysicalDeviceFeatures2KHR;

typedef VkPhysicalDeviceProperties2 VkPhysicalDeviceProperties2KHR;

typedef VkFormatProperties2 VkFormatProperties2KHR;

typedef VkImageFormatProperties2 VkImageFormatProperties2KHR;

typedef VkPhysicalDeviceImageFormatInfo2 VkPhysicalDeviceImageFormatInfo2KHR;

typedef VkQueueFamilyProperties2 VkQueueFamilyProperties2KHR;

typedef VkPhysicalDeviceMemoryProperties2 VkPhysicalDeviceMemoryProperties2KHR;

typedef VkSparseImageFormatProperties2 VkSparseImageFormatProperties2KHR;

typedef VkPhysicalDeviceSparseImageFormatInfo2 VkPhysicalDeviceSparseImageFormatInfo2KHR;

typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceFeatures2KHR)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceProperties2KHR)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceFormatProperties2KHR)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties);
typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)(VkPhysicalDevice physicalDevice, deUint32* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceMemoryProperties2KHR)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, deUint32* pPropertyCount, VkSparseImageFormatProperties2* pProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures2*                  pFeatures);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties2*                pProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties2*                        pFormatProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceImageFormatInfo2*     pImageFormatInfo,
    VkImageFormatProperties2*                   pImageFormatProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2*                   pQueueFamilyProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties2*          pMemoryProperties);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
    deUint32*                                   pPropertyCount,
    VkSparseImageFormatProperties2*             pProperties);
#endif


#define VK_KHR_device_group 1
#define VK_KHR_DEVICE_GROUP_SPEC_VERSION  4
#define VK_KHR_DEVICE_GROUP_EXTENSION_NAME "VK_KHR_device_group"
typedef VkPeerMemoryFeatureFlags VkPeerMemoryFeatureFlagsKHR;

typedef VkPeerMemoryFeatureFlagBits VkPeerMemoryFeatureFlagBitsKHR;

typedef VkMemoryAllocateFlags VkMemoryAllocateFlagsKHR;

typedef VkMemoryAllocateFlagBits VkMemoryAllocateFlagBitsKHR;

typedef VkMemoryAllocateFlagsInfo VkMemoryAllocateFlagsInfoKHR;

typedef VkDeviceGroupRenderPassBeginInfo VkDeviceGroupRenderPassBeginInfoKHR;

typedef VkDeviceGroupCommandBufferBeginInfo VkDeviceGroupCommandBufferBeginInfoKHR;

typedef VkDeviceGroupSubmitInfo VkDeviceGroupSubmitInfoKHR;

typedef VkDeviceGroupBindSparseInfo VkDeviceGroupBindSparseInfoKHR;

typedef VkBindBufferMemoryDeviceGroupInfo VkBindBufferMemoryDeviceGroupInfoKHR;

typedef VkBindImageMemoryDeviceGroupInfo VkBindImageMemoryDeviceGroupInfoKHR;

typedef void (VKAPI_PTR *PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)(VkDevice device, deUint32 heapIndex, deUint32 localDeviceIndex, deUint32 remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
typedef void (VKAPI_PTR *PFN_vkCmdSetDeviceMaskKHR)(VkCommandBuffer commandBuffer, deUint32 deviceMask);
typedef void (VKAPI_PTR *PFN_vkCmdDispatchBaseKHR)(VkCommandBuffer commandBuffer, deUint32 baseGroupX, deUint32 baseGroupY, deUint32 baseGroupZ, deUint32 groupCountX, deUint32 groupCountY, deUint32 groupCountZ);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkGetDeviceGroupPeerMemoryFeaturesKHR(
    VkDevice                                    device,
    deUint32                                    heapIndex,
    deUint32                                    localDeviceIndex,
    deUint32                                    remoteDeviceIndex,
    VkPeerMemoryFeatureFlags*                   pPeerMemoryFeatures);

VKAPI_ATTR void VKAPI_CALL vkCmdSetDeviceMaskKHR(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    deviceMask);

VKAPI_ATTR void VKAPI_CALL vkCmdDispatchBaseKHR(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    baseGroupX,
    deUint32                                    baseGroupY,
    deUint32                                    baseGroupZ,
    deUint32                                    groupCountX,
    deUint32                                    groupCountY,
    deUint32                                    groupCountZ);
#endif


#define VK_KHR_shader_draw_parameters 1
#define VK_KHR_SHADER_DRAW_PARAMETERS_SPEC_VERSION 1
#define VK_KHR_SHADER_DRAW_PARAMETERS_EXTENSION_NAME "VK_KHR_shader_draw_parameters"


#define VK_KHR_maintenance1 1
#define VK_KHR_MAINTENANCE1_SPEC_VERSION  2
#define VK_KHR_MAINTENANCE1_EXTENSION_NAME "VK_KHR_maintenance1"
typedef VkCommandPoolTrimFlags VkCommandPoolTrimFlagsKHR;

typedef void (VKAPI_PTR *PFN_vkTrimCommandPoolKHR)(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkTrimCommandPoolKHR(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolTrimFlags                      flags);
#endif


#define VK_KHR_device_group_creation 1
#define VK_KHR_DEVICE_GROUP_CREATION_SPEC_VERSION 1
#define VK_KHR_DEVICE_GROUP_CREATION_EXTENSION_NAME "VK_KHR_device_group_creation"
#define VK_MAX_DEVICE_GROUP_SIZE_KHR      VK_MAX_DEVICE_GROUP_SIZE
typedef VkPhysicalDeviceGroupProperties VkPhysicalDeviceGroupPropertiesKHR;

typedef VkDeviceGroupDeviceCreateInfo VkDeviceGroupDeviceCreateInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkEnumeratePhysicalDeviceGroupsKHR)(VkInstance instance, deUint32* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDeviceGroupsKHR(
    VkInstance                                  instance,
    deUint32*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupProperties*            pPhysicalDeviceGroupProperties);
#endif


#define VK_KHR_external_memory_capabilities 1
#define VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION 1
#define VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME "VK_KHR_external_memory_capabilities"
#define VK_LUID_SIZE_KHR                  VK_LUID_SIZE
typedef VkExternalMemoryHandleTypeFlags VkExternalMemoryHandleTypeFlagsKHR;

typedef VkExternalMemoryHandleTypeFlagBits VkExternalMemoryHandleTypeFlagBitsKHR;

typedef VkExternalMemoryFeatureFlags VkExternalMemoryFeatureFlagsKHR;

typedef VkExternalMemoryFeatureFlagBits VkExternalMemoryFeatureFlagBitsKHR;

typedef VkExternalMemoryProperties VkExternalMemoryPropertiesKHR;

typedef VkPhysicalDeviceExternalImageFormatInfo VkPhysicalDeviceExternalImageFormatInfoKHR;

typedef VkExternalImageFormatProperties VkExternalImageFormatPropertiesKHR;

typedef VkPhysicalDeviceExternalBufferInfo VkPhysicalDeviceExternalBufferInfoKHR;

typedef VkExternalBufferProperties VkExternalBufferPropertiesKHR;

typedef VkPhysicalDeviceIDProperties VkPhysicalDeviceIDPropertiesKHR;

typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalBufferPropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalBufferInfo*   pExternalBufferInfo,
    VkExternalBufferProperties*                 pExternalBufferProperties);
#endif


#define VK_KHR_external_memory 1
#define VK_KHR_EXTERNAL_MEMORY_SPEC_VERSION 1
#define VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME "VK_KHR_external_memory"
#define VK_QUEUE_FAMILY_EXTERNAL_KHR      VK_QUEUE_FAMILY_EXTERNAL
typedef VkExternalMemoryImageCreateInfo VkExternalMemoryImageCreateInfoKHR;

typedef VkExternalMemoryBufferCreateInfo VkExternalMemoryBufferCreateInfoKHR;

typedef VkExportMemoryAllocateInfo VkExportMemoryAllocateInfoKHR;



#define VK_KHR_external_memory_fd 1
#define VK_KHR_EXTERNAL_MEMORY_FD_SPEC_VERSION 1
#define VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME "VK_KHR_external_memory_fd"
typedef struct VkImportMemoryFdInfoKHR {
    VkStructureType                       sType;
    const void*                           pNext;
    VkExternalMemoryHandleTypeFlagBits    handleType;
    int                                   fd;
} VkImportMemoryFdInfoKHR;

typedef struct VkMemoryFdPropertiesKHR {
    VkStructureType    sType;
    void*              pNext;
    deUint32           memoryTypeBits;
} VkMemoryFdPropertiesKHR;

typedef struct VkMemoryGetFdInfoKHR {
    VkStructureType                       sType;
    const void*                           pNext;
    VkDeviceMemory                        memory;
    VkExternalMemoryHandleTypeFlagBits    handleType;
} VkMemoryGetFdInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkGetMemoryFdKHR)(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd);
typedef VkResult (VKAPI_PTR *PFN_vkGetMemoryFdPropertiesKHR)(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdKHR(
    VkDevice                                    device,
    const VkMemoryGetFdInfoKHR*                 pGetFdInfo,
    int*                                        pFd);

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdPropertiesKHR(
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    VkMemoryFdPropertiesKHR*                    pMemoryFdProperties);
#endif


#define VK_KHR_external_semaphore_capabilities 1
#define VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_SPEC_VERSION 1
#define VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME "VK_KHR_external_semaphore_capabilities"
typedef VkExternalSemaphoreHandleTypeFlags VkExternalSemaphoreHandleTypeFlagsKHR;

typedef VkExternalSemaphoreHandleTypeFlagBits VkExternalSemaphoreHandleTypeFlagBitsKHR;

typedef VkExternalSemaphoreFeatureFlags VkExternalSemaphoreFeatureFlagsKHR;

typedef VkExternalSemaphoreFeatureFlagBits VkExternalSemaphoreFeatureFlagBitsKHR;

typedef VkPhysicalDeviceExternalSemaphoreInfo VkPhysicalDeviceExternalSemaphoreInfoKHR;

typedef VkExternalSemaphoreProperties VkExternalSemaphorePropertiesKHR;

typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties*              pExternalSemaphoreProperties);
#endif


#define VK_KHR_external_semaphore 1
#define VK_KHR_EXTERNAL_SEMAPHORE_SPEC_VERSION 1
#define VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME "VK_KHR_external_semaphore"
typedef VkSemaphoreImportFlags VkSemaphoreImportFlagsKHR;

typedef VkSemaphoreImportFlagBits VkSemaphoreImportFlagBitsKHR;

typedef VkExportSemaphoreCreateInfo VkExportSemaphoreCreateInfoKHR;



#define VK_KHR_external_semaphore_fd 1
#define VK_KHR_EXTERNAL_SEMAPHORE_FD_SPEC_VERSION 1
#define VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME "VK_KHR_external_semaphore_fd"
typedef struct VkImportSemaphoreFdInfoKHR {
    VkStructureType                          sType;
    const void*                              pNext;
    VkSemaphore                              semaphore;
    VkSemaphoreImportFlags                   flags;
    VkExternalSemaphoreHandleTypeFlagBits    handleType;
    int                                      fd;
} VkImportSemaphoreFdInfoKHR;

typedef struct VkSemaphoreGetFdInfoKHR {
    VkStructureType                          sType;
    const void*                              pNext;
    VkSemaphore                              semaphore;
    VkExternalSemaphoreHandleTypeFlagBits    handleType;
} VkSemaphoreGetFdInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkImportSemaphoreFdKHR)(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo);
typedef VkResult (VKAPI_PTR *PFN_vkGetSemaphoreFdKHR)(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreFdKHR(
    VkDevice                                    device,
    const VkImportSemaphoreFdInfoKHR*           pImportSemaphoreFdInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreFdKHR(
    VkDevice                                    device,
    const VkSemaphoreGetFdInfoKHR*              pGetFdInfo,
    int*                                        pFd);
#endif


#define VK_KHR_push_descriptor 1
#define VK_KHR_PUSH_DESCRIPTOR_SPEC_VERSION 2
#define VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME "VK_KHR_push_descriptor"
typedef struct VkPhysicalDevicePushDescriptorPropertiesKHR {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxPushDescriptors;
} VkPhysicalDevicePushDescriptorPropertiesKHR;

typedef void (VKAPI_PTR *PFN_vkCmdPushDescriptorSetKHR)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, deUint32 set, deUint32 descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites);
typedef void (VKAPI_PTR *PFN_vkCmdPushDescriptorSetWithTemplateKHR)(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, deUint32 set, const void* pData);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetKHR(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    deUint32                                    set,
    deUint32                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites);

VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetWithTemplateKHR(
    VkCommandBuffer                             commandBuffer,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    VkPipelineLayout                            layout,
    deUint32                                    set,
    const void*                                 pData);
#endif


#define VK_KHR_shader_float16_int8 1
#define VK_KHR_SHADER_FLOAT16_INT8_SPEC_VERSION 1
#define VK_KHR_SHADER_FLOAT16_INT8_EXTENSION_NAME "VK_KHR_shader_float16_int8"
typedef VkPhysicalDeviceShaderFloat16Int8Features VkPhysicalDeviceShaderFloat16Int8FeaturesKHR;

typedef VkPhysicalDeviceShaderFloat16Int8Features VkPhysicalDeviceFloat16Int8FeaturesKHR;



#define VK_KHR_16bit_storage 1
#define VK_KHR_16BIT_STORAGE_SPEC_VERSION 1
#define VK_KHR_16BIT_STORAGE_EXTENSION_NAME "VK_KHR_16bit_storage"
typedef VkPhysicalDevice16BitStorageFeatures VkPhysicalDevice16BitStorageFeaturesKHR;



#define VK_KHR_incremental_present 1
#define VK_KHR_INCREMENTAL_PRESENT_SPEC_VERSION 2
#define VK_KHR_INCREMENTAL_PRESENT_EXTENSION_NAME "VK_KHR_incremental_present"
typedef struct VkRectLayerKHR {
    VkOffset2D    offset;
    VkExtent2D    extent;
    deUint32      layer;
} VkRectLayerKHR;

typedef struct VkPresentRegionKHR {
    deUint32                 rectangleCount;
    const VkRectLayerKHR*    pRectangles;
} VkPresentRegionKHR;

typedef struct VkPresentRegionsKHR {
    VkStructureType              sType;
    const void*                  pNext;
    deUint32                     swapchainCount;
    const VkPresentRegionKHR*    pRegions;
} VkPresentRegionsKHR;



#define VK_KHR_descriptor_update_template 1
typedef VkDescriptorUpdateTemplate VkDescriptorUpdateTemplateKHR;

#define VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_SPEC_VERSION 1
#define VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME "VK_KHR_descriptor_update_template"
typedef VkDescriptorUpdateTemplateType VkDescriptorUpdateTemplateTypeKHR;

typedef VkDescriptorUpdateTemplateCreateFlags VkDescriptorUpdateTemplateCreateFlagsKHR;

typedef VkDescriptorUpdateTemplateEntry VkDescriptorUpdateTemplateEntryKHR;

typedef VkDescriptorUpdateTemplateCreateInfo VkDescriptorUpdateTemplateCreateInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkCreateDescriptorUpdateTemplateKHR)(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate);
typedef void (VKAPI_PTR *PFN_vkDestroyDescriptorUpdateTemplateKHR)(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator);
typedef void (VKAPI_PTR *PFN_vkUpdateDescriptorSetWithTemplateKHR)(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorUpdateTemplateKHR(
    VkDevice                                    device,
    const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorUpdateTemplate*                 pDescriptorUpdateTemplate);

VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorUpdateTemplateKHR(
    VkDevice                                    device,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSetWithTemplateKHR(
    VkDevice                                    device,
    VkDescriptorSet                             descriptorSet,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const void*                                 pData);
#endif


#define VK_KHR_imageless_framebuffer 1
#define VK_KHR_IMAGELESS_FRAMEBUFFER_SPEC_VERSION 1
#define VK_KHR_IMAGELESS_FRAMEBUFFER_EXTENSION_NAME "VK_KHR_imageless_framebuffer"
typedef VkPhysicalDeviceImagelessFramebufferFeatures VkPhysicalDeviceImagelessFramebufferFeaturesKHR;

typedef VkFramebufferAttachmentsCreateInfo VkFramebufferAttachmentsCreateInfoKHR;

typedef VkFramebufferAttachmentImageInfo VkFramebufferAttachmentImageInfoKHR;

typedef VkRenderPassAttachmentBeginInfo VkRenderPassAttachmentBeginInfoKHR;



#define VK_KHR_create_renderpass2 1
#define VK_KHR_CREATE_RENDERPASS_2_SPEC_VERSION 1
#define VK_KHR_CREATE_RENDERPASS_2_EXTENSION_NAME "VK_KHR_create_renderpass2"
typedef VkRenderPassCreateInfo2 VkRenderPassCreateInfo2KHR;

typedef VkAttachmentDescription2 VkAttachmentDescription2KHR;

typedef VkAttachmentReference2 VkAttachmentReference2KHR;

typedef VkSubpassDescription2 VkSubpassDescription2KHR;

typedef VkSubpassDependency2 VkSubpassDependency2KHR;

typedef VkSubpassBeginInfo VkSubpassBeginInfoKHR;

typedef VkSubpassEndInfo VkSubpassEndInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkCreateRenderPass2KHR)(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
typedef void (VKAPI_PTR *PFN_vkCmdBeginRenderPass2KHR)(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo*      pRenderPassBegin, const VkSubpassBeginInfo*      pSubpassBeginInfo);
typedef void (VKAPI_PTR *PFN_vkCmdNextSubpass2KHR)(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo*      pSubpassBeginInfo, const VkSubpassEndInfo*        pSubpassEndInfo);
typedef void (VKAPI_PTR *PFN_vkCmdEndRenderPass2KHR)(VkCommandBuffer commandBuffer, const VkSubpassEndInfo*        pSubpassEndInfo);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass2KHR(
    VkDevice                                    device,
    const VkRenderPassCreateInfo2*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass);

VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    const VkSubpassBeginInfo*                   pSubpassBeginInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkSubpassBeginInfo*                   pSubpassBeginInfo,
    const VkSubpassEndInfo*                     pSubpassEndInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkSubpassEndInfo*                     pSubpassEndInfo);
#endif


#define VK_KHR_shared_presentable_image 1
#define VK_KHR_SHARED_PRESENTABLE_IMAGE_SPEC_VERSION 1
#define VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME "VK_KHR_shared_presentable_image"
typedef struct VkSharedPresentSurfaceCapabilitiesKHR {
    VkStructureType      sType;
    void*                pNext;
    VkImageUsageFlags    sharedPresentSupportedUsageFlags;
} VkSharedPresentSurfaceCapabilitiesKHR;

typedef VkResult (VKAPI_PTR *PFN_vkGetSwapchainStatusKHR)(VkDevice device, VkSwapchainKHR swapchain);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainStatusKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain);
#endif


#define VK_KHR_external_fence_capabilities 1
#define VK_KHR_EXTERNAL_FENCE_CAPABILITIES_SPEC_VERSION 1
#define VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME "VK_KHR_external_fence_capabilities"
typedef VkExternalFenceHandleTypeFlags VkExternalFenceHandleTypeFlagsKHR;

typedef VkExternalFenceHandleTypeFlagBits VkExternalFenceHandleTypeFlagBitsKHR;

typedef VkExternalFenceFeatureFlags VkExternalFenceFeatureFlagsKHR;

typedef VkExternalFenceFeatureFlagBits VkExternalFenceFeatureFlagBitsKHR;

typedef VkPhysicalDeviceExternalFenceInfo VkPhysicalDeviceExternalFenceInfoKHR;

typedef VkExternalFenceProperties VkExternalFencePropertiesKHR;

typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalFencePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalFenceInfo*    pExternalFenceInfo,
    VkExternalFenceProperties*                  pExternalFenceProperties);
#endif


#define VK_KHR_external_fence 1
#define VK_KHR_EXTERNAL_FENCE_SPEC_VERSION 1
#define VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME "VK_KHR_external_fence"
typedef VkFenceImportFlags VkFenceImportFlagsKHR;

typedef VkFenceImportFlagBits VkFenceImportFlagBitsKHR;

typedef VkExportFenceCreateInfo VkExportFenceCreateInfoKHR;



#define VK_KHR_external_fence_fd 1
#define VK_KHR_EXTERNAL_FENCE_FD_SPEC_VERSION 1
#define VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME "VK_KHR_external_fence_fd"
typedef struct VkImportFenceFdInfoKHR {
    VkStructureType                      sType;
    const void*                          pNext;
    VkFence                              fence;
    VkFenceImportFlags                   flags;
    VkExternalFenceHandleTypeFlagBits    handleType;
    int                                  fd;
} VkImportFenceFdInfoKHR;

typedef struct VkFenceGetFdInfoKHR {
    VkStructureType                      sType;
    const void*                          pNext;
    VkFence                              fence;
    VkExternalFenceHandleTypeFlagBits    handleType;
} VkFenceGetFdInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkImportFenceFdKHR)(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo);
typedef VkResult (VKAPI_PTR *PFN_vkGetFenceFdKHR)(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkImportFenceFdKHR(
    VkDevice                                    device,
    const VkImportFenceFdInfoKHR*               pImportFenceFdInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceFdKHR(
    VkDevice                                    device,
    const VkFenceGetFdInfoKHR*                  pGetFdInfo,
    int*                                        pFd);
#endif


#define VK_KHR_performance_query 1
#define VK_KHR_PERFORMANCE_QUERY_SPEC_VERSION 1
#define VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME "VK_KHR_performance_query"

typedef enum VkPerformanceCounterUnitKHR {
    VK_PERFORMANCE_COUNTER_UNIT_GENERIC_KHR = 0,
    VK_PERFORMANCE_COUNTER_UNIT_PERCENTAGE_KHR = 1,
    VK_PERFORMANCE_COUNTER_UNIT_NANOSECONDS_KHR = 2,
    VK_PERFORMANCE_COUNTER_UNIT_BYTES_KHR = 3,
    VK_PERFORMANCE_COUNTER_UNIT_BYTES_PER_SECOND_KHR = 4,
    VK_PERFORMANCE_COUNTER_UNIT_KELVIN_KHR = 5,
    VK_PERFORMANCE_COUNTER_UNIT_WATTS_KHR = 6,
    VK_PERFORMANCE_COUNTER_UNIT_VOLTS_KHR = 7,
    VK_PERFORMANCE_COUNTER_UNIT_AMPS_KHR = 8,
    VK_PERFORMANCE_COUNTER_UNIT_HERTZ_KHR = 9,
    VK_PERFORMANCE_COUNTER_UNIT_CYCLES_KHR = 10,
    VK_PERFORMANCE_COUNTER_UNIT_MAX_ENUM_KHR = 0x7FFFFFFF
} VkPerformanceCounterUnitKHR;

typedef enum VkPerformanceCounterScopeKHR {
    VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR = 0,
    VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR = 1,
    VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR = 2,
    VK_QUERY_SCOPE_COMMAND_BUFFER_KHR = VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR,
    VK_QUERY_SCOPE_RENDER_PASS_KHR = VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR,
    VK_QUERY_SCOPE_COMMAND_KHR = VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR,
    VK_PERFORMANCE_COUNTER_SCOPE_MAX_ENUM_KHR = 0x7FFFFFFF
} VkPerformanceCounterScopeKHR;

typedef enum VkPerformanceCounterStorageKHR {
    VK_PERFORMANCE_COUNTER_STORAGE_INT32_KHR = 0,
    VK_PERFORMANCE_COUNTER_STORAGE_INT64_KHR = 1,
    VK_PERFORMANCE_COUNTER_STORAGE_UINT32_KHR = 2,
    VK_PERFORMANCE_COUNTER_STORAGE_UINT64_KHR = 3,
    VK_PERFORMANCE_COUNTER_STORAGE_FLOAT32_KHR = 4,
    VK_PERFORMANCE_COUNTER_STORAGE_FLOAT64_KHR = 5,
    VK_PERFORMANCE_COUNTER_STORAGE_MAX_ENUM_KHR = 0x7FFFFFFF
} VkPerformanceCounterStorageKHR;

typedef enum VkPerformanceCounterDescriptionFlagBitsKHR {
    VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR = 0x00000001,
    VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR = 0x00000002,
    VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_KHR = VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR,
    VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_KHR = VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR,
    VK_PERFORMANCE_COUNTER_DESCRIPTION_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkPerformanceCounterDescriptionFlagBitsKHR;
typedef VkFlags VkPerformanceCounterDescriptionFlagsKHR;

typedef enum VkAcquireProfilingLockFlagBitsKHR {
    VK_ACQUIRE_PROFILING_LOCK_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkAcquireProfilingLockFlagBitsKHR;
typedef VkFlags VkAcquireProfilingLockFlagsKHR;
typedef struct VkPhysicalDevicePerformanceQueryFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           performanceCounterQueryPools;
    VkBool32           performanceCounterMultipleQueryPools;
} VkPhysicalDevicePerformanceQueryFeaturesKHR;

typedef struct VkPhysicalDevicePerformanceQueryPropertiesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           allowCommandBufferQueryCopies;
} VkPhysicalDevicePerformanceQueryPropertiesKHR;

typedef struct VkPerformanceCounterKHR {
    VkStructureType                   sType;
    void*                             pNext;
    VkPerformanceCounterUnitKHR       unit;
    VkPerformanceCounterScopeKHR      scope;
    VkPerformanceCounterStorageKHR    storage;
    deUint8                           uuid[VK_UUID_SIZE];
} VkPerformanceCounterKHR;

typedef struct VkPerformanceCounterDescriptionKHR {
    VkStructureType                            sType;
    void*                                      pNext;
    VkPerformanceCounterDescriptionFlagsKHR    flags;
    char                                       name[VK_MAX_DESCRIPTION_SIZE];
    char                                       category[VK_MAX_DESCRIPTION_SIZE];
    char                                       description[VK_MAX_DESCRIPTION_SIZE];
} VkPerformanceCounterDescriptionKHR;

typedef struct VkQueryPoolPerformanceCreateInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           queueFamilyIndex;
    deUint32           counterIndexCount;
    const deUint32*    pCounterIndices;
} VkQueryPoolPerformanceCreateInfoKHR;

typedef union VkPerformanceCounterResultKHR {
    deInt32     int32;
    deInt64     int64;
    deUint32    uint32;
    deUint64    uint64;
    float       float32;
    double      float64;
} VkPerformanceCounterResultKHR;

typedef struct VkAcquireProfilingLockInfoKHR {
    VkStructureType                   sType;
    const void*                       pNext;
    VkAcquireProfilingLockFlagsKHR    flags;
    deUint64                          timeout;
} VkAcquireProfilingLockInfoKHR;

typedef struct VkPerformanceQuerySubmitInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           counterPassIndex;
} VkPerformanceQuerySubmitInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)(VkPhysicalDevice physicalDevice, deUint32 queueFamilyIndex, deUint32* pCounterCount, VkPerformanceCounterKHR* pCounters, VkPerformanceCounterDescriptionKHR* pCounterDescriptions);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)(VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, deUint32* pNumPasses);
typedef VkResult (VKAPI_PTR *PFN_vkAcquireProfilingLockKHR)(VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo);
typedef void (VKAPI_PTR *PFN_vkReleaseProfilingLockKHR)(VkDevice device);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
    VkPhysicalDevice                            physicalDevice,
    deUint32                                    queueFamilyIndex,
    deUint32*                                   pCounterCount,
    VkPerformanceCounterKHR*                    pCounters,
    VkPerformanceCounterDescriptionKHR*         pCounterDescriptions);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
    VkPhysicalDevice                            physicalDevice,
    const VkQueryPoolPerformanceCreateInfoKHR*  pPerformanceQueryCreateInfo,
    deUint32*                                   pNumPasses);

VKAPI_ATTR VkResult VKAPI_CALL vkAcquireProfilingLockKHR(
    VkDevice                                    device,
    const VkAcquireProfilingLockInfoKHR*        pInfo);

VKAPI_ATTR void VKAPI_CALL vkReleaseProfilingLockKHR(
    VkDevice                                    device);
#endif


#define VK_KHR_maintenance2 1
#define VK_KHR_MAINTENANCE2_SPEC_VERSION  1
#define VK_KHR_MAINTENANCE2_EXTENSION_NAME "VK_KHR_maintenance2"
typedef VkPointClippingBehavior VkPointClippingBehaviorKHR;

typedef VkTessellationDomainOrigin VkTessellationDomainOriginKHR;

typedef VkPhysicalDevicePointClippingProperties VkPhysicalDevicePointClippingPropertiesKHR;

typedef VkRenderPassInputAttachmentAspectCreateInfo VkRenderPassInputAttachmentAspectCreateInfoKHR;

typedef VkInputAttachmentAspectReference VkInputAttachmentAspectReferenceKHR;

typedef VkImageViewUsageCreateInfo VkImageViewUsageCreateInfoKHR;

typedef VkPipelineTessellationDomainOriginStateCreateInfo VkPipelineTessellationDomainOriginStateCreateInfoKHR;



#define VK_KHR_get_surface_capabilities2 1
#define VK_KHR_GET_SURFACE_CAPABILITIES_2_SPEC_VERSION 1
#define VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME "VK_KHR_get_surface_capabilities2"
typedef struct VkPhysicalDeviceSurfaceInfo2KHR {
    VkStructureType    sType;
    const void*        pNext;
    VkSurfaceKHR       surface;
} VkPhysicalDeviceSurfaceInfo2KHR;

typedef struct VkSurfaceCapabilities2KHR {
    VkStructureType             sType;
    void*                       pNext;
    VkSurfaceCapabilitiesKHR    surfaceCapabilities;
} VkSurfaceCapabilities2KHR;

typedef struct VkSurfaceFormat2KHR {
    VkStructureType       sType;
    void*                 pNext;
    VkSurfaceFormatKHR    surfaceFormat;
} VkSurfaceFormat2KHR;

typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities);
typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, deUint32* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilities2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSurfaceInfo2KHR*      pSurfaceInfo,
    VkSurfaceCapabilities2KHR*                  pSurfaceCapabilities);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceFormats2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSurfaceInfo2KHR*      pSurfaceInfo,
    deUint32*                                   pSurfaceFormatCount,
    VkSurfaceFormat2KHR*                        pSurfaceFormats);
#endif


#define VK_KHR_variable_pointers 1
#define VK_KHR_VARIABLE_POINTERS_SPEC_VERSION 1
#define VK_KHR_VARIABLE_POINTERS_EXTENSION_NAME "VK_KHR_variable_pointers"
typedef VkPhysicalDeviceVariablePointersFeatures VkPhysicalDeviceVariablePointerFeaturesKHR;

typedef VkPhysicalDeviceVariablePointersFeatures VkPhysicalDeviceVariablePointersFeaturesKHR;



#define VK_KHR_get_display_properties2 1
#define VK_KHR_GET_DISPLAY_PROPERTIES_2_SPEC_VERSION 1
#define VK_KHR_GET_DISPLAY_PROPERTIES_2_EXTENSION_NAME "VK_KHR_get_display_properties2"
typedef struct VkDisplayProperties2KHR {
    VkStructureType           sType;
    void*                     pNext;
    VkDisplayPropertiesKHR    displayProperties;
} VkDisplayProperties2KHR;

typedef struct VkDisplayPlaneProperties2KHR {
    VkStructureType                sType;
    void*                          pNext;
    VkDisplayPlanePropertiesKHR    displayPlaneProperties;
} VkDisplayPlaneProperties2KHR;

typedef struct VkDisplayModeProperties2KHR {
    VkStructureType               sType;
    void*                         pNext;
    VkDisplayModePropertiesKHR    displayModeProperties;
} VkDisplayModeProperties2KHR;

typedef struct VkDisplayPlaneInfo2KHR {
    VkStructureType     sType;
    const void*         pNext;
    VkDisplayModeKHR    mode;
    deUint32            planeIndex;
} VkDisplayPlaneInfo2KHR;

typedef struct VkDisplayPlaneCapabilities2KHR {
    VkStructureType                  sType;
    void*                            pNext;
    VkDisplayPlaneCapabilitiesKHR    capabilities;
} VkDisplayPlaneCapabilities2KHR;

typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceDisplayProperties2KHR)(VkPhysicalDevice physicalDevice, deUint32* pPropertyCount, VkDisplayProperties2KHR* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)(VkPhysicalDevice physicalDevice, deUint32* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkGetDisplayModeProperties2KHR)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, deUint32* pPropertyCount, VkDisplayModeProperties2KHR* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkGetDisplayPlaneCapabilities2KHR)(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pPropertyCount,
    VkDisplayProperties2KHR*                    pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pPropertyCount,
    VkDisplayPlaneProperties2KHR*               pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayModeProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    deUint32*                                   pPropertyCount,
    VkDisplayModeProperties2KHR*                pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneCapabilities2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkDisplayPlaneInfo2KHR*               pDisplayPlaneInfo,
    VkDisplayPlaneCapabilities2KHR*             pCapabilities);
#endif


#define VK_KHR_dedicated_allocation 1
#define VK_KHR_DEDICATED_ALLOCATION_SPEC_VERSION 3
#define VK_KHR_DEDICATED_ALLOCATION_EXTENSION_NAME "VK_KHR_dedicated_allocation"
typedef VkMemoryDedicatedRequirements VkMemoryDedicatedRequirementsKHR;

typedef VkMemoryDedicatedAllocateInfo VkMemoryDedicatedAllocateInfoKHR;



#define VK_KHR_storage_buffer_storage_class 1
#define VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_SPEC_VERSION 1
#define VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_EXTENSION_NAME "VK_KHR_storage_buffer_storage_class"


#define VK_KHR_relaxed_block_layout 1
#define VK_KHR_RELAXED_BLOCK_LAYOUT_SPEC_VERSION 1
#define VK_KHR_RELAXED_BLOCK_LAYOUT_EXTENSION_NAME "VK_KHR_relaxed_block_layout"


#define VK_KHR_get_memory_requirements2 1
#define VK_KHR_GET_MEMORY_REQUIREMENTS_2_SPEC_VERSION 1
#define VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME "VK_KHR_get_memory_requirements2"
typedef VkBufferMemoryRequirementsInfo2 VkBufferMemoryRequirementsInfo2KHR;

typedef VkImageMemoryRequirementsInfo2 VkImageMemoryRequirementsInfo2KHR;

typedef VkImageSparseMemoryRequirementsInfo2 VkImageSparseMemoryRequirementsInfo2KHR;

typedef VkMemoryRequirements2 VkMemoryRequirements2KHR;

typedef VkSparseImageMemoryRequirements2 VkSparseImageMemoryRequirements2KHR;

typedef void (VKAPI_PTR *PFN_vkGetImageMemoryRequirements2KHR)(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
typedef void (VKAPI_PTR *PFN_vkGetBufferMemoryRequirements2KHR)(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
typedef void (VKAPI_PTR *PFN_vkGetImageSparseMemoryRequirements2KHR)(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, deUint32* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements2KHR(
    VkDevice                                    device,
    const VkImageMemoryRequirementsInfo2*       pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements);

VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements2KHR(
    VkDevice                                    device,
    const VkBufferMemoryRequirementsInfo2*      pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements);

VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements2KHR(
    VkDevice                                    device,
    const VkImageSparseMemoryRequirementsInfo2* pInfo,
    deUint32*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2*           pSparseMemoryRequirements);
#endif


#define VK_KHR_image_format_list 1
#define VK_KHR_IMAGE_FORMAT_LIST_SPEC_VERSION 1
#define VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME "VK_KHR_image_format_list"
typedef VkImageFormatListCreateInfo VkImageFormatListCreateInfoKHR;



#define VK_KHR_sampler_ycbcr_conversion 1
typedef VkSamplerYcbcrConversion VkSamplerYcbcrConversionKHR;

#define VK_KHR_SAMPLER_YCBCR_CONVERSION_SPEC_VERSION 14
#define VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME "VK_KHR_sampler_ycbcr_conversion"
typedef VkSamplerYcbcrModelConversion VkSamplerYcbcrModelConversionKHR;

typedef VkSamplerYcbcrRange VkSamplerYcbcrRangeKHR;

typedef VkChromaLocation VkChromaLocationKHR;

typedef VkSamplerYcbcrConversionCreateInfo VkSamplerYcbcrConversionCreateInfoKHR;

typedef VkSamplerYcbcrConversionInfo VkSamplerYcbcrConversionInfoKHR;

typedef VkBindImagePlaneMemoryInfo VkBindImagePlaneMemoryInfoKHR;

typedef VkImagePlaneMemoryRequirementsInfo VkImagePlaneMemoryRequirementsInfoKHR;

typedef VkPhysicalDeviceSamplerYcbcrConversionFeatures VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR;

typedef VkSamplerYcbcrConversionImageFormatProperties VkSamplerYcbcrConversionImageFormatPropertiesKHR;

typedef VkResult (VKAPI_PTR *PFN_vkCreateSamplerYcbcrConversionKHR)(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion);
typedef void (VKAPI_PTR *PFN_vkDestroySamplerYcbcrConversionKHR)(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateSamplerYcbcrConversionKHR(
    VkDevice                                    device,
    const VkSamplerYcbcrConversionCreateInfo*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSamplerYcbcrConversion*                   pYcbcrConversion);

VKAPI_ATTR void VKAPI_CALL vkDestroySamplerYcbcrConversionKHR(
    VkDevice                                    device,
    VkSamplerYcbcrConversion                    ycbcrConversion,
    const VkAllocationCallbacks*                pAllocator);
#endif


#define VK_KHR_bind_memory2 1
#define VK_KHR_BIND_MEMORY_2_SPEC_VERSION 1
#define VK_KHR_BIND_MEMORY_2_EXTENSION_NAME "VK_KHR_bind_memory2"
typedef VkBindBufferMemoryInfo VkBindBufferMemoryInfoKHR;

typedef VkBindImageMemoryInfo VkBindImageMemoryInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkBindBufferMemory2KHR)(VkDevice device, deUint32 bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
typedef VkResult (VKAPI_PTR *PFN_vkBindImageMemory2KHR)(VkDevice device, deUint32 bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory2KHR(
    VkDevice                                    device,
    deUint32                                    bindInfoCount,
    const VkBindBufferMemoryInfo*               pBindInfos);

VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory2KHR(
    VkDevice                                    device,
    deUint32                                    bindInfoCount,
    const VkBindImageMemoryInfo*                pBindInfos);
#endif


#define VK_KHR_maintenance3 1
#define VK_KHR_MAINTENANCE3_SPEC_VERSION  1
#define VK_KHR_MAINTENANCE3_EXTENSION_NAME "VK_KHR_maintenance3"
typedef VkPhysicalDeviceMaintenance3Properties VkPhysicalDeviceMaintenance3PropertiesKHR;

typedef VkDescriptorSetLayoutSupport VkDescriptorSetLayoutSupportKHR;

typedef void (VKAPI_PTR *PFN_vkGetDescriptorSetLayoutSupportKHR)(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutSupportKHR(
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    VkDescriptorSetLayoutSupport*               pSupport);
#endif


#define VK_KHR_draw_indirect_count 1
#define VK_KHR_DRAW_INDIRECT_COUNT_SPEC_VERSION 1
#define VK_KHR_DRAW_INDIRECT_COUNT_EXTENSION_NAME "VK_KHR_draw_indirect_count"
typedef void (VKAPI_PTR *PFN_vkCmdDrawIndirectCountKHR)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride);
typedef void (VKAPI_PTR *PFN_vkCmdDrawIndexedIndirectCountKHR)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCountKHR(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    deUint32                                    maxDrawCount,
    deUint32                                    stride);

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCountKHR(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    deUint32                                    maxDrawCount,
    deUint32                                    stride);
#endif


#define VK_KHR_shader_subgroup_extended_types 1
#define VK_KHR_SHADER_SUBGROUP_EXTENDED_TYPES_SPEC_VERSION 1
#define VK_KHR_SHADER_SUBGROUP_EXTENDED_TYPES_EXTENSION_NAME "VK_KHR_shader_subgroup_extended_types"
typedef VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR;



#define VK_KHR_8bit_storage 1
#define VK_KHR_8BIT_STORAGE_SPEC_VERSION  1
#define VK_KHR_8BIT_STORAGE_EXTENSION_NAME "VK_KHR_8bit_storage"
typedef VkPhysicalDevice8BitStorageFeatures VkPhysicalDevice8BitStorageFeaturesKHR;



#define VK_KHR_shader_atomic_int64 1
#define VK_KHR_SHADER_ATOMIC_INT64_SPEC_VERSION 1
#define VK_KHR_SHADER_ATOMIC_INT64_EXTENSION_NAME "VK_KHR_shader_atomic_int64"
typedef VkPhysicalDeviceShaderAtomicInt64Features VkPhysicalDeviceShaderAtomicInt64FeaturesKHR;



#define VK_KHR_shader_clock 1
#define VK_KHR_SHADER_CLOCK_SPEC_VERSION  1
#define VK_KHR_SHADER_CLOCK_EXTENSION_NAME "VK_KHR_shader_clock"
typedef struct VkPhysicalDeviceShaderClockFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderSubgroupClock;
    VkBool32           shaderDeviceClock;
} VkPhysicalDeviceShaderClockFeaturesKHR;



#define VK_KHR_driver_properties 1
#define VK_KHR_DRIVER_PROPERTIES_SPEC_VERSION 1
#define VK_KHR_DRIVER_PROPERTIES_EXTENSION_NAME "VK_KHR_driver_properties"
#define VK_MAX_DRIVER_NAME_SIZE_KHR       VK_MAX_DRIVER_NAME_SIZE
#define VK_MAX_DRIVER_INFO_SIZE_KHR       VK_MAX_DRIVER_INFO_SIZE
typedef VkDriverId VkDriverIdKHR;

typedef VkConformanceVersion VkConformanceVersionKHR;

typedef VkPhysicalDeviceDriverProperties VkPhysicalDeviceDriverPropertiesKHR;



#define VK_KHR_shader_float_controls 1
#define VK_KHR_SHADER_FLOAT_CONTROLS_SPEC_VERSION 4
#define VK_KHR_SHADER_FLOAT_CONTROLS_EXTENSION_NAME "VK_KHR_shader_float_controls"
typedef VkShaderFloatControlsIndependence VkShaderFloatControlsIndependenceKHR;

typedef VkPhysicalDeviceFloatControlsProperties VkPhysicalDeviceFloatControlsPropertiesKHR;



#define VK_KHR_depth_stencil_resolve 1
#define VK_KHR_DEPTH_STENCIL_RESOLVE_SPEC_VERSION 1
#define VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME "VK_KHR_depth_stencil_resolve"
typedef VkResolveModeFlagBits VkResolveModeFlagBitsKHR;

typedef VkResolveModeFlags VkResolveModeFlagsKHR;

typedef VkSubpassDescriptionDepthStencilResolve VkSubpassDescriptionDepthStencilResolveKHR;

typedef VkPhysicalDeviceDepthStencilResolveProperties VkPhysicalDeviceDepthStencilResolvePropertiesKHR;



#define VK_KHR_swapchain_mutable_format 1
#define VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_SPEC_VERSION 1
#define VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_EXTENSION_NAME "VK_KHR_swapchain_mutable_format"


#define VK_KHR_timeline_semaphore 1
#define VK_KHR_TIMELINE_SEMAPHORE_SPEC_VERSION 2
#define VK_KHR_TIMELINE_SEMAPHORE_EXTENSION_NAME "VK_KHR_timeline_semaphore"
typedef VkSemaphoreType VkSemaphoreTypeKHR;

typedef VkSemaphoreWaitFlagBits VkSemaphoreWaitFlagBitsKHR;

typedef VkSemaphoreWaitFlags VkSemaphoreWaitFlagsKHR;

typedef VkPhysicalDeviceTimelineSemaphoreFeatures VkPhysicalDeviceTimelineSemaphoreFeaturesKHR;

typedef VkPhysicalDeviceTimelineSemaphoreProperties VkPhysicalDeviceTimelineSemaphorePropertiesKHR;

typedef VkSemaphoreTypeCreateInfo VkSemaphoreTypeCreateInfoKHR;

typedef VkTimelineSemaphoreSubmitInfo VkTimelineSemaphoreSubmitInfoKHR;

typedef VkSemaphoreWaitInfo VkSemaphoreWaitInfoKHR;

typedef VkSemaphoreSignalInfo VkSemaphoreSignalInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkGetSemaphoreCounterValueKHR)(VkDevice device, VkSemaphore semaphore, deUint64* pValue);
typedef VkResult (VKAPI_PTR *PFN_vkWaitSemaphoresKHR)(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, deUint64 timeout);
typedef VkResult (VKAPI_PTR *PFN_vkSignalSemaphoreKHR)(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreCounterValueKHR(
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    deUint64*                                   pValue);

VKAPI_ATTR VkResult VKAPI_CALL vkWaitSemaphoresKHR(
    VkDevice                                    device,
    const VkSemaphoreWaitInfo*                  pWaitInfo,
    deUint64                                    timeout);

VKAPI_ATTR VkResult VKAPI_CALL vkSignalSemaphoreKHR(
    VkDevice                                    device,
    const VkSemaphoreSignalInfo*                pSignalInfo);
#endif


#define VK_KHR_vulkan_memory_model 1
#define VK_KHR_VULKAN_MEMORY_MODEL_SPEC_VERSION 3
#define VK_KHR_VULKAN_MEMORY_MODEL_EXTENSION_NAME "VK_KHR_vulkan_memory_model"
typedef VkPhysicalDeviceVulkanMemoryModelFeatures VkPhysicalDeviceVulkanMemoryModelFeaturesKHR;



#define VK_KHR_shader_terminate_invocation 1
#define VK_KHR_SHADER_TERMINATE_INVOCATION_SPEC_VERSION 1
#define VK_KHR_SHADER_TERMINATE_INVOCATION_EXTENSION_NAME "VK_KHR_shader_terminate_invocation"
typedef struct VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderTerminateInvocation;
} VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR;



#define VK_KHR_fragment_shading_rate 1
#define VK_KHR_FRAGMENT_SHADING_RATE_SPEC_VERSION 1
#define VK_KHR_FRAGMENT_SHADING_RATE_EXTENSION_NAME "VK_KHR_fragment_shading_rate"

typedef enum VkFragmentShadingRateCombinerOpKHR {
    VK_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_KHR = 0,
    VK_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_KHR = 1,
    VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_KHR = 2,
    VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_KHR = 3,
    VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_KHR = 4,
    VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_ENUM_KHR = 0x7FFFFFFF
} VkFragmentShadingRateCombinerOpKHR;
typedef struct VkFragmentShadingRateAttachmentInfoKHR {
    VkStructureType                  sType;
    const void*                      pNext;
    const VkAttachmentReference2*    pFragmentShadingRateAttachment;
    VkExtent2D                       shadingRateAttachmentTexelSize;
} VkFragmentShadingRateAttachmentInfoKHR;

typedef struct VkPipelineFragmentShadingRateStateCreateInfoKHR {
    VkStructureType                       sType;
    const void*                           pNext;
    VkExtent2D                            fragmentSize;
    VkFragmentShadingRateCombinerOpKHR    combinerOps[2];
} VkPipelineFragmentShadingRateStateCreateInfoKHR;

typedef struct VkPhysicalDeviceFragmentShadingRateFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           pipelineFragmentShadingRate;
    VkBool32           primitiveFragmentShadingRate;
    VkBool32           attachmentFragmentShadingRate;
} VkPhysicalDeviceFragmentShadingRateFeaturesKHR;

typedef struct VkPhysicalDeviceFragmentShadingRatePropertiesKHR {
    VkStructureType          sType;
    void*                    pNext;
    VkExtent2D               minFragmentShadingRateAttachmentTexelSize;
    VkExtent2D               maxFragmentShadingRateAttachmentTexelSize;
    deUint32                 maxFragmentShadingRateAttachmentTexelSizeAspectRatio;
    VkBool32                 primitiveFragmentShadingRateWithMultipleViewports;
    VkBool32                 layeredShadingRateAttachments;
    VkBool32                 fragmentShadingRateNonTrivialCombinerOps;
    VkExtent2D               maxFragmentSize;
    deUint32                 maxFragmentSizeAspectRatio;
    deUint32                 maxFragmentShadingRateCoverageSamples;
    VkSampleCountFlagBits    maxFragmentShadingRateRasterizationSamples;
    VkBool32                 fragmentShadingRateWithShaderDepthStencilWrites;
    VkBool32                 fragmentShadingRateWithSampleMask;
    VkBool32                 fragmentShadingRateWithShaderSampleMask;
    VkBool32                 fragmentShadingRateWithConservativeRasterization;
    VkBool32                 fragmentShadingRateWithFragmentShaderInterlock;
    VkBool32                 fragmentShadingRateWithCustomSampleLocations;
    VkBool32                 fragmentShadingRateStrictMultiplyCombiner;
} VkPhysicalDeviceFragmentShadingRatePropertiesKHR;

typedef struct VkPhysicalDeviceFragmentShadingRateKHR {
    VkStructureType       sType;
    void*                 pNext;
    VkSampleCountFlags    sampleCounts;
    VkExtent2D            fragmentSize;
} VkPhysicalDeviceFragmentShadingRateKHR;

typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR)(VkPhysicalDevice physicalDevice, deUint32* pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates);
typedef void (VKAPI_PTR *PFN_vkCmdSetFragmentShadingRateKHR)(VkCommandBuffer           commandBuffer, const VkExtent2D*                           pFragmentSize, const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceFragmentShadingRatesKHR(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pFragmentShadingRateCount,
    VkPhysicalDeviceFragmentShadingRateKHR*     pFragmentShadingRates);

VKAPI_ATTR void VKAPI_CALL vkCmdSetFragmentShadingRateKHR(
    VkCommandBuffer                             commandBuffer,
    const VkExtent2D*                           pFragmentSize,
    const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]);
#endif


#define VK_KHR_spirv_1_4 1
#define VK_KHR_SPIRV_1_4_SPEC_VERSION     1
#define VK_KHR_SPIRV_1_4_EXTENSION_NAME   "VK_KHR_spirv_1_4"


#define VK_KHR_surface_protected_capabilities 1
#define VK_KHR_SURFACE_PROTECTED_CAPABILITIES_SPEC_VERSION 1
#define VK_KHR_SURFACE_PROTECTED_CAPABILITIES_EXTENSION_NAME "VK_KHR_surface_protected_capabilities"
typedef struct VkSurfaceProtectedCapabilitiesKHR {
    VkStructureType    sType;
    const void*        pNext;
    VkBool32           supportsProtected;
} VkSurfaceProtectedCapabilitiesKHR;



#define VK_KHR_separate_depth_stencil_layouts 1
#define VK_KHR_SEPARATE_DEPTH_STENCIL_LAYOUTS_SPEC_VERSION 1
#define VK_KHR_SEPARATE_DEPTH_STENCIL_LAYOUTS_EXTENSION_NAME "VK_KHR_separate_depth_stencil_layouts"
typedef VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR;

typedef VkAttachmentReferenceStencilLayout VkAttachmentReferenceStencilLayoutKHR;

typedef VkAttachmentDescriptionStencilLayout VkAttachmentDescriptionStencilLayoutKHR;



#define VK_KHR_present_wait 1
#define VK_KHR_PRESENT_WAIT_SPEC_VERSION  1
#define VK_KHR_PRESENT_WAIT_EXTENSION_NAME "VK_KHR_present_wait"
typedef struct VkPhysicalDevicePresentWaitFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           presentWait;
} VkPhysicalDevicePresentWaitFeaturesKHR;

typedef VkResult (VKAPI_PTR *PFN_vkWaitForPresentKHR)(VkDevice device, VkSwapchainKHR swapchain, deUint64 presentId, deUint64 timeout);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkWaitForPresentKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    deUint64                                    presentId,
    deUint64                                    timeout);
#endif


#define VK_KHR_uniform_buffer_standard_layout 1
#define VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_SPEC_VERSION 1
#define VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_EXTENSION_NAME "VK_KHR_uniform_buffer_standard_layout"
typedef VkPhysicalDeviceUniformBufferStandardLayoutFeatures VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR;



#define VK_KHR_buffer_device_address 1
#define VK_KHR_BUFFER_DEVICE_ADDRESS_SPEC_VERSION 1
#define VK_KHR_BUFFER_DEVICE_ADDRESS_EXTENSION_NAME "VK_KHR_buffer_device_address"
typedef VkPhysicalDeviceBufferDeviceAddressFeatures VkPhysicalDeviceBufferDeviceAddressFeaturesKHR;

typedef VkBufferDeviceAddressInfo VkBufferDeviceAddressInfoKHR;

typedef VkBufferOpaqueCaptureAddressCreateInfo VkBufferOpaqueCaptureAddressCreateInfoKHR;

typedef VkMemoryOpaqueCaptureAddressAllocateInfo VkMemoryOpaqueCaptureAddressAllocateInfoKHR;

typedef VkDeviceMemoryOpaqueCaptureAddressInfo VkDeviceMemoryOpaqueCaptureAddressInfoKHR;

typedef VkDeviceAddress (VKAPI_PTR *PFN_vkGetBufferDeviceAddressKHR)(VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
typedef deUint64 (VKAPI_PTR *PFN_vkGetBufferOpaqueCaptureAddressKHR)(VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
typedef deUint64 (VKAPI_PTR *PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddressKHR(
    VkDevice                                    device,
    const VkBufferDeviceAddressInfo*            pInfo);

VKAPI_ATTR deUint64 VKAPI_CALL vkGetBufferOpaqueCaptureAddressKHR(
    VkDevice                                    device,
    const VkBufferDeviceAddressInfo*            pInfo);

VKAPI_ATTR deUint64 VKAPI_CALL vkGetDeviceMemoryOpaqueCaptureAddressKHR(
    VkDevice                                    device,
    const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
#endif


#define VK_KHR_deferred_host_operations 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDeferredOperationKHR)
#define VK_KHR_DEFERRED_HOST_OPERATIONS_SPEC_VERSION 4
#define VK_KHR_DEFERRED_HOST_OPERATIONS_EXTENSION_NAME "VK_KHR_deferred_host_operations"
typedef VkResult (VKAPI_PTR *PFN_vkCreateDeferredOperationKHR)(VkDevice device, const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR* pDeferredOperation);
typedef void (VKAPI_PTR *PFN_vkDestroyDeferredOperationKHR)(VkDevice device, VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator);
typedef deUint32 (VKAPI_PTR *PFN_vkGetDeferredOperationMaxConcurrencyKHR)(VkDevice device, VkDeferredOperationKHR operation);
typedef VkResult (VKAPI_PTR *PFN_vkGetDeferredOperationResultKHR)(VkDevice device, VkDeferredOperationKHR operation);
typedef VkResult (VKAPI_PTR *PFN_vkDeferredOperationJoinKHR)(VkDevice device, VkDeferredOperationKHR operation);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateDeferredOperationKHR(
    VkDevice                                    device,
    const VkAllocationCallbacks*                pAllocator,
    VkDeferredOperationKHR*                     pDeferredOperation);

VKAPI_ATTR void VKAPI_CALL vkDestroyDeferredOperationKHR(
    VkDevice                                    device,
    VkDeferredOperationKHR                      operation,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR deUint32 VKAPI_CALL vkGetDeferredOperationMaxConcurrencyKHR(
    VkDevice                                    device,
    VkDeferredOperationKHR                      operation);

VKAPI_ATTR VkResult VKAPI_CALL vkGetDeferredOperationResultKHR(
    VkDevice                                    device,
    VkDeferredOperationKHR                      operation);

VKAPI_ATTR VkResult VKAPI_CALL vkDeferredOperationJoinKHR(
    VkDevice                                    device,
    VkDeferredOperationKHR                      operation);
#endif


#define VK_KHR_pipeline_executable_properties 1
#define VK_KHR_PIPELINE_EXECUTABLE_PROPERTIES_SPEC_VERSION 1
#define VK_KHR_PIPELINE_EXECUTABLE_PROPERTIES_EXTENSION_NAME "VK_KHR_pipeline_executable_properties"

typedef enum VkPipelineExecutableStatisticFormatKHR {
    VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR = 0,
    VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR = 1,
    VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR = 2,
    VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR = 3,
    VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_MAX_ENUM_KHR = 0x7FFFFFFF
} VkPipelineExecutableStatisticFormatKHR;
typedef struct VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           pipelineExecutableInfo;
} VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR;

typedef struct VkPipelineInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    VkPipeline         pipeline;
} VkPipelineInfoKHR;

typedef struct VkPipelineExecutablePropertiesKHR {
    VkStructureType       sType;
    void*                 pNext;
    VkShaderStageFlags    stages;
    char                  name[VK_MAX_DESCRIPTION_SIZE];
    char                  description[VK_MAX_DESCRIPTION_SIZE];
    deUint32              subgroupSize;
} VkPipelineExecutablePropertiesKHR;

typedef struct VkPipelineExecutableInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    VkPipeline         pipeline;
    deUint32           executableIndex;
} VkPipelineExecutableInfoKHR;

typedef union VkPipelineExecutableStatisticValueKHR {
    VkBool32    b32;
    deInt64     i64;
    deUint64    u64;
    double      f64;
} VkPipelineExecutableStatisticValueKHR;

typedef struct VkPipelineExecutableStatisticKHR {
    VkStructureType                           sType;
    void*                                     pNext;
    char                                      name[VK_MAX_DESCRIPTION_SIZE];
    char                                      description[VK_MAX_DESCRIPTION_SIZE];
    VkPipelineExecutableStatisticFormatKHR    format;
    VkPipelineExecutableStatisticValueKHR     value;
} VkPipelineExecutableStatisticKHR;

typedef struct VkPipelineExecutableInternalRepresentationKHR {
    VkStructureType    sType;
    void*              pNext;
    char               name[VK_MAX_DESCRIPTION_SIZE];
    char               description[VK_MAX_DESCRIPTION_SIZE];
    VkBool32           isText;
    deUintptr             dataSize;
    void*              pData;
} VkPipelineExecutableInternalRepresentationKHR;

typedef VkResult (VKAPI_PTR *PFN_vkGetPipelineExecutablePropertiesKHR)(VkDevice                        device, const VkPipelineInfoKHR*        pPipelineInfo, deUint32* pExecutableCount, VkPipelineExecutablePropertiesKHR* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkGetPipelineExecutableStatisticsKHR)(VkDevice                        device, const VkPipelineExecutableInfoKHR*  pExecutableInfo, deUint32* pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics);
typedef VkResult (VKAPI_PTR *PFN_vkGetPipelineExecutableInternalRepresentationsKHR)(VkDevice                        device, const VkPipelineExecutableInfoKHR*  pExecutableInfo, deUint32* pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineExecutablePropertiesKHR(
    VkDevice                                    device,
    const VkPipelineInfoKHR*                    pPipelineInfo,
    deUint32*                                   pExecutableCount,
    VkPipelineExecutablePropertiesKHR*          pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineExecutableStatisticsKHR(
    VkDevice                                    device,
    const VkPipelineExecutableInfoKHR*          pExecutableInfo,
    deUint32*                                   pStatisticCount,
    VkPipelineExecutableStatisticKHR*           pStatistics);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineExecutableInternalRepresentationsKHR(
    VkDevice                                    device,
    const VkPipelineExecutableInfoKHR*          pExecutableInfo,
    deUint32*                                   pInternalRepresentationCount,
    VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations);
#endif


#define VK_KHR_shader_integer_dot_product 1
#define VK_KHR_SHADER_INTEGER_DOT_PRODUCT_SPEC_VERSION 1
#define VK_KHR_SHADER_INTEGER_DOT_PRODUCT_EXTENSION_NAME "VK_KHR_shader_integer_dot_product"
typedef struct VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderIntegerDotProduct;
} VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR;

typedef struct VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           integerDotProduct8BitUnsignedAccelerated;
    VkBool32           integerDotProduct8BitSignedAccelerated;
    VkBool32           integerDotProduct8BitMixedSignednessAccelerated;
    VkBool32           integerDotProduct4x8BitPackedUnsignedAccelerated;
    VkBool32           integerDotProduct4x8BitPackedSignedAccelerated;
    VkBool32           integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    VkBool32           integerDotProduct16BitUnsignedAccelerated;
    VkBool32           integerDotProduct16BitSignedAccelerated;
    VkBool32           integerDotProduct16BitMixedSignednessAccelerated;
    VkBool32           integerDotProduct32BitUnsignedAccelerated;
    VkBool32           integerDotProduct32BitSignedAccelerated;
    VkBool32           integerDotProduct32BitMixedSignednessAccelerated;
    VkBool32           integerDotProduct64BitUnsignedAccelerated;
    VkBool32           integerDotProduct64BitSignedAccelerated;
    VkBool32           integerDotProduct64BitMixedSignednessAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
} VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR;



#define VK_KHR_pipeline_library 1
#define VK_KHR_PIPELINE_LIBRARY_SPEC_VERSION 1
#define VK_KHR_PIPELINE_LIBRARY_EXTENSION_NAME "VK_KHR_pipeline_library"
typedef struct VkPipelineLibraryCreateInfoKHR {
    VkStructureType      sType;
    const void*          pNext;
    deUint32             libraryCount;
    const VkPipeline*    pLibraries;
} VkPipelineLibraryCreateInfoKHR;



#define VK_KHR_shader_non_semantic_info 1
#define VK_KHR_SHADER_NON_SEMANTIC_INFO_SPEC_VERSION 1
#define VK_KHR_SHADER_NON_SEMANTIC_INFO_EXTENSION_NAME "VK_KHR_shader_non_semantic_info"


#define VK_KHR_present_id 1
#define VK_KHR_PRESENT_ID_SPEC_VERSION    1
#define VK_KHR_PRESENT_ID_EXTENSION_NAME  "VK_KHR_present_id"
typedef struct VkPresentIdKHR {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           swapchainCount;
    const deUint64*    pPresentIds;
} VkPresentIdKHR;

typedef struct VkPhysicalDevicePresentIdFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           presentId;
} VkPhysicalDevicePresentIdFeaturesKHR;



#define VK_KHR_synchronization2 1
typedef deUint64 VkFlags64;
#define VK_KHR_SYNCHRONIZATION_2_SPEC_VERSION 1
#define VK_KHR_SYNCHRONIZATION_2_EXTENSION_NAME "VK_KHR_synchronization2"
typedef VkFlags64 VkPipelineStageFlags2KHR;

// Flag bits for VkPipelineStageFlagBits2KHR
typedef VkFlags64 VkPipelineStageFlagBits2KHR;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_NONE_KHR = 0ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_TOP_OF_PIPE_BIT_KHR = 0x00000001ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_DRAW_INDIRECT_BIT_KHR = 0x00000002ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_VERTEX_INPUT_BIT_KHR = 0x00000004ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_VERTEX_SHADER_BIT_KHR = 0x00000008ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_TESSELLATION_CONTROL_SHADER_BIT_KHR = 0x00000010ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_TESSELLATION_EVALUATION_SHADER_BIT_KHR = 0x00000020ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_GEOMETRY_SHADER_BIT_KHR = 0x00000040ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_FRAGMENT_SHADER_BIT_KHR = 0x00000080ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_EARLY_FRAGMENT_TESTS_BIT_KHR = 0x00000100ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_LATE_FRAGMENT_TESTS_BIT_KHR = 0x00000200ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_COLOR_ATTACHMENT_OUTPUT_BIT_KHR = 0x00000400ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_COMPUTE_SHADER_BIT_KHR = 0x00000800ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_ALL_TRANSFER_BIT_KHR = 0x00001000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_TRANSFER_BIT_KHR = 0x00001000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_BOTTOM_OF_PIPE_BIT_KHR = 0x00002000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_HOST_BIT_KHR = 0x00004000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_ALL_GRAPHICS_BIT_KHR = 0x00008000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT_KHR = 0x00010000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_COPY_BIT_KHR = 0x100000000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_RESOLVE_BIT_KHR = 0x200000000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_BLIT_BIT_KHR = 0x400000000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_CLEAR_BIT_KHR = 0x800000000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_INDEX_INPUT_BIT_KHR = 0x1000000000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_VERTEX_ATTRIBUTE_INPUT_BIT_KHR = 0x2000000000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_PRE_RASTERIZATION_SHADERS_BIT_KHR = 0x4000000000ULL;
#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_VIDEO_DECODE_BIT_KHR = 0x04000000ULL;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_VIDEO_ENCODE_BIT_KHR = 0x08000000ULL;
#endif
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_TRANSFORM_FEEDBACK_BIT_EXT = 0x01000000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_CONDITIONAL_RENDERING_BIT_EXT = 0x00040000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_COMMAND_PREPROCESS_BIT_NV = 0x00020000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR = 0x00400000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_SHADING_RATE_IMAGE_BIT_NV = 0x00400000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_BUILD_BIT_KHR = 0x02000000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_RAY_TRACING_SHADER_BIT_KHR = 0x00200000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_RAY_TRACING_SHADER_BIT_NV = 0x00200000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_BUILD_BIT_NV = 0x02000000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_FRAGMENT_DENSITY_PROCESS_BIT_EXT = 0x00800000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_TASK_SHADER_BIT_NV = 0x00080000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_MESH_SHADER_BIT_NV = 0x00100000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_SUBPASS_SHADING_BIT_HUAWEI = 0x8000000000ULL;
static const VkPipelineStageFlagBits2KHR VK_PIPELINE_STAGE_2_INVOCATION_MASK_BIT_HUAWEI = 0x10000000000ULL;

typedef VkFlags64 VkAccessFlags2KHR;

// Flag bits for VkAccessFlagBits2KHR
typedef VkFlags64 VkAccessFlagBits2KHR;
static const VkAccessFlagBits2KHR VK_ACCESS_2_NONE_KHR = 0ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_INDIRECT_COMMAND_READ_BIT_KHR = 0x00000001ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_INDEX_READ_BIT_KHR = 0x00000002ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_VERTEX_ATTRIBUTE_READ_BIT_KHR = 0x00000004ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_UNIFORM_READ_BIT_KHR = 0x00000008ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_INPUT_ATTACHMENT_READ_BIT_KHR = 0x00000010ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_SHADER_READ_BIT_KHR = 0x00000020ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_SHADER_WRITE_BIT_KHR = 0x00000040ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_COLOR_ATTACHMENT_READ_BIT_KHR = 0x00000080ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_COLOR_ATTACHMENT_WRITE_BIT_KHR = 0x00000100ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_READ_BIT_KHR = 0x00000200ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT_KHR = 0x00000400ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_TRANSFER_READ_BIT_KHR = 0x00000800ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_TRANSFER_WRITE_BIT_KHR = 0x00001000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_HOST_READ_BIT_KHR = 0x00002000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_HOST_WRITE_BIT_KHR = 0x00004000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_MEMORY_READ_BIT_KHR = 0x00008000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_MEMORY_WRITE_BIT_KHR = 0x00010000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_SHADER_SAMPLED_READ_BIT_KHR = 0x100000000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_SHADER_STORAGE_READ_BIT_KHR = 0x200000000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_SHADER_STORAGE_WRITE_BIT_KHR = 0x400000000ULL;
#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkAccessFlagBits2KHR VK_ACCESS_2_VIDEO_DECODE_READ_BIT_KHR = 0x800000000ULL;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkAccessFlagBits2KHR VK_ACCESS_2_VIDEO_DECODE_WRITE_BIT_KHR = 0x1000000000ULL;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkAccessFlagBits2KHR VK_ACCESS_2_VIDEO_ENCODE_READ_BIT_KHR = 0x2000000000ULL;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkAccessFlagBits2KHR VK_ACCESS_2_VIDEO_ENCODE_WRITE_BIT_KHR = 0x4000000000ULL;
#endif
static const VkAccessFlagBits2KHR VK_ACCESS_2_TRANSFORM_FEEDBACK_WRITE_BIT_EXT = 0x02000000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT = 0x04000000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT = 0x08000000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_CONDITIONAL_RENDERING_READ_BIT_EXT = 0x00100000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_COMMAND_PREPROCESS_READ_BIT_NV = 0x00020000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_COMMAND_PREPROCESS_WRITE_BIT_NV = 0x00040000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR = 0x00800000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_SHADING_RATE_IMAGE_READ_BIT_NV = 0x00800000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_ACCELERATION_STRUCTURE_READ_BIT_KHR = 0x00200000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_ACCELERATION_STRUCTURE_WRITE_BIT_KHR = 0x00400000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_ACCELERATION_STRUCTURE_READ_BIT_NV = 0x00200000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_ACCELERATION_STRUCTURE_WRITE_BIT_NV = 0x00400000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_FRAGMENT_DENSITY_MAP_READ_BIT_EXT = 0x01000000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT = 0x00080000ULL;
static const VkAccessFlagBits2KHR VK_ACCESS_2_INVOCATION_MASK_READ_BIT_HUAWEI = 0x8000000000ULL;


typedef enum VkSubmitFlagBitsKHR {
    VK_SUBMIT_PROTECTED_BIT_KHR = 0x00000001,
    VK_SUBMIT_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkSubmitFlagBitsKHR;
typedef VkFlags VkSubmitFlagsKHR;
typedef struct VkMemoryBarrier2KHR {
    VkStructureType             sType;
    const void*                 pNext;
    VkPipelineStageFlags2KHR    srcStageMask;
    VkAccessFlags2KHR           srcAccessMask;
    VkPipelineStageFlags2KHR    dstStageMask;
    VkAccessFlags2KHR           dstAccessMask;
} VkMemoryBarrier2KHR;

typedef struct VkBufferMemoryBarrier2KHR {
    VkStructureType             sType;
    const void*                 pNext;
    VkPipelineStageFlags2KHR    srcStageMask;
    VkAccessFlags2KHR           srcAccessMask;
    VkPipelineStageFlags2KHR    dstStageMask;
    VkAccessFlags2KHR           dstAccessMask;
    deUint32                    srcQueueFamilyIndex;
    deUint32                    dstQueueFamilyIndex;
    VkBuffer                    buffer;
    VkDeviceSize                offset;
    VkDeviceSize                size;
} VkBufferMemoryBarrier2KHR;

typedef struct VkImageMemoryBarrier2KHR {
    VkStructureType             sType;
    const void*                 pNext;
    VkPipelineStageFlags2KHR    srcStageMask;
    VkAccessFlags2KHR           srcAccessMask;
    VkPipelineStageFlags2KHR    dstStageMask;
    VkAccessFlags2KHR           dstAccessMask;
    VkImageLayout               oldLayout;
    VkImageLayout               newLayout;
    deUint32                    srcQueueFamilyIndex;
    deUint32                    dstQueueFamilyIndex;
    VkImage                     image;
    VkImageSubresourceRange     subresourceRange;
} VkImageMemoryBarrier2KHR;

typedef struct VkDependencyInfoKHR {
    VkStructureType                     sType;
    const void*                         pNext;
    VkDependencyFlags                   dependencyFlags;
    deUint32                            memoryBarrierCount;
    const VkMemoryBarrier2KHR*          pMemoryBarriers;
    deUint32                            bufferMemoryBarrierCount;
    const VkBufferMemoryBarrier2KHR*    pBufferMemoryBarriers;
    deUint32                            imageMemoryBarrierCount;
    const VkImageMemoryBarrier2KHR*     pImageMemoryBarriers;
} VkDependencyInfoKHR;

typedef struct VkSemaphoreSubmitInfoKHR {
    VkStructureType             sType;
    const void*                 pNext;
    VkSemaphore                 semaphore;
    deUint64                    value;
    VkPipelineStageFlags2KHR    stageMask;
    deUint32                    deviceIndex;
} VkSemaphoreSubmitInfoKHR;

typedef struct VkCommandBufferSubmitInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    VkCommandBuffer    commandBuffer;
    deUint32           deviceMask;
} VkCommandBufferSubmitInfoKHR;

typedef struct VkSubmitInfo2KHR {
    VkStructureType                        sType;
    const void*                            pNext;
    VkSubmitFlagsKHR                       flags;
    deUint32                               waitSemaphoreInfoCount;
    const VkSemaphoreSubmitInfoKHR*        pWaitSemaphoreInfos;
    deUint32                               commandBufferInfoCount;
    const VkCommandBufferSubmitInfoKHR*    pCommandBufferInfos;
    deUint32                               signalSemaphoreInfoCount;
    const VkSemaphoreSubmitInfoKHR*        pSignalSemaphoreInfos;
} VkSubmitInfo2KHR;

typedef struct VkPhysicalDeviceSynchronization2FeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           synchronization2;
} VkPhysicalDeviceSynchronization2FeaturesKHR;

typedef struct VkQueueFamilyCheckpointProperties2NV {
    VkStructureType             sType;
    void*                       pNext;
    VkPipelineStageFlags2KHR    checkpointExecutionStageMask;
} VkQueueFamilyCheckpointProperties2NV;

typedef struct VkCheckpointData2NV {
    VkStructureType             sType;
    void*                       pNext;
    VkPipelineStageFlags2KHR    stage;
    void*                       pCheckpointMarker;
} VkCheckpointData2NV;

typedef void (VKAPI_PTR *PFN_vkCmdSetEvent2KHR)(VkCommandBuffer                   commandBuffer, VkEvent                                             event, const VkDependencyInfoKHR*                          pDependencyInfo);
typedef void (VKAPI_PTR *PFN_vkCmdResetEvent2KHR)(VkCommandBuffer                   commandBuffer, VkEvent                                             event, VkPipelineStageFlags2KHR                            stageMask);
typedef void (VKAPI_PTR *PFN_vkCmdWaitEvents2KHR)(VkCommandBuffer                   commandBuffer, deUint32                                            eventCount, const VkEvent*                     pEvents, const VkDependencyInfoKHR*         pDependencyInfos);
typedef void (VKAPI_PTR *PFN_vkCmdPipelineBarrier2KHR)(VkCommandBuffer                   commandBuffer, const VkDependencyInfoKHR*                                pDependencyInfo);
typedef void (VKAPI_PTR *PFN_vkCmdWriteTimestamp2KHR)(VkCommandBuffer                   commandBuffer, VkPipelineStageFlags2KHR                            stage, VkQueryPool                                         queryPool, deUint32                                            query);
typedef VkResult (VKAPI_PTR *PFN_vkQueueSubmit2KHR)(VkQueue                           queue, deUint32                            submitCount, const VkSubmitInfo2KHR*           pSubmits, VkFence           fence);
typedef void (VKAPI_PTR *PFN_vkCmdWriteBufferMarker2AMD)(VkCommandBuffer                   commandBuffer, VkPipelineStageFlags2KHR                            stage, VkBuffer                                            dstBuffer, VkDeviceSize                                        dstOffset, deUint32                                            marker);
typedef void (VKAPI_PTR *PFN_vkGetQueueCheckpointData2NV)(VkQueue queue, deUint32* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent2KHR(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    const VkDependencyInfoKHR*                  pDependencyInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent2KHR(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags2KHR                    stageMask);

VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents2KHR(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    eventCount,
    const VkEvent*                              pEvents,
    const VkDependencyInfoKHR*                  pDependencyInfos);

VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkDependencyInfoKHR*                  pDependencyInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp2KHR(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlags2KHR                    stage,
    VkQueryPool                                 queryPool,
    deUint32                                    query);

VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit2KHR(
    VkQueue                                     queue,
    deUint32                                    submitCount,
    const VkSubmitInfo2KHR*                     pSubmits,
    VkFence                                     fence);

VKAPI_ATTR void VKAPI_CALL vkCmdWriteBufferMarker2AMD(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlags2KHR                    stage,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    deUint32                                    marker);

VKAPI_ATTR void VKAPI_CALL vkGetQueueCheckpointData2NV(
    VkQueue                                     queue,
    deUint32*                                   pCheckpointDataCount,
    VkCheckpointData2NV*                        pCheckpointData);
#endif


#define VK_KHR_graphics_pipeline_library 1
#define VK_KHR_GRAPHICS_PIPELINE_LIBRARY_SPEC_VERSION 0
#define VK_KHR_GRAPHICS_PIPELINE_LIBRARY_EXTENSION_NAME "VK_KHR_graphics_pipeline_library"

typedef enum VkGraphicsPipelineLibraryFlagBitsKHR {
    VK_GRAPHICS_PIPELINE_LIBRARY_VERTEX_INPUT_INTERFACE_BIT_KHR = 0x00000001,
    VK_GRAPHICS_PIPELINE_LIBRARY_PRE_RASTERIZATION_SHADERS_BIT_KHR = 0x00000002,
    VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_SHADER_BIT_KHR = 0x00000004,
    VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_OUTPUT_INTERFACE_BIT_KHR = 0x00000008,
    VK_GRAPHICS_PIPELINE_LIBRARY_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkGraphicsPipelineLibraryFlagBitsKHR;
typedef VkFlags VkGraphicsPipelineLibraryFlagsKHR;
typedef struct VkPhysicalDeviceGraphicsPipelineLibraryFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           graphicsPipelineLibrary;
} VkPhysicalDeviceGraphicsPipelineLibraryFeaturesKHR;

typedef struct VkPhysicalDeviceGraphicsPipelineLibraryPropertiesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           graphicsPipelineLibraryFastLinking;
    VkBool32           graphicsPipelineLibraryIndependentInterpolationDecoration;
} VkPhysicalDeviceGraphicsPipelineLibraryPropertiesKHR;

typedef struct VkGraphicsPipelineLibraryCreateInfoKHR {
    VkStructureType                      sType;
    void*                                pNext;
    VkGraphicsPipelineLibraryFlagsKHR    flags;
} VkGraphicsPipelineLibraryCreateInfoKHR;



#define VK_KHR_shader_subgroup_uniform_control_flow 1
#define VK_KHR_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_SPEC_VERSION 1
#define VK_KHR_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_EXTENSION_NAME "VK_KHR_shader_subgroup_uniform_control_flow"
typedef struct VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderSubgroupUniformControlFlow;
} VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR;



#define VK_KHR_zero_initialize_workgroup_memory 1
#define VK_KHR_ZERO_INITIALIZE_WORKGROUP_MEMORY_SPEC_VERSION 1
#define VK_KHR_ZERO_INITIALIZE_WORKGROUP_MEMORY_EXTENSION_NAME "VK_KHR_zero_initialize_workgroup_memory"
typedef struct VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderZeroInitializeWorkgroupMemory;
} VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR;



#define VK_KHR_workgroup_memory_explicit_layout 1
#define VK_KHR_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_SPEC_VERSION 1
#define VK_KHR_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_EXTENSION_NAME "VK_KHR_workgroup_memory_explicit_layout"
typedef struct VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           workgroupMemoryExplicitLayout;
    VkBool32           workgroupMemoryExplicitLayoutScalarBlockLayout;
    VkBool32           workgroupMemoryExplicitLayout8BitAccess;
    VkBool32           workgroupMemoryExplicitLayout16BitAccess;
} VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR;



#define VK_KHR_copy_commands2 1
#define VK_KHR_COPY_COMMANDS_2_SPEC_VERSION 1
#define VK_KHR_COPY_COMMANDS_2_EXTENSION_NAME "VK_KHR_copy_commands2"
typedef struct VkBufferCopy2KHR {
    VkStructureType    sType;
    const void*        pNext;
    VkDeviceSize       srcOffset;
    VkDeviceSize       dstOffset;
    VkDeviceSize       size;
} VkBufferCopy2KHR;

typedef struct VkCopyBufferInfo2KHR {
    VkStructureType            sType;
    const void*                pNext;
    VkBuffer                   srcBuffer;
    VkBuffer                   dstBuffer;
    deUint32                   regionCount;
    const VkBufferCopy2KHR*    pRegions;
} VkCopyBufferInfo2KHR;

typedef struct VkImageCopy2KHR {
    VkStructureType             sType;
    const void*                 pNext;
    VkImageSubresourceLayers    srcSubresource;
    VkOffset3D                  srcOffset;
    VkImageSubresourceLayers    dstSubresource;
    VkOffset3D                  dstOffset;
    VkExtent3D                  extent;
} VkImageCopy2KHR;

typedef struct VkCopyImageInfo2KHR {
    VkStructureType           sType;
    const void*               pNext;
    VkImage                   srcImage;
    VkImageLayout             srcImageLayout;
    VkImage                   dstImage;
    VkImageLayout             dstImageLayout;
    deUint32                  regionCount;
    const VkImageCopy2KHR*    pRegions;
} VkCopyImageInfo2KHR;

typedef struct VkBufferImageCopy2KHR {
    VkStructureType             sType;
    const void*                 pNext;
    VkDeviceSize                bufferOffset;
    deUint32                    bufferRowLength;
    deUint32                    bufferImageHeight;
    VkImageSubresourceLayers    imageSubresource;
    VkOffset3D                  imageOffset;
    VkExtent3D                  imageExtent;
} VkBufferImageCopy2KHR;

typedef struct VkCopyBufferToImageInfo2KHR {
    VkStructureType                 sType;
    const void*                     pNext;
    VkBuffer                        srcBuffer;
    VkImage                         dstImage;
    VkImageLayout                   dstImageLayout;
    deUint32                        regionCount;
    const VkBufferImageCopy2KHR*    pRegions;
} VkCopyBufferToImageInfo2KHR;

typedef struct VkCopyImageToBufferInfo2KHR {
    VkStructureType                 sType;
    const void*                     pNext;
    VkImage                         srcImage;
    VkImageLayout                   srcImageLayout;
    VkBuffer                        dstBuffer;
    deUint32                        regionCount;
    const VkBufferImageCopy2KHR*    pRegions;
} VkCopyImageToBufferInfo2KHR;

typedef struct VkImageBlit2KHR {
    VkStructureType             sType;
    const void*                 pNext;
    VkImageSubresourceLayers    srcSubresource;
    VkOffset3D                  srcOffsets[2];
    VkImageSubresourceLayers    dstSubresource;
    VkOffset3D                  dstOffsets[2];
} VkImageBlit2KHR;

typedef struct VkBlitImageInfo2KHR {
    VkStructureType           sType;
    const void*               pNext;
    VkImage                   srcImage;
    VkImageLayout             srcImageLayout;
    VkImage                   dstImage;
    VkImageLayout             dstImageLayout;
    deUint32                  regionCount;
    const VkImageBlit2KHR*    pRegions;
    VkFilter                  filter;
} VkBlitImageInfo2KHR;

typedef struct VkImageResolve2KHR {
    VkStructureType             sType;
    const void*                 pNext;
    VkImageSubresourceLayers    srcSubresource;
    VkOffset3D                  srcOffset;
    VkImageSubresourceLayers    dstSubresource;
    VkOffset3D                  dstOffset;
    VkExtent3D                  extent;
} VkImageResolve2KHR;

typedef struct VkResolveImageInfo2KHR {
    VkStructureType              sType;
    const void*                  pNext;
    VkImage                      srcImage;
    VkImageLayout                srcImageLayout;
    VkImage                      dstImage;
    VkImageLayout                dstImageLayout;
    deUint32                     regionCount;
    const VkImageResolve2KHR*    pRegions;
} VkResolveImageInfo2KHR;

typedef void (VKAPI_PTR *PFN_vkCmdCopyBuffer2KHR)(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR* pCopyBufferInfo);
typedef void (VKAPI_PTR *PFN_vkCmdCopyImage2KHR)(VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR* pCopyImageInfo);
typedef void (VKAPI_PTR *PFN_vkCmdCopyBufferToImage2KHR)(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR* pCopyBufferToImageInfo);
typedef void (VKAPI_PTR *PFN_vkCmdCopyImageToBuffer2KHR)(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR* pCopyImageToBufferInfo);
typedef void (VKAPI_PTR *PFN_vkCmdBlitImage2KHR)(VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR* pBlitImageInfo);
typedef void (VKAPI_PTR *PFN_vkCmdResolveImage2KHR)(VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR* pResolveImageInfo);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkCopyBufferInfo2KHR*                 pCopyBufferInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkCopyImageInfo2KHR*                  pCopyImageInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkCopyBufferToImageInfo2KHR*          pCopyBufferToImageInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkCopyImageToBufferInfo2KHR*          pCopyImageToBufferInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkBlitImageInfo2KHR*                  pBlitImageInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkResolveImageInfo2KHR*               pResolveImageInfo);
#endif


#define VK_KHR_format_feature_flags2 1
#define VK_KHR_FORMAT_FEATURE_FLAGS_2_SPEC_VERSION 1
#define VK_KHR_FORMAT_FEATURE_FLAGS_2_EXTENSION_NAME "VK_KHR_format_feature_flags2"
typedef VkFlags64 VkFormatFeatureFlags2KHR;

// Flag bits for VkFormatFeatureFlagBits2KHR
typedef VkFlags64 VkFormatFeatureFlagBits2KHR;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_BIT_KHR = 0x00000001ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_STORAGE_IMAGE_BIT_KHR = 0x00000002ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_STORAGE_IMAGE_ATOMIC_BIT_KHR = 0x00000004ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_UNIFORM_TEXEL_BUFFER_BIT_KHR = 0x00000008ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_BIT_KHR = 0x00000010ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_ATOMIC_BIT_KHR = 0x00000020ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_VERTEX_BUFFER_BIT_KHR = 0x00000040ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BIT_KHR = 0x00000080ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BLEND_BIT_KHR = 0x00000100ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_DEPTH_STENCIL_ATTACHMENT_BIT_KHR = 0x00000200ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_BLIT_SRC_BIT_KHR = 0x00000400ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_BLIT_DST_BIT_KHR = 0x00000800ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_LINEAR_BIT_KHR = 0x00001000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG = 0x00002000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_TRANSFER_SRC_BIT_KHR = 0x00004000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_TRANSFER_DST_BIT_KHR = 0x00008000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_MINMAX_BIT_KHR = 0x00010000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_MIDPOINT_CHROMA_SAMPLES_BIT_KHR = 0x00020000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR = 0x00040000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR = 0x00080000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR = 0x00100000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR = 0x00200000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_DISJOINT_BIT_KHR = 0x00400000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_COSITED_CHROMA_SAMPLES_BIT_KHR = 0x00800000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_FRAGMENT_DENSITY_MAP_BIT_EXT = 0x01000000ULL;
#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_VIDEO_DECODE_OUTPUT_BIT_KHR = 0x02000000ULL;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_VIDEO_DECODE_DPB_BIT_KHR = 0x04000000ULL;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_VIDEO_ENCODE_INPUT_BIT_KHR = 0x08000000ULL;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_VIDEO_ENCODE_DPB_BIT_KHR = 0x10000000ULL;
#endif
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR = 0x20000000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR = 0x40000000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_STORAGE_READ_WITHOUT_FORMAT_BIT_KHR = 0x80000000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_STORAGE_WRITE_WITHOUT_FORMAT_BIT_KHR = 0x100000000ULL;
static const VkFormatFeatureFlagBits2KHR VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_DEPTH_COMPARISON_BIT_KHR = 0x200000000ULL;

typedef struct VkFormatPropertiesExtendedKHR {
	VkStructureType             sType;
	void*                       pNext;
	VkFormatFeatureFlags2KHR    linearTilingFeatures;
	VkFormatFeatureFlags2KHR    optimalTilingFeatures;
	VkFormatFeatureFlags2KHR    bufferFeatures;
} VkFormatPropertiesExtendedKHR;

#define VK_KHR_maintenance4 1
#define VK_KHR_MAINTENANCE4_SPEC_VERSION  1
#define VK_KHR_MAINTENANCE4_EXTENSION_NAME "VK_KHR_maintenance4"
typedef struct VkPhysicalDeviceMaintenance4FeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           maintenance4;
} VkPhysicalDeviceMaintenance4FeaturesKHR;

typedef struct VkPhysicalDeviceMaintenance4PropertiesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkDeviceSize       maxBufferSize;
} VkPhysicalDeviceMaintenance4PropertiesKHR;

typedef struct VkDeviceBufferMemoryRequirementsKHR {
    VkStructureType                       sType;
    const void*                           pNext;
    const VkBufferCreateInfo*             pCreateInfo;
} VkDeviceBufferMemoryRequirementsKHR;

typedef struct VkDeviceImageMemoryRequirementsKHR {
    VkStructureType                       sType;
    const void*                           pNext;
    const VkImageCreateInfo*              pCreateInfo;
    VkImageAspectFlagBits                 planeAspect;
} VkDeviceImageMemoryRequirementsKHR;

typedef void (VKAPI_PTR *PFN_vkGetDeviceBufferMemoryRequirementsKHR)(VkDevice device, const VkDeviceBufferMemoryRequirementsKHR *pInfo, VkMemoryRequirements2 *pMemoryRequirements);
typedef void (VKAPI_PTR *PFN_vkGetDeviceImageMemoryRequirementsKHR)(VkDevice device, const VkDeviceImageMemoryRequirementsKHR *pInfo, VkMemoryRequirements2 *pMemoryRequirements);
typedef void (VKAPI_PTR *PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)(VkDevice device, const VkDeviceImageMemoryRequirementsKHR *pInfo, deUint32 *pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 *pSparseMemoryRequirements);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkGetDeviceBufferMemoryRequirementsKHR(
    VkDevice                                    device,
    const VkDeviceBufferMemoryRequirementsKHR* pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements);

VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageMemoryRequirementsKHR(
    VkDevice                                    device,
    const VkDeviceImageMemoryRequirementsKHR* pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements);

VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageSparseMemoryRequirementsKHR(
    VkDevice                                    device,
    const VkDeviceImageMemoryRequirementsKHR* pInfo,
    deUint32*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2*           pSparseMemoryRequirements);
#endif


#define VK_EXT_debug_report 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDebugReportCallbackEXT)
#define VK_EXT_DEBUG_REPORT_SPEC_VERSION  10
#define VK_EXT_DEBUG_REPORT_EXTENSION_NAME "VK_EXT_debug_report"

typedef enum VkDebugReportObjectTypeEXT {
    VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT = 0,
    VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT = 1,
    VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT = 2,
    VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT = 3,
    VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT = 4,
    VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT = 5,
    VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT = 6,
    VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT = 7,
    VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT = 8,
    VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT = 9,
    VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT = 10,
    VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT = 11,
    VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT = 12,
    VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT = 13,
    VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT = 14,
    VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT = 15,
    VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT = 16,
    VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT = 17,
    VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT = 18,
    VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT = 19,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT = 20,
    VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT = 21,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT = 22,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT = 23,
    VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT = 24,
    VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT = 25,
    VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT = 26,
    VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT = 27,
    VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT = 28,
    VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT = 29,
    VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT = 30,
    VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT = 33,
    VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT = 1000156000,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT = 1000085000,
    VK_DEBUG_REPORT_OBJECT_TYPE_CU_MODULE_NVX_EXT = 1000029000,
    VK_DEBUG_REPORT_OBJECT_TYPE_CU_FUNCTION_NVX_EXT = 1000029001,
    VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR_EXT = 1000150000,
    VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT = 1000165000,
    VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT = VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT,
    VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT = VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT = VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT,
    VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT = VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT,
    VK_DEBUG_REPORT_OBJECT_TYPE_MAX_ENUM_EXT = 0x7FFFFFFF
} VkDebugReportObjectTypeEXT;

typedef enum VkDebugReportFlagBitsEXT {
    VK_DEBUG_REPORT_INFORMATION_BIT_EXT = 0x00000001,
    VK_DEBUG_REPORT_WARNING_BIT_EXT = 0x00000002,
    VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT = 0x00000004,
    VK_DEBUG_REPORT_ERROR_BIT_EXT = 0x00000008,
    VK_DEBUG_REPORT_DEBUG_BIT_EXT = 0x00000010,
    VK_DEBUG_REPORT_FLAG_BITS_MAX_ENUM_EXT = 0x7FFFFFFF
} VkDebugReportFlagBitsEXT;
typedef VkFlags VkDebugReportFlagsEXT;
typedef VkBool32 (VKAPI_PTR *PFN_vkDebugReportCallbackEXT)(
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    deUint64                                    object,
    deUintptr                                      location,
    deInt32                                     messageCode,
    const char*                                 pLayerPrefix,
    const char*                                 pMessage,
    void*                                       pUserData);

typedef struct VkDebugReportCallbackCreateInfoEXT {
    VkStructureType                 sType;
    const void*                     pNext;
    VkDebugReportFlagsEXT           flags;
    PFN_vkDebugReportCallbackEXT    pfnCallback;
    void*                           pUserData;
} VkDebugReportCallbackCreateInfoEXT;

typedef VkResult (VKAPI_PTR *PFN_vkCreateDebugReportCallbackEXT)(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback);
typedef void (VKAPI_PTR *PFN_vkDestroyDebugReportCallbackEXT)(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator);
typedef void (VKAPI_PTR *PFN_vkDebugReportMessageEXT)(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, deUint64 object, deUintptr location, deInt32 messageCode, const char* pLayerPrefix, const char* pMessage);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateDebugReportCallbackEXT(
    VkInstance                                  instance,
    const VkDebugReportCallbackCreateInfoEXT*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDebugReportCallbackEXT*                   pCallback);

VKAPI_ATTR void VKAPI_CALL vkDestroyDebugReportCallbackEXT(
    VkInstance                                  instance,
    VkDebugReportCallbackEXT                    callback,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR void VKAPI_CALL vkDebugReportMessageEXT(
    VkInstance                                  instance,
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    deUint64                                    object,
    deUintptr                                      location,
    deInt32                                     messageCode,
    const char*                                 pLayerPrefix,
    const char*                                 pMessage);
#endif


#define VK_NV_glsl_shader 1
#define VK_NV_GLSL_SHADER_SPEC_VERSION    1
#define VK_NV_GLSL_SHADER_EXTENSION_NAME  "VK_NV_glsl_shader"


#define VK_EXT_depth_range_unrestricted 1
#define VK_EXT_DEPTH_RANGE_UNRESTRICTED_SPEC_VERSION 1
#define VK_EXT_DEPTH_RANGE_UNRESTRICTED_EXTENSION_NAME "VK_EXT_depth_range_unrestricted"


#define VK_IMG_filter_cubic 1
#define VK_IMG_FILTER_CUBIC_SPEC_VERSION  1
#define VK_IMG_FILTER_CUBIC_EXTENSION_NAME "VK_IMG_filter_cubic"


#define VK_AMD_rasterization_order 1
#define VK_AMD_RASTERIZATION_ORDER_SPEC_VERSION 1
#define VK_AMD_RASTERIZATION_ORDER_EXTENSION_NAME "VK_AMD_rasterization_order"

typedef enum VkRasterizationOrderAMD {
    VK_RASTERIZATION_ORDER_STRICT_AMD = 0,
    VK_RASTERIZATION_ORDER_RELAXED_AMD = 1,
    VK_RASTERIZATION_ORDER_MAX_ENUM_AMD = 0x7FFFFFFF
} VkRasterizationOrderAMD;
typedef struct VkPipelineRasterizationStateRasterizationOrderAMD {
    VkStructureType            sType;
    const void*                pNext;
    VkRasterizationOrderAMD    rasterizationOrder;
} VkPipelineRasterizationStateRasterizationOrderAMD;



#define VK_AMD_shader_trinary_minmax 1
#define VK_AMD_SHADER_TRINARY_MINMAX_SPEC_VERSION 1
#define VK_AMD_SHADER_TRINARY_MINMAX_EXTENSION_NAME "VK_AMD_shader_trinary_minmax"


#define VK_AMD_shader_explicit_vertex_parameter 1
#define VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_SPEC_VERSION 1
#define VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_EXTENSION_NAME "VK_AMD_shader_explicit_vertex_parameter"


#define VK_EXT_debug_marker 1
#define VK_EXT_DEBUG_MARKER_SPEC_VERSION  4
#define VK_EXT_DEBUG_MARKER_EXTENSION_NAME "VK_EXT_debug_marker"
typedef struct VkDebugMarkerObjectNameInfoEXT {
    VkStructureType               sType;
    const void*                   pNext;
    VkDebugReportObjectTypeEXT    objectType;
    deUint64                      object;
    const char*                   pObjectName;
} VkDebugMarkerObjectNameInfoEXT;

typedef struct VkDebugMarkerObjectTagInfoEXT {
    VkStructureType               sType;
    const void*                   pNext;
    VkDebugReportObjectTypeEXT    objectType;
    deUint64                      object;
    deUint64                      tagName;
    deUintptr                        tagSize;
    const void*                   pTag;
} VkDebugMarkerObjectTagInfoEXT;

typedef struct VkDebugMarkerMarkerInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    const char*        pMarkerName;
    float              color[4];
} VkDebugMarkerMarkerInfoEXT;

typedef VkResult (VKAPI_PTR *PFN_vkDebugMarkerSetObjectTagEXT)(VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo);
typedef VkResult (VKAPI_PTR *PFN_vkDebugMarkerSetObjectNameEXT)(VkDevice device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo);
typedef void (VKAPI_PTR *PFN_vkCmdDebugMarkerBeginEXT)(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
typedef void (VKAPI_PTR *PFN_vkCmdDebugMarkerEndEXT)(VkCommandBuffer commandBuffer);
typedef void (VKAPI_PTR *PFN_vkCmdDebugMarkerInsertEXT)(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkDebugMarkerSetObjectTagEXT(
    VkDevice                                    device,
    const VkDebugMarkerObjectTagInfoEXT*        pTagInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkDebugMarkerSetObjectNameEXT(
    VkDevice                                    device,
    const VkDebugMarkerObjectNameInfoEXT*       pNameInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerBeginEXT(
    VkCommandBuffer                             commandBuffer,
    const VkDebugMarkerMarkerInfoEXT*           pMarkerInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerEndEXT(
    VkCommandBuffer                             commandBuffer);

VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerInsertEXT(
    VkCommandBuffer                             commandBuffer,
    const VkDebugMarkerMarkerInfoEXT*           pMarkerInfo);
#endif


#define VK_AMD_gcn_shader 1
#define VK_AMD_GCN_SHADER_SPEC_VERSION    1
#define VK_AMD_GCN_SHADER_EXTENSION_NAME  "VK_AMD_gcn_shader"


#define VK_NV_dedicated_allocation 1
#define VK_NV_DEDICATED_ALLOCATION_SPEC_VERSION 1
#define VK_NV_DEDICATED_ALLOCATION_EXTENSION_NAME "VK_NV_dedicated_allocation"
typedef struct VkDedicatedAllocationImageCreateInfoNV {
    VkStructureType    sType;
    const void*        pNext;
    VkBool32           dedicatedAllocation;
} VkDedicatedAllocationImageCreateInfoNV;

typedef struct VkDedicatedAllocationBufferCreateInfoNV {
    VkStructureType    sType;
    const void*        pNext;
    VkBool32           dedicatedAllocation;
} VkDedicatedAllocationBufferCreateInfoNV;

typedef struct VkDedicatedAllocationMemoryAllocateInfoNV {
    VkStructureType    sType;
    const void*        pNext;
    VkImage            image;
    VkBuffer           buffer;
} VkDedicatedAllocationMemoryAllocateInfoNV;



#define VK_EXT_transform_feedback 1
#define VK_EXT_TRANSFORM_FEEDBACK_SPEC_VERSION 1
#define VK_EXT_TRANSFORM_FEEDBACK_EXTENSION_NAME "VK_EXT_transform_feedback"
typedef VkFlags VkPipelineRasterizationStateStreamCreateFlagsEXT;
typedef struct VkPhysicalDeviceTransformFeedbackFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           transformFeedback;
    VkBool32           geometryStreams;
} VkPhysicalDeviceTransformFeedbackFeaturesEXT;

typedef struct VkPhysicalDeviceTransformFeedbackPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxTransformFeedbackStreams;
    deUint32           maxTransformFeedbackBuffers;
    VkDeviceSize       maxTransformFeedbackBufferSize;
    deUint32           maxTransformFeedbackStreamDataSize;
    deUint32           maxTransformFeedbackBufferDataSize;
    deUint32           maxTransformFeedbackBufferDataStride;
    VkBool32           transformFeedbackQueries;
    VkBool32           transformFeedbackStreamsLinesTriangles;
    VkBool32           transformFeedbackRasterizationStreamSelect;
    VkBool32           transformFeedbackDraw;
} VkPhysicalDeviceTransformFeedbackPropertiesEXT;

typedef struct VkPipelineRasterizationStateStreamCreateInfoEXT {
    VkStructureType                                     sType;
    const void*                                         pNext;
    VkPipelineRasterizationStateStreamCreateFlagsEXT    flags;
    deUint32                                            rasterizationStream;
} VkPipelineRasterizationStateStreamCreateInfoEXT;

typedef void (VKAPI_PTR *PFN_vkCmdBindTransformFeedbackBuffersEXT)(VkCommandBuffer commandBuffer, deUint32 firstBinding, deUint32 bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes);
typedef void (VKAPI_PTR *PFN_vkCmdBeginTransformFeedbackEXT)(VkCommandBuffer commandBuffer, deUint32 firstCounterBuffer, deUint32 counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets);
typedef void (VKAPI_PTR *PFN_vkCmdEndTransformFeedbackEXT)(VkCommandBuffer commandBuffer, deUint32 firstCounterBuffer, deUint32 counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets);
typedef void (VKAPI_PTR *PFN_vkCmdBeginQueryIndexedEXT)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query, VkQueryControlFlags flags, deUint32 index);
typedef void (VKAPI_PTR *PFN_vkCmdEndQueryIndexedEXT)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query, deUint32 index);
typedef void (VKAPI_PTR *PFN_vkCmdDrawIndirectByteCountEXT)(VkCommandBuffer commandBuffer, deUint32 instanceCount, deUint32 firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, deUint32 counterOffset, deUint32 vertexStride);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdBindTransformFeedbackBuffersEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    firstBinding,
    deUint32                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets,
    const VkDeviceSize*                         pSizes);

VKAPI_ATTR void VKAPI_CALL vkCmdBeginTransformFeedbackEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    firstCounterBuffer,
    deUint32                                    counterBufferCount,
    const VkBuffer*                             pCounterBuffers,
    const VkDeviceSize*                         pCounterBufferOffsets);

VKAPI_ATTR void VKAPI_CALL vkCmdEndTransformFeedbackEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    firstCounterBuffer,
    deUint32                                    counterBufferCount,
    const VkBuffer*                             pCounterBuffers,
    const VkDeviceSize*                         pCounterBufferOffsets);

VKAPI_ATTR void VKAPI_CALL vkCmdBeginQueryIndexedEXT(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    deUint32                                    query,
    VkQueryControlFlags                         flags,
    deUint32                                    index);

VKAPI_ATTR void VKAPI_CALL vkCmdEndQueryIndexedEXT(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    deUint32                                    query,
    deUint32                                    index);

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectByteCountEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    instanceCount,
    deUint32                                    firstInstance,
    VkBuffer                                    counterBuffer,
    VkDeviceSize                                counterBufferOffset,
    deUint32                                    counterOffset,
    deUint32                                    vertexStride);
#endif


#define VK_NVX_binary_import 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkCuModuleNVX)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkCuFunctionNVX)
#define VK_NVX_BINARY_IMPORT_SPEC_VERSION 1
#define VK_NVX_BINARY_IMPORT_EXTENSION_NAME "VK_NVX_binary_import"
typedef struct VkCuModuleCreateInfoNVX {
    VkStructureType    sType;
    const void*        pNext;
    deUintptr             dataSize;
    const void*        pData;
} VkCuModuleCreateInfoNVX;

typedef struct VkCuFunctionCreateInfoNVX {
    VkStructureType    sType;
    const void*        pNext;
    VkCuModuleNVX      module;
    const char*        pName;
} VkCuFunctionCreateInfoNVX;

typedef struct VkCuLaunchInfoNVX {
    VkStructureType        sType;
    const void*            pNext;
    VkCuFunctionNVX        function;
    deUint32               gridDimX;
    deUint32               gridDimY;
    deUint32               gridDimZ;
    deUint32               blockDimX;
    deUint32               blockDimY;
    deUint32               blockDimZ;
    deUint32               sharedMemBytes;
    deUintptr                 paramCount;
    const void* const *    pParams;
    deUintptr                 extraCount;
    const void* const *    pExtras;
} VkCuLaunchInfoNVX;

typedef VkResult (VKAPI_PTR *PFN_vkCreateCuModuleNVX)(VkDevice device, const VkCuModuleCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCuModuleNVX* pModule);
typedef VkResult (VKAPI_PTR *PFN_vkCreateCuFunctionNVX)(VkDevice device, const VkCuFunctionCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCuFunctionNVX* pFunction);
typedef void (VKAPI_PTR *PFN_vkDestroyCuModuleNVX)(VkDevice device, VkCuModuleNVX module, const VkAllocationCallbacks* pAllocator);
typedef void (VKAPI_PTR *PFN_vkDestroyCuFunctionNVX)(VkDevice device, VkCuFunctionNVX function, const VkAllocationCallbacks* pAllocator);
typedef void (VKAPI_PTR *PFN_vkCmdCuLaunchKernelNVX)(VkCommandBuffer commandBuffer, const VkCuLaunchInfoNVX* pLaunchInfo);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateCuModuleNVX(
    VkDevice                                    device,
    const VkCuModuleCreateInfoNVX*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkCuModuleNVX*                              pModule);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateCuFunctionNVX(
    VkDevice                                    device,
    const VkCuFunctionCreateInfoNVX*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkCuFunctionNVX*                            pFunction);

VKAPI_ATTR void VKAPI_CALL vkDestroyCuModuleNVX(
    VkDevice                                    device,
    VkCuModuleNVX                               module,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR void VKAPI_CALL vkDestroyCuFunctionNVX(
    VkDevice                                    device,
    VkCuFunctionNVX                             function,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR void VKAPI_CALL vkCmdCuLaunchKernelNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCuLaunchInfoNVX*                    pLaunchInfo);
#endif


#define VK_NVX_image_view_handle 1
#define VK_NVX_IMAGE_VIEW_HANDLE_SPEC_VERSION 2
#define VK_NVX_IMAGE_VIEW_HANDLE_EXTENSION_NAME "VK_NVX_image_view_handle"
typedef struct VkImageViewHandleInfoNVX {
    VkStructureType     sType;
    const void*         pNext;
    VkImageView         imageView;
    VkDescriptorType    descriptorType;
    VkSampler           sampler;
} VkImageViewHandleInfoNVX;

typedef struct VkImageViewAddressPropertiesNVX {
    VkStructureType    sType;
    void*              pNext;
    VkDeviceAddress    deviceAddress;
    VkDeviceSize       size;
} VkImageViewAddressPropertiesNVX;

typedef deUint32 (VKAPI_PTR *PFN_vkGetImageViewHandleNVX)(VkDevice device, const VkImageViewHandleInfoNVX* pInfo);
typedef VkResult (VKAPI_PTR *PFN_vkGetImageViewAddressNVX)(VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR deUint32 VKAPI_CALL vkGetImageViewHandleNVX(
    VkDevice                                    device,
    const VkImageViewHandleInfoNVX*             pInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkGetImageViewAddressNVX(
    VkDevice                                    device,
    VkImageView                                 imageView,
    VkImageViewAddressPropertiesNVX*            pProperties);
#endif


#define VK_AMD_draw_indirect_count 1
#define VK_AMD_DRAW_INDIRECT_COUNT_SPEC_VERSION 2
#define VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME "VK_AMD_draw_indirect_count"
typedef void (VKAPI_PTR *PFN_vkCmdDrawIndirectCountAMD)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride);
typedef void (VKAPI_PTR *PFN_vkCmdDrawIndexedIndirectCountAMD)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCountAMD(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    deUint32                                    maxDrawCount,
    deUint32                                    stride);

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCountAMD(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    deUint32                                    maxDrawCount,
    deUint32                                    stride);
#endif


#define VK_AMD_negative_viewport_height 1
#define VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_SPEC_VERSION 1
#define VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_EXTENSION_NAME "VK_AMD_negative_viewport_height"


#define VK_AMD_gpu_shader_half_float 1
#define VK_AMD_GPU_SHADER_HALF_FLOAT_SPEC_VERSION 2
#define VK_AMD_GPU_SHADER_HALF_FLOAT_EXTENSION_NAME "VK_AMD_gpu_shader_half_float"


#define VK_AMD_shader_ballot 1
#define VK_AMD_SHADER_BALLOT_SPEC_VERSION 1
#define VK_AMD_SHADER_BALLOT_EXTENSION_NAME "VK_AMD_shader_ballot"


#define VK_AMD_texture_gather_bias_lod 1
#define VK_AMD_TEXTURE_GATHER_BIAS_LOD_SPEC_VERSION 1
#define VK_AMD_TEXTURE_GATHER_BIAS_LOD_EXTENSION_NAME "VK_AMD_texture_gather_bias_lod"
typedef struct VkTextureLODGatherFormatPropertiesAMD {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           supportsTextureGatherLODBiasAMD;
} VkTextureLODGatherFormatPropertiesAMD;



#define VK_AMD_shader_info 1
#define VK_AMD_SHADER_INFO_SPEC_VERSION   1
#define VK_AMD_SHADER_INFO_EXTENSION_NAME "VK_AMD_shader_info"

typedef enum VkShaderInfoTypeAMD {
    VK_SHADER_INFO_TYPE_STATISTICS_AMD = 0,
    VK_SHADER_INFO_TYPE_BINARY_AMD = 1,
    VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD = 2,
    VK_SHADER_INFO_TYPE_MAX_ENUM_AMD = 0x7FFFFFFF
} VkShaderInfoTypeAMD;
typedef struct VkShaderResourceUsageAMD {
    deUint32    numUsedVgprs;
    deUint32    numUsedSgprs;
    deUint32    ldsSizePerLocalWorkGroup;
    deUintptr      ldsUsageSizeInBytes;
    deUintptr      scratchMemUsageInBytes;
} VkShaderResourceUsageAMD;

typedef struct VkShaderStatisticsInfoAMD {
    VkShaderStageFlags          shaderStageMask;
    VkShaderResourceUsageAMD    resourceUsage;
    deUint32                    numPhysicalVgprs;
    deUint32                    numPhysicalSgprs;
    deUint32                    numAvailableVgprs;
    deUint32                    numAvailableSgprs;
    deUint32                    computeWorkGroupSize[3];
} VkShaderStatisticsInfoAMD;

typedef VkResult (VKAPI_PTR *PFN_vkGetShaderInfoAMD)(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, deUintptr* pInfoSize, void* pInfo);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetShaderInfoAMD(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    VkShaderStageFlagBits                       shaderStage,
    VkShaderInfoTypeAMD                         infoType,
    deUintptr*                                     pInfoSize,
    void*                                       pInfo);
#endif


#define VK_AMD_shader_image_load_store_lod 1
#define VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_SPEC_VERSION 1
#define VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_EXTENSION_NAME "VK_AMD_shader_image_load_store_lod"


#define VK_NV_corner_sampled_image 1
#define VK_NV_CORNER_SAMPLED_IMAGE_SPEC_VERSION 2
#define VK_NV_CORNER_SAMPLED_IMAGE_EXTENSION_NAME "VK_NV_corner_sampled_image"
typedef struct VkPhysicalDeviceCornerSampledImageFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           cornerSampledImage;
} VkPhysicalDeviceCornerSampledImageFeaturesNV;



#define VK_IMG_format_pvrtc 1
#define VK_IMG_FORMAT_PVRTC_SPEC_VERSION  1
#define VK_IMG_FORMAT_PVRTC_EXTENSION_NAME "VK_IMG_format_pvrtc"


#define VK_NV_external_memory_capabilities 1
#define VK_NV_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION 1
#define VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME "VK_NV_external_memory_capabilities"

typedef enum VkExternalMemoryHandleTypeFlagBitsNV {
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV = 0x00000001,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV = 0x00000002,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV = 0x00000004,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV = 0x00000008,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_FLAG_BITS_MAX_ENUM_NV = 0x7FFFFFFF
} VkExternalMemoryHandleTypeFlagBitsNV;
typedef VkFlags VkExternalMemoryHandleTypeFlagsNV;

typedef enum VkExternalMemoryFeatureFlagBitsNV {
    VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV = 0x00000001,
    VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV = 0x00000002,
    VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV = 0x00000004,
    VK_EXTERNAL_MEMORY_FEATURE_FLAG_BITS_MAX_ENUM_NV = 0x7FFFFFFF
} VkExternalMemoryFeatureFlagBitsNV;
typedef VkFlags VkExternalMemoryFeatureFlagsNV;
typedef struct VkExternalImageFormatPropertiesNV {
    VkImageFormatProperties              imageFormatProperties;
    VkExternalMemoryFeatureFlagsNV       externalMemoryFeatures;
    VkExternalMemoryHandleTypeFlagsNV    exportFromImportedHandleTypes;
    VkExternalMemoryHandleTypeFlagsNV    compatibleHandleTypes;
} VkExternalImageFormatPropertiesNV;

typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
    VkExternalImageFormatPropertiesNV*          pExternalImageFormatProperties);
#endif


#define VK_NV_external_memory 1
#define VK_NV_EXTERNAL_MEMORY_SPEC_VERSION 1
#define VK_NV_EXTERNAL_MEMORY_EXTENSION_NAME "VK_NV_external_memory"
typedef struct VkExternalMemoryImageCreateInfoNV {
    VkStructureType                      sType;
    const void*                          pNext;
    VkExternalMemoryHandleTypeFlagsNV    handleTypes;
} VkExternalMemoryImageCreateInfoNV;

typedef struct VkExportMemoryAllocateInfoNV {
    VkStructureType                      sType;
    const void*                          pNext;
    VkExternalMemoryHandleTypeFlagsNV    handleTypes;
} VkExportMemoryAllocateInfoNV;



#define VK_EXT_validation_flags 1
#define VK_EXT_VALIDATION_FLAGS_SPEC_VERSION 2
#define VK_EXT_VALIDATION_FLAGS_EXTENSION_NAME "VK_EXT_validation_flags"

typedef enum VkValidationCheckEXT {
    VK_VALIDATION_CHECK_ALL_EXT = 0,
    VK_VALIDATION_CHECK_SHADERS_EXT = 1,
    VK_VALIDATION_CHECK_MAX_ENUM_EXT = 0x7FFFFFFF
} VkValidationCheckEXT;
typedef struct VkValidationFlagsEXT {
    VkStructureType                sType;
    const void*                    pNext;
    deUint32                       disabledValidationCheckCount;
    const VkValidationCheckEXT*    pDisabledValidationChecks;
} VkValidationFlagsEXT;



#define VK_EXT_shader_subgroup_ballot 1
#define VK_EXT_SHADER_SUBGROUP_BALLOT_SPEC_VERSION 1
#define VK_EXT_SHADER_SUBGROUP_BALLOT_EXTENSION_NAME "VK_EXT_shader_subgroup_ballot"


#define VK_EXT_shader_subgroup_vote 1
#define VK_EXT_SHADER_SUBGROUP_VOTE_SPEC_VERSION 1
#define VK_EXT_SHADER_SUBGROUP_VOTE_EXTENSION_NAME "VK_EXT_shader_subgroup_vote"


#define VK_EXT_texture_compression_astc_hdr 1
#define VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_SPEC_VERSION 1
#define VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_EXTENSION_NAME "VK_EXT_texture_compression_astc_hdr"
typedef struct VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           textureCompressionASTC_HDR;
} VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT;



#define VK_EXT_astc_decode_mode 1
#define VK_EXT_ASTC_DECODE_MODE_SPEC_VERSION 1
#define VK_EXT_ASTC_DECODE_MODE_EXTENSION_NAME "VK_EXT_astc_decode_mode"
typedef struct VkImageViewASTCDecodeModeEXT {
    VkStructureType    sType;
    const void*        pNext;
    VkFormat           decodeMode;
} VkImageViewASTCDecodeModeEXT;

typedef struct VkPhysicalDeviceASTCDecodeFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           decodeModeSharedExponent;
} VkPhysicalDeviceASTCDecodeFeaturesEXT;



#define VK_EXT_conditional_rendering 1
#define VK_EXT_CONDITIONAL_RENDERING_SPEC_VERSION 2
#define VK_EXT_CONDITIONAL_RENDERING_EXTENSION_NAME "VK_EXT_conditional_rendering"

typedef enum VkConditionalRenderingFlagBitsEXT {
    VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT = 0x00000001,
    VK_CONDITIONAL_RENDERING_FLAG_BITS_MAX_ENUM_EXT = 0x7FFFFFFF
} VkConditionalRenderingFlagBitsEXT;
typedef VkFlags VkConditionalRenderingFlagsEXT;
typedef struct VkConditionalRenderingBeginInfoEXT {
    VkStructureType                   sType;
    const void*                       pNext;
    VkBuffer                          buffer;
    VkDeviceSize                      offset;
    VkConditionalRenderingFlagsEXT    flags;
} VkConditionalRenderingBeginInfoEXT;

typedef struct VkPhysicalDeviceConditionalRenderingFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           conditionalRendering;
    VkBool32           inheritedConditionalRendering;
} VkPhysicalDeviceConditionalRenderingFeaturesEXT;

typedef struct VkCommandBufferInheritanceConditionalRenderingInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    VkBool32           conditionalRenderingEnable;
} VkCommandBufferInheritanceConditionalRenderingInfoEXT;

typedef void (VKAPI_PTR *PFN_vkCmdBeginConditionalRenderingEXT)(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin);
typedef void (VKAPI_PTR *PFN_vkCmdEndConditionalRenderingEXT)(VkCommandBuffer commandBuffer);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdBeginConditionalRenderingEXT(
    VkCommandBuffer                             commandBuffer,
    const VkConditionalRenderingBeginInfoEXT*   pConditionalRenderingBegin);

VKAPI_ATTR void VKAPI_CALL vkCmdEndConditionalRenderingEXT(
    VkCommandBuffer                             commandBuffer);
#endif


#define VK_NV_clip_space_w_scaling 1
#define VK_NV_CLIP_SPACE_W_SCALING_SPEC_VERSION 1
#define VK_NV_CLIP_SPACE_W_SCALING_EXTENSION_NAME "VK_NV_clip_space_w_scaling"
typedef struct VkViewportWScalingNV {
    float    xcoeff;
    float    ycoeff;
} VkViewportWScalingNV;

typedef struct VkPipelineViewportWScalingStateCreateInfoNV {
    VkStructureType                sType;
    const void*                    pNext;
    VkBool32                       viewportWScalingEnable;
    deUint32                       viewportCount;
    const VkViewportWScalingNV*    pViewportWScalings;
} VkPipelineViewportWScalingStateCreateInfoNV;

typedef void (VKAPI_PTR *PFN_vkCmdSetViewportWScalingNV)(VkCommandBuffer commandBuffer, deUint32 firstViewport, deUint32 viewportCount, const VkViewportWScalingNV* pViewportWScalings);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWScalingNV(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    firstViewport,
    deUint32                                    viewportCount,
    const VkViewportWScalingNV*                 pViewportWScalings);
#endif


#define VK_EXT_direct_mode_display 1
#define VK_EXT_DIRECT_MODE_DISPLAY_SPEC_VERSION 1
#define VK_EXT_DIRECT_MODE_DISPLAY_EXTENSION_NAME "VK_EXT_direct_mode_display"
typedef VkResult (VKAPI_PTR *PFN_vkReleaseDisplayEXT)(VkPhysicalDevice physicalDevice, VkDisplayKHR display);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkReleaseDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display);
#endif


#define VK_EXT_display_surface_counter 1
#define VK_EXT_DISPLAY_SURFACE_COUNTER_SPEC_VERSION 1
#define VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME "VK_EXT_display_surface_counter"

typedef enum VkSurfaceCounterFlagBitsEXT {
    VK_SURFACE_COUNTER_VBLANK_BIT_EXT = 0x00000001,
    VK_SURFACE_COUNTER_VBLANK_EXT = VK_SURFACE_COUNTER_VBLANK_BIT_EXT,
    VK_SURFACE_COUNTER_FLAG_BITS_MAX_ENUM_EXT = 0x7FFFFFFF
} VkSurfaceCounterFlagBitsEXT;
typedef VkFlags VkSurfaceCounterFlagsEXT;
typedef struct VkSurfaceCapabilities2EXT {
    VkStructureType                  sType;
    void*                            pNext;
    deUint32                         minImageCount;
    deUint32                         maxImageCount;
    VkExtent2D                       currentExtent;
    VkExtent2D                       minImageExtent;
    VkExtent2D                       maxImageExtent;
    deUint32                         maxImageArrayLayers;
    VkSurfaceTransformFlagsKHR       supportedTransforms;
    VkSurfaceTransformFlagBitsKHR    currentTransform;
    VkCompositeAlphaFlagsKHR         supportedCompositeAlpha;
    VkImageUsageFlags                supportedUsageFlags;
    VkSurfaceCounterFlagsEXT         supportedSurfaceCounters;
} VkSurfaceCapabilities2EXT;

typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilities2EXT*                  pSurfaceCapabilities);
#endif


#define VK_EXT_display_control 1
#define VK_EXT_DISPLAY_CONTROL_SPEC_VERSION 1
#define VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME "VK_EXT_display_control"

typedef enum VkDisplayPowerStateEXT {
    VK_DISPLAY_POWER_STATE_OFF_EXT = 0,
    VK_DISPLAY_POWER_STATE_SUSPEND_EXT = 1,
    VK_DISPLAY_POWER_STATE_ON_EXT = 2,
    VK_DISPLAY_POWER_STATE_MAX_ENUM_EXT = 0x7FFFFFFF
} VkDisplayPowerStateEXT;

typedef enum VkDeviceEventTypeEXT {
    VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT = 0,
    VK_DEVICE_EVENT_TYPE_MAX_ENUM_EXT = 0x7FFFFFFF
} VkDeviceEventTypeEXT;

typedef enum VkDisplayEventTypeEXT {
    VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT = 0,
    VK_DISPLAY_EVENT_TYPE_MAX_ENUM_EXT = 0x7FFFFFFF
} VkDisplayEventTypeEXT;
typedef struct VkDisplayPowerInfoEXT {
    VkStructureType           sType;
    const void*               pNext;
    VkDisplayPowerStateEXT    powerState;
} VkDisplayPowerInfoEXT;

typedef struct VkDeviceEventInfoEXT {
    VkStructureType         sType;
    const void*             pNext;
    VkDeviceEventTypeEXT    deviceEvent;
} VkDeviceEventInfoEXT;

typedef struct VkDisplayEventInfoEXT {
    VkStructureType          sType;
    const void*              pNext;
    VkDisplayEventTypeEXT    displayEvent;
} VkDisplayEventInfoEXT;

typedef struct VkSwapchainCounterCreateInfoEXT {
    VkStructureType             sType;
    const void*                 pNext;
    VkSurfaceCounterFlagsEXT    surfaceCounters;
} VkSwapchainCounterCreateInfoEXT;

typedef VkResult (VKAPI_PTR *PFN_vkDisplayPowerControlEXT)(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo);
typedef VkResult (VKAPI_PTR *PFN_vkRegisterDeviceEventEXT)(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
typedef VkResult (VKAPI_PTR *PFN_vkRegisterDisplayEventEXT)(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
typedef VkResult (VKAPI_PTR *PFN_vkGetSwapchainCounterEXT)(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, deUint64* pCounterValue);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkDisplayPowerControlEXT(
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayPowerInfoEXT*                pDisplayPowerInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkRegisterDeviceEventEXT(
    VkDevice                                    device,
    const VkDeviceEventInfoEXT*                 pDeviceEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);

VKAPI_ATTR VkResult VKAPI_CALL vkRegisterDisplayEventEXT(
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayEventInfoEXT*                pDisplayEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);

VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainCounterEXT(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    deUint64*                                   pCounterValue);
#endif


#define VK_GOOGLE_display_timing 1
#define VK_GOOGLE_DISPLAY_TIMING_SPEC_VERSION 1
#define VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME "VK_GOOGLE_display_timing"
typedef struct VkRefreshCycleDurationGOOGLE {
    deUint64    refreshDuration;
} VkRefreshCycleDurationGOOGLE;

typedef struct VkPastPresentationTimingGOOGLE {
    deUint32    presentID;
    deUint64    desiredPresentTime;
    deUint64    actualPresentTime;
    deUint64    earliestPresentTime;
    deUint64    presentMargin;
} VkPastPresentationTimingGOOGLE;

typedef struct VkPresentTimeGOOGLE {
    deUint32    presentID;
    deUint64    desiredPresentTime;
} VkPresentTimeGOOGLE;

typedef struct VkPresentTimesInfoGOOGLE {
    VkStructureType               sType;
    const void*                   pNext;
    deUint32                      swapchainCount;
    const VkPresentTimeGOOGLE*    pTimes;
} VkPresentTimesInfoGOOGLE;

typedef VkResult (VKAPI_PTR *PFN_vkGetRefreshCycleDurationGOOGLE)(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties);
typedef VkResult (VKAPI_PTR *PFN_vkGetPastPresentationTimingGOOGLE)(VkDevice device, VkSwapchainKHR swapchain, deUint32* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetRefreshCycleDurationGOOGLE(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    VkRefreshCycleDurationGOOGLE*               pDisplayTimingProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPastPresentationTimingGOOGLE(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    deUint32*                                   pPresentationTimingCount,
    VkPastPresentationTimingGOOGLE*             pPresentationTimings);
#endif


#define VK_NV_sample_mask_override_coverage 1
#define VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_SPEC_VERSION 1
#define VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_EXTENSION_NAME "VK_NV_sample_mask_override_coverage"


#define VK_NV_geometry_shader_passthrough 1
#define VK_NV_GEOMETRY_SHADER_PASSTHROUGH_SPEC_VERSION 1
#define VK_NV_GEOMETRY_SHADER_PASSTHROUGH_EXTENSION_NAME "VK_NV_geometry_shader_passthrough"


#define VK_NV_viewport_array2 1
#define VK_NV_VIEWPORT_ARRAY2_SPEC_VERSION 1
#define VK_NV_VIEWPORT_ARRAY2_EXTENSION_NAME "VK_NV_viewport_array2"


#define VK_NVX_multiview_per_view_attributes 1
#define VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_SPEC_VERSION 1
#define VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME "VK_NVX_multiview_per_view_attributes"
typedef struct VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           perViewPositionAllComponents;
} VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;



#define VK_NV_viewport_swizzle 1
#define VK_NV_VIEWPORT_SWIZZLE_SPEC_VERSION 1
#define VK_NV_VIEWPORT_SWIZZLE_EXTENSION_NAME "VK_NV_viewport_swizzle"

typedef enum VkViewportCoordinateSwizzleNV {
    VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV = 0,
    VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV = 1,
    VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV = 2,
    VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV = 3,
    VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV = 4,
    VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV = 5,
    VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV = 6,
    VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV = 7,
    VK_VIEWPORT_COORDINATE_SWIZZLE_MAX_ENUM_NV = 0x7FFFFFFF
} VkViewportCoordinateSwizzleNV;
typedef VkFlags VkPipelineViewportSwizzleStateCreateFlagsNV;
typedef struct VkViewportSwizzleNV {
    VkViewportCoordinateSwizzleNV    x;
    VkViewportCoordinateSwizzleNV    y;
    VkViewportCoordinateSwizzleNV    z;
    VkViewportCoordinateSwizzleNV    w;
} VkViewportSwizzleNV;

typedef struct VkPipelineViewportSwizzleStateCreateInfoNV {
    VkStructureType                                sType;
    const void*                                    pNext;
    VkPipelineViewportSwizzleStateCreateFlagsNV    flags;
    deUint32                                       viewportCount;
    const VkViewportSwizzleNV*                     pViewportSwizzles;
} VkPipelineViewportSwizzleStateCreateInfoNV;



#define VK_EXT_discard_rectangles 1
#define VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION 1
#define VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME "VK_EXT_discard_rectangles"

typedef enum VkDiscardRectangleModeEXT {
    VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT = 0,
    VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT = 1,
    VK_DISCARD_RECTANGLE_MODE_MAX_ENUM_EXT = 0x7FFFFFFF
} VkDiscardRectangleModeEXT;
typedef VkFlags VkPipelineDiscardRectangleStateCreateFlagsEXT;
typedef struct VkPhysicalDeviceDiscardRectanglePropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxDiscardRectangles;
} VkPhysicalDeviceDiscardRectanglePropertiesEXT;

typedef struct VkPipelineDiscardRectangleStateCreateInfoEXT {
    VkStructureType                                  sType;
    const void*                                      pNext;
    VkPipelineDiscardRectangleStateCreateFlagsEXT    flags;
    VkDiscardRectangleModeEXT                        discardRectangleMode;
    deUint32                                         discardRectangleCount;
    const VkRect2D*                                  pDiscardRectangles;
} VkPipelineDiscardRectangleStateCreateInfoEXT;

typedef void (VKAPI_PTR *PFN_vkCmdSetDiscardRectangleEXT)(VkCommandBuffer commandBuffer, deUint32 firstDiscardRectangle, deUint32 discardRectangleCount, const VkRect2D* pDiscardRectangles);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdSetDiscardRectangleEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    firstDiscardRectangle,
    deUint32                                    discardRectangleCount,
    const VkRect2D*                             pDiscardRectangles);
#endif


#define VK_EXT_conservative_rasterization 1
#define VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION 1
#define VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME "VK_EXT_conservative_rasterization"

typedef enum VkConservativeRasterizationModeEXT {
    VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT = 0,
    VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT = 1,
    VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT = 2,
    VK_CONSERVATIVE_RASTERIZATION_MODE_MAX_ENUM_EXT = 0x7FFFFFFF
} VkConservativeRasterizationModeEXT;
typedef VkFlags VkPipelineRasterizationConservativeStateCreateFlagsEXT;
typedef struct VkPhysicalDeviceConservativeRasterizationPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    float              primitiveOverestimationSize;
    float              maxExtraPrimitiveOverestimationSize;
    float              extraPrimitiveOverestimationSizeGranularity;
    VkBool32           primitiveUnderestimation;
    VkBool32           conservativePointAndLineRasterization;
    VkBool32           degenerateTrianglesRasterized;
    VkBool32           degenerateLinesRasterized;
    VkBool32           fullyCoveredFragmentShaderInputVariable;
    VkBool32           conservativeRasterizationPostDepthCoverage;
} VkPhysicalDeviceConservativeRasterizationPropertiesEXT;

typedef struct VkPipelineRasterizationConservativeStateCreateInfoEXT {
    VkStructureType                                           sType;
    const void*                                               pNext;
    VkPipelineRasterizationConservativeStateCreateFlagsEXT    flags;
    VkConservativeRasterizationModeEXT                        conservativeRasterizationMode;
    float                                                     extraPrimitiveOverestimationSize;
} VkPipelineRasterizationConservativeStateCreateInfoEXT;



#define VK_EXT_depth_clip_enable 1
#define VK_EXT_DEPTH_CLIP_ENABLE_SPEC_VERSION 1
#define VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME "VK_EXT_depth_clip_enable"
typedef VkFlags VkPipelineRasterizationDepthClipStateCreateFlagsEXT;
typedef struct VkPhysicalDeviceDepthClipEnableFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           depthClipEnable;
} VkPhysicalDeviceDepthClipEnableFeaturesEXT;

typedef struct VkPipelineRasterizationDepthClipStateCreateInfoEXT {
    VkStructureType                                        sType;
    const void*                                            pNext;
    VkPipelineRasterizationDepthClipStateCreateFlagsEXT    flags;
    VkBool32                                               depthClipEnable;
} VkPipelineRasterizationDepthClipStateCreateInfoEXT;



#define VK_EXT_swapchain_colorspace 1
#define VK_EXT_SWAPCHAIN_COLOR_SPACE_SPEC_VERSION 4
#define VK_EXT_SWAPCHAIN_COLOR_SPACE_EXTENSION_NAME "VK_EXT_swapchain_colorspace"


#define VK_EXT_hdr_metadata 1
#define VK_EXT_HDR_METADATA_SPEC_VERSION  2
#define VK_EXT_HDR_METADATA_EXTENSION_NAME "VK_EXT_hdr_metadata"
typedef struct VkXYColorEXT {
    float    x;
    float    y;
} VkXYColorEXT;

typedef struct VkHdrMetadataEXT {
    VkStructureType    sType;
    const void*        pNext;
    VkXYColorEXT       displayPrimaryRed;
    VkXYColorEXT       displayPrimaryGreen;
    VkXYColorEXT       displayPrimaryBlue;
    VkXYColorEXT       whitePoint;
    float              maxLuminance;
    float              minLuminance;
    float              maxContentLightLevel;
    float              maxFrameAverageLightLevel;
} VkHdrMetadataEXT;

typedef void (VKAPI_PTR *PFN_vkSetHdrMetadataEXT)(VkDevice device, deUint32 swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkSetHdrMetadataEXT(
    VkDevice                                    device,
    deUint32                                    swapchainCount,
    const VkSwapchainKHR*                       pSwapchains,
    const VkHdrMetadataEXT*                     pMetadata);
#endif


#define VK_EXT_external_memory_dma_buf 1
#define VK_EXT_EXTERNAL_MEMORY_DMA_BUF_SPEC_VERSION 1
#define VK_EXT_EXTERNAL_MEMORY_DMA_BUF_EXTENSION_NAME "VK_EXT_external_memory_dma_buf"


#define VK_EXT_queue_family_foreign 1
#define VK_EXT_QUEUE_FAMILY_FOREIGN_SPEC_VERSION 1
#define VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME "VK_EXT_queue_family_foreign"
#define VK_QUEUE_FAMILY_FOREIGN_EXT       (~2U)


#define VK_EXT_debug_utils 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDebugUtilsMessengerEXT)
#define VK_EXT_DEBUG_UTILS_SPEC_VERSION   2
#define VK_EXT_DEBUG_UTILS_EXTENSION_NAME "VK_EXT_debug_utils"
typedef VkFlags VkDebugUtilsMessengerCallbackDataFlagsEXT;

typedef enum VkDebugUtilsMessageSeverityFlagBitsEXT {
    VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT = 0x00000001,
    VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT = 0x00000010,
    VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT = 0x00000100,
    VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT = 0x00001000,
    VK_DEBUG_UTILS_MESSAGE_SEVERITY_FLAG_BITS_MAX_ENUM_EXT = 0x7FFFFFFF
} VkDebugUtilsMessageSeverityFlagBitsEXT;

typedef enum VkDebugUtilsMessageTypeFlagBitsEXT {
    VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT = 0x00000001,
    VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT = 0x00000002,
    VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT = 0x00000004,
    VK_DEBUG_UTILS_MESSAGE_TYPE_FLAG_BITS_MAX_ENUM_EXT = 0x7FFFFFFF
} VkDebugUtilsMessageTypeFlagBitsEXT;
typedef VkFlags VkDebugUtilsMessageTypeFlagsEXT;
typedef VkFlags VkDebugUtilsMessageSeverityFlagsEXT;
typedef VkFlags VkDebugUtilsMessengerCreateFlagsEXT;
typedef struct VkDebugUtilsLabelEXT {
    VkStructureType    sType;
    const void*        pNext;
    const char*        pLabelName;
    float              color[4];
} VkDebugUtilsLabelEXT;

typedef struct VkDebugUtilsObjectNameInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    VkObjectType       objectType;
    deUint64           objectHandle;
    const char*        pObjectName;
} VkDebugUtilsObjectNameInfoEXT;

typedef struct VkDebugUtilsMessengerCallbackDataEXT {
    VkStructureType                              sType;
    const void*                                  pNext;
    VkDebugUtilsMessengerCallbackDataFlagsEXT    flags;
    const char*                                  pMessageIdName;
    deInt32                                      messageIdNumber;
    const char*                                  pMessage;
    deUint32                                     queueLabelCount;
    const VkDebugUtilsLabelEXT*                  pQueueLabels;
    deUint32                                     cmdBufLabelCount;
    const VkDebugUtilsLabelEXT*                  pCmdBufLabels;
    deUint32                                     objectCount;
    const VkDebugUtilsObjectNameInfoEXT*         pObjects;
} VkDebugUtilsMessengerCallbackDataEXT;

typedef VkBool32 (VKAPI_PTR *PFN_vkDebugUtilsMessengerCallbackEXT)(
    VkDebugUtilsMessageSeverityFlagBitsEXT           messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT                  messageTypes,
    const VkDebugUtilsMessengerCallbackDataEXT*      pCallbackData,
    void*                                            pUserData);

typedef struct VkDebugUtilsMessengerCreateInfoEXT {
    VkStructureType                         sType;
    const void*                             pNext;
    VkDebugUtilsMessengerCreateFlagsEXT     flags;
    VkDebugUtilsMessageSeverityFlagsEXT     messageSeverity;
    VkDebugUtilsMessageTypeFlagsEXT         messageType;
    PFN_vkDebugUtilsMessengerCallbackEXT    pfnUserCallback;
    void*                                   pUserData;
} VkDebugUtilsMessengerCreateInfoEXT;

typedef struct VkDebugUtilsObjectTagInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    VkObjectType       objectType;
    deUint64           objectHandle;
    deUint64           tagName;
    deUintptr             tagSize;
    const void*        pTag;
} VkDebugUtilsObjectTagInfoEXT;

typedef VkResult (VKAPI_PTR *PFN_vkSetDebugUtilsObjectNameEXT)(VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo);
typedef VkResult (VKAPI_PTR *PFN_vkSetDebugUtilsObjectTagEXT)(VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo);
typedef void (VKAPI_PTR *PFN_vkQueueBeginDebugUtilsLabelEXT)(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo);
typedef void (VKAPI_PTR *PFN_vkQueueEndDebugUtilsLabelEXT)(VkQueue queue);
typedef void (VKAPI_PTR *PFN_vkQueueInsertDebugUtilsLabelEXT)(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo);
typedef void (VKAPI_PTR *PFN_vkCmdBeginDebugUtilsLabelEXT)(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
typedef void (VKAPI_PTR *PFN_vkCmdEndDebugUtilsLabelEXT)(VkCommandBuffer commandBuffer);
typedef void (VKAPI_PTR *PFN_vkCmdInsertDebugUtilsLabelEXT)(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
typedef VkResult (VKAPI_PTR *PFN_vkCreateDebugUtilsMessengerEXT)(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger);
typedef void (VKAPI_PTR *PFN_vkDestroyDebugUtilsMessengerEXT)(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator);
typedef void (VKAPI_PTR *PFN_vkSubmitDebugUtilsMessageEXT)(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkSetDebugUtilsObjectNameEXT(
    VkDevice                                    device,
    const VkDebugUtilsObjectNameInfoEXT*        pNameInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkSetDebugUtilsObjectTagEXT(
    VkDevice                                    device,
    const VkDebugUtilsObjectTagInfoEXT*         pTagInfo);

VKAPI_ATTR void VKAPI_CALL vkQueueBeginDebugUtilsLabelEXT(
    VkQueue                                     queue,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);

VKAPI_ATTR void VKAPI_CALL vkQueueEndDebugUtilsLabelEXT(
    VkQueue                                     queue);

VKAPI_ATTR void VKAPI_CALL vkQueueInsertDebugUtilsLabelEXT(
    VkQueue                                     queue,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdBeginDebugUtilsLabelEXT(
    VkCommandBuffer                             commandBuffer,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdEndDebugUtilsLabelEXT(
    VkCommandBuffer                             commandBuffer);

VKAPI_ATTR void VKAPI_CALL vkCmdInsertDebugUtilsLabelEXT(
    VkCommandBuffer                             commandBuffer,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDebugUtilsMessengerEXT(
    VkInstance                                  instance,
    const VkDebugUtilsMessengerCreateInfoEXT*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDebugUtilsMessengerEXT*                   pMessenger);

VKAPI_ATTR void VKAPI_CALL vkDestroyDebugUtilsMessengerEXT(
    VkInstance                                  instance,
    VkDebugUtilsMessengerEXT                    messenger,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR void VKAPI_CALL vkSubmitDebugUtilsMessageEXT(
    VkInstance                                  instance,
    VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
    const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData);
#endif


#define VK_EXT_sampler_filter_minmax 1
#define VK_EXT_SAMPLER_FILTER_MINMAX_SPEC_VERSION 2
#define VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME "VK_EXT_sampler_filter_minmax"
typedef VkSamplerReductionMode VkSamplerReductionModeEXT;

typedef VkSamplerReductionModeCreateInfo VkSamplerReductionModeCreateInfoEXT;

typedef VkPhysicalDeviceSamplerFilterMinmaxProperties VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT;



#define VK_AMD_gpu_shader_int16 1
#define VK_AMD_GPU_SHADER_INT16_SPEC_VERSION 2
#define VK_AMD_GPU_SHADER_INT16_EXTENSION_NAME "VK_AMD_gpu_shader_int16"


#define VK_AMD_mixed_attachment_samples 1
#define VK_AMD_MIXED_ATTACHMENT_SAMPLES_SPEC_VERSION 1
#define VK_AMD_MIXED_ATTACHMENT_SAMPLES_EXTENSION_NAME "VK_AMD_mixed_attachment_samples"


#define VK_AMD_shader_fragment_mask 1
#define VK_AMD_SHADER_FRAGMENT_MASK_SPEC_VERSION 1
#define VK_AMD_SHADER_FRAGMENT_MASK_EXTENSION_NAME "VK_AMD_shader_fragment_mask"


#define VK_EXT_inline_uniform_block 1
#define VK_EXT_INLINE_UNIFORM_BLOCK_SPEC_VERSION 1
#define VK_EXT_INLINE_UNIFORM_BLOCK_EXTENSION_NAME "VK_EXT_inline_uniform_block"
typedef struct VkPhysicalDeviceInlineUniformBlockFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           inlineUniformBlock;
    VkBool32           descriptorBindingInlineUniformBlockUpdateAfterBind;
} VkPhysicalDeviceInlineUniformBlockFeaturesEXT;

typedef struct VkPhysicalDeviceInlineUniformBlockPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxInlineUniformBlockSize;
    deUint32           maxPerStageDescriptorInlineUniformBlocks;
    deUint32           maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    deUint32           maxDescriptorSetInlineUniformBlocks;
    deUint32           maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
} VkPhysicalDeviceInlineUniformBlockPropertiesEXT;

typedef struct VkWriteDescriptorSetInlineUniformBlockEXT {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           dataSize;
    const void*        pData;
} VkWriteDescriptorSetInlineUniformBlockEXT;

typedef struct VkDescriptorPoolInlineUniformBlockCreateInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           maxInlineUniformBlockBindings;
} VkDescriptorPoolInlineUniformBlockCreateInfoEXT;



#define VK_EXT_shader_stencil_export 1
#define VK_EXT_SHADER_STENCIL_EXPORT_SPEC_VERSION 1
#define VK_EXT_SHADER_STENCIL_EXPORT_EXTENSION_NAME "VK_EXT_shader_stencil_export"


#define VK_EXT_sample_locations 1
#define VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION 1
#define VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME "VK_EXT_sample_locations"
typedef struct VkSampleLocationEXT {
    float    x;
    float    y;
} VkSampleLocationEXT;

typedef struct VkSampleLocationsInfoEXT {
    VkStructureType               sType;
    const void*                   pNext;
    VkSampleCountFlagBits         sampleLocationsPerPixel;
    VkExtent2D                    sampleLocationGridSize;
    deUint32                      sampleLocationsCount;
    const VkSampleLocationEXT*    pSampleLocations;
} VkSampleLocationsInfoEXT;

typedef struct VkAttachmentSampleLocationsEXT {
    deUint32                    attachmentIndex;
    VkSampleLocationsInfoEXT    sampleLocationsInfo;
} VkAttachmentSampleLocationsEXT;

typedef struct VkSubpassSampleLocationsEXT {
    deUint32                    subpassIndex;
    VkSampleLocationsInfoEXT    sampleLocationsInfo;
} VkSubpassSampleLocationsEXT;

typedef struct VkRenderPassSampleLocationsBeginInfoEXT {
    VkStructureType                          sType;
    const void*                              pNext;
    deUint32                                 attachmentInitialSampleLocationsCount;
    const VkAttachmentSampleLocationsEXT*    pAttachmentInitialSampleLocations;
    deUint32                                 postSubpassSampleLocationsCount;
    const VkSubpassSampleLocationsEXT*       pPostSubpassSampleLocations;
} VkRenderPassSampleLocationsBeginInfoEXT;

typedef struct VkPipelineSampleLocationsStateCreateInfoEXT {
    VkStructureType             sType;
    const void*                 pNext;
    VkBool32                    sampleLocationsEnable;
    VkSampleLocationsInfoEXT    sampleLocationsInfo;
} VkPipelineSampleLocationsStateCreateInfoEXT;

typedef struct VkPhysicalDeviceSampleLocationsPropertiesEXT {
    VkStructureType       sType;
    void*                 pNext;
    VkSampleCountFlags    sampleLocationSampleCounts;
    VkExtent2D            maxSampleLocationGridSize;
    float                 sampleLocationCoordinateRange[2];
    deUint32              sampleLocationSubPixelBits;
    VkBool32              variableSampleLocations;
} VkPhysicalDeviceSampleLocationsPropertiesEXT;

typedef struct VkMultisamplePropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkExtent2D         maxSampleLocationGridSize;
} VkMultisamplePropertiesEXT;

typedef void (VKAPI_PTR *PFN_vkCmdSetSampleLocationsEXT)(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdSetSampleLocationsEXT(
    VkCommandBuffer                             commandBuffer,
    const VkSampleLocationsInfoEXT*             pSampleLocationsInfo);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMultisamplePropertiesEXT(
    VkPhysicalDevice                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    VkMultisamplePropertiesEXT*                 pMultisampleProperties);
#endif


#define VK_EXT_blend_operation_advanced 1
#define VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION 2
#define VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME "VK_EXT_blend_operation_advanced"

typedef enum VkBlendOverlapEXT {
    VK_BLEND_OVERLAP_UNCORRELATED_EXT = 0,
    VK_BLEND_OVERLAP_DISJOINT_EXT = 1,
    VK_BLEND_OVERLAP_CONJOINT_EXT = 2,
    VK_BLEND_OVERLAP_MAX_ENUM_EXT = 0x7FFFFFFF
} VkBlendOverlapEXT;
typedef struct VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           advancedBlendCoherentOperations;
} VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;

typedef struct VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           advancedBlendMaxColorAttachments;
    VkBool32           advancedBlendIndependentBlend;
    VkBool32           advancedBlendNonPremultipliedSrcColor;
    VkBool32           advancedBlendNonPremultipliedDstColor;
    VkBool32           advancedBlendCorrelatedOverlap;
    VkBool32           advancedBlendAllOperations;
} VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT;

typedef struct VkPipelineColorBlendAdvancedStateCreateInfoEXT {
    VkStructureType      sType;
    const void*          pNext;
    VkBool32             srcPremultiplied;
    VkBool32             dstPremultiplied;
    VkBlendOverlapEXT    blendOverlap;
} VkPipelineColorBlendAdvancedStateCreateInfoEXT;



#define VK_NV_fragment_coverage_to_color 1
#define VK_NV_FRAGMENT_COVERAGE_TO_COLOR_SPEC_VERSION 1
#define VK_NV_FRAGMENT_COVERAGE_TO_COLOR_EXTENSION_NAME "VK_NV_fragment_coverage_to_color"
typedef VkFlags VkPipelineCoverageToColorStateCreateFlagsNV;
typedef struct VkPipelineCoverageToColorStateCreateInfoNV {
    VkStructureType                                sType;
    const void*                                    pNext;
    VkPipelineCoverageToColorStateCreateFlagsNV    flags;
    VkBool32                                       coverageToColorEnable;
    deUint32                                       coverageToColorLocation;
} VkPipelineCoverageToColorStateCreateInfoNV;



#define VK_NV_framebuffer_mixed_samples 1
#define VK_NV_FRAMEBUFFER_MIXED_SAMPLES_SPEC_VERSION 1
#define VK_NV_FRAMEBUFFER_MIXED_SAMPLES_EXTENSION_NAME "VK_NV_framebuffer_mixed_samples"

typedef enum VkCoverageModulationModeNV {
    VK_COVERAGE_MODULATION_MODE_NONE_NV = 0,
    VK_COVERAGE_MODULATION_MODE_RGB_NV = 1,
    VK_COVERAGE_MODULATION_MODE_ALPHA_NV = 2,
    VK_COVERAGE_MODULATION_MODE_RGBA_NV = 3,
    VK_COVERAGE_MODULATION_MODE_MAX_ENUM_NV = 0x7FFFFFFF
} VkCoverageModulationModeNV;
typedef VkFlags VkPipelineCoverageModulationStateCreateFlagsNV;
typedef struct VkPipelineCoverageModulationStateCreateInfoNV {
    VkStructureType                                   sType;
    const void*                                       pNext;
    VkPipelineCoverageModulationStateCreateFlagsNV    flags;
    VkCoverageModulationModeNV                        coverageModulationMode;
    VkBool32                                          coverageModulationTableEnable;
    deUint32                                          coverageModulationTableCount;
    const float*                                      pCoverageModulationTable;
} VkPipelineCoverageModulationStateCreateInfoNV;



#define VK_NV_fill_rectangle 1
#define VK_NV_FILL_RECTANGLE_SPEC_VERSION 1
#define VK_NV_FILL_RECTANGLE_EXTENSION_NAME "VK_NV_fill_rectangle"


#define VK_NV_shader_sm_builtins 1
#define VK_NV_SHADER_SM_BUILTINS_SPEC_VERSION 1
#define VK_NV_SHADER_SM_BUILTINS_EXTENSION_NAME "VK_NV_shader_sm_builtins"
typedef struct VkPhysicalDeviceShaderSMBuiltinsPropertiesNV {
    VkStructureType    sType;
    void*              pNext;
    deUint32           shaderSMCount;
    deUint32           shaderWarpsPerSM;
} VkPhysicalDeviceShaderSMBuiltinsPropertiesNV;

typedef struct VkPhysicalDeviceShaderSMBuiltinsFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderSMBuiltins;
} VkPhysicalDeviceShaderSMBuiltinsFeaturesNV;



#define VK_EXT_post_depth_coverage 1
#define VK_EXT_POST_DEPTH_COVERAGE_SPEC_VERSION 1
#define VK_EXT_POST_DEPTH_COVERAGE_EXTENSION_NAME "VK_EXT_post_depth_coverage"


#define VK_EXT_image_drm_format_modifier 1
#define VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_SPEC_VERSION 1
#define VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_EXTENSION_NAME "VK_EXT_image_drm_format_modifier"
typedef struct VkDrmFormatModifierPropertiesEXT {
    deUint64                drmFormatModifier;
    deUint32                drmFormatModifierPlaneCount;
    VkFormatFeatureFlags    drmFormatModifierTilingFeatures;
} VkDrmFormatModifierPropertiesEXT;

typedef struct VkDrmFormatModifierPropertiesListEXT {
    VkStructureType                      sType;
    void*                                pNext;
    deUint32                             drmFormatModifierCount;
    VkDrmFormatModifierPropertiesEXT*    pDrmFormatModifierProperties;
} VkDrmFormatModifierPropertiesListEXT;

typedef struct VkPhysicalDeviceImageDrmFormatModifierInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    deUint64           drmFormatModifier;
    VkSharingMode      sharingMode;
    deUint32           queueFamilyIndexCount;
    const deUint32*    pQueueFamilyIndices;
} VkPhysicalDeviceImageDrmFormatModifierInfoEXT;

typedef struct VkImageDrmFormatModifierListCreateInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           drmFormatModifierCount;
    const deUint64*    pDrmFormatModifiers;
} VkImageDrmFormatModifierListCreateInfoEXT;

typedef struct VkImageDrmFormatModifierExplicitCreateInfoEXT {
    VkStructureType               sType;
    const void*                   pNext;
    deUint64                      drmFormatModifier;
    deUint32                      drmFormatModifierPlaneCount;
    const VkSubresourceLayout*    pPlaneLayouts;
} VkImageDrmFormatModifierExplicitCreateInfoEXT;

typedef struct VkImageDrmFormatModifierPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint64           drmFormatModifier;
} VkImageDrmFormatModifierPropertiesEXT;

typedef VkResult (VKAPI_PTR *PFN_vkGetImageDrmFormatModifierPropertiesEXT)(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetImageDrmFormatModifierPropertiesEXT(
    VkDevice                                    device,
    VkImage                                     image,
    VkImageDrmFormatModifierPropertiesEXT*      pProperties);
#endif


#define VK_EXT_validation_cache 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkValidationCacheEXT)
#define VK_EXT_VALIDATION_CACHE_SPEC_VERSION 1
#define VK_EXT_VALIDATION_CACHE_EXTENSION_NAME "VK_EXT_validation_cache"

typedef enum VkValidationCacheHeaderVersionEXT {
    VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT = 1,
    VK_VALIDATION_CACHE_HEADER_VERSION_MAX_ENUM_EXT = 0x7FFFFFFF
} VkValidationCacheHeaderVersionEXT;
typedef VkFlags VkValidationCacheCreateFlagsEXT;
typedef struct VkValidationCacheCreateInfoEXT {
    VkStructureType                    sType;
    const void*                        pNext;
    VkValidationCacheCreateFlagsEXT    flags;
    deUintptr                             initialDataSize;
    const void*                        pInitialData;
} VkValidationCacheCreateInfoEXT;

typedef struct VkShaderModuleValidationCacheCreateInfoEXT {
    VkStructureType         sType;
    const void*             pNext;
    VkValidationCacheEXT    validationCache;
} VkShaderModuleValidationCacheCreateInfoEXT;

typedef VkResult (VKAPI_PTR *PFN_vkCreateValidationCacheEXT)(VkDevice device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache);
typedef void (VKAPI_PTR *PFN_vkDestroyValidationCacheEXT)(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkMergeValidationCachesEXT)(VkDevice device, VkValidationCacheEXT dstCache, deUint32 srcCacheCount, const VkValidationCacheEXT* pSrcCaches);
typedef VkResult (VKAPI_PTR *PFN_vkGetValidationCacheDataEXT)(VkDevice device, VkValidationCacheEXT validationCache, deUintptr* pDataSize, void* pData);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateValidationCacheEXT(
    VkDevice                                    device,
    const VkValidationCacheCreateInfoEXT*       pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkValidationCacheEXT*                       pValidationCache);

VKAPI_ATTR void VKAPI_CALL vkDestroyValidationCacheEXT(
    VkDevice                                    device,
    VkValidationCacheEXT                        validationCache,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkMergeValidationCachesEXT(
    VkDevice                                    device,
    VkValidationCacheEXT                        dstCache,
    deUint32                                    srcCacheCount,
    const VkValidationCacheEXT*                 pSrcCaches);

VKAPI_ATTR VkResult VKAPI_CALL vkGetValidationCacheDataEXT(
    VkDevice                                    device,
    VkValidationCacheEXT                        validationCache,
    deUintptr*                                     pDataSize,
    void*                                       pData);
#endif


#define VK_EXT_descriptor_indexing 1
#define VK_EXT_DESCRIPTOR_INDEXING_SPEC_VERSION 2
#define VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME "VK_EXT_descriptor_indexing"
typedef VkDescriptorBindingFlagBits VkDescriptorBindingFlagBitsEXT;

typedef VkDescriptorBindingFlags VkDescriptorBindingFlagsEXT;

typedef VkDescriptorSetLayoutBindingFlagsCreateInfo VkDescriptorSetLayoutBindingFlagsCreateInfoEXT;

typedef VkPhysicalDeviceDescriptorIndexingFeatures VkPhysicalDeviceDescriptorIndexingFeaturesEXT;

typedef VkPhysicalDeviceDescriptorIndexingProperties VkPhysicalDeviceDescriptorIndexingPropertiesEXT;

typedef VkDescriptorSetVariableDescriptorCountAllocateInfo VkDescriptorSetVariableDescriptorCountAllocateInfoEXT;

typedef VkDescriptorSetVariableDescriptorCountLayoutSupport VkDescriptorSetVariableDescriptorCountLayoutSupportEXT;



#define VK_EXT_shader_viewport_index_layer 1
#define VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_SPEC_VERSION 1
#define VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_EXTENSION_NAME "VK_EXT_shader_viewport_index_layer"


#define VK_NV_shading_rate_image 1
#define VK_NV_SHADING_RATE_IMAGE_SPEC_VERSION 3
#define VK_NV_SHADING_RATE_IMAGE_EXTENSION_NAME "VK_NV_shading_rate_image"

typedef enum VkShadingRatePaletteEntryNV {
    VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV = 0,
    VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV = 1,
    VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV = 2,
    VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV = 3,
    VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV = 4,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV = 5,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV = 6,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV = 7,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV = 8,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV = 9,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV = 10,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV = 11,
    VK_SHADING_RATE_PALETTE_ENTRY_MAX_ENUM_NV = 0x7FFFFFFF
} VkShadingRatePaletteEntryNV;

typedef enum VkCoarseSampleOrderTypeNV {
    VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV = 0,
    VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV = 1,
    VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV = 2,
    VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV = 3,
    VK_COARSE_SAMPLE_ORDER_TYPE_MAX_ENUM_NV = 0x7FFFFFFF
} VkCoarseSampleOrderTypeNV;
typedef struct VkShadingRatePaletteNV {
    deUint32                              shadingRatePaletteEntryCount;
    const VkShadingRatePaletteEntryNV*    pShadingRatePaletteEntries;
} VkShadingRatePaletteNV;

typedef struct VkPipelineViewportShadingRateImageStateCreateInfoNV {
    VkStructureType                  sType;
    const void*                      pNext;
    VkBool32                         shadingRateImageEnable;
    deUint32                         viewportCount;
    const VkShadingRatePaletteNV*    pShadingRatePalettes;
} VkPipelineViewportShadingRateImageStateCreateInfoNV;

typedef struct VkPhysicalDeviceShadingRateImageFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shadingRateImage;
    VkBool32           shadingRateCoarseSampleOrder;
} VkPhysicalDeviceShadingRateImageFeaturesNV;

typedef struct VkPhysicalDeviceShadingRateImagePropertiesNV {
    VkStructureType    sType;
    void*              pNext;
    VkExtent2D         shadingRateTexelSize;
    deUint32           shadingRatePaletteSize;
    deUint32           shadingRateMaxCoarseSamples;
} VkPhysicalDeviceShadingRateImagePropertiesNV;

typedef struct VkCoarseSampleLocationNV {
    deUint32    pixelX;
    deUint32    pixelY;
    deUint32    sample;
} VkCoarseSampleLocationNV;

typedef struct VkCoarseSampleOrderCustomNV {
    VkShadingRatePaletteEntryNV        shadingRate;
    deUint32                           sampleCount;
    deUint32                           sampleLocationCount;
    const VkCoarseSampleLocationNV*    pSampleLocations;
} VkCoarseSampleOrderCustomNV;

typedef struct VkPipelineViewportCoarseSampleOrderStateCreateInfoNV {
    VkStructureType                       sType;
    const void*                           pNext;
    VkCoarseSampleOrderTypeNV             sampleOrderType;
    deUint32                              customSampleOrderCount;
    const VkCoarseSampleOrderCustomNV*    pCustomSampleOrders;
} VkPipelineViewportCoarseSampleOrderStateCreateInfoNV;

typedef void (VKAPI_PTR *PFN_vkCmdBindShadingRateImageNV)(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout);
typedef void (VKAPI_PTR *PFN_vkCmdSetViewportShadingRatePaletteNV)(VkCommandBuffer commandBuffer, deUint32 firstViewport, deUint32 viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes);
typedef void (VKAPI_PTR *PFN_vkCmdSetCoarseSampleOrderNV)(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, deUint32 customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdBindShadingRateImageNV(
    VkCommandBuffer                             commandBuffer,
    VkImageView                                 imageView,
    VkImageLayout                               imageLayout);

VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportShadingRatePaletteNV(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    firstViewport,
    deUint32                                    viewportCount,
    const VkShadingRatePaletteNV*               pShadingRatePalettes);

VKAPI_ATTR void VKAPI_CALL vkCmdSetCoarseSampleOrderNV(
    VkCommandBuffer                             commandBuffer,
    VkCoarseSampleOrderTypeNV                   sampleOrderType,
    deUint32                                    customSampleOrderCount,
    const VkCoarseSampleOrderCustomNV*          pCustomSampleOrders);
#endif


#define VK_NV_ray_tracing 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkAccelerationStructureNV)
#define VK_NV_RAY_TRACING_SPEC_VERSION    3
#define VK_NV_RAY_TRACING_EXTENSION_NAME  "VK_NV_ray_tracing"
#define VK_SHADER_UNUSED_KHR              (~0U)
#define VK_SHADER_UNUSED_NV               VK_SHADER_UNUSED_KHR

typedef enum VkRayTracingShaderGroupTypeKHR {
    VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_KHR = 0,
    VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_KHR = 1,
    VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_KHR = 2,
    VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV = VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_KHR,
    VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV = VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_KHR,
    VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV = VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_KHR,
    VK_RAY_TRACING_SHADER_GROUP_TYPE_MAX_ENUM_KHR = 0x7FFFFFFF
} VkRayTracingShaderGroupTypeKHR;
typedef VkRayTracingShaderGroupTypeKHR VkRayTracingShaderGroupTypeNV;


typedef enum VkGeometryTypeKHR {
    VK_GEOMETRY_TYPE_TRIANGLES_KHR = 0,
    VK_GEOMETRY_TYPE_AABBS_KHR = 1,
    VK_GEOMETRY_TYPE_INSTANCES_KHR = 2,
    VK_GEOMETRY_TYPE_TRIANGLES_NV = VK_GEOMETRY_TYPE_TRIANGLES_KHR,
    VK_GEOMETRY_TYPE_AABBS_NV = VK_GEOMETRY_TYPE_AABBS_KHR,
    VK_GEOMETRY_TYPE_MAX_ENUM_KHR = 0x7FFFFFFF
} VkGeometryTypeKHR;
typedef VkGeometryTypeKHR VkGeometryTypeNV;


typedef enum VkAccelerationStructureTypeKHR {
    VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR = 0,
    VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR = 1,
    VK_ACCELERATION_STRUCTURE_TYPE_GENERIC_KHR = 2,
    VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV = VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR,
    VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV = VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR,
    VK_ACCELERATION_STRUCTURE_TYPE_MAX_ENUM_KHR = 0x7FFFFFFF
} VkAccelerationStructureTypeKHR;
typedef VkAccelerationStructureTypeKHR VkAccelerationStructureTypeNV;


typedef enum VkCopyAccelerationStructureModeKHR {
    VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_KHR = 0,
    VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_KHR = 1,
    VK_COPY_ACCELERATION_STRUCTURE_MODE_SERIALIZE_KHR = 2,
    VK_COPY_ACCELERATION_STRUCTURE_MODE_DESERIALIZE_KHR = 3,
    VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV = VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_KHR,
    VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV = VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_KHR,
    VK_COPY_ACCELERATION_STRUCTURE_MODE_MAX_ENUM_KHR = 0x7FFFFFFF
} VkCopyAccelerationStructureModeKHR;
typedef VkCopyAccelerationStructureModeKHR VkCopyAccelerationStructureModeNV;


typedef enum VkAccelerationStructureMemoryRequirementsTypeNV {
    VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV = 0,
    VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV = 1,
    VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV = 2,
    VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_MAX_ENUM_NV = 0x7FFFFFFF
} VkAccelerationStructureMemoryRequirementsTypeNV;

typedef enum VkGeometryFlagBitsKHR {
    VK_GEOMETRY_OPAQUE_BIT_KHR = 0x00000001,
    VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR = 0x00000002,
    VK_GEOMETRY_OPAQUE_BIT_NV = VK_GEOMETRY_OPAQUE_BIT_KHR,
    VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV = VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR,
    VK_GEOMETRY_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkGeometryFlagBitsKHR;
typedef VkFlags VkGeometryFlagsKHR;
typedef VkGeometryFlagsKHR VkGeometryFlagsNV;

typedef VkGeometryFlagBitsKHR VkGeometryFlagBitsNV;


typedef enum VkGeometryInstanceFlagBitsKHR {
    VK_GEOMETRY_INSTANCE_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR = 0x00000001,
    VK_GEOMETRY_INSTANCE_TRIANGLE_FLIP_FACING_BIT_KHR = 0x00000002,
    VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_KHR = 0x00000004,
    VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_KHR = 0x00000008,
    VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_KHR = VK_GEOMETRY_INSTANCE_TRIANGLE_FLIP_FACING_BIT_KHR,
    VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV = VK_GEOMETRY_INSTANCE_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR,
    VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV = VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_KHR,
    VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV = VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_KHR,
    VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV = VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_KHR,
    VK_GEOMETRY_INSTANCE_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkGeometryInstanceFlagBitsKHR;
typedef VkFlags VkGeometryInstanceFlagsKHR;
typedef VkGeometryInstanceFlagsKHR VkGeometryInstanceFlagsNV;

typedef VkGeometryInstanceFlagBitsKHR VkGeometryInstanceFlagBitsNV;


typedef enum VkBuildAccelerationStructureFlagBitsKHR {
    VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR = 0x00000001,
    VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR = 0x00000002,
    VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR = 0x00000004,
    VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR = 0x00000008,
    VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR = 0x00000010,
    VK_BUILD_ACCELERATION_STRUCTURE_MOTION_BIT_NV = 0x00000020,
    VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR,
    VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR,
    VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR,
    VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR,
    VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV = VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR,
    VK_BUILD_ACCELERATION_STRUCTURE_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkBuildAccelerationStructureFlagBitsKHR;
typedef VkFlags VkBuildAccelerationStructureFlagsKHR;
typedef VkBuildAccelerationStructureFlagsKHR VkBuildAccelerationStructureFlagsNV;

typedef VkBuildAccelerationStructureFlagBitsKHR VkBuildAccelerationStructureFlagBitsNV;

typedef struct VkRayTracingShaderGroupCreateInfoNV {
    VkStructureType                   sType;
    const void*                       pNext;
    VkRayTracingShaderGroupTypeKHR    type;
    deUint32                          generalShader;
    deUint32                          closestHitShader;
    deUint32                          anyHitShader;
    deUint32                          intersectionShader;
} VkRayTracingShaderGroupCreateInfoNV;

typedef struct VkRayTracingPipelineCreateInfoNV {
    VkStructureType                               sType;
    const void*                                   pNext;
    VkPipelineCreateFlags                         flags;
    deUint32                                      stageCount;
    const VkPipelineShaderStageCreateInfo*        pStages;
    deUint32                                      groupCount;
    const VkRayTracingShaderGroupCreateInfoNV*    pGroups;
    deUint32                                      maxRecursionDepth;
    VkPipelineLayout                              layout;
    VkPipeline                                    basePipelineHandle;
    deInt32                                       basePipelineIndex;
} VkRayTracingPipelineCreateInfoNV;

typedef struct VkGeometryTrianglesNV {
    VkStructureType    sType;
    const void*        pNext;
    VkBuffer           vertexData;
    VkDeviceSize       vertexOffset;
    deUint32           vertexCount;
    VkDeviceSize       vertexStride;
    VkFormat           vertexFormat;
    VkBuffer           indexData;
    VkDeviceSize       indexOffset;
    deUint32           indexCount;
    VkIndexType        indexType;
    VkBuffer           transformData;
    VkDeviceSize       transformOffset;
} VkGeometryTrianglesNV;

typedef struct VkGeometryAABBNV {
    VkStructureType    sType;
    const void*        pNext;
    VkBuffer           aabbData;
    deUint32           numAABBs;
    deUint32           stride;
    VkDeviceSize       offset;
} VkGeometryAABBNV;

typedef struct VkGeometryDataNV {
    VkGeometryTrianglesNV    triangles;
    VkGeometryAABBNV         aabbs;
} VkGeometryDataNV;

typedef struct VkGeometryNV {
    VkStructureType       sType;
    const void*           pNext;
    VkGeometryTypeKHR     geometryType;
    VkGeometryDataNV      geometry;
    VkGeometryFlagsKHR    flags;
} VkGeometryNV;

typedef struct VkAccelerationStructureInfoNV {
    VkStructureType                        sType;
    const void*                            pNext;
    VkAccelerationStructureTypeNV          type;
    VkBuildAccelerationStructureFlagsNV    flags;
    deUint32                               instanceCount;
    deUint32                               geometryCount;
    const VkGeometryNV*                    pGeometries;
} VkAccelerationStructureInfoNV;

typedef struct VkAccelerationStructureCreateInfoNV {
    VkStructureType                  sType;
    const void*                      pNext;
    VkDeviceSize                     compactedSize;
    VkAccelerationStructureInfoNV    info;
} VkAccelerationStructureCreateInfoNV;

typedef struct VkBindAccelerationStructureMemoryInfoNV {
    VkStructureType              sType;
    const void*                  pNext;
    VkAccelerationStructureNV    accelerationStructure;
    VkDeviceMemory               memory;
    VkDeviceSize                 memoryOffset;
    deUint32                     deviceIndexCount;
    const deUint32*              pDeviceIndices;
} VkBindAccelerationStructureMemoryInfoNV;

typedef struct VkWriteDescriptorSetAccelerationStructureNV {
    VkStructureType                     sType;
    const void*                         pNext;
    deUint32                            accelerationStructureCount;
    const VkAccelerationStructureNV*    pAccelerationStructures;
} VkWriteDescriptorSetAccelerationStructureNV;

typedef struct VkAccelerationStructureMemoryRequirementsInfoNV {
    VkStructureType                                    sType;
    const void*                                        pNext;
    VkAccelerationStructureMemoryRequirementsTypeNV    type;
    VkAccelerationStructureNV                          accelerationStructure;
} VkAccelerationStructureMemoryRequirementsInfoNV;

typedef struct VkPhysicalDeviceRayTracingPropertiesNV {
    VkStructureType    sType;
    void*              pNext;
    deUint32           shaderGroupHandleSize;
    deUint32           maxRecursionDepth;
    deUint32           maxShaderGroupStride;
    deUint32           shaderGroupBaseAlignment;
    deUint64           maxGeometryCount;
    deUint64           maxInstanceCount;
    deUint64           maxTriangleCount;
    deUint32           maxDescriptorSetAccelerationStructures;
} VkPhysicalDeviceRayTracingPropertiesNV;

typedef struct VkTransformMatrixKHR {
    float    matrix[3][4];
} VkTransformMatrixKHR;

typedef VkTransformMatrixKHR VkTransformMatrixNV;

typedef struct VkAabbPositionsKHR {
    float    minX;
    float    minY;
    float    minZ;
    float    maxX;
    float    maxY;
    float    maxZ;
} VkAabbPositionsKHR;

typedef VkAabbPositionsKHR VkAabbPositionsNV;

typedef struct VkAccelerationStructureInstanceKHR {
    VkTransformMatrixKHR          transform;
    deUint32                      instanceCustomIndex:24;
    deUint32                      mask:8;
    deUint32                      instanceShaderBindingTableRecordOffset:24;
    VkGeometryInstanceFlagsKHR    flags:8;
    deUint64                      accelerationStructureReference;
} VkAccelerationStructureInstanceKHR;

typedef VkAccelerationStructureInstanceKHR VkAccelerationStructureInstanceNV;

typedef VkResult (VKAPI_PTR *PFN_vkCreateAccelerationStructureNV)(VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV* pAccelerationStructure);
typedef void (VKAPI_PTR *PFN_vkDestroyAccelerationStructureNV)(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks* pAllocator);
typedef void (VKAPI_PTR *PFN_vkGetAccelerationStructureMemoryRequirementsNV)(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements);
typedef VkResult (VKAPI_PTR *PFN_vkBindAccelerationStructureMemoryNV)(VkDevice device, deUint32 bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos);
typedef void (VKAPI_PTR *PFN_vkCmdBuildAccelerationStructureNV)(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset);
typedef void (VKAPI_PTR *PFN_vkCmdCopyAccelerationStructureNV)(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode);
typedef void (VKAPI_PTR *PFN_vkCmdTraceRaysNV)(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, deUint32 width, deUint32 height, deUint32 depth);
typedef VkResult (VKAPI_PTR *PFN_vkCreateRayTracingPipelinesNV)(VkDevice device, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
typedef VkResult (VKAPI_PTR *PFN_vkGetRayTracingShaderGroupHandlesKHR)(VkDevice device, VkPipeline pipeline, deUint32 firstGroup, deUint32 groupCount, deUintptr dataSize, void* pData);
typedef VkResult (VKAPI_PTR *PFN_vkGetRayTracingShaderGroupHandlesNV)(VkDevice device, VkPipeline pipeline, deUint32 firstGroup, deUint32 groupCount, deUintptr dataSize, void* pData);
typedef VkResult (VKAPI_PTR *PFN_vkGetAccelerationStructureHandleNV)(VkDevice device, VkAccelerationStructureNV accelerationStructure, deUintptr dataSize, void* pData);
typedef void (VKAPI_PTR *PFN_vkCmdWriteAccelerationStructuresPropertiesNV)(VkCommandBuffer commandBuffer, deUint32 accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, deUint32 firstQuery);
typedef VkResult (VKAPI_PTR *PFN_vkCompileDeferredNV)(VkDevice device, VkPipeline pipeline, deUint32 shader);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateAccelerationStructureNV(
    VkDevice                                    device,
    const VkAccelerationStructureCreateInfoNV*  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkAccelerationStructureNV*                  pAccelerationStructure);

VKAPI_ATTR void VKAPI_CALL vkDestroyAccelerationStructureNV(
    VkDevice                                    device,
    VkAccelerationStructureNV                   accelerationStructure,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR void VKAPI_CALL vkGetAccelerationStructureMemoryRequirementsNV(
    VkDevice                                    device,
    const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo,
    VkMemoryRequirements2KHR*                   pMemoryRequirements);

VKAPI_ATTR VkResult VKAPI_CALL vkBindAccelerationStructureMemoryNV(
    VkDevice                                    device,
    deUint32                                    bindInfoCount,
    const VkBindAccelerationStructureMemoryInfoNV* pBindInfos);

VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructureNV(
    VkCommandBuffer                             commandBuffer,
    const VkAccelerationStructureInfoNV*        pInfo,
    VkBuffer                                    instanceData,
    VkDeviceSize                                instanceOffset,
    VkBool32                                    update,
    VkAccelerationStructureNV                   dst,
    VkAccelerationStructureNV                   src,
    VkBuffer                                    scratch,
    VkDeviceSize                                scratchOffset);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureNV(
    VkCommandBuffer                             commandBuffer,
    VkAccelerationStructureNV                   dst,
    VkAccelerationStructureNV                   src,
    VkCopyAccelerationStructureModeKHR          mode);

VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysNV(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    raygenShaderBindingTableBuffer,
    VkDeviceSize                                raygenShaderBindingOffset,
    VkBuffer                                    missShaderBindingTableBuffer,
    VkDeviceSize                                missShaderBindingOffset,
    VkDeviceSize                                missShaderBindingStride,
    VkBuffer                                    hitShaderBindingTableBuffer,
    VkDeviceSize                                hitShaderBindingOffset,
    VkDeviceSize                                hitShaderBindingStride,
    VkBuffer                                    callableShaderBindingTableBuffer,
    VkDeviceSize                                callableShaderBindingOffset,
    VkDeviceSize                                callableShaderBindingStride,
    deUint32                                    width,
    deUint32                                    height,
    deUint32                                    depth);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateRayTracingPipelinesNV(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    deUint32                                    createInfoCount,
    const VkRayTracingPipelineCreateInfoNV*     pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);

VKAPI_ATTR VkResult VKAPI_CALL vkGetRayTracingShaderGroupHandlesKHR(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    deUint32                                    firstGroup,
    deUint32                                    groupCount,
    deUintptr                                      dataSize,
    void*                                       pData);

VKAPI_ATTR VkResult VKAPI_CALL vkGetRayTracingShaderGroupHandlesNV(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    deUint32                                    firstGroup,
    deUint32                                    groupCount,
    deUintptr                                      dataSize,
    void*                                       pData);

VKAPI_ATTR VkResult VKAPI_CALL vkGetAccelerationStructureHandleNV(
    VkDevice                                    device,
    VkAccelerationStructureNV                   accelerationStructure,
    deUintptr                                      dataSize,
    void*                                       pData);

VKAPI_ATTR void VKAPI_CALL vkCmdWriteAccelerationStructuresPropertiesNV(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    accelerationStructureCount,
    const VkAccelerationStructureNV*            pAccelerationStructures,
    VkQueryType                                 queryType,
    VkQueryPool                                 queryPool,
    deUint32                                    firstQuery);

VKAPI_ATTR VkResult VKAPI_CALL vkCompileDeferredNV(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    deUint32                                    shader);
#endif


#define VK_NV_representative_fragment_test 1
#define VK_NV_REPRESENTATIVE_FRAGMENT_TEST_SPEC_VERSION 2
#define VK_NV_REPRESENTATIVE_FRAGMENT_TEST_EXTENSION_NAME "VK_NV_representative_fragment_test"
typedef struct VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           representativeFragmentTest;
} VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV;

typedef struct VkPipelineRepresentativeFragmentTestStateCreateInfoNV {
    VkStructureType    sType;
    const void*        pNext;
    VkBool32           representativeFragmentTestEnable;
} VkPipelineRepresentativeFragmentTestStateCreateInfoNV;



#define VK_EXT_filter_cubic 1
#define VK_EXT_FILTER_CUBIC_SPEC_VERSION  3
#define VK_EXT_FILTER_CUBIC_EXTENSION_NAME "VK_EXT_filter_cubic"
typedef struct VkPhysicalDeviceImageViewImageFormatInfoEXT {
    VkStructureType    sType;
    void*              pNext;
    VkImageViewType    imageViewType;
} VkPhysicalDeviceImageViewImageFormatInfoEXT;

typedef struct VkFilterCubicImageViewImageFormatPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           filterCubic;
    VkBool32           filterCubicMinmax;
} VkFilterCubicImageViewImageFormatPropertiesEXT;



#define VK_QCOM_render_pass_shader_resolve 1
#define VK_QCOM_RENDER_PASS_SHADER_RESOLVE_SPEC_VERSION 4
#define VK_QCOM_RENDER_PASS_SHADER_RESOLVE_EXTENSION_NAME "VK_QCOM_render_pass_shader_resolve"


#define VK_EXT_global_priority 1
#define VK_EXT_GLOBAL_PRIORITY_SPEC_VERSION 2
#define VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME "VK_EXT_global_priority"

typedef enum VkQueueGlobalPriorityEXT {
    VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT = 128,
    VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT = 256,
    VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT = 512,
    VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT = 1024,
    VK_QUEUE_GLOBAL_PRIORITY_MAX_ENUM_EXT = 0x7FFFFFFF
} VkQueueGlobalPriorityEXT;
typedef struct VkDeviceQueueGlobalPriorityCreateInfoEXT {
    VkStructureType             sType;
    const void*                 pNext;
    VkQueueGlobalPriorityEXT    globalPriority;
} VkDeviceQueueGlobalPriorityCreateInfoEXT;



#define VK_EXT_external_memory_host 1
#define VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION 1
#define VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME "VK_EXT_external_memory_host"
typedef struct VkImportMemoryHostPointerInfoEXT {
    VkStructureType                       sType;
    const void*                           pNext;
    VkExternalMemoryHandleTypeFlagBits    handleType;
    void*                                 pHostPointer;
} VkImportMemoryHostPointerInfoEXT;

typedef struct VkMemoryHostPointerPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           memoryTypeBits;
} VkMemoryHostPointerPropertiesEXT;

typedef struct VkPhysicalDeviceExternalMemoryHostPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkDeviceSize       minImportedHostPointerAlignment;
} VkPhysicalDeviceExternalMemoryHostPropertiesEXT;

typedef VkResult (VKAPI_PTR *PFN_vkGetMemoryHostPointerPropertiesEXT)(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer, VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryHostPointerPropertiesEXT(
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    const void*                                 pHostPointer,
    VkMemoryHostPointerPropertiesEXT*           pMemoryHostPointerProperties);
#endif


#define VK_AMD_buffer_marker 1
#define VK_AMD_BUFFER_MARKER_SPEC_VERSION 1
#define VK_AMD_BUFFER_MARKER_EXTENSION_NAME "VK_AMD_buffer_marker"
typedef void (VKAPI_PTR *PFN_vkCmdWriteBufferMarkerAMD)(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, deUint32 marker);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdWriteBufferMarkerAMD(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    deUint32                                    marker);
#endif


#define VK_AMD_pipeline_compiler_control 1
#define VK_AMD_PIPELINE_COMPILER_CONTROL_SPEC_VERSION 1
#define VK_AMD_PIPELINE_COMPILER_CONTROL_EXTENSION_NAME "VK_AMD_pipeline_compiler_control"

typedef enum VkPipelineCompilerControlFlagBitsAMD {
    VK_PIPELINE_COMPILER_CONTROL_FLAG_BITS_MAX_ENUM_AMD = 0x7FFFFFFF
} VkPipelineCompilerControlFlagBitsAMD;
typedef VkFlags VkPipelineCompilerControlFlagsAMD;
typedef struct VkPipelineCompilerControlCreateInfoAMD {
    VkStructureType                      sType;
    const void*                          pNext;
    VkPipelineCompilerControlFlagsAMD    compilerControlFlags;
} VkPipelineCompilerControlCreateInfoAMD;



#define VK_EXT_calibrated_timestamps 1
#define VK_EXT_CALIBRATED_TIMESTAMPS_SPEC_VERSION 2
#define VK_EXT_CALIBRATED_TIMESTAMPS_EXTENSION_NAME "VK_EXT_calibrated_timestamps"

typedef enum VkTimeDomainEXT {
    VK_TIME_DOMAIN_DEVICE_EXT = 0,
    VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT = 1,
    VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT = 2,
    VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT = 3,
    VK_TIME_DOMAIN_MAX_ENUM_EXT = 0x7FFFFFFF
} VkTimeDomainEXT;
typedef struct VkCalibratedTimestampInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    VkTimeDomainEXT    timeDomain;
} VkCalibratedTimestampInfoEXT;

typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)(VkPhysicalDevice physicalDevice, deUint32* pTimeDomainCount, VkTimeDomainEXT* pTimeDomains);
typedef VkResult (VKAPI_PTR *PFN_vkGetCalibratedTimestampsEXT)(VkDevice device, deUint32 timestampCount, const VkCalibratedTimestampInfoEXT* pTimestampInfos, deUint64* pTimestamps, deUint64* pMaxDeviation);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pTimeDomainCount,
    VkTimeDomainEXT*                            pTimeDomains);

VKAPI_ATTR VkResult VKAPI_CALL vkGetCalibratedTimestampsEXT(
    VkDevice                                    device,
    deUint32                                    timestampCount,
    const VkCalibratedTimestampInfoEXT*         pTimestampInfos,
    deUint64*                                   pTimestamps,
    deUint64*                                   pMaxDeviation);
#endif


#define VK_AMD_shader_core_properties 1
#define VK_AMD_SHADER_CORE_PROPERTIES_SPEC_VERSION 2
#define VK_AMD_SHADER_CORE_PROPERTIES_EXTENSION_NAME "VK_AMD_shader_core_properties"
typedef struct VkPhysicalDeviceShaderCorePropertiesAMD {
    VkStructureType    sType;
    void*              pNext;
    deUint32           shaderEngineCount;
    deUint32           shaderArraysPerEngineCount;
    deUint32           computeUnitsPerShaderArray;
    deUint32           simdPerComputeUnit;
    deUint32           wavefrontsPerSimd;
    deUint32           wavefrontSize;
    deUint32           sgprsPerSimd;
    deUint32           minSgprAllocation;
    deUint32           maxSgprAllocation;
    deUint32           sgprAllocationGranularity;
    deUint32           vgprsPerSimd;
    deUint32           minVgprAllocation;
    deUint32           maxVgprAllocation;
    deUint32           vgprAllocationGranularity;
} VkPhysicalDeviceShaderCorePropertiesAMD;



#define VK_AMD_memory_overallocation_behavior 1
#define VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_SPEC_VERSION 1
#define VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_EXTENSION_NAME "VK_AMD_memory_overallocation_behavior"

typedef enum VkMemoryOverallocationBehaviorAMD {
    VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD = 0,
    VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD = 1,
    VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD = 2,
    VK_MEMORY_OVERALLOCATION_BEHAVIOR_MAX_ENUM_AMD = 0x7FFFFFFF
} VkMemoryOverallocationBehaviorAMD;
typedef struct VkDeviceMemoryOverallocationCreateInfoAMD {
    VkStructureType                      sType;
    const void*                          pNext;
    VkMemoryOverallocationBehaviorAMD    overallocationBehavior;
} VkDeviceMemoryOverallocationCreateInfoAMD;



#define VK_EXT_vertex_attribute_divisor 1
#define VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION 3
#define VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME "VK_EXT_vertex_attribute_divisor"
typedef struct VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxVertexAttribDivisor;
} VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT;

typedef struct VkVertexInputBindingDivisorDescriptionEXT {
    deUint32    binding;
    deUint32    divisor;
} VkVertexInputBindingDivisorDescriptionEXT;

typedef struct VkPipelineVertexInputDivisorStateCreateInfoEXT {
    VkStructureType                                     sType;
    const void*                                         pNext;
    deUint32                                            vertexBindingDivisorCount;
    const VkVertexInputBindingDivisorDescriptionEXT*    pVertexBindingDivisors;
} VkPipelineVertexInputDivisorStateCreateInfoEXT;

typedef struct VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           vertexAttributeInstanceRateDivisor;
    VkBool32           vertexAttributeInstanceRateZeroDivisor;
} VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT;



#define VK_EXT_pipeline_creation_feedback 1
#define VK_EXT_PIPELINE_CREATION_FEEDBACK_SPEC_VERSION 1
#define VK_EXT_PIPELINE_CREATION_FEEDBACK_EXTENSION_NAME "VK_EXT_pipeline_creation_feedback"

typedef enum VkPipelineCreationFeedbackFlagBitsEXT {
    VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT = 0x00000001,
    VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT = 0x00000002,
    VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT = 0x00000004,
    VK_PIPELINE_CREATION_FEEDBACK_FLAG_BITS_MAX_ENUM_EXT = 0x7FFFFFFF
} VkPipelineCreationFeedbackFlagBitsEXT;
typedef VkFlags VkPipelineCreationFeedbackFlagsEXT;
typedef struct VkPipelineCreationFeedbackEXT {
    VkPipelineCreationFeedbackFlagsEXT    flags;
    deUint64                              duration;
} VkPipelineCreationFeedbackEXT;

typedef struct VkPipelineCreationFeedbackCreateInfoEXT {
    VkStructureType                   sType;
    const void*                       pNext;
    VkPipelineCreationFeedbackEXT*    pPipelineCreationFeedback;
    deUint32                          pipelineStageCreationFeedbackCount;
    VkPipelineCreationFeedbackEXT*    pPipelineStageCreationFeedbacks;
} VkPipelineCreationFeedbackCreateInfoEXT;



#define VK_NV_shader_subgroup_partitioned 1
#define VK_NV_SHADER_SUBGROUP_PARTITIONED_SPEC_VERSION 1
#define VK_NV_SHADER_SUBGROUP_PARTITIONED_EXTENSION_NAME "VK_NV_shader_subgroup_partitioned"


#define VK_NV_compute_shader_derivatives 1
#define VK_NV_COMPUTE_SHADER_DERIVATIVES_SPEC_VERSION 1
#define VK_NV_COMPUTE_SHADER_DERIVATIVES_EXTENSION_NAME "VK_NV_compute_shader_derivatives"
typedef struct VkPhysicalDeviceComputeShaderDerivativesFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           computeDerivativeGroupQuads;
    VkBool32           computeDerivativeGroupLinear;
} VkPhysicalDeviceComputeShaderDerivativesFeaturesNV;



#define VK_NV_mesh_shader 1
#define VK_NV_MESH_SHADER_SPEC_VERSION    1
#define VK_NV_MESH_SHADER_EXTENSION_NAME  "VK_NV_mesh_shader"
typedef struct VkPhysicalDeviceMeshShaderFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           taskShader;
    VkBool32           meshShader;
} VkPhysicalDeviceMeshShaderFeaturesNV;

typedef struct VkPhysicalDeviceMeshShaderPropertiesNV {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxDrawMeshTasksCount;
    deUint32           maxTaskWorkGroupInvocations;
    deUint32           maxTaskWorkGroupSize[3];
    deUint32           maxTaskTotalMemorySize;
    deUint32           maxTaskOutputCount;
    deUint32           maxMeshWorkGroupInvocations;
    deUint32           maxMeshWorkGroupSize[3];
    deUint32           maxMeshTotalMemorySize;
    deUint32           maxMeshOutputVertices;
    deUint32           maxMeshOutputPrimitives;
    deUint32           maxMeshMultiviewViewCount;
    deUint32           meshOutputPerVertexGranularity;
    deUint32           meshOutputPerPrimitiveGranularity;
} VkPhysicalDeviceMeshShaderPropertiesNV;

typedef struct VkDrawMeshTasksIndirectCommandNV {
    deUint32    taskCount;
    deUint32    firstTask;
} VkDrawMeshTasksIndirectCommandNV;

typedef void (VKAPI_PTR *PFN_vkCmdDrawMeshTasksNV)(VkCommandBuffer commandBuffer, deUint32 taskCount, deUint32 firstTask);
typedef void (VKAPI_PTR *PFN_vkCmdDrawMeshTasksIndirectNV)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 drawCount, deUint32 stride);
typedef void (VKAPI_PTR *PFN_vkCmdDrawMeshTasksIndirectCountNV)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksNV(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    taskCount,
    deUint32                                    firstTask);

VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectNV(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    deUint32                                    drawCount,
    deUint32                                    stride);

VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectCountNV(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    deUint32                                    maxDrawCount,
    deUint32                                    stride);
#endif


#define VK_NV_fragment_shader_barycentric 1
#define VK_NV_FRAGMENT_SHADER_BARYCENTRIC_SPEC_VERSION 1
#define VK_NV_FRAGMENT_SHADER_BARYCENTRIC_EXTENSION_NAME "VK_NV_fragment_shader_barycentric"
typedef struct VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           fragmentShaderBarycentric;
} VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV;



#define VK_NV_shader_image_footprint 1
#define VK_NV_SHADER_IMAGE_FOOTPRINT_SPEC_VERSION 2
#define VK_NV_SHADER_IMAGE_FOOTPRINT_EXTENSION_NAME "VK_NV_shader_image_footprint"
typedef struct VkPhysicalDeviceShaderImageFootprintFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           imageFootprint;
} VkPhysicalDeviceShaderImageFootprintFeaturesNV;



#define VK_NV_scissor_exclusive 1
#define VK_NV_SCISSOR_EXCLUSIVE_SPEC_VERSION 1
#define VK_NV_SCISSOR_EXCLUSIVE_EXTENSION_NAME "VK_NV_scissor_exclusive"
typedef struct VkPipelineViewportExclusiveScissorStateCreateInfoNV {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           exclusiveScissorCount;
    const VkRect2D*    pExclusiveScissors;
} VkPipelineViewportExclusiveScissorStateCreateInfoNV;

typedef struct VkPhysicalDeviceExclusiveScissorFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           exclusiveScissor;
} VkPhysicalDeviceExclusiveScissorFeaturesNV;

typedef void (VKAPI_PTR *PFN_vkCmdSetExclusiveScissorNV)(VkCommandBuffer commandBuffer, deUint32 firstExclusiveScissor, deUint32 exclusiveScissorCount, const VkRect2D* pExclusiveScissors);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdSetExclusiveScissorNV(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    firstExclusiveScissor,
    deUint32                                    exclusiveScissorCount,
    const VkRect2D*                             pExclusiveScissors);
#endif


#define VK_NV_device_diagnostic_checkpoints 1
#define VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_SPEC_VERSION 2
#define VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_EXTENSION_NAME "VK_NV_device_diagnostic_checkpoints"
typedef struct VkQueueFamilyCheckpointPropertiesNV {
    VkStructureType         sType;
    void*                   pNext;
    VkPipelineStageFlags    checkpointExecutionStageMask;
} VkQueueFamilyCheckpointPropertiesNV;

typedef struct VkCheckpointDataNV {
    VkStructureType            sType;
    void*                      pNext;
    VkPipelineStageFlagBits    stage;
    void*                      pCheckpointMarker;
} VkCheckpointDataNV;

typedef void (VKAPI_PTR *PFN_vkCmdSetCheckpointNV)(VkCommandBuffer commandBuffer, const void* pCheckpointMarker);
typedef void (VKAPI_PTR *PFN_vkGetQueueCheckpointDataNV)(VkQueue queue, deUint32* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdSetCheckpointNV(
    VkCommandBuffer                             commandBuffer,
    const void*                                 pCheckpointMarker);

VKAPI_ATTR void VKAPI_CALL vkGetQueueCheckpointDataNV(
    VkQueue                                     queue,
    deUint32*                                   pCheckpointDataCount,
    VkCheckpointDataNV*                         pCheckpointData);
#endif


#define VK_INTEL_shader_integer_functions2 1
#define VK_INTEL_SHADER_INTEGER_FUNCTIONS_2_SPEC_VERSION 1
#define VK_INTEL_SHADER_INTEGER_FUNCTIONS_2_EXTENSION_NAME "VK_INTEL_shader_integer_functions2"
typedef struct VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderIntegerFunctions2;
} VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;



#define VK_INTEL_performance_query 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPerformanceConfigurationINTEL)
#define VK_INTEL_PERFORMANCE_QUERY_SPEC_VERSION 2
#define VK_INTEL_PERFORMANCE_QUERY_EXTENSION_NAME "VK_INTEL_performance_query"

typedef enum VkPerformanceConfigurationTypeINTEL {
    VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL = 0,
    VK_PERFORMANCE_CONFIGURATION_TYPE_MAX_ENUM_INTEL = 0x7FFFFFFF
} VkPerformanceConfigurationTypeINTEL;

typedef enum VkQueryPoolSamplingModeINTEL {
    VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL = 0,
    VK_QUERY_POOL_SAMPLING_MODE_MAX_ENUM_INTEL = 0x7FFFFFFF
} VkQueryPoolSamplingModeINTEL;

typedef enum VkPerformanceOverrideTypeINTEL {
    VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL = 0,
    VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL = 1,
    VK_PERFORMANCE_OVERRIDE_TYPE_MAX_ENUM_INTEL = 0x7FFFFFFF
} VkPerformanceOverrideTypeINTEL;

typedef enum VkPerformanceParameterTypeINTEL {
    VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL = 0,
    VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL = 1,
    VK_PERFORMANCE_PARAMETER_TYPE_MAX_ENUM_INTEL = 0x7FFFFFFF
} VkPerformanceParameterTypeINTEL;

typedef enum VkPerformanceValueTypeINTEL {
    VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL = 0,
    VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL = 1,
    VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL = 2,
    VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL = 3,
    VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL = 4,
    VK_PERFORMANCE_VALUE_TYPE_MAX_ENUM_INTEL = 0x7FFFFFFF
} VkPerformanceValueTypeINTEL;
typedef union VkPerformanceValueDataINTEL {
    deUint32       value32;
    deUint64       value64;
    float          valueFloat;
    VkBool32       valueBool;
    const char*    valueString;
} VkPerformanceValueDataINTEL;

typedef struct VkPerformanceValueINTEL {
    VkPerformanceValueTypeINTEL    type;
    VkPerformanceValueDataINTEL    data;
} VkPerformanceValueINTEL;

typedef struct VkInitializePerformanceApiInfoINTEL {
    VkStructureType    sType;
    const void*        pNext;
    void*              pUserData;
} VkInitializePerformanceApiInfoINTEL;

typedef struct VkQueryPoolPerformanceQueryCreateInfoINTEL {
    VkStructureType                 sType;
    const void*                     pNext;
    VkQueryPoolSamplingModeINTEL    performanceCountersSampling;
} VkQueryPoolPerformanceQueryCreateInfoINTEL;

typedef VkQueryPoolPerformanceQueryCreateInfoINTEL VkQueryPoolCreateInfoINTEL;

typedef struct VkPerformanceMarkerInfoINTEL {
    VkStructureType    sType;
    const void*        pNext;
    deUint64           marker;
} VkPerformanceMarkerInfoINTEL;

typedef struct VkPerformanceStreamMarkerInfoINTEL {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           marker;
} VkPerformanceStreamMarkerInfoINTEL;

typedef struct VkPerformanceOverrideInfoINTEL {
    VkStructureType                   sType;
    const void*                       pNext;
    VkPerformanceOverrideTypeINTEL    type;
    VkBool32                          enable;
    deUint64                          parameter;
} VkPerformanceOverrideInfoINTEL;

typedef struct VkPerformanceConfigurationAcquireInfoINTEL {
    VkStructureType                        sType;
    const void*                            pNext;
    VkPerformanceConfigurationTypeINTEL    type;
} VkPerformanceConfigurationAcquireInfoINTEL;

typedef VkResult (VKAPI_PTR *PFN_vkInitializePerformanceApiINTEL)(VkDevice device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo);
typedef void (VKAPI_PTR *PFN_vkUninitializePerformanceApiINTEL)(VkDevice device);
typedef VkResult (VKAPI_PTR *PFN_vkCmdSetPerformanceMarkerINTEL)(VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL* pMarkerInfo);
typedef VkResult (VKAPI_PTR *PFN_vkCmdSetPerformanceStreamMarkerINTEL)(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo);
typedef VkResult (VKAPI_PTR *PFN_vkCmdSetPerformanceOverrideINTEL)(VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL* pOverrideInfo);
typedef VkResult (VKAPI_PTR *PFN_vkAcquirePerformanceConfigurationINTEL)(VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration);
typedef VkResult (VKAPI_PTR *PFN_vkReleasePerformanceConfigurationINTEL)(VkDevice device, VkPerformanceConfigurationINTEL configuration);
typedef VkResult (VKAPI_PTR *PFN_vkQueueSetPerformanceConfigurationINTEL)(VkQueue queue, VkPerformanceConfigurationINTEL configuration);
typedef VkResult (VKAPI_PTR *PFN_vkGetPerformanceParameterINTEL)(VkDevice device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL* pValue);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkInitializePerformanceApiINTEL(
    VkDevice                                    device,
    const VkInitializePerformanceApiInfoINTEL*  pInitializeInfo);

VKAPI_ATTR void VKAPI_CALL vkUninitializePerformanceApiINTEL(
    VkDevice                                    device);

VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceMarkerINTEL(
    VkCommandBuffer                             commandBuffer,
    const VkPerformanceMarkerInfoINTEL*         pMarkerInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceStreamMarkerINTEL(
    VkCommandBuffer                             commandBuffer,
    const VkPerformanceStreamMarkerInfoINTEL*   pMarkerInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceOverrideINTEL(
    VkCommandBuffer                             commandBuffer,
    const VkPerformanceOverrideInfoINTEL*       pOverrideInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkAcquirePerformanceConfigurationINTEL(
    VkDevice                                    device,
    const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo,
    VkPerformanceConfigurationINTEL*            pConfiguration);

VKAPI_ATTR VkResult VKAPI_CALL vkReleasePerformanceConfigurationINTEL(
    VkDevice                                    device,
    VkPerformanceConfigurationINTEL             configuration);

VKAPI_ATTR VkResult VKAPI_CALL vkQueueSetPerformanceConfigurationINTEL(
    VkQueue                                     queue,
    VkPerformanceConfigurationINTEL             configuration);

VKAPI_ATTR VkResult VKAPI_CALL vkGetPerformanceParameterINTEL(
    VkDevice                                    device,
    VkPerformanceParameterTypeINTEL             parameter,
    VkPerformanceValueINTEL*                    pValue);
#endif


#define VK_EXT_pci_bus_info 1
#define VK_EXT_PCI_BUS_INFO_SPEC_VERSION  2
#define VK_EXT_PCI_BUS_INFO_EXTENSION_NAME "VK_EXT_pci_bus_info"
typedef struct VkPhysicalDevicePCIBusInfoPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           pciDomain;
    deUint32           pciBus;
    deUint32           pciDevice;
    deUint32           pciFunction;
} VkPhysicalDevicePCIBusInfoPropertiesEXT;



#define VK_AMD_display_native_hdr 1
#define VK_AMD_DISPLAY_NATIVE_HDR_SPEC_VERSION 1
#define VK_AMD_DISPLAY_NATIVE_HDR_EXTENSION_NAME "VK_AMD_display_native_hdr"
typedef struct VkDisplayNativeHdrSurfaceCapabilitiesAMD {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           localDimmingSupport;
} VkDisplayNativeHdrSurfaceCapabilitiesAMD;

typedef struct VkSwapchainDisplayNativeHdrCreateInfoAMD {
    VkStructureType    sType;
    const void*        pNext;
    VkBool32           localDimmingEnable;
} VkSwapchainDisplayNativeHdrCreateInfoAMD;

typedef void (VKAPI_PTR *PFN_vkSetLocalDimmingAMD)(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkSetLocalDimmingAMD(
    VkDevice                                    device,
    VkSwapchainKHR                              swapChain,
    VkBool32                                    localDimmingEnable);
#endif


#define VK_EXT_fragment_density_map 1
#define VK_EXT_FRAGMENT_DENSITY_MAP_SPEC_VERSION 1
#define VK_EXT_FRAGMENT_DENSITY_MAP_EXTENSION_NAME "VK_EXT_fragment_density_map"
typedef struct VkPhysicalDeviceFragmentDensityMapFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           fragmentDensityMap;
    VkBool32           fragmentDensityMapDynamic;
    VkBool32           fragmentDensityMapNonSubsampledImages;
} VkPhysicalDeviceFragmentDensityMapFeaturesEXT;

typedef struct VkPhysicalDeviceFragmentDensityMapPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkExtent2D         minFragmentDensityTexelSize;
    VkExtent2D         maxFragmentDensityTexelSize;
    VkBool32           fragmentDensityInvocations;
} VkPhysicalDeviceFragmentDensityMapPropertiesEXT;

typedef struct VkRenderPassFragmentDensityMapCreateInfoEXT {
    VkStructureType          sType;
    const void*              pNext;
    VkAttachmentReference    fragmentDensityMapAttachment;
} VkRenderPassFragmentDensityMapCreateInfoEXT;



#define VK_EXT_scalar_block_layout 1
#define VK_EXT_SCALAR_BLOCK_LAYOUT_SPEC_VERSION 1
#define VK_EXT_SCALAR_BLOCK_LAYOUT_EXTENSION_NAME "VK_EXT_scalar_block_layout"
typedef VkPhysicalDeviceScalarBlockLayoutFeatures VkPhysicalDeviceScalarBlockLayoutFeaturesEXT;



#define VK_GOOGLE_hlsl_functionality1 1
#define VK_GOOGLE_HLSL_FUNCTIONALITY1_SPEC_VERSION 1
#define VK_GOOGLE_HLSL_FUNCTIONALITY1_EXTENSION_NAME "VK_GOOGLE_hlsl_functionality1"


#define VK_GOOGLE_decorate_string 1
#define VK_GOOGLE_DECORATE_STRING_SPEC_VERSION 1
#define VK_GOOGLE_DECORATE_STRING_EXTENSION_NAME "VK_GOOGLE_decorate_string"


#define VK_EXT_subgroup_size_control 1
#define VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION 2
#define VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME "VK_EXT_subgroup_size_control"
typedef struct VkPhysicalDeviceSubgroupSizeControlFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           subgroupSizeControl;
    VkBool32           computeFullSubgroups;
} VkPhysicalDeviceSubgroupSizeControlFeaturesEXT;

typedef struct VkPhysicalDeviceSubgroupSizeControlPropertiesEXT {
    VkStructureType       sType;
    void*                 pNext;
    deUint32              minSubgroupSize;
    deUint32              maxSubgroupSize;
    deUint32              maxComputeWorkgroupSubgroups;
    VkShaderStageFlags    requiredSubgroupSizeStages;
} VkPhysicalDeviceSubgroupSizeControlPropertiesEXT;

typedef struct VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           requiredSubgroupSize;
} VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT;



#define VK_AMD_shader_core_properties2 1
#define VK_AMD_SHADER_CORE_PROPERTIES_2_SPEC_VERSION 1
#define VK_AMD_SHADER_CORE_PROPERTIES_2_EXTENSION_NAME "VK_AMD_shader_core_properties2"

typedef enum VkShaderCorePropertiesFlagBitsAMD {
    VK_SHADER_CORE_PROPERTIES_FLAG_BITS_MAX_ENUM_AMD = 0x7FFFFFFF
} VkShaderCorePropertiesFlagBitsAMD;
typedef VkFlags VkShaderCorePropertiesFlagsAMD;
typedef struct VkPhysicalDeviceShaderCoreProperties2AMD {
    VkStructureType                   sType;
    void*                             pNext;
    VkShaderCorePropertiesFlagsAMD    shaderCoreFeatures;
    deUint32                          activeComputeUnitCount;
} VkPhysicalDeviceShaderCoreProperties2AMD;



#define VK_AMD_device_coherent_memory 1
#define VK_AMD_DEVICE_COHERENT_MEMORY_SPEC_VERSION 1
#define VK_AMD_DEVICE_COHERENT_MEMORY_EXTENSION_NAME "VK_AMD_device_coherent_memory"
typedef struct VkPhysicalDeviceCoherentMemoryFeaturesAMD {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           deviceCoherentMemory;
} VkPhysicalDeviceCoherentMemoryFeaturesAMD;



#define VK_EXT_shader_image_atomic_int64 1
#define VK_EXT_SHADER_IMAGE_ATOMIC_INT64_SPEC_VERSION 1
#define VK_EXT_SHADER_IMAGE_ATOMIC_INT64_EXTENSION_NAME "VK_EXT_shader_image_atomic_int64"
typedef struct VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderImageInt64Atomics;
    VkBool32           sparseImageInt64Atomics;
} VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT;



#define VK_EXT_memory_budget 1
#define VK_EXT_MEMORY_BUDGET_SPEC_VERSION 1
#define VK_EXT_MEMORY_BUDGET_EXTENSION_NAME "VK_EXT_memory_budget"
typedef struct VkPhysicalDeviceMemoryBudgetPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkDeviceSize       heapBudget[VK_MAX_MEMORY_HEAPS];
    VkDeviceSize       heapUsage[VK_MAX_MEMORY_HEAPS];
} VkPhysicalDeviceMemoryBudgetPropertiesEXT;



#define VK_EXT_memory_priority 1
#define VK_EXT_MEMORY_PRIORITY_SPEC_VERSION 1
#define VK_EXT_MEMORY_PRIORITY_EXTENSION_NAME "VK_EXT_memory_priority"
typedef struct VkPhysicalDeviceMemoryPriorityFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           memoryPriority;
} VkPhysicalDeviceMemoryPriorityFeaturesEXT;

typedef struct VkMemoryPriorityAllocateInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    float              priority;
} VkMemoryPriorityAllocateInfoEXT;



#define VK_NV_dedicated_allocation_image_aliasing 1
#define VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_SPEC_VERSION 1
#define VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_EXTENSION_NAME "VK_NV_dedicated_allocation_image_aliasing"
typedef struct VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           dedicatedAllocationImageAliasing;
} VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;



#define VK_EXT_buffer_device_address 1
#define VK_EXT_BUFFER_DEVICE_ADDRESS_SPEC_VERSION 2
#define VK_EXT_BUFFER_DEVICE_ADDRESS_EXTENSION_NAME "VK_EXT_buffer_device_address"
typedef struct VkPhysicalDeviceBufferDeviceAddressFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           bufferDeviceAddress;
    VkBool32           bufferDeviceAddressCaptureReplay;
    VkBool32           bufferDeviceAddressMultiDevice;
} VkPhysicalDeviceBufferDeviceAddressFeaturesEXT;

typedef VkPhysicalDeviceBufferDeviceAddressFeaturesEXT VkPhysicalDeviceBufferAddressFeaturesEXT;

typedef VkBufferDeviceAddressInfo VkBufferDeviceAddressInfoEXT;

typedef struct VkBufferDeviceAddressCreateInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    VkDeviceAddress    deviceAddress;
} VkBufferDeviceAddressCreateInfoEXT;

typedef VkDeviceAddress (VKAPI_PTR *PFN_vkGetBufferDeviceAddressEXT)(VkDevice device, const VkBufferDeviceAddressInfo* pInfo);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddressEXT(
    VkDevice                                    device,
    const VkBufferDeviceAddressInfo*            pInfo);
#endif


#define VK_EXT_tooling_info 1
#define VK_EXT_TOOLING_INFO_SPEC_VERSION  1
#define VK_EXT_TOOLING_INFO_EXTENSION_NAME "VK_EXT_tooling_info"

typedef enum VkToolPurposeFlagBitsEXT {
    VK_TOOL_PURPOSE_VALIDATION_BIT_EXT = 0x00000001,
    VK_TOOL_PURPOSE_PROFILING_BIT_EXT = 0x00000002,
    VK_TOOL_PURPOSE_TRACING_BIT_EXT = 0x00000004,
    VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT_EXT = 0x00000008,
    VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT_EXT = 0x00000010,
    VK_TOOL_PURPOSE_DEBUG_REPORTING_BIT_EXT = 0x00000020,
    VK_TOOL_PURPOSE_DEBUG_MARKERS_BIT_EXT = 0x00000040,
    VK_TOOL_PURPOSE_FLAG_BITS_MAX_ENUM_EXT = 0x7FFFFFFF
} VkToolPurposeFlagBitsEXT;
typedef VkFlags VkToolPurposeFlagsEXT;
typedef struct VkPhysicalDeviceToolPropertiesEXT {
    VkStructureType          sType;
    void*                    pNext;
    char                     name[VK_MAX_EXTENSION_NAME_SIZE];
    char                     version[VK_MAX_EXTENSION_NAME_SIZE];
    VkToolPurposeFlagsEXT    purposes;
    char                     description[VK_MAX_DESCRIPTION_SIZE];
    char                     layer[VK_MAX_EXTENSION_NAME_SIZE];
} VkPhysicalDeviceToolPropertiesEXT;

typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceToolPropertiesEXT)(VkPhysicalDevice physicalDevice, deUint32* pToolCount, VkPhysicalDeviceToolPropertiesEXT* pToolProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceToolPropertiesEXT(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pToolCount,
    VkPhysicalDeviceToolPropertiesEXT*          pToolProperties);
#endif


#define VK_EXT_separate_stencil_usage 1
#define VK_EXT_SEPARATE_STENCIL_USAGE_SPEC_VERSION 1
#define VK_EXT_SEPARATE_STENCIL_USAGE_EXTENSION_NAME "VK_EXT_separate_stencil_usage"
typedef VkImageStencilUsageCreateInfo VkImageStencilUsageCreateInfoEXT;



#define VK_EXT_validation_features 1
#define VK_EXT_VALIDATION_FEATURES_SPEC_VERSION 5
#define VK_EXT_VALIDATION_FEATURES_EXTENSION_NAME "VK_EXT_validation_features"

typedef enum VkValidationFeatureEnableEXT {
    VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT = 0,
    VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT = 1,
    VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT = 2,
    VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT = 3,
    VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT = 4,
    VK_VALIDATION_FEATURE_ENABLE_MAX_ENUM_EXT = 0x7FFFFFFF
} VkValidationFeatureEnableEXT;

typedef enum VkValidationFeatureDisableEXT {
    VK_VALIDATION_FEATURE_DISABLE_ALL_EXT = 0,
    VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT = 1,
    VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT = 2,
    VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT = 3,
    VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT = 4,
    VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT = 5,
    VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT = 6,
    VK_VALIDATION_FEATURE_DISABLE_SHADER_VALIDATION_CACHE_EXT = 7,
    VK_VALIDATION_FEATURE_DISABLE_MAX_ENUM_EXT = 0x7FFFFFFF
} VkValidationFeatureDisableEXT;
typedef struct VkValidationFeaturesEXT {
    VkStructureType                         sType;
    const void*                             pNext;
    deUint32                                enabledValidationFeatureCount;
    const VkValidationFeatureEnableEXT*     pEnabledValidationFeatures;
    deUint32                                disabledValidationFeatureCount;
    const VkValidationFeatureDisableEXT*    pDisabledValidationFeatures;
} VkValidationFeaturesEXT;



#define VK_NV_cooperative_matrix 1
#define VK_NV_COOPERATIVE_MATRIX_SPEC_VERSION 1
#define VK_NV_COOPERATIVE_MATRIX_EXTENSION_NAME "VK_NV_cooperative_matrix"

typedef enum VkComponentTypeNV {
    VK_COMPONENT_TYPE_FLOAT16_NV = 0,
    VK_COMPONENT_TYPE_FLOAT32_NV = 1,
    VK_COMPONENT_TYPE_FLOAT64_NV = 2,
    VK_COMPONENT_TYPE_SINT8_NV = 3,
    VK_COMPONENT_TYPE_SINT16_NV = 4,
    VK_COMPONENT_TYPE_SINT32_NV = 5,
    VK_COMPONENT_TYPE_SINT64_NV = 6,
    VK_COMPONENT_TYPE_UINT8_NV = 7,
    VK_COMPONENT_TYPE_UINT16_NV = 8,
    VK_COMPONENT_TYPE_UINT32_NV = 9,
    VK_COMPONENT_TYPE_UINT64_NV = 10,
    VK_COMPONENT_TYPE_MAX_ENUM_NV = 0x7FFFFFFF
} VkComponentTypeNV;

typedef enum VkScopeNV {
    VK_SCOPE_DEVICE_NV = 1,
    VK_SCOPE_WORKGROUP_NV = 2,
    VK_SCOPE_SUBGROUP_NV = 3,
    VK_SCOPE_QUEUE_FAMILY_NV = 5,
    VK_SCOPE_MAX_ENUM_NV = 0x7FFFFFFF
} VkScopeNV;
typedef struct VkCooperativeMatrixPropertiesNV {
    VkStructureType      sType;
    void*                pNext;
    deUint32             MSize;
    deUint32             NSize;
    deUint32             KSize;
    VkComponentTypeNV    AType;
    VkComponentTypeNV    BType;
    VkComponentTypeNV    CType;
    VkComponentTypeNV    DType;
    VkScopeNV            scope;
} VkCooperativeMatrixPropertiesNV;

typedef struct VkPhysicalDeviceCooperativeMatrixFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           cooperativeMatrix;
    VkBool32           cooperativeMatrixRobustBufferAccess;
} VkPhysicalDeviceCooperativeMatrixFeaturesNV;

typedef struct VkPhysicalDeviceCooperativeMatrixPropertiesNV {
    VkStructureType       sType;
    void*                 pNext;
    VkShaderStageFlags    cooperativeMatrixSupportedStages;
} VkPhysicalDeviceCooperativeMatrixPropertiesNV;

typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)(VkPhysicalDevice physicalDevice, deUint32* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pPropertyCount,
    VkCooperativeMatrixPropertiesNV*            pProperties);
#endif


#define VK_NV_coverage_reduction_mode 1
#define VK_NV_COVERAGE_REDUCTION_MODE_SPEC_VERSION 1
#define VK_NV_COVERAGE_REDUCTION_MODE_EXTENSION_NAME "VK_NV_coverage_reduction_mode"

typedef enum VkCoverageReductionModeNV {
    VK_COVERAGE_REDUCTION_MODE_MERGE_NV = 0,
    VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV = 1,
    VK_COVERAGE_REDUCTION_MODE_MAX_ENUM_NV = 0x7FFFFFFF
} VkCoverageReductionModeNV;
typedef VkFlags VkPipelineCoverageReductionStateCreateFlagsNV;
typedef struct VkPhysicalDeviceCoverageReductionModeFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           coverageReductionMode;
} VkPhysicalDeviceCoverageReductionModeFeaturesNV;

typedef struct VkPipelineCoverageReductionStateCreateInfoNV {
    VkStructureType                                  sType;
    const void*                                      pNext;
    VkPipelineCoverageReductionStateCreateFlagsNV    flags;
    VkCoverageReductionModeNV                        coverageReductionMode;
} VkPipelineCoverageReductionStateCreateInfoNV;

typedef struct VkFramebufferMixedSamplesCombinationNV {
    VkStructureType              sType;
    void*                        pNext;
    VkCoverageReductionModeNV    coverageReductionMode;
    VkSampleCountFlagBits        rasterizationSamples;
    VkSampleCountFlags           depthStencilSamples;
    VkSampleCountFlags           colorSamples;
} VkFramebufferMixedSamplesCombinationNV;

typedef VkResult (VKAPI_PTR *PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)(VkPhysicalDevice physicalDevice, deUint32* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    VkPhysicalDevice                            physicalDevice,
    deUint32*                                   pCombinationCount,
    VkFramebufferMixedSamplesCombinationNV*     pCombinations);
#endif


#define VK_EXT_fragment_shader_interlock 1
#define VK_EXT_FRAGMENT_SHADER_INTERLOCK_SPEC_VERSION 1
#define VK_EXT_FRAGMENT_SHADER_INTERLOCK_EXTENSION_NAME "VK_EXT_fragment_shader_interlock"
typedef struct VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           fragmentShaderSampleInterlock;
    VkBool32           fragmentShaderPixelInterlock;
    VkBool32           fragmentShaderShadingRateInterlock;
} VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT;



#define VK_EXT_ycbcr_image_arrays 1
#define VK_EXT_YCBCR_IMAGE_ARRAYS_SPEC_VERSION 1
#define VK_EXT_YCBCR_IMAGE_ARRAYS_EXTENSION_NAME "VK_EXT_ycbcr_image_arrays"
typedef struct VkPhysicalDeviceYcbcrImageArraysFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           ycbcrImageArrays;
} VkPhysicalDeviceYcbcrImageArraysFeaturesEXT;



#define VK_EXT_provoking_vertex 1
#define VK_EXT_PROVOKING_VERTEX_SPEC_VERSION 1
#define VK_EXT_PROVOKING_VERTEX_EXTENSION_NAME "VK_EXT_provoking_vertex"

typedef enum VkProvokingVertexModeEXT {
    VK_PROVOKING_VERTEX_MODE_FIRST_VERTEX_EXT = 0,
    VK_PROVOKING_VERTEX_MODE_LAST_VERTEX_EXT = 1,
    VK_PROVOKING_VERTEX_MODE_MAX_ENUM_EXT = 0x7FFFFFFF
} VkProvokingVertexModeEXT;
typedef struct VkPhysicalDeviceProvokingVertexFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           provokingVertexLast;
    VkBool32           transformFeedbackPreservesProvokingVertex;
} VkPhysicalDeviceProvokingVertexFeaturesEXT;

typedef struct VkPhysicalDeviceProvokingVertexPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           provokingVertexModePerPipeline;
    VkBool32           transformFeedbackPreservesTriangleFanProvokingVertex;
} VkPhysicalDeviceProvokingVertexPropertiesEXT;

typedef struct VkPipelineRasterizationProvokingVertexStateCreateInfoEXT {
    VkStructureType             sType;
    const void*                 pNext;
    VkProvokingVertexModeEXT    provokingVertexMode;
} VkPipelineRasterizationProvokingVertexStateCreateInfoEXT;



#define VK_EXT_headless_surface 1
#define VK_EXT_HEADLESS_SURFACE_SPEC_VERSION 1
#define VK_EXT_HEADLESS_SURFACE_EXTENSION_NAME "VK_EXT_headless_surface"
typedef VkFlags VkHeadlessSurfaceCreateFlagsEXT;
typedef struct VkHeadlessSurfaceCreateInfoEXT {
    VkStructureType                    sType;
    const void*                        pNext;
    VkHeadlessSurfaceCreateFlagsEXT    flags;
} VkHeadlessSurfaceCreateInfoEXT;

typedef VkResult (VKAPI_PTR *PFN_vkCreateHeadlessSurfaceEXT)(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateHeadlessSurfaceEXT(
    VkInstance                                  instance,
    const VkHeadlessSurfaceCreateInfoEXT*       pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif


#define VK_EXT_line_rasterization 1
#define VK_EXT_LINE_RASTERIZATION_SPEC_VERSION 1
#define VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME "VK_EXT_line_rasterization"

typedef enum VkLineRasterizationModeEXT {
    VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT = 0,
    VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT = 1,
    VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT = 2,
    VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT = 3,
    VK_LINE_RASTERIZATION_MODE_MAX_ENUM_EXT = 0x7FFFFFFF
} VkLineRasterizationModeEXT;
typedef struct VkPhysicalDeviceLineRasterizationFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           rectangularLines;
    VkBool32           bresenhamLines;
    VkBool32           smoothLines;
    VkBool32           stippledRectangularLines;
    VkBool32           stippledBresenhamLines;
    VkBool32           stippledSmoothLines;
} VkPhysicalDeviceLineRasterizationFeaturesEXT;

typedef struct VkPhysicalDeviceLineRasterizationPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           lineSubPixelPrecisionBits;
} VkPhysicalDeviceLineRasterizationPropertiesEXT;

typedef struct VkPipelineRasterizationLineStateCreateInfoEXT {
    VkStructureType               sType;
    const void*                   pNext;
    VkLineRasterizationModeEXT    lineRasterizationMode;
    VkBool32                      stippledLineEnable;
    deUint32                      lineStippleFactor;
    deUint16                      lineStipplePattern;
} VkPipelineRasterizationLineStateCreateInfoEXT;

typedef void (VKAPI_PTR *PFN_vkCmdSetLineStippleEXT)(VkCommandBuffer commandBuffer, deUint32 lineStippleFactor, deUint16 lineStipplePattern);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdSetLineStippleEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    lineStippleFactor,
    deUint16                                    lineStipplePattern);
#endif


#define VK_EXT_shader_atomic_float 1
#define VK_EXT_SHADER_ATOMIC_FLOAT_SPEC_VERSION 1
#define VK_EXT_SHADER_ATOMIC_FLOAT_EXTENSION_NAME "VK_EXT_shader_atomic_float"
typedef struct VkPhysicalDeviceShaderAtomicFloatFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderBufferFloat32Atomics;
    VkBool32           shaderBufferFloat32AtomicAdd;
    VkBool32           shaderBufferFloat64Atomics;
    VkBool32           shaderBufferFloat64AtomicAdd;
    VkBool32           shaderSharedFloat32Atomics;
    VkBool32           shaderSharedFloat32AtomicAdd;
    VkBool32           shaderSharedFloat64Atomics;
    VkBool32           shaderSharedFloat64AtomicAdd;
    VkBool32           shaderImageFloat32Atomics;
    VkBool32           shaderImageFloat32AtomicAdd;
    VkBool32           sparseImageFloat32Atomics;
    VkBool32           sparseImageFloat32AtomicAdd;
} VkPhysicalDeviceShaderAtomicFloatFeaturesEXT;



#define VK_EXT_host_query_reset 1
#define VK_EXT_HOST_QUERY_RESET_SPEC_VERSION 1
#define VK_EXT_HOST_QUERY_RESET_EXTENSION_NAME "VK_EXT_host_query_reset"
typedef VkPhysicalDeviceHostQueryResetFeatures VkPhysicalDeviceHostQueryResetFeaturesEXT;

typedef void (VKAPI_PTR *PFN_vkResetQueryPoolEXT)(VkDevice device, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkResetQueryPoolEXT(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    deUint32                                    firstQuery,
    deUint32                                    queryCount);
#endif


#define VK_EXT_index_type_uint8 1
#define VK_EXT_INDEX_TYPE_UINT8_SPEC_VERSION 1
#define VK_EXT_INDEX_TYPE_UINT8_EXTENSION_NAME "VK_EXT_index_type_uint8"
typedef struct VkPhysicalDeviceIndexTypeUint8FeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           indexTypeUint8;
} VkPhysicalDeviceIndexTypeUint8FeaturesEXT;



#define VK_EXT_extended_dynamic_state 1
#define VK_EXT_EXTENDED_DYNAMIC_STATE_SPEC_VERSION 1
#define VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME "VK_EXT_extended_dynamic_state"
typedef struct VkPhysicalDeviceExtendedDynamicStateFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           extendedDynamicState;
} VkPhysicalDeviceExtendedDynamicStateFeaturesEXT;

typedef void (VKAPI_PTR *PFN_vkCmdSetCullModeEXT)(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode);
typedef void (VKAPI_PTR *PFN_vkCmdSetFrontFaceEXT)(VkCommandBuffer commandBuffer, VkFrontFace frontFace);
typedef void (VKAPI_PTR *PFN_vkCmdSetPrimitiveTopologyEXT)(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology);
typedef void (VKAPI_PTR *PFN_vkCmdSetViewportWithCountEXT)(VkCommandBuffer commandBuffer, deUint32 viewportCount, const VkViewport* pViewports);
typedef void (VKAPI_PTR *PFN_vkCmdSetScissorWithCountEXT)(VkCommandBuffer commandBuffer, deUint32 scissorCount, const VkRect2D* pScissors);
typedef void (VKAPI_PTR *PFN_vkCmdBindVertexBuffers2EXT)(VkCommandBuffer commandBuffer, deUint32 firstBinding, deUint32 bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides);
typedef void (VKAPI_PTR *PFN_vkCmdSetDepthTestEnableEXT)(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable);
typedef void (VKAPI_PTR *PFN_vkCmdSetDepthWriteEnableEXT)(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable);
typedef void (VKAPI_PTR *PFN_vkCmdSetDepthCompareOpEXT)(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp);
typedef void (VKAPI_PTR *PFN_vkCmdSetDepthBoundsTestEnableEXT)(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable);
typedef void (VKAPI_PTR *PFN_vkCmdSetStencilTestEnableEXT)(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable);
typedef void (VKAPI_PTR *PFN_vkCmdSetStencilOpEXT)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdSetCullModeEXT(
    VkCommandBuffer                             commandBuffer,
    VkCullModeFlags                             cullMode);

VKAPI_ATTR void VKAPI_CALL vkCmdSetFrontFaceEXT(
    VkCommandBuffer                             commandBuffer,
    VkFrontFace                                 frontFace);

VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveTopologyEXT(
    VkCommandBuffer                             commandBuffer,
    VkPrimitiveTopology                         primitiveTopology);

VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWithCountEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    viewportCount,
    const VkViewport*                           pViewports);

VKAPI_ATTR void VKAPI_CALL vkCmdSetScissorWithCountEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    scissorCount,
    const VkRect2D*                             pScissors);

VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers2EXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    firstBinding,
    deUint32                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets,
    const VkDeviceSize*                         pSizes,
    const VkDeviceSize*                         pStrides);

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthTestEnableEXT(
    VkCommandBuffer                             commandBuffer,
    VkBool32                                    depthTestEnable);

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthWriteEnableEXT(
    VkCommandBuffer                             commandBuffer,
    VkBool32                                    depthWriteEnable);

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthCompareOpEXT(
    VkCommandBuffer                             commandBuffer,
    VkCompareOp                                 depthCompareOp);

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBoundsTestEnableEXT(
    VkCommandBuffer                             commandBuffer,
    VkBool32                                    depthBoundsTestEnable);

VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilTestEnableEXT(
    VkCommandBuffer                             commandBuffer,
    VkBool32                                    stencilTestEnable);

VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilOpEXT(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    VkStencilOp                                 failOp,
    VkStencilOp                                 passOp,
    VkStencilOp                                 depthFailOp,
    VkCompareOp                                 compareOp);
#endif


#define VK_EXT_shader_atomic_float2 1
#define VK_EXT_SHADER_ATOMIC_FLOAT_2_SPEC_VERSION 1
#define VK_EXT_SHADER_ATOMIC_FLOAT_2_EXTENSION_NAME "VK_EXT_shader_atomic_float2"
typedef struct VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderBufferFloat16Atomics;
    VkBool32           shaderBufferFloat16AtomicAdd;
    VkBool32           shaderBufferFloat16AtomicMinMax;
    VkBool32           shaderBufferFloat32AtomicMinMax;
    VkBool32           shaderBufferFloat64AtomicMinMax;
    VkBool32           shaderSharedFloat16Atomics;
    VkBool32           shaderSharedFloat16AtomicAdd;
    VkBool32           shaderSharedFloat16AtomicMinMax;
    VkBool32           shaderSharedFloat32AtomicMinMax;
    VkBool32           shaderSharedFloat64AtomicMinMax;
    VkBool32           shaderImageFloat32AtomicMinMax;
    VkBool32           sparseImageFloat32AtomicMinMax;
} VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT;



#define VK_EXT_shader_demote_to_helper_invocation 1
#define VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_SPEC_VERSION 1
#define VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_EXTENSION_NAME "VK_EXT_shader_demote_to_helper_invocation"
typedef struct VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderDemoteToHelperInvocation;
} VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT;



#define VK_NV_device_generated_commands 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkIndirectCommandsLayoutNV)
#define VK_NV_DEVICE_GENERATED_COMMANDS_SPEC_VERSION 3
#define VK_NV_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME "VK_NV_device_generated_commands"

typedef enum VkIndirectCommandsTokenTypeNV {
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_SHADER_GROUP_NV = 0,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_STATE_FLAGS_NV = 1,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NV = 2,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NV = 3,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NV = 4,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NV = 5,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NV = 6,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_TASKS_NV = 7,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_MAX_ENUM_NV = 0x7FFFFFFF
} VkIndirectCommandsTokenTypeNV;

typedef enum VkIndirectStateFlagBitsNV {
    VK_INDIRECT_STATE_FLAG_FRONTFACE_BIT_NV = 0x00000001,
    VK_INDIRECT_STATE_FLAG_BITS_MAX_ENUM_NV = 0x7FFFFFFF
} VkIndirectStateFlagBitsNV;
typedef VkFlags VkIndirectStateFlagsNV;

typedef enum VkIndirectCommandsLayoutUsageFlagBitsNV {
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EXPLICIT_PREPROCESS_BIT_NV = 0x00000001,
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NV = 0x00000002,
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NV = 0x00000004,
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_FLAG_BITS_MAX_ENUM_NV = 0x7FFFFFFF
} VkIndirectCommandsLayoutUsageFlagBitsNV;
typedef VkFlags VkIndirectCommandsLayoutUsageFlagsNV;
typedef struct VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxGraphicsShaderGroupCount;
    deUint32           maxIndirectSequenceCount;
    deUint32           maxIndirectCommandsTokenCount;
    deUint32           maxIndirectCommandsStreamCount;
    deUint32           maxIndirectCommandsTokenOffset;
    deUint32           maxIndirectCommandsStreamStride;
    deUint32           minSequencesCountBufferOffsetAlignment;
    deUint32           minSequencesIndexBufferOffsetAlignment;
    deUint32           minIndirectCommandsBufferOffsetAlignment;
} VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV;

typedef struct VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           deviceGeneratedCommands;
} VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV;

typedef struct VkGraphicsShaderGroupCreateInfoNV {
    VkStructureType                                 sType;
    const void*                                     pNext;
    deUint32                                        stageCount;
    const VkPipelineShaderStageCreateInfo*          pStages;
    const VkPipelineVertexInputStateCreateInfo*     pVertexInputState;
    const VkPipelineTessellationStateCreateInfo*    pTessellationState;
} VkGraphicsShaderGroupCreateInfoNV;

typedef struct VkGraphicsPipelineShaderGroupsCreateInfoNV {
    VkStructureType                             sType;
    const void*                                 pNext;
    deUint32                                    groupCount;
    const VkGraphicsShaderGroupCreateInfoNV*    pGroups;
    deUint32                                    pipelineCount;
    const VkPipeline*                           pPipelines;
} VkGraphicsPipelineShaderGroupsCreateInfoNV;

typedef struct VkBindShaderGroupIndirectCommandNV {
    deUint32    groupIndex;
} VkBindShaderGroupIndirectCommandNV;

typedef struct VkBindIndexBufferIndirectCommandNV {
    VkDeviceAddress    bufferAddress;
    deUint32           size;
    VkIndexType        indexType;
} VkBindIndexBufferIndirectCommandNV;

typedef struct VkBindVertexBufferIndirectCommandNV {
    VkDeviceAddress    bufferAddress;
    deUint32           size;
    deUint32           stride;
} VkBindVertexBufferIndirectCommandNV;

typedef struct VkSetStateFlagsIndirectCommandNV {
    deUint32    data;
} VkSetStateFlagsIndirectCommandNV;

typedef struct VkIndirectCommandsStreamNV {
    VkBuffer        buffer;
    VkDeviceSize    offset;
} VkIndirectCommandsStreamNV;

typedef struct VkIndirectCommandsLayoutTokenNV {
    VkStructureType                  sType;
    const void*                      pNext;
    VkIndirectCommandsTokenTypeNV    tokenType;
    deUint32                         stream;
    deUint32                         offset;
    deUint32                         vertexBindingUnit;
    VkBool32                         vertexDynamicStride;
    VkPipelineLayout                 pushconstantPipelineLayout;
    VkShaderStageFlags               pushconstantShaderStageFlags;
    deUint32                         pushconstantOffset;
    deUint32                         pushconstantSize;
    VkIndirectStateFlagsNV           indirectStateFlags;
    deUint32                         indexTypeCount;
    const VkIndexType*               pIndexTypes;
    const deUint32*                  pIndexTypeValues;
} VkIndirectCommandsLayoutTokenNV;

typedef struct VkIndirectCommandsLayoutCreateInfoNV {
    VkStructureType                           sType;
    const void*                               pNext;
    VkIndirectCommandsLayoutUsageFlagsNV      flags;
    VkPipelineBindPoint                       pipelineBindPoint;
    deUint32                                  tokenCount;
    const VkIndirectCommandsLayoutTokenNV*    pTokens;
    deUint32                                  streamCount;
    const deUint32*                           pStreamStrides;
} VkIndirectCommandsLayoutCreateInfoNV;

typedef struct VkGeneratedCommandsInfoNV {
    VkStructureType                      sType;
    const void*                          pNext;
    VkPipelineBindPoint                  pipelineBindPoint;
    VkPipeline                           pipeline;
    VkIndirectCommandsLayoutNV           indirectCommandsLayout;
    deUint32                             streamCount;
    const VkIndirectCommandsStreamNV*    pStreams;
    deUint32                             sequencesCount;
    VkBuffer                             preprocessBuffer;
    VkDeviceSize                         preprocessOffset;
    VkDeviceSize                         preprocessSize;
    VkBuffer                             sequencesCountBuffer;
    VkDeviceSize                         sequencesCountOffset;
    VkBuffer                             sequencesIndexBuffer;
    VkDeviceSize                         sequencesIndexOffset;
} VkGeneratedCommandsInfoNV;

typedef struct VkGeneratedCommandsMemoryRequirementsInfoNV {
    VkStructureType               sType;
    const void*                   pNext;
    VkPipelineBindPoint           pipelineBindPoint;
    VkPipeline                    pipeline;
    VkIndirectCommandsLayoutNV    indirectCommandsLayout;
    deUint32                      maxSequencesCount;
} VkGeneratedCommandsMemoryRequirementsInfoNV;

typedef void (VKAPI_PTR *PFN_vkGetGeneratedCommandsMemoryRequirementsNV)(VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2* pMemoryRequirements);
typedef void (VKAPI_PTR *PFN_vkCmdPreprocessGeneratedCommandsNV)(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);
typedef void (VKAPI_PTR *PFN_vkCmdExecuteGeneratedCommandsNV)(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);
typedef void (VKAPI_PTR *PFN_vkCmdBindPipelineShaderGroupNV)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, deUint32 groupIndex);
typedef VkResult (VKAPI_PTR *PFN_vkCreateIndirectCommandsLayoutNV)(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNV* pIndirectCommandsLayout);
typedef void (VKAPI_PTR *PFN_vkDestroyIndirectCommandsLayoutNV)(VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks* pAllocator);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkGetGeneratedCommandsMemoryRequirementsNV(
    VkDevice                                    device,
    const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements);

VKAPI_ATTR void VKAPI_CALL vkCmdPreprocessGeneratedCommandsNV(
    VkCommandBuffer                             commandBuffer,
    const VkGeneratedCommandsInfoNV*            pGeneratedCommandsInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdExecuteGeneratedCommandsNV(
    VkCommandBuffer                             commandBuffer,
    VkBool32                                    isPreprocessed,
    const VkGeneratedCommandsInfoNV*            pGeneratedCommandsInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdBindPipelineShaderGroupNV(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipeline                                  pipeline,
    deUint32                                    groupIndex);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateIndirectCommandsLayoutNV(
    VkDevice                                    device,
    const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkIndirectCommandsLayoutNV*                 pIndirectCommandsLayout);

VKAPI_ATTR void VKAPI_CALL vkDestroyIndirectCommandsLayoutNV(
    VkDevice                                    device,
    VkIndirectCommandsLayoutNV                  indirectCommandsLayout,
    const VkAllocationCallbacks*                pAllocator);
#endif


#define VK_NV_inherited_viewport_scissor 1
#define VK_NV_INHERITED_VIEWPORT_SCISSOR_SPEC_VERSION 1
#define VK_NV_INHERITED_VIEWPORT_SCISSOR_EXTENSION_NAME "VK_NV_inherited_viewport_scissor"
typedef struct VkPhysicalDeviceInheritedViewportScissorFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           inheritedViewportScissor2D;
} VkPhysicalDeviceInheritedViewportScissorFeaturesNV;

typedef struct VkCommandBufferInheritanceViewportScissorInfoNV {
    VkStructureType      sType;
    const void*          pNext;
    VkBool32             viewportScissor2D;
    deUint32             viewportDepthCount;
    const VkViewport*    pViewportDepths;
} VkCommandBufferInheritanceViewportScissorInfoNV;



#define VK_EXT_texel_buffer_alignment 1
#define VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION 1
#define VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME "VK_EXT_texel_buffer_alignment"
typedef struct VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           texelBufferAlignment;
} VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT;

typedef struct VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkDeviceSize       storageTexelBufferOffsetAlignmentBytes;
    VkBool32           storageTexelBufferOffsetSingleTexelAlignment;
    VkDeviceSize       uniformTexelBufferOffsetAlignmentBytes;
    VkBool32           uniformTexelBufferOffsetSingleTexelAlignment;
} VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT;



#define VK_QCOM_render_pass_transform 1
#define VK_QCOM_RENDER_PASS_TRANSFORM_SPEC_VERSION 2
#define VK_QCOM_RENDER_PASS_TRANSFORM_EXTENSION_NAME "VK_QCOM_render_pass_transform"
typedef struct VkRenderPassTransformBeginInfoQCOM {
    VkStructureType                  sType;
    void*                            pNext;
    VkSurfaceTransformFlagBitsKHR    transform;
} VkRenderPassTransformBeginInfoQCOM;

typedef struct VkCommandBufferInheritanceRenderPassTransformInfoQCOM {
    VkStructureType                  sType;
    void*                            pNext;
    VkSurfaceTransformFlagBitsKHR    transform;
    VkRect2D                         renderArea;
} VkCommandBufferInheritanceRenderPassTransformInfoQCOM;



#define VK_EXT_device_memory_report 1
#define VK_EXT_DEVICE_MEMORY_REPORT_SPEC_VERSION 2
#define VK_EXT_DEVICE_MEMORY_REPORT_EXTENSION_NAME "VK_EXT_device_memory_report"

typedef enum VkDeviceMemoryReportEventTypeEXT {
    VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATE_EXT = 0,
    VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_FREE_EXT = 1,
    VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_IMPORT_EXT = 2,
    VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_UNIMPORT_EXT = 3,
    VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATION_FAILED_EXT = 4,
    VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_MAX_ENUM_EXT = 0x7FFFFFFF
} VkDeviceMemoryReportEventTypeEXT;
typedef VkFlags VkDeviceMemoryReportFlagsEXT;
typedef struct VkPhysicalDeviceDeviceMemoryReportFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           deviceMemoryReport;
} VkPhysicalDeviceDeviceMemoryReportFeaturesEXT;

typedef struct VkDeviceMemoryReportCallbackDataEXT {
    VkStructureType                     sType;
    void*                               pNext;
    VkDeviceMemoryReportFlagsEXT        flags;
    VkDeviceMemoryReportEventTypeEXT    type;
    deUint64                            memoryObjectId;
    VkDeviceSize                        size;
    VkObjectType                        objectType;
    deUint64                            objectHandle;
    deUint32                            heapIndex;
} VkDeviceMemoryReportCallbackDataEXT;

typedef void (VKAPI_PTR *PFN_vkDeviceMemoryReportCallbackEXT)(
    const VkDeviceMemoryReportCallbackDataEXT*  pCallbackData,
    void*                                       pUserData);

typedef struct VkDeviceDeviceMemoryReportCreateInfoEXT {
    VkStructureType                        sType;
    const void*                            pNext;
    VkDeviceMemoryReportFlagsEXT           flags;
    PFN_vkDeviceMemoryReportCallbackEXT    pfnUserCallback;
    void*                                  pUserData;
} VkDeviceDeviceMemoryReportCreateInfoEXT;


#define VK_EXT_rgba10x6_formats 1
#define VK_EXT_RGBA10X6_FORMATS_SPEC_VERSION 1
#define VK_EXT_RGBA10X6_FORMATS_EXTENSION_NAME "VK_EXT_rgba10x6_formats"
typedef struct VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           formatRgba10x6WithoutYCbCrSampler;
} VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT;

#define VK_EXT_acquire_drm_display 1
#define VK_EXT_ACQUIRE_DRM_DISPLAY_SPEC_VERSION 1
#define VK_EXT_ACQUIRE_DRM_DISPLAY_EXTENSION_NAME "VK_EXT_acquire_drm_display"
typedef VkResult (VKAPI_PTR *PFN_vkAcquireDrmDisplayEXT)(VkPhysicalDevice physicalDevice, deInt32 drmFd, VkDisplayKHR display);
typedef VkResult (VKAPI_PTR *PFN_vkGetDrmDisplayEXT)(VkPhysicalDevice physicalDevice, deInt32 drmFd, deUint32 connectorId, VkDisplayKHR* display);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkAcquireDrmDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    deInt32                                     drmFd,
    VkDisplayKHR                                display);

VKAPI_ATTR VkResult VKAPI_CALL vkGetDrmDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    deInt32                                     drmFd,
    deUint32                                    connectorId,
    VkDisplayKHR*                               display);
#endif


#define VK_EXT_robustness2 1
#define VK_EXT_ROBUSTNESS_2_SPEC_VERSION  1
#define VK_EXT_ROBUSTNESS_2_EXTENSION_NAME "VK_EXT_robustness2"
typedef struct VkPhysicalDeviceRobustness2FeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           robustBufferAccess2;
    VkBool32           robustImageAccess2;
    VkBool32           nullDescriptor;
} VkPhysicalDeviceRobustness2FeaturesEXT;

typedef struct VkPhysicalDeviceRobustness2PropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkDeviceSize       robustStorageBufferAccessSizeAlignment;
    VkDeviceSize       robustUniformBufferAccessSizeAlignment;
} VkPhysicalDeviceRobustness2PropertiesEXT;



#define VK_EXT_custom_border_color 1
#define VK_EXT_CUSTOM_BORDER_COLOR_SPEC_VERSION 12
#define VK_EXT_CUSTOM_BORDER_COLOR_EXTENSION_NAME "VK_EXT_custom_border_color"
typedef struct VkSamplerCustomBorderColorCreateInfoEXT {
    VkStructureType      sType;
    const void*          pNext;
    VkClearColorValue    customBorderColor;
    VkFormat             format;
} VkSamplerCustomBorderColorCreateInfoEXT;

typedef struct VkPhysicalDeviceCustomBorderColorPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxCustomBorderColorSamplers;
} VkPhysicalDeviceCustomBorderColorPropertiesEXT;

typedef struct VkPhysicalDeviceCustomBorderColorFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           customBorderColors;
    VkBool32           customBorderColorWithoutFormat;
} VkPhysicalDeviceCustomBorderColorFeaturesEXT;



#define VK_GOOGLE_user_type 1
#define VK_GOOGLE_USER_TYPE_SPEC_VERSION  1
#define VK_GOOGLE_USER_TYPE_EXTENSION_NAME "VK_GOOGLE_user_type"


#define VK_EXT_private_data 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPrivateDataSlotEXT)
#define VK_EXT_PRIVATE_DATA_SPEC_VERSION  1
#define VK_EXT_PRIVATE_DATA_EXTENSION_NAME "VK_EXT_private_data"

typedef enum VkPrivateDataSlotCreateFlagBitsEXT {
    VK_PRIVATE_DATA_SLOT_CREATE_FLAG_BITS_MAX_ENUM_EXT = 0x7FFFFFFF
} VkPrivateDataSlotCreateFlagBitsEXT;
typedef VkFlags VkPrivateDataSlotCreateFlagsEXT;
typedef struct VkPhysicalDevicePrivateDataFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           privateData;
} VkPhysicalDevicePrivateDataFeaturesEXT;

typedef struct VkDevicePrivateDataCreateInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           privateDataSlotRequestCount;
} VkDevicePrivateDataCreateInfoEXT;

typedef struct VkPrivateDataSlotCreateInfoEXT {
    VkStructureType                    sType;
    const void*                        pNext;
    VkPrivateDataSlotCreateFlagsEXT    flags;
} VkPrivateDataSlotCreateInfoEXT;

typedef VkResult (VKAPI_PTR *PFN_vkCreatePrivateDataSlotEXT)(VkDevice device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlotEXT* pPrivateDataSlot);
typedef void (VKAPI_PTR *PFN_vkDestroyPrivateDataSlotEXT)(VkDevice device, VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks* pAllocator);
typedef VkResult (VKAPI_PTR *PFN_vkSetPrivateDataEXT)(VkDevice device, VkObjectType objectType, deUint64 objectHandle, VkPrivateDataSlotEXT privateDataSlot, deUint64 data);
typedef void (VKAPI_PTR *PFN_vkGetPrivateDataEXT)(VkDevice device, VkObjectType objectType, deUint64 objectHandle, VkPrivateDataSlotEXT privateDataSlot, deUint64* pData);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreatePrivateDataSlotEXT(
    VkDevice                                    device,
    const VkPrivateDataSlotCreateInfoEXT*       pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPrivateDataSlotEXT*                       pPrivateDataSlot);

VKAPI_ATTR void VKAPI_CALL vkDestroyPrivateDataSlotEXT(
    VkDevice                                    device,
    VkPrivateDataSlotEXT                        privateDataSlot,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkSetPrivateDataEXT(
    VkDevice                                    device,
    VkObjectType                                objectType,
    deUint64                                    objectHandle,
    VkPrivateDataSlotEXT                        privateDataSlot,
    deUint64                                    data);

VKAPI_ATTR void VKAPI_CALL vkGetPrivateDataEXT(
    VkDevice                                    device,
    VkObjectType                                objectType,
    deUint64                                    objectHandle,
    VkPrivateDataSlotEXT                        privateDataSlot,
    deUint64*                                   pData);
#endif


#define VK_EXT_pipeline_creation_cache_control 1
#define VK_EXT_PIPELINE_CREATION_CACHE_CONTROL_SPEC_VERSION 3
#define VK_EXT_PIPELINE_CREATION_CACHE_CONTROL_EXTENSION_NAME "VK_EXT_pipeline_creation_cache_control"
typedef struct VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           pipelineCreationCacheControl;
} VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT;



#define VK_NV_device_diagnostics_config 1
#define VK_NV_DEVICE_DIAGNOSTICS_CONFIG_SPEC_VERSION 1
#define VK_NV_DEVICE_DIAGNOSTICS_CONFIG_EXTENSION_NAME "VK_NV_device_diagnostics_config"

typedef enum VkDeviceDiagnosticsConfigFlagBitsNV {
    VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_DEBUG_INFO_BIT_NV = 0x00000001,
    VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_RESOURCE_TRACKING_BIT_NV = 0x00000002,
    VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV = 0x00000004,
    VK_DEVICE_DIAGNOSTICS_CONFIG_FLAG_BITS_MAX_ENUM_NV = 0x7FFFFFFF
} VkDeviceDiagnosticsConfigFlagBitsNV;
typedef VkFlags VkDeviceDiagnosticsConfigFlagsNV;
typedef struct VkPhysicalDeviceDiagnosticsConfigFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           diagnosticsConfig;
} VkPhysicalDeviceDiagnosticsConfigFeaturesNV;

typedef struct VkDeviceDiagnosticsConfigCreateInfoNV {
    VkStructureType                     sType;
    const void*                         pNext;
    VkDeviceDiagnosticsConfigFlagsNV    flags;
} VkDeviceDiagnosticsConfigCreateInfoNV;



#define VK_QCOM_render_pass_store_ops 1
#define VK_QCOM_RENDER_PASS_STORE_OPS_SPEC_VERSION 2
#define VK_QCOM_RENDER_PASS_STORE_OPS_EXTENSION_NAME "VK_QCOM_render_pass_store_ops"


#define VK_NV_fragment_shading_rate_enums 1
#define VK_NV_FRAGMENT_SHADING_RATE_ENUMS_SPEC_VERSION 1
#define VK_NV_FRAGMENT_SHADING_RATE_ENUMS_EXTENSION_NAME "VK_NV_fragment_shading_rate_enums"

typedef enum VkFragmentShadingRateTypeNV {
    VK_FRAGMENT_SHADING_RATE_TYPE_FRAGMENT_SIZE_NV = 0,
    VK_FRAGMENT_SHADING_RATE_TYPE_ENUMS_NV = 1,
    VK_FRAGMENT_SHADING_RATE_TYPE_MAX_ENUM_NV = 0x7FFFFFFF
} VkFragmentShadingRateTypeNV;

typedef enum VkFragmentShadingRateNV {
    VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV = 0,
    VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV = 1,
    VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV = 4,
    VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV = 5,
    VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV = 6,
    VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV = 9,
    VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV = 10,
    VK_FRAGMENT_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV = 11,
    VK_FRAGMENT_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV = 12,
    VK_FRAGMENT_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV = 13,
    VK_FRAGMENT_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV = 14,
    VK_FRAGMENT_SHADING_RATE_NO_INVOCATIONS_NV = 15,
    VK_FRAGMENT_SHADING_RATE_MAX_ENUM_NV = 0x7FFFFFFF
} VkFragmentShadingRateNV;
typedef struct VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           fragmentShadingRateEnums;
    VkBool32           supersampleFragmentShadingRates;
    VkBool32           noInvocationFragmentShadingRates;
} VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV;

typedef struct VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV {
    VkStructureType          sType;
    void*                    pNext;
    VkSampleCountFlagBits    maxFragmentShadingRateInvocationCount;
} VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV;

typedef struct VkPipelineFragmentShadingRateEnumStateCreateInfoNV {
    VkStructureType                       sType;
    const void*                           pNext;
    VkFragmentShadingRateTypeNV           shadingRateType;
    VkFragmentShadingRateNV               shadingRate;
    VkFragmentShadingRateCombinerOpKHR    combinerOps[2];
} VkPipelineFragmentShadingRateEnumStateCreateInfoNV;

typedef void (VKAPI_PTR *PFN_vkCmdSetFragmentShadingRateEnumNV)(VkCommandBuffer           commandBuffer, VkFragmentShadingRateNV                     shadingRate, const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdSetFragmentShadingRateEnumNV(
    VkCommandBuffer                             commandBuffer,
    VkFragmentShadingRateNV                     shadingRate,
    const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]);
#endif


#define VK_NV_ray_tracing_motion_blur 1
#define VK_NV_RAY_TRACING_MOTION_BLUR_SPEC_VERSION 1
#define VK_NV_RAY_TRACING_MOTION_BLUR_EXTENSION_NAME "VK_NV_ray_tracing_motion_blur"

typedef enum VkAccelerationStructureMotionInstanceTypeNV {
    VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_STATIC_NV = 0,
    VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_MATRIX_MOTION_NV = 1,
    VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_SRT_MOTION_NV = 2,
    VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_MAX_ENUM_NV = 0x7FFFFFFF
} VkAccelerationStructureMotionInstanceTypeNV;
typedef VkFlags VkAccelerationStructureMotionInfoFlagsNV;
typedef VkFlags VkAccelerationStructureMotionInstanceFlagsNV;
typedef union VkDeviceOrHostAddressConstKHR {
    VkDeviceAddress    deviceAddress;
    const void*        hostAddress;
} VkDeviceOrHostAddressConstKHR;

typedef struct VkAccelerationStructureGeometryMotionTrianglesDataNV {
    VkStructureType                  sType;
    const void*                      pNext;
    VkDeviceOrHostAddressConstKHR    vertexData;
} VkAccelerationStructureGeometryMotionTrianglesDataNV;

typedef struct VkAccelerationStructureMotionInfoNV {
    VkStructureType                             sType;
    const void*                                 pNext;
    deUint32                                    maxInstances;
    VkAccelerationStructureMotionInfoFlagsNV    flags;
} VkAccelerationStructureMotionInfoNV;

typedef struct VkAccelerationStructureMatrixMotionInstanceNV {
    VkTransformMatrixKHR          transformT0;
    VkTransformMatrixKHR          transformT1;
    deUint32                      instanceCustomIndex:24;
    deUint32                      mask:8;
    deUint32                      instanceShaderBindingTableRecordOffset:24;
    VkGeometryInstanceFlagsKHR    flags:8;
    deUint64                      accelerationStructureReference;
} VkAccelerationStructureMatrixMotionInstanceNV;

typedef struct VkSRTDataNV {
    float    sx;
    float    a;
    float    b;
    float    pvx;
    float    sy;
    float    c;
    float    pvy;
    float    sz;
    float    pvz;
    float    qx;
    float    qy;
    float    qz;
    float    qw;
    float    tx;
    float    ty;
    float    tz;
} VkSRTDataNV;

typedef struct VkAccelerationStructureSRTMotionInstanceNV {
    VkSRTDataNV                   transformT0;
    VkSRTDataNV                   transformT1;
    deUint32                      instanceCustomIndex:24;
    deUint32                      mask:8;
    deUint32                      instanceShaderBindingTableRecordOffset:24;
    VkGeometryInstanceFlagsKHR    flags:8;
    deUint64                      accelerationStructureReference;
} VkAccelerationStructureSRTMotionInstanceNV;

typedef union VkAccelerationStructureMotionInstanceDataNV {
    VkAccelerationStructureInstanceKHR               staticInstance;
    VkAccelerationStructureMatrixMotionInstanceNV    matrixMotionInstance;
    VkAccelerationStructureSRTMotionInstanceNV       srtMotionInstance;
} VkAccelerationStructureMotionInstanceDataNV;

typedef struct VkAccelerationStructureMotionInstanceNV {
    VkAccelerationStructureMotionInstanceTypeNV     type;
    VkAccelerationStructureMotionInstanceFlagsNV    flags;
    VkAccelerationStructureMotionInstanceDataNV     data;
} VkAccelerationStructureMotionInstanceNV;

typedef struct VkPhysicalDeviceRayTracingMotionBlurFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           rayTracingMotionBlur;
    VkBool32           rayTracingMotionBlurPipelineTraceRaysIndirect;
} VkPhysicalDeviceRayTracingMotionBlurFeaturesNV;



#define VK_EXT_ycbcr_2plane_444_formats 1
#define VK_EXT_YCBCR_2PLANE_444_FORMATS_SPEC_VERSION 1
#define VK_EXT_YCBCR_2PLANE_444_FORMATS_EXTENSION_NAME "VK_EXT_ycbcr_2plane_444_formats"
typedef struct VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           ycbcr2plane444Formats;
} VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT;



#define VK_EXT_fragment_density_map2 1
#define VK_EXT_FRAGMENT_DENSITY_MAP_2_SPEC_VERSION 1
#define VK_EXT_FRAGMENT_DENSITY_MAP_2_EXTENSION_NAME "VK_EXT_fragment_density_map2"
typedef struct VkPhysicalDeviceFragmentDensityMap2FeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           fragmentDensityMapDeferred;
} VkPhysicalDeviceFragmentDensityMap2FeaturesEXT;

typedef struct VkPhysicalDeviceFragmentDensityMap2PropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           subsampledLoads;
    VkBool32           subsampledCoarseReconstructionEarlyAccess;
    deUint32           maxSubsampledArrayLayers;
    deUint32           maxDescriptorSetSubsampledSamplers;
} VkPhysicalDeviceFragmentDensityMap2PropertiesEXT;



#define VK_QCOM_rotated_copy_commands 1
#define VK_QCOM_ROTATED_COPY_COMMANDS_SPEC_VERSION 1
#define VK_QCOM_ROTATED_COPY_COMMANDS_EXTENSION_NAME "VK_QCOM_rotated_copy_commands"
typedef struct VkCopyCommandTransformInfoQCOM {
    VkStructureType                  sType;
    const void*                      pNext;
    VkSurfaceTransformFlagBitsKHR    transform;
} VkCopyCommandTransformInfoQCOM;



#define VK_EXT_image_robustness 1
#define VK_EXT_IMAGE_ROBUSTNESS_SPEC_VERSION 1
#define VK_EXT_IMAGE_ROBUSTNESS_EXTENSION_NAME "VK_EXT_image_robustness"
typedef struct VkPhysicalDeviceImageRobustnessFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           robustImageAccess;
} VkPhysicalDeviceImageRobustnessFeaturesEXT;



#define VK_EXT_4444_formats 1
#define VK_EXT_4444_FORMATS_SPEC_VERSION  1
#define VK_EXT_4444_FORMATS_EXTENSION_NAME "VK_EXT_4444_formats"
typedef struct VkPhysicalDevice4444FormatsFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           formatA4R4G4B4;
    VkBool32           formatA4B4G4R4;
} VkPhysicalDevice4444FormatsFeaturesEXT;



#define VK_NV_acquire_winrt_display 1
#define VK_NV_ACQUIRE_WINRT_DISPLAY_SPEC_VERSION 1
#define VK_NV_ACQUIRE_WINRT_DISPLAY_EXTENSION_NAME "VK_NV_acquire_winrt_display"
typedef VkResult (VKAPI_PTR *PFN_vkAcquireWinrtDisplayNV)(VkPhysicalDevice physicalDevice, VkDisplayKHR display);
typedef VkResult (VKAPI_PTR *PFN_vkGetWinrtDisplayNV)(VkPhysicalDevice physicalDevice, deUint32 deviceRelativeId, VkDisplayKHR* pDisplay);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkAcquireWinrtDisplayNV(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display);

VKAPI_ATTR VkResult VKAPI_CALL vkGetWinrtDisplayNV(
    VkPhysicalDevice                            physicalDevice,
    deUint32                                    deviceRelativeId,
    VkDisplayKHR*                               pDisplay);
#endif


#define VK_VALVE_mutable_descriptor_type 1
#define VK_VALVE_MUTABLE_DESCRIPTOR_TYPE_SPEC_VERSION 1
#define VK_VALVE_MUTABLE_DESCRIPTOR_TYPE_EXTENSION_NAME "VK_VALVE_mutable_descriptor_type"
typedef struct VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           mutableDescriptorType;
} VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE;

typedef struct VkMutableDescriptorTypeListVALVE {
    deUint32                   descriptorTypeCount;
    const VkDescriptorType*    pDescriptorTypes;
} VkMutableDescriptorTypeListVALVE;

typedef struct VkMutableDescriptorTypeCreateInfoVALVE {
    VkStructureType                            sType;
    const void*                                pNext;
    deUint32                                   mutableDescriptorTypeListCount;
    const VkMutableDescriptorTypeListVALVE*    pMutableDescriptorTypeLists;
} VkMutableDescriptorTypeCreateInfoVALVE;



#define VK_EXT_vertex_input_dynamic_state 1
#define VK_EXT_VERTEX_INPUT_DYNAMIC_STATE_SPEC_VERSION 2
#define VK_EXT_VERTEX_INPUT_DYNAMIC_STATE_EXTENSION_NAME "VK_EXT_vertex_input_dynamic_state"
typedef struct VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           vertexInputDynamicState;
} VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT;

typedef struct VkVertexInputBindingDescription2EXT {
    VkStructureType      sType;
    void*                pNext;
    deUint32             binding;
    deUint32             stride;
    VkVertexInputRate    inputRate;
    deUint32             divisor;
} VkVertexInputBindingDescription2EXT;

typedef struct VkVertexInputAttributeDescription2EXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           location;
    deUint32           binding;
    VkFormat           format;
    deUint32           offset;
} VkVertexInputAttributeDescription2EXT;

typedef void (VKAPI_PTR *PFN_vkCmdSetVertexInputEXT)(VkCommandBuffer commandBuffer, deUint32 vertexBindingDescriptionCount, const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, deUint32 vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdSetVertexInputEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    vertexBindingDescriptionCount,
    const VkVertexInputBindingDescription2EXT*  pVertexBindingDescriptions,
    deUint32                                    vertexAttributeDescriptionCount,
    const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions);
#endif


#define VK_EXT_physical_device_drm 1
#define VK_EXT_PHYSICAL_DEVICE_DRM_SPEC_VERSION 1
#define VK_EXT_PHYSICAL_DEVICE_DRM_EXTENSION_NAME "VK_EXT_physical_device_drm"
typedef struct VkPhysicalDeviceDrmPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           hasPrimary;
    VkBool32           hasRender;
    deInt64            primaryMajor;
    deInt64            primaryMinor;
    deInt64            renderMajor;
    deInt64            renderMinor;
} VkPhysicalDeviceDrmPropertiesEXT;



#define VK_EXT_primitive_topology_list_restart 1
#define VK_EXT_PRIMITIVE_TOPOLOGY_LIST_RESTART_SPEC_VERSION 1
#define VK_EXT_PRIMITIVE_TOPOLOGY_LIST_RESTART_EXTENSION_NAME "VK_EXT_primitive_topology_list_restart"
typedef struct VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           primitiveTopologyListRestart;
    VkBool32           primitiveTopologyPatchListRestart;
} VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT;



#define VK_HUAWEI_subpass_shading 1
#define VK_HUAWEI_SUBPASS_SHADING_SPEC_VERSION 2
#define VK_HUAWEI_SUBPASS_SHADING_EXTENSION_NAME "VK_HUAWEI_subpass_shading"
typedef struct VkSubpassShadingPipelineCreateInfoHUAWEI {
    VkStructureType    sType;
    void*              pNext;
    VkRenderPass       renderPass;
    deUint32           subpass;
} VkSubpassShadingPipelineCreateInfoHUAWEI;

typedef struct VkPhysicalDeviceSubpassShadingFeaturesHUAWEI {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           subpassShading;
} VkPhysicalDeviceSubpassShadingFeaturesHUAWEI;

typedef struct VkPhysicalDeviceSubpassShadingPropertiesHUAWEI {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxSubpassShadingWorkgroupSizeAspectRatio;
} VkPhysicalDeviceSubpassShadingPropertiesHUAWEI;

typedef VkResult (VKAPI_PTR *PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)(VkDevice device, VkRenderPass renderpass, VkExtent2D* pMaxWorkgroupSize);
typedef void (VKAPI_PTR *PFN_vkCmdSubpassShadingHUAWEI)(VkCommandBuffer commandBuffer);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(
    VkDevice                                    device,
    VkRenderPass                                renderpass,
    VkExtent2D*                                 pMaxWorkgroupSize);

VKAPI_ATTR void VKAPI_CALL vkCmdSubpassShadingHUAWEI(
    VkCommandBuffer                             commandBuffer);
#endif


#define VK_HUAWEI_invocation_mask 1
#define VK_HUAWEI_INVOCATION_MASK_SPEC_VERSION 1
#define VK_HUAWEI_INVOCATION_MASK_EXTENSION_NAME "VK_HUAWEI_invocation_mask"
typedef struct VkPhysicalDeviceInvocationMaskFeaturesHUAWEI {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           invocationMask;
} VkPhysicalDeviceInvocationMaskFeaturesHUAWEI;

typedef void (VKAPI_PTR *PFN_vkCmdBindInvocationMaskHUAWEI)(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdBindInvocationMaskHUAWEI(
    VkCommandBuffer                             commandBuffer,
    VkImageView                                 imageView,
    VkImageLayout                               imageLayout);
#endif


#define VK_NV_external_memory_rdma 1
typedef void* VkRemoteAddressNV;
#define VK_NV_EXTERNAL_MEMORY_RDMA_SPEC_VERSION 1
#define VK_NV_EXTERNAL_MEMORY_RDMA_EXTENSION_NAME "VK_NV_external_memory_rdma"
typedef struct VkMemoryGetRemoteAddressInfoNV {
    VkStructureType                       sType;
    const void*                           pNext;
    VkDeviceMemory                        memory;
    VkExternalMemoryHandleTypeFlagBits    handleType;
} VkMemoryGetRemoteAddressInfoNV;

typedef struct VkPhysicalDeviceExternalMemoryRDMAFeaturesNV {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           externalMemoryRDMA;
} VkPhysicalDeviceExternalMemoryRDMAFeaturesNV;

typedef VkResult (VKAPI_PTR *PFN_vkGetMemoryRemoteAddressNV)(VkDevice device, const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo, VkRemoteAddressNV* pAddress);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryRemoteAddressNV(
    VkDevice                                    device,
    const VkMemoryGetRemoteAddressInfoNV*       pMemoryGetRemoteAddressInfo,
    VkRemoteAddressNV*                          pAddress);
#endif


#define VK_EXT_extended_dynamic_state2 1
#define VK_EXT_EXTENDED_DYNAMIC_STATE_2_SPEC_VERSION 1
#define VK_EXT_EXTENDED_DYNAMIC_STATE_2_EXTENSION_NAME "VK_EXT_extended_dynamic_state2"
typedef struct VkPhysicalDeviceExtendedDynamicState2FeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           extendedDynamicState2;
    VkBool32           extendedDynamicState2LogicOp;
    VkBool32           extendedDynamicState2PatchControlPoints;
} VkPhysicalDeviceExtendedDynamicState2FeaturesEXT;

typedef void (VKAPI_PTR *PFN_vkCmdSetPatchControlPointsEXT)(VkCommandBuffer commandBuffer, deUint32 patchControlPoints);
typedef void (VKAPI_PTR *PFN_vkCmdSetRasterizerDiscardEnableEXT)(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable);
typedef void (VKAPI_PTR *PFN_vkCmdSetDepthBiasEnableEXT)(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable);
typedef void (VKAPI_PTR *PFN_vkCmdSetLogicOpEXT)(VkCommandBuffer commandBuffer, VkLogicOp logicOp);
typedef void (VKAPI_PTR *PFN_vkCmdSetPrimitiveRestartEnableEXT)(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdSetPatchControlPointsEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    patchControlPoints);

VKAPI_ATTR void VKAPI_CALL vkCmdSetRasterizerDiscardEnableEXT(
    VkCommandBuffer                             commandBuffer,
    VkBool32                                    rasterizerDiscardEnable);

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBiasEnableEXT(
    VkCommandBuffer                             commandBuffer,
    VkBool32                                    depthBiasEnable);

VKAPI_ATTR void VKAPI_CALL vkCmdSetLogicOpEXT(
    VkCommandBuffer                             commandBuffer,
    VkLogicOp                                   logicOp);

VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveRestartEnableEXT(
    VkCommandBuffer                             commandBuffer,
    VkBool32                                    primitiveRestartEnable);
#endif


#define VK_EXT_color_write_enable 1
#define VK_EXT_COLOR_WRITE_ENABLE_SPEC_VERSION 1
#define VK_EXT_COLOR_WRITE_ENABLE_EXTENSION_NAME "VK_EXT_color_write_enable"
typedef struct VkPhysicalDeviceColorWriteEnableFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           colorWriteEnable;
} VkPhysicalDeviceColorWriteEnableFeaturesEXT;

typedef struct VkPipelineColorWriteCreateInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           attachmentCount;
    const VkBool32*    pColorWriteEnables;
} VkPipelineColorWriteCreateInfoEXT;

typedef void                                    (VKAPI_PTR *PFN_vkCmdSetColorWriteEnableEXT)(VkCommandBuffer       commandBuffer, deUint32                                attachmentCount, const VkBool32*   pColorWriteEnables);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void                                    VKAPI_CALL vkCmdSetColorWriteEnableEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    attachmentCount,
    const VkBool32*                             pColorWriteEnables);
#endif


#define VK_EXT_global_priority_query 1
#define VK_MAX_GLOBAL_PRIORITY_SIZE_EXT   16U
#define VK_EXT_GLOBAL_PRIORITY_QUERY_SPEC_VERSION 1
#define VK_EXT_GLOBAL_PRIORITY_QUERY_EXTENSION_NAME "VK_EXT_global_priority_query"
typedef struct VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           globalPriorityQuery;
} VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT;

typedef struct VkQueueFamilyGlobalPriorityPropertiesEXT {
    VkStructureType             sType;
    void*                       pNext;
    deUint32                    priorityCount;
    VkQueueGlobalPriorityEXT    priorities[VK_MAX_GLOBAL_PRIORITY_SIZE_EXT];
} VkQueueFamilyGlobalPriorityPropertiesEXT;



#define VK_EXT_multi_draw 1
#define VK_EXT_MULTI_DRAW_SPEC_VERSION    1
#define VK_EXT_MULTI_DRAW_EXTENSION_NAME  "VK_EXT_multi_draw"
typedef struct VkPhysicalDeviceMultiDrawFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           multiDraw;
} VkPhysicalDeviceMultiDrawFeaturesEXT;

typedef struct VkPhysicalDeviceMultiDrawPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    deUint32           maxMultiDrawCount;
} VkPhysicalDeviceMultiDrawPropertiesEXT;

typedef struct VkMultiDrawInfoEXT {
    deUint32    firstVertex;
    deUint32    vertexCount;
} VkMultiDrawInfoEXT;

typedef struct VkMultiDrawIndexedInfoEXT {
    deUint32    firstIndex;
    deUint32    indexCount;
    deInt32     vertexOffset;
} VkMultiDrawIndexedInfoEXT;

typedef void (VKAPI_PTR *PFN_vkCmdDrawMultiEXT)(VkCommandBuffer commandBuffer, deUint32 drawCount, const VkMultiDrawInfoEXT* pVertexInfo, deUint32 instanceCount, deUint32 firstInstance, deUint32 stride);
typedef void (VKAPI_PTR *PFN_vkCmdDrawMultiIndexedEXT)(VkCommandBuffer commandBuffer, deUint32 drawCount, const VkMultiDrawIndexedInfoEXT* pIndexInfo, deUint32 instanceCount, deUint32 firstInstance, deUint32 stride, const deInt32* pVertexOffset);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdDrawMultiEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    drawCount,
    const VkMultiDrawInfoEXT*                   pVertexInfo,
    deUint32                                    instanceCount,
    deUint32                                    firstInstance,
    deUint32                                    stride);

VKAPI_ATTR void VKAPI_CALL vkCmdDrawMultiIndexedEXT(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    drawCount,
    const VkMultiDrawIndexedInfoEXT*            pIndexInfo,
    deUint32                                    instanceCount,
    deUint32                                    firstInstance,
    deUint32                                    stride,
    const deInt32*                              pVertexOffset);
#endif


#define VK_EXT_load_store_op_none 1
#define VK_EXT_LOAD_STORE_OP_NONE_SPEC_VERSION 1
#define VK_EXT_LOAD_STORE_OP_NONE_EXTENSION_NAME "VK_EXT_load_store_op_none"


#define VK_EXT_border_color_swizzle 1
#define VK_EXT_BORDER_COLOR_SWIZZLE_SPEC_VERSION 1
#define VK_EXT_BORDER_COLOR_SWIZZLE_EXTENSION_NAME "VK_EXT_border_color_swizzle"
typedef struct VkPhysicalDeviceBorderColorSwizzleFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           borderColorSwizzle;
    VkBool32           borderColorSwizzleFromImage;
} VkPhysicalDeviceBorderColorSwizzleFeaturesEXT;

typedef struct VkSamplerBorderColorComponentMappingCreateInfoEXT {
    VkStructureType       sType;
    const void*           pNext;
    VkComponentMapping    components;
    VkBool32              srgb;
} VkSamplerBorderColorComponentMappingCreateInfoEXT;



#define VK_EXT_pageable_device_local_memory 1
#define VK_EXT_PAGEABLE_DEVICE_LOCAL_MEMORY_SPEC_VERSION 1
#define VK_EXT_PAGEABLE_DEVICE_LOCAL_MEMORY_EXTENSION_NAME "VK_EXT_pageable_device_local_memory"
typedef struct VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           pageableDeviceLocalMemory;
} VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT;

typedef void (VKAPI_PTR *PFN_vkSetDeviceMemoryPriorityEXT)(VkDevice       device, VkDeviceMemory memory, float          priority);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkSetDeviceMemoryPriorityEXT(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    float                                       priority);
#endif


#define VK_KHR_acceleration_structure 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkAccelerationStructureKHR)
#define VK_KHR_ACCELERATION_STRUCTURE_SPEC_VERSION 12
#define VK_KHR_ACCELERATION_STRUCTURE_EXTENSION_NAME "VK_KHR_acceleration_structure"

typedef enum VkBuildAccelerationStructureModeKHR {
    VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR = 0,
    VK_BUILD_ACCELERATION_STRUCTURE_MODE_UPDATE_KHR = 1,
    VK_BUILD_ACCELERATION_STRUCTURE_MODE_MAX_ENUM_KHR = 0x7FFFFFFF
} VkBuildAccelerationStructureModeKHR;

typedef enum VkAccelerationStructureBuildTypeKHR {
    VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_KHR = 0,
    VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR = 1,
    VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_OR_DEVICE_KHR = 2,
    VK_ACCELERATION_STRUCTURE_BUILD_TYPE_MAX_ENUM_KHR = 0x7FFFFFFF
} VkAccelerationStructureBuildTypeKHR;

typedef enum VkAccelerationStructureCompatibilityKHR {
    VK_ACCELERATION_STRUCTURE_COMPATIBILITY_COMPATIBLE_KHR = 0,
    VK_ACCELERATION_STRUCTURE_COMPATIBILITY_INCOMPATIBLE_KHR = 1,
    VK_ACCELERATION_STRUCTURE_COMPATIBILITY_MAX_ENUM_KHR = 0x7FFFFFFF
} VkAccelerationStructureCompatibilityKHR;

typedef enum VkAccelerationStructureCreateFlagBitsKHR {
    VK_ACCELERATION_STRUCTURE_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR = 0x00000001,
    VK_ACCELERATION_STRUCTURE_CREATE_MOTION_BIT_NV = 0x00000004,
    VK_ACCELERATION_STRUCTURE_CREATE_FLAG_BITS_MAX_ENUM_KHR = 0x7FFFFFFF
} VkAccelerationStructureCreateFlagBitsKHR;
typedef VkFlags VkAccelerationStructureCreateFlagsKHR;
typedef union VkDeviceOrHostAddressKHR {
    VkDeviceAddress    deviceAddress;
    void*              hostAddress;
} VkDeviceOrHostAddressKHR;

typedef struct VkAccelerationStructureBuildRangeInfoKHR {
    deUint32    primitiveCount;
    deUint32    primitiveOffset;
    deUint32    firstVertex;
    deUint32    transformOffset;
} VkAccelerationStructureBuildRangeInfoKHR;

typedef struct VkAccelerationStructureGeometryTrianglesDataKHR {
    VkStructureType                  sType;
    const void*                      pNext;
    VkFormat                         vertexFormat;
    VkDeviceOrHostAddressConstKHR    vertexData;
    VkDeviceSize                     vertexStride;
    deUint32                         maxVertex;
    VkIndexType                      indexType;
    VkDeviceOrHostAddressConstKHR    indexData;
    VkDeviceOrHostAddressConstKHR    transformData;
} VkAccelerationStructureGeometryTrianglesDataKHR;

typedef struct VkAccelerationStructureGeometryAabbsDataKHR {
    VkStructureType                  sType;
    const void*                      pNext;
    VkDeviceOrHostAddressConstKHR    data;
    VkDeviceSize                     stride;
} VkAccelerationStructureGeometryAabbsDataKHR;

typedef struct VkAccelerationStructureGeometryInstancesDataKHR {
    VkStructureType                  sType;
    const void*                      pNext;
    VkBool32                         arrayOfPointers;
    VkDeviceOrHostAddressConstKHR    data;
} VkAccelerationStructureGeometryInstancesDataKHR;

typedef union VkAccelerationStructureGeometryDataKHR {
    VkAccelerationStructureGeometryTrianglesDataKHR    triangles;
    VkAccelerationStructureGeometryAabbsDataKHR        aabbs;
    VkAccelerationStructureGeometryInstancesDataKHR    instances;
} VkAccelerationStructureGeometryDataKHR;

typedef struct VkAccelerationStructureGeometryKHR {
    VkStructureType                           sType;
    const void*                               pNext;
    VkGeometryTypeKHR                         geometryType;
    VkAccelerationStructureGeometryDataKHR    geometry;
    VkGeometryFlagsKHR                        flags;
} VkAccelerationStructureGeometryKHR;

typedef struct VkAccelerationStructureBuildGeometryInfoKHR {
    VkStructureType                                     sType;
    const void*                                         pNext;
    VkAccelerationStructureTypeKHR                      type;
    VkBuildAccelerationStructureFlagsKHR                flags;
    VkBuildAccelerationStructureModeKHR                 mode;
    VkAccelerationStructureKHR                          srcAccelerationStructure;
    VkAccelerationStructureKHR                          dstAccelerationStructure;
    deUint32                                            geometryCount;
    const VkAccelerationStructureGeometryKHR*           pGeometries;
    const VkAccelerationStructureGeometryKHR* const*    ppGeometries;
    VkDeviceOrHostAddressKHR                            scratchData;
} VkAccelerationStructureBuildGeometryInfoKHR;

typedef struct VkAccelerationStructureCreateInfoKHR {
    VkStructureType                          sType;
    const void*                              pNext;
    VkAccelerationStructureCreateFlagsKHR    createFlags;
    VkBuffer                                 buffer;
    VkDeviceSize                             offset;
    VkDeviceSize                             size;
    VkAccelerationStructureTypeKHR           type;
    VkDeviceAddress                          deviceAddress;
} VkAccelerationStructureCreateInfoKHR;

typedef struct VkWriteDescriptorSetAccelerationStructureKHR {
    VkStructureType                      sType;
    const void*                          pNext;
    deUint32                             accelerationStructureCount;
    const VkAccelerationStructureKHR*    pAccelerationStructures;
} VkWriteDescriptorSetAccelerationStructureKHR;

typedef struct VkPhysicalDeviceAccelerationStructureFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           accelerationStructure;
    VkBool32           accelerationStructureCaptureReplay;
    VkBool32           accelerationStructureIndirectBuild;
    VkBool32           accelerationStructureHostCommands;
    VkBool32           descriptorBindingAccelerationStructureUpdateAfterBind;
} VkPhysicalDeviceAccelerationStructureFeaturesKHR;

typedef struct VkPhysicalDeviceAccelerationStructurePropertiesKHR {
    VkStructureType    sType;
    void*              pNext;
    deUint64           maxGeometryCount;
    deUint64           maxInstanceCount;
    deUint64           maxPrimitiveCount;
    deUint32           maxPerStageDescriptorAccelerationStructures;
    deUint32           maxPerStageDescriptorUpdateAfterBindAccelerationStructures;
    deUint32           maxDescriptorSetAccelerationStructures;
    deUint32           maxDescriptorSetUpdateAfterBindAccelerationStructures;
    deUint32           minAccelerationStructureScratchOffsetAlignment;
} VkPhysicalDeviceAccelerationStructurePropertiesKHR;

typedef struct VkAccelerationStructureDeviceAddressInfoKHR {
    VkStructureType               sType;
    const void*                   pNext;
    VkAccelerationStructureKHR    accelerationStructure;
} VkAccelerationStructureDeviceAddressInfoKHR;

typedef struct VkAccelerationStructureVersionInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    const deUint8*     pVersionData;
} VkAccelerationStructureVersionInfoKHR;

typedef struct VkCopyAccelerationStructureToMemoryInfoKHR {
    VkStructureType                       sType;
    const void*                           pNext;
    VkAccelerationStructureKHR            src;
    VkDeviceOrHostAddressKHR              dst;
    VkCopyAccelerationStructureModeKHR    mode;
} VkCopyAccelerationStructureToMemoryInfoKHR;

typedef struct VkCopyMemoryToAccelerationStructureInfoKHR {
    VkStructureType                       sType;
    const void*                           pNext;
    VkDeviceOrHostAddressConstKHR         src;
    VkAccelerationStructureKHR            dst;
    VkCopyAccelerationStructureModeKHR    mode;
} VkCopyMemoryToAccelerationStructureInfoKHR;

typedef struct VkCopyAccelerationStructureInfoKHR {
    VkStructureType                       sType;
    const void*                           pNext;
    VkAccelerationStructureKHR            src;
    VkAccelerationStructureKHR            dst;
    VkCopyAccelerationStructureModeKHR    mode;
} VkCopyAccelerationStructureInfoKHR;

typedef struct VkAccelerationStructureBuildSizesInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    VkDeviceSize       accelerationStructureSize;
    VkDeviceSize       updateScratchSize;
    VkDeviceSize       buildScratchSize;
} VkAccelerationStructureBuildSizesInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkCreateAccelerationStructureKHR)(VkDevice                                           device, const VkAccelerationStructureCreateInfoKHR*        pCreateInfo, const VkAllocationCallbacks*       pAllocator, VkAccelerationStructureKHR*                        pAccelerationStructure);
typedef void (VKAPI_PTR *PFN_vkDestroyAccelerationStructureKHR)(VkDevice device, VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks* pAllocator);
typedef void (VKAPI_PTR *PFN_vkCmdBuildAccelerationStructuresKHR)(VkCommandBuffer                                    commandBuffer, deUint32 infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
typedef void (VKAPI_PTR *PFN_vkCmdBuildAccelerationStructuresIndirectKHR)(VkCommandBuffer                  commandBuffer, deUint32                                           infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress*             pIndirectDeviceAddresses, const deUint32*                    pIndirectStrides, const deUint32* const*             ppMaxPrimitiveCounts);
typedef VkResult (VKAPI_PTR *PFN_vkBuildAccelerationStructuresKHR)(VkDevice                                           device, VkDeferredOperationKHR deferredOperation, deUint32 infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
typedef VkResult (VKAPI_PTR *PFN_vkCopyAccelerationStructureKHR)(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR* pInfo);
typedef VkResult (VKAPI_PTR *PFN_vkCopyAccelerationStructureToMemoryKHR)(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
typedef VkResult (VKAPI_PTR *PFN_vkCopyMemoryToAccelerationStructureKHR)(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
typedef VkResult (VKAPI_PTR *PFN_vkWriteAccelerationStructuresPropertiesKHR)(VkDevice device, deUint32 accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType  queryType, deUintptr       dataSize, void* pData, deUintptr stride);
typedef void (VKAPI_PTR *PFN_vkCmdCopyAccelerationStructureKHR)(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo);
typedef void (VKAPI_PTR *PFN_vkCmdCopyAccelerationStructureToMemoryKHR)(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
typedef void (VKAPI_PTR *PFN_vkCmdCopyMemoryToAccelerationStructureKHR)(VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
typedef VkDeviceAddress (VKAPI_PTR *PFN_vkGetAccelerationStructureDeviceAddressKHR)(VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR* pInfo);
typedef void (VKAPI_PTR *PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)(VkCommandBuffer commandBuffer, deUint32 accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, deUint32 firstQuery);
typedef void (VKAPI_PTR *PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)(VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo, VkAccelerationStructureCompatibilityKHR* pCompatibility);
typedef void (VKAPI_PTR *PFN_vkGetAccelerationStructureBuildSizesKHR)(VkDevice                                            device, VkAccelerationStructureBuildTypeKHR                 buildType, const VkAccelerationStructureBuildGeometryInfoKHR*  pBuildInfo, const deUint32*  pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR*           pSizeInfo);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateAccelerationStructureKHR(
    VkDevice                                    device,
    const VkAccelerationStructureCreateInfoKHR* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkAccelerationStructureKHR*                 pAccelerationStructure);

VKAPI_ATTR void VKAPI_CALL vkDestroyAccelerationStructureKHR(
    VkDevice                                    device,
    VkAccelerationStructureKHR                  accelerationStructure,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructuresKHR(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    infoCount,
    const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
    const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);

VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructuresIndirectKHR(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    infoCount,
    const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
    const VkDeviceAddress*                      pIndirectDeviceAddresses,
    const deUint32*                             pIndirectStrides,
    const deUint32* const*                      ppMaxPrimitiveCounts);

VKAPI_ATTR VkResult VKAPI_CALL vkBuildAccelerationStructuresKHR(
    VkDevice                                    device,
    VkDeferredOperationKHR                      deferredOperation,
    deUint32                                    infoCount,
    const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
    const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);

VKAPI_ATTR VkResult VKAPI_CALL vkCopyAccelerationStructureKHR(
    VkDevice                                    device,
    VkDeferredOperationKHR                      deferredOperation,
    const VkCopyAccelerationStructureInfoKHR*   pInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkCopyAccelerationStructureToMemoryKHR(
    VkDevice                                    device,
    VkDeferredOperationKHR                      deferredOperation,
    const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkCopyMemoryToAccelerationStructureKHR(
    VkDevice                                    device,
    VkDeferredOperationKHR                      deferredOperation,
    const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkWriteAccelerationStructuresPropertiesKHR(
    VkDevice                                    device,
    deUint32                                    accelerationStructureCount,
    const VkAccelerationStructureKHR*           pAccelerationStructures,
    VkQueryType                                 queryType,
    deUintptr                                      dataSize,
    void*                                       pData,
    deUintptr                                      stride);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureKHR(
    VkCommandBuffer                             commandBuffer,
    const VkCopyAccelerationStructureInfoKHR*   pInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureToMemoryKHR(
    VkCommandBuffer                             commandBuffer,
    const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdCopyMemoryToAccelerationStructureKHR(
    VkCommandBuffer                             commandBuffer,
    const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);

VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetAccelerationStructureDeviceAddressKHR(
    VkDevice                                    device,
    const VkAccelerationStructureDeviceAddressInfoKHR* pInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdWriteAccelerationStructuresPropertiesKHR(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    accelerationStructureCount,
    const VkAccelerationStructureKHR*           pAccelerationStructures,
    VkQueryType                                 queryType,
    VkQueryPool                                 queryPool,
    deUint32                                    firstQuery);

VKAPI_ATTR void VKAPI_CALL vkGetDeviceAccelerationStructureCompatibilityKHR(
    VkDevice                                    device,
    const VkAccelerationStructureVersionInfoKHR* pVersionInfo,
    VkAccelerationStructureCompatibilityKHR*    pCompatibility);

VKAPI_ATTR void VKAPI_CALL vkGetAccelerationStructureBuildSizesKHR(
    VkDevice                                    device,
    VkAccelerationStructureBuildTypeKHR         buildType,
    const VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo,
    const deUint32*                             pMaxPrimitiveCounts,
    VkAccelerationStructureBuildSizesInfoKHR*   pSizeInfo);
#endif


#define VK_KHR_ray_tracing_pipeline 1
#define VK_KHR_RAY_TRACING_PIPELINE_SPEC_VERSION 1
#define VK_KHR_RAY_TRACING_PIPELINE_EXTENSION_NAME "VK_KHR_ray_tracing_pipeline"

typedef enum VkShaderGroupShaderKHR {
    VK_SHADER_GROUP_SHADER_GENERAL_KHR = 0,
    VK_SHADER_GROUP_SHADER_CLOSEST_HIT_KHR = 1,
    VK_SHADER_GROUP_SHADER_ANY_HIT_KHR = 2,
    VK_SHADER_GROUP_SHADER_INTERSECTION_KHR = 3,
    VK_SHADER_GROUP_SHADER_MAX_ENUM_KHR = 0x7FFFFFFF
} VkShaderGroupShaderKHR;
typedef struct VkRayTracingShaderGroupCreateInfoKHR {
    VkStructureType                   sType;
    const void*                       pNext;
    VkRayTracingShaderGroupTypeKHR    type;
    deUint32                          generalShader;
    deUint32                          closestHitShader;
    deUint32                          anyHitShader;
    deUint32                          intersectionShader;
    const void*                       pShaderGroupCaptureReplayHandle;
} VkRayTracingShaderGroupCreateInfoKHR;

typedef struct VkRayTracingPipelineInterfaceCreateInfoKHR {
    VkStructureType    sType;
    const void*        pNext;
    deUint32           maxPipelineRayPayloadSize;
    deUint32           maxPipelineRayHitAttributeSize;
} VkRayTracingPipelineInterfaceCreateInfoKHR;

typedef struct VkRayTracingPipelineCreateInfoKHR {
    VkStructureType                                      sType;
    const void*                                          pNext;
    VkPipelineCreateFlags                                flags;
    deUint32                                             stageCount;
    const VkPipelineShaderStageCreateInfo*               pStages;
    deUint32                                             groupCount;
    const VkRayTracingShaderGroupCreateInfoKHR*          pGroups;
    deUint32                                             maxPipelineRayRecursionDepth;
    const VkPipelineLibraryCreateInfoKHR*                pLibraryInfo;
    const VkRayTracingPipelineInterfaceCreateInfoKHR*    pLibraryInterface;
    const VkPipelineDynamicStateCreateInfo*              pDynamicState;
    VkPipelineLayout                                     layout;
    VkPipeline                                           basePipelineHandle;
    deInt32                                              basePipelineIndex;
} VkRayTracingPipelineCreateInfoKHR;

typedef struct VkPhysicalDeviceRayTracingPipelineFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           rayTracingPipeline;
    VkBool32           rayTracingPipelineShaderGroupHandleCaptureReplay;
    VkBool32           rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
    VkBool32           rayTracingPipelineTraceRaysIndirect;
    VkBool32           rayTraversalPrimitiveCulling;
} VkPhysicalDeviceRayTracingPipelineFeaturesKHR;

typedef struct VkPhysicalDeviceRayTracingPipelinePropertiesKHR {
    VkStructureType    sType;
    void*              pNext;
    deUint32           shaderGroupHandleSize;
    deUint32           maxRayRecursionDepth;
    deUint32           maxShaderGroupStride;
    deUint32           shaderGroupBaseAlignment;
    deUint32           shaderGroupHandleCaptureReplaySize;
    deUint32           maxRayDispatchInvocationCount;
    deUint32           shaderGroupHandleAlignment;
    deUint32           maxRayHitAttributeSize;
} VkPhysicalDeviceRayTracingPipelinePropertiesKHR;

typedef struct VkStridedDeviceAddressRegionKHR {
    VkDeviceAddress    deviceAddress;
    VkDeviceSize       stride;
    VkDeviceSize       size;
} VkStridedDeviceAddressRegionKHR;

typedef struct VkTraceRaysIndirectCommandKHR {
    deUint32    width;
    deUint32    height;
    deUint32    depth;
} VkTraceRaysIndirectCommandKHR;

typedef void (VKAPI_PTR *PFN_vkCmdTraceRaysKHR)(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, deUint32 width, deUint32 height, deUint32 depth);
typedef VkResult (VKAPI_PTR *PFN_vkCreateRayTracingPipelinesKHR)(VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
typedef VkResult (VKAPI_PTR *PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)(VkDevice device, VkPipeline pipeline, deUint32 firstGroup, deUint32 groupCount, deUintptr dataSize, void* pData);
typedef void (VKAPI_PTR *PFN_vkCmdTraceRaysIndirectKHR)(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress);
typedef VkDeviceSize (VKAPI_PTR *PFN_vkGetRayTracingShaderGroupStackSizeKHR)(VkDevice device, VkPipeline pipeline, deUint32 group, VkShaderGroupShaderKHR groupShader);
typedef void (VKAPI_PTR *PFN_vkCmdSetRayTracingPipelineStackSizeKHR)(VkCommandBuffer commandBuffer, deUint32 pipelineStackSize);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysKHR(
    VkCommandBuffer                             commandBuffer,
    const VkStridedDeviceAddressRegionKHR*      pRaygenShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR*      pMissShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR*      pHitShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR*      pCallableShaderBindingTable,
    deUint32                                    width,
    deUint32                                    height,
    deUint32                                    depth);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateRayTracingPipelinesKHR(
    VkDevice                                    device,
    VkDeferredOperationKHR                      deferredOperation,
    VkPipelineCache                             pipelineCache,
    deUint32                                    createInfoCount,
    const VkRayTracingPipelineCreateInfoKHR*    pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);

VKAPI_ATTR VkResult VKAPI_CALL vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    deUint32                                    firstGroup,
    deUint32                                    groupCount,
    deUintptr                                      dataSize,
    void*                                       pData);

VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysIndirectKHR(
    VkCommandBuffer                             commandBuffer,
    const VkStridedDeviceAddressRegionKHR*      pRaygenShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR*      pMissShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR*      pHitShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR*      pCallableShaderBindingTable,
    VkDeviceAddress                             indirectDeviceAddress);

VKAPI_ATTR VkDeviceSize VKAPI_CALL vkGetRayTracingShaderGroupStackSizeKHR(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    deUint32                                    group,
    VkShaderGroupShaderKHR                      groupShader);

VKAPI_ATTR void VKAPI_CALL vkCmdSetRayTracingPipelineStackSizeKHR(
    VkCommandBuffer                             commandBuffer,
    deUint32                                    pipelineStackSize);
#endif


#define VK_KHR_ray_query 1
#define VK_KHR_RAY_QUERY_SPEC_VERSION     1
#define VK_KHR_RAY_QUERY_EXTENSION_NAME   "VK_KHR_ray_query"
typedef struct VkPhysicalDeviceRayQueryFeaturesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           rayQuery;
} VkPhysicalDeviceRayQueryFeaturesKHR;


#ifdef __cplusplus
}
#endif

#endif


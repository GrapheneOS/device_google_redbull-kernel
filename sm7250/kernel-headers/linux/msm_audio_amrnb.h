/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _MSM_AUDIO_AMRNB_H
#define _MSM_AUDIO_AMRNB_H
#include <linux/msm_audio.h>
#define AUDIO_GET_AMRNB_ENC_CONFIG _IOW(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 0), unsigned int)
#define AUDIO_SET_AMRNB_ENC_CONFIG _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 1), unsigned int)
#define AUDIO_GET_AMRNB_ENC_CONFIG_V2 _IOW(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 2), struct msm_audio_amrnb_enc_config_v2)
#define AUDIO_SET_AMRNB_ENC_CONFIG_V2 _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 3), struct msm_audio_amrnb_enc_config_v2)
struct msm_audio_amrnb_enc_config {
  unsigned short voicememoencweight1;
  unsigned short voicememoencweight2;
  unsigned short voicememoencweight3;
  unsigned short voicememoencweight4;
  unsigned short dtx_mode_enable;
  unsigned short test_mode_enable;
  unsigned short enc_mode;
};
struct msm_audio_amrnb_enc_config_v2 {
  uint32_t band_mode;
  uint32_t dtx_enable;
  uint32_t frame_format;
};
#endif

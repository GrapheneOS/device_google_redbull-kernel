/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _MSM_AUDIO_G711_H
#define _MSM_AUDIO_G711_H
#include <linux/msm_audio.h>
struct msm_audio_g711_dec_config {
  uint32_t sample_rate;
};
#define AUDIO_SET_G711_DEC_CONFIG _IOW(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 0), struct msm_audio_g711_dec_config)
#define AUDIO_GET_G711_DEC_CONFIG _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 1), struct msm_audio_g711_dec_config)
#endif

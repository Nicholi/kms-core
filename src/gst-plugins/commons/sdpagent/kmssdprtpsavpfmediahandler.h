/*
 * (C) Copyright 2015 Kurento (http://kurento.org/)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#ifndef _KMS_SDP_RTP_SAVPF_MEDIA_HANDLER_H_
#define _KMS_SDP_RTP_SAVPF_MEDIA_HANDLER_H_

#include "kmssdprtpavpfmediahandler.h"

G_BEGIN_DECLS

#define KMS_TYPE_SDP_RTP_SAVPF_MEDIA_HANDLER \
  (kms_sdp_rtp_savpf_media_handler_get_type())

#define KMS_SDP_RTP_SAVPF_MEDIA_HANDLER(obj) (  \
  G_TYPE_CHECK_INSTANCE_CAST (                  \
    (obj),                                      \
    KMS_TYPE_SDP_RTP_SAVPF_MEDIA_HANDLER,       \
    KmsSdpRtpSavpfMediaHandler                  \
  )                                             \
)
#define KMS_SDP_RTP_SAVPF_MEDIA_HANDLER_CLASS(klass) (  \
  G_TYPE_CHECK_CLASS_CAST (                             \
    (klass),                                            \
    KMS_TYPE_SDP_RTP_SAVPF_MEDIA_HANDLER,               \
    KmsSdpRtpSavpfMediaHandlerClass                     \
  )                                                     \
)
#define KMS_IS_SDP_RTP_SAVPF_MEDIA_HANDLER(obj) ( \
  G_TYPE_CHECK_INSTANCE_TYPE (                    \
    (obj),                                        \
    KMS_TYPE_SDP_RTP_SAVPF_MEDIA_HANDLER          \
  )                                               \
)
#define KMS_IS_SDP_RTP_SAVPF_MEDIA_HANDLER_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),KMS_TYPE_SDP_RTP_SAVPF_MEDIA_HANDLER))
#define KMS_SDP_RTP_SAVPF_MEDIA_HANDLER_GET_CLASS(obj) (  \
  G_TYPE_INSTANCE_GET_CLASS (                             \
    (obj),                                                \
    KMS_TYPE_SDP_RTP_SAVPF_MEDIA_HANDLER,                 \
    KmsSdpRtpSavpfMediaHandlerClass                       \
  )                                                       \
)

typedef struct _KmsSdpRtpSavpfMediaHandler KmsSdpRtpSavpfMediaHandler;
typedef struct _KmsSdpRtpSavpfMediaHandlerClass KmsSdpRtpSavpfMediaHandlerClass;
typedef struct _KmsSdpRtpSavpfMediaHandlerPrivate KmsSdpRtpSavpfMediaHandlerPrivate;

struct _KmsSdpRtpSavpfMediaHandler
{
  KmsSdpRtpAvpfMediaHandler parent;

  /*< private > */
  KmsSdpRtpSavpfMediaHandlerPrivate *priv;
};

struct _KmsSdpRtpSavpfMediaHandlerClass
{
  KmsSdpRtpAvpfMediaHandlerClass parent_class;
};

GType kms_sdp_rtp_savpf_media_handler_get_type ();

KmsSdpRtpSavpfMediaHandler * kms_sdp_rtp_savpf_media_handler_new ();
KmsSdpRtpSavpfMediaHandler * kms_sdp_rtp_savpf_media_handler_new_with_udp_tls ();

G_END_DECLS

#endif /* _KMS_SDP_RTP_SAVPF_MEDIA_HANDLER_H_ */

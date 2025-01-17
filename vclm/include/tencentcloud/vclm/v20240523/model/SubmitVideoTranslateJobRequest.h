/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOTRANSLATEJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOTRANSLATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitVideoTranslateJob请求参数结构体
                */
                class SubmitVideoTranslateJobRequest : public AbstractModel
                {
                public:
                    SubmitVideoTranslateJobRequest();
                    ~SubmitVideoTranslateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频地址URL。
格式要求：支持 mp4、mov 。
时长要求：【5-600】秒。
fps 要求：【15-60】fps
分辨率要求：单边像素要求在 【360~4096】 之间。
大小要求：不超过500Mb

                     * @return VideoUrl 视频地址URL。
格式要求：支持 mp4、mov 。
时长要求：【5-600】秒。
fps 要求：【15-60】fps
分辨率要求：单边像素要求在 【360~4096】 之间。
大小要求：不超过500Mb

                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置视频地址URL。
格式要求：支持 mp4、mov 。
时长要求：【5-600】秒。
fps 要求：【15-60】fps
分辨率要求：单边像素要求在 【360~4096】 之间。
大小要求：不超过500Mb

                     * @param _videoUrl 视频地址URL。
格式要求：支持 mp4、mov 。
时长要求：【5-600】秒。
fps 要求：【15-60】fps
分辨率要求：单边像素要求在 【360~4096】 之间。
大小要求：不超过500Mb

                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取输入视频中音频语种
目前支持语种范围：zh(中文), en(英文)
                     * @return SrcLang 输入视频中音频语种
目前支持语种范围：zh(中文), en(英文)
                     * 
                     */
                    std::string GetSrcLang() const;

                    /**
                     * 设置输入视频中音频语种
目前支持语种范围：zh(中文), en(英文)
                     * @param _srcLang 输入视频中音频语种
目前支持语种范围：zh(中文), en(英文)
                     * 
                     */
                    void SetSrcLang(const std::string& _srcLang);

                    /**
                     * 判断参数 SrcLang 是否已赋值
                     * @return SrcLang 是否已赋值
                     * 
                     */
                    bool SrcLangHasBeenSet() const;

                    /**
                     * 获取当音频 URL 不为空时，不经过语音AI处理，直接以视频为素材用音频内容做视频口型驱动。
格式要求：支持 mp3、m4a、aac、wav 格式。
时长要求：【5~600】秒，音频时长要匹配视频时长。
大小要求：不超过 100Mb。
                     * @return AudioUrl 当音频 URL 不为空时，不经过语音AI处理，直接以视频为素材用音频内容做视频口型驱动。
格式要求：支持 mp3、m4a、aac、wav 格式。
时长要求：【5~600】秒，音频时长要匹配视频时长。
大小要求：不超过 100Mb。
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置当音频 URL 不为空时，不经过语音AI处理，直接以视频为素材用音频内容做视频口型驱动。
格式要求：支持 mp3、m4a、aac、wav 格式。
时长要求：【5~600】秒，音频时长要匹配视频时长。
大小要求：不超过 100Mb。
                     * @param _audioUrl 当音频 URL 不为空时，不经过语音AI处理，直接以视频为素材用音频内容做视频口型驱动。
格式要求：支持 mp3、m4a、aac、wav 格式。
时长要求：【5~600】秒，音频时长要匹配视频时长。
大小要求：不超过 100Mb。
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取输出视频中翻译语种
目前支持语种范围：zh(简体中文)、en(英语)、ar(阿拉伯语)、de(德语)、es(西班牙语)、fr(法语)、id(印尼语)、it(意大利语)、ja(日语)、ko(韩语)、ms(马来语)、pt(葡萄牙语)、ru(俄语)、th(泰语)、tr(土耳其语)、vi(越南语)
                     * @return DstLang 输出视频中翻译语种
目前支持语种范围：zh(简体中文)、en(英语)、ar(阿拉伯语)、de(德语)、es(西班牙语)、fr(法语)、id(印尼语)、it(意大利语)、ja(日语)、ko(韩语)、ms(马来语)、pt(葡萄牙语)、ru(俄语)、th(泰语)、tr(土耳其语)、vi(越南语)
                     * 
                     */
                    std::string GetDstLang() const;

                    /**
                     * 设置输出视频中翻译语种
目前支持语种范围：zh(简体中文)、en(英语)、ar(阿拉伯语)、de(德语)、es(西班牙语)、fr(法语)、id(印尼语)、it(意大利语)、ja(日语)、ko(韩语)、ms(马来语)、pt(葡萄牙语)、ru(俄语)、th(泰语)、tr(土耳其语)、vi(越南语)
                     * @param _dstLang 输出视频中翻译语种
目前支持语种范围：zh(简体中文)、en(英语)、ar(阿拉伯语)、de(德语)、es(西班牙语)、fr(法语)、id(印尼语)、it(意大利语)、ja(日语)、ko(韩语)、ms(马来语)、pt(葡萄牙语)、ru(俄语)、th(泰语)、tr(土耳其语)、vi(越南语)
                     * 
                     */
                    void SetDstLang(const std::string& _dstLang);

                    /**
                     * 判断参数 DstLang 是否已赋值
                     * @return DstLang 是否已赋值
                     * 
                     */
                    bool DstLangHasBeenSet() const;

                    /**
                     * 获取翻译语种匹配音色种别，其他说明如下：
1）默认不填代表克隆输入视频中音频音色；
2）翻译语种非中英（即zh、en），该项必填；

具体音色种别详见说明“支持音色种别列表”，每个音色都支持 15 个目标语种。

                     * @return VoiceType 翻译语种匹配音色种别，其他说明如下：
1）默认不填代表克隆输入视频中音频音色；
2）翻译语种非中英（即zh、en），该项必填；

具体音色种别详见说明“支持音色种别列表”，每个音色都支持 15 个目标语种。

                     * 
                     */
                    std::string GetVoiceType() const;

                    /**
                     * 设置翻译语种匹配音色种别，其他说明如下：
1）默认不填代表克隆输入视频中音频音色；
2）翻译语种非中英（即zh、en），该项必填；

具体音色种别详见说明“支持音色种别列表”，每个音色都支持 15 个目标语种。

                     * @param _voiceType 翻译语种匹配音色种别，其他说明如下：
1）默认不填代表克隆输入视频中音频音色；
2）翻译语种非中英（即zh、en），该项必填；

具体音色种别详见说明“支持音色种别列表”，每个音色都支持 15 个目标语种。

                     * 
                     */
                    void SetVoiceType(const std::string& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取是否需要纠正视频中音频识别与翻译内容，取值范围：0-不需要，1-需要，默认0。

                     * @return Confirm 是否需要纠正视频中音频识别与翻译内容，取值范围：0-不需要，1-需要，默认0。

                     * 
                     */
                    int64_t GetConfirm() const;

                    /**
                     * 设置是否需要纠正视频中音频识别与翻译内容，取值范围：0-不需要，1-需要，默认0。

                     * @param _confirm 是否需要纠正视频中音频识别与翻译内容，取值范围：0-不需要，1-需要，默认0。

                     * 
                     */
                    void SetConfirm(const int64_t& _confirm);

                    /**
                     * 判断参数 Confirm 是否已赋值
                     * @return Confirm 是否已赋值
                     * 
                     */
                    bool ConfirmHasBeenSet() const;

                    /**
                     * 获取是否需要去除VideoUrl或AudioUrl中背景音，取值范围：0-不需要，1-需要，默认0 。
                     * @return RemoveVocal 是否需要去除VideoUrl或AudioUrl中背景音，取值范围：0-不需要，1-需要，默认0 。
                     * 
                     */
                    int64_t GetRemoveVocal() const;

                    /**
                     * 设置是否需要去除VideoUrl或AudioUrl中背景音，取值范围：0-不需要，1-需要，默认0 。
                     * @param _removeVocal 是否需要去除VideoUrl或AudioUrl中背景音，取值范围：0-不需要，1-需要，默认0 。
                     * 
                     */
                    void SetRemoveVocal(const int64_t& _removeVocal);

                    /**
                     * 判断参数 RemoveVocal 是否已赋值
                     * @return RemoveVocal 是否已赋值
                     * 
                     */
                    bool RemoveVocalHasBeenSet() const;

                    /**
                     * 获取是否开启口型驱动，0-不开启，1-开启。默认0。
                     * @return LipSync 是否开启口型驱动，0-不开启，1-开启。默认0。
                     * 
                     */
                    int64_t GetLipSync() const;

                    /**
                     * 设置是否开启口型驱动，0-不开启，1-开启。默认0。
                     * @param _lipSync 是否开启口型驱动，0-不开启，1-开启。默认0。
                     * 
                     */
                    void SetLipSync(const int64_t& _lipSync);

                    /**
                     * 判断参数 LipSync 是否已赋值
                     * @return LipSync 是否已赋值
                     * 
                     */
                    bool LipSyncHasBeenSet() const;

                    /**
                     * 获取当 AudioUrl 字段有输入音频时，如果输入音频时长大于输入视频时长，会拼接视频（ 0-正向拼接、1-反向拼接 ）对齐音频时长。默认 0。
                     * @return VideoLoop 当 AudioUrl 字段有输入音频时，如果输入音频时长大于输入视频时长，会拼接视频（ 0-正向拼接、1-反向拼接 ）对齐音频时长。默认 0。
                     * 
                     */
                    int64_t GetVideoLoop() const;

                    /**
                     * 设置当 AudioUrl 字段有输入音频时，如果输入音频时长大于输入视频时长，会拼接视频（ 0-正向拼接、1-反向拼接 ）对齐音频时长。默认 0。
                     * @param _videoLoop 当 AudioUrl 字段有输入音频时，如果输入音频时长大于输入视频时长，会拼接视频（ 0-正向拼接、1-反向拼接 ）对齐音频时长。默认 0。
                     * 
                     */
                    void SetVideoLoop(const int64_t& _videoLoop);

                    /**
                     * 判断参数 VideoLoop 是否已赋值
                     * @return VideoLoop 是否已赋值
                     * 
                     */
                    bool VideoLoopHasBeenSet() const;

                private:

                    /**
                     * 视频地址URL。
格式要求：支持 mp4、mov 。
时长要求：【5-600】秒。
fps 要求：【15-60】fps
分辨率要求：单边像素要求在 【360~4096】 之间。
大小要求：不超过500Mb

                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 输入视频中音频语种
目前支持语种范围：zh(中文), en(英文)
                     */
                    std::string m_srcLang;
                    bool m_srcLangHasBeenSet;

                    /**
                     * 当音频 URL 不为空时，不经过语音AI处理，直接以视频为素材用音频内容做视频口型驱动。
格式要求：支持 mp3、m4a、aac、wav 格式。
时长要求：【5~600】秒，音频时长要匹配视频时长。
大小要求：不超过 100Mb。
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * 输出视频中翻译语种
目前支持语种范围：zh(简体中文)、en(英语)、ar(阿拉伯语)、de(德语)、es(西班牙语)、fr(法语)、id(印尼语)、it(意大利语)、ja(日语)、ko(韩语)、ms(马来语)、pt(葡萄牙语)、ru(俄语)、th(泰语)、tr(土耳其语)、vi(越南语)
                     */
                    std::string m_dstLang;
                    bool m_dstLangHasBeenSet;

                    /**
                     * 翻译语种匹配音色种别，其他说明如下：
1）默认不填代表克隆输入视频中音频音色；
2）翻译语种非中英（即zh、en），该项必填；

具体音色种别详见说明“支持音色种别列表”，每个音色都支持 15 个目标语种。

                     */
                    std::string m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 是否需要纠正视频中音频识别与翻译内容，取值范围：0-不需要，1-需要，默认0。

                     */
                    int64_t m_confirm;
                    bool m_confirmHasBeenSet;

                    /**
                     * 是否需要去除VideoUrl或AudioUrl中背景音，取值范围：0-不需要，1-需要，默认0 。
                     */
                    int64_t m_removeVocal;
                    bool m_removeVocalHasBeenSet;

                    /**
                     * 是否开启口型驱动，0-不开启，1-开启。默认0。
                     */
                    int64_t m_lipSync;
                    bool m_lipSyncHasBeenSet;

                    /**
                     * 当 AudioUrl 字段有输入音频时，如果输入音频时长大于输入视频时长，会拼接视频（ 0-正向拼接、1-反向拼接 ）对齐音频时长。默认 0。
                     */
                    int64_t m_videoLoop;
                    bool m_videoLoopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOTRANSLATEJOBREQUEST_H_

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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STTCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 语音转文字参数
                */
                class STTConfig : public AbstractModel
                {
                public:
                    STTConfig();
                    ~STTConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音识别支持的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
1.     Chinese = "zh" # 中文
2.     Chinese_TW = "zh-TW" # 中国台湾
3.     Chinese_DIALECT = "zh-dialect" # 中国方言
4.     English = "en" # 英语
5.     Vietnamese = "vi" # 越南语
6.     Japanese = "ja" # 日语
7.     Korean = "ko" # 韩语
8.     Indonesia = "id" # 印度尼西亚语
9.     Thai = "th" # 泰语
10.     Portuguese = "pt" # 葡萄牙语
11.     Turkish = "tr" # 土耳其语
12.     Arabic = "ar" # 阿拉伯语
13.     Spanish = "es" # 西班牙语
14.     Hindi = "hi" # 印地语
15.     French = "fr" # 法语
16.     Malay = "ms" # 马来语
17.     Filipino = "fil" # 菲律宾语
18.     German = "de" # 德语
19.     Italian = "it" # 意大利语
20.     Russian = "ru" # 俄语
21.     Swedish = "sv" # 瑞典语
22.     Danish = "da" # 丹麦语
23.     Norwegian = "no" # 挪威语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     * @return Language 语音识别支持的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
1.     Chinese = "zh" # 中文
2.     Chinese_TW = "zh-TW" # 中国台湾
3.     Chinese_DIALECT = "zh-dialect" # 中国方言
4.     English = "en" # 英语
5.     Vietnamese = "vi" # 越南语
6.     Japanese = "ja" # 日语
7.     Korean = "ko" # 韩语
8.     Indonesia = "id" # 印度尼西亚语
9.     Thai = "th" # 泰语
10.     Portuguese = "pt" # 葡萄牙语
11.     Turkish = "tr" # 土耳其语
12.     Arabic = "ar" # 阿拉伯语
13.     Spanish = "es" # 西班牙语
14.     Hindi = "hi" # 印地语
15.     French = "fr" # 法语
16.     Malay = "ms" # 马来语
17.     Filipino = "fil" # 菲律宾语
18.     German = "de" # 德语
19.     Italian = "it" # 意大利语
20.     Russian = "ru" # 俄语
21.     Swedish = "sv" # 瑞典语
22.     Danish = "da" # 丹麦语
23.     Norwegian = "no" # 挪威语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置语音识别支持的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
1.     Chinese = "zh" # 中文
2.     Chinese_TW = "zh-TW" # 中国台湾
3.     Chinese_DIALECT = "zh-dialect" # 中国方言
4.     English = "en" # 英语
5.     Vietnamese = "vi" # 越南语
6.     Japanese = "ja" # 日语
7.     Korean = "ko" # 韩语
8.     Indonesia = "id" # 印度尼西亚语
9.     Thai = "th" # 泰语
10.     Portuguese = "pt" # 葡萄牙语
11.     Turkish = "tr" # 土耳其语
12.     Arabic = "ar" # 阿拉伯语
13.     Spanish = "es" # 西班牙语
14.     Hindi = "hi" # 印地语
15.     French = "fr" # 法语
16.     Malay = "ms" # 马来语
17.     Filipino = "fil" # 菲律宾语
18.     German = "de" # 德语
19.     Italian = "it" # 意大利语
20.     Russian = "ru" # 俄语
21.     Swedish = "sv" # 瑞典语
22.     Danish = "da" # 丹麦语
23.     Norwegian = "no" # 挪威语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     * @param _language 语音识别支持的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
1.     Chinese = "zh" # 中文
2.     Chinese_TW = "zh-TW" # 中国台湾
3.     Chinese_DIALECT = "zh-dialect" # 中国方言
4.     English = "en" # 英语
5.     Vietnamese = "vi" # 越南语
6.     Japanese = "ja" # 日语
7.     Korean = "ko" # 韩语
8.     Indonesia = "id" # 印度尼西亚语
9.     Thai = "th" # 泰语
10.     Portuguese = "pt" # 葡萄牙语
11.     Turkish = "tr" # 土耳其语
12.     Arabic = "ar" # 阿拉伯语
13.     Spanish = "es" # 西班牙语
14.     Hindi = "hi" # 印地语
15.     French = "fr" # 法语
16.     Malay = "ms" # 马来语
17.     Filipino = "fil" # 菲律宾语
18.     German = "de" # 德语
19.     Italian = "it" # 意大利语
20.     Russian = "ru" # 俄语
21.     Swedish = "sv" # 瑞典语
22.     Danish = "da" # 丹麦语
23.     Norwegian = "no" # 挪威语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取发起模糊识别额外可能替代语言类型,最多填写3种语言类型, 
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效

                     * @return AlternativeLanguage 发起模糊识别额外可能替代语言类型,最多填写3种语言类型, 
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效

                     * 
                     */
                    std::vector<std::string> GetAlternativeLanguage() const;

                    /**
                     * 设置发起模糊识别额外可能替代语言类型,最多填写3种语言类型, 
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效

                     * @param _alternativeLanguage 发起模糊识别额外可能替代语言类型,最多填写3种语言类型, 
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效

                     * 
                     */
                    void SetAlternativeLanguage(const std::vector<std::string>& _alternativeLanguage);

                    /**
                     * 判断参数 AlternativeLanguage 是否已赋值
                     * @return AlternativeLanguage 是否已赋值
                     * 
                     */
                    bool AlternativeLanguageHasBeenSet() const;

                    /**
                     * 获取自定义参数，联系后台使用

                     * @return CustomParam 自定义参数，联系后台使用

                     * 
                     */
                    std::string GetCustomParam() const;

                    /**
                     * 设置自定义参数，联系后台使用

                     * @param _customParam 自定义参数，联系后台使用

                     * 
                     */
                    void SetCustomParam(const std::string& _customParam);

                    /**
                     * 判断参数 CustomParam 是否已赋值
                     * @return CustomParam 是否已赋值
                     * 
                     */
                    bool CustomParamHasBeenSet() const;

                    /**
                     * 获取语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
                     * @return VadSilenceTime 语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
                     * 
                     */
                    uint64_t GetVadSilenceTime() const;

                    /**
                     * 设置语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
                     * @param _vadSilenceTime 语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
                     * 
                     */
                    void SetVadSilenceTime(const uint64_t& _vadSilenceTime);

                    /**
                     * 判断参数 VadSilenceTime 是否已赋值
                     * @return VadSilenceTime 是否已赋值
                     * 
                     */
                    bool VadSilenceTimeHasBeenSet() const;

                private:

                    /**
                     * 语音识别支持的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
1.     Chinese = "zh" # 中文
2.     Chinese_TW = "zh-TW" # 中国台湾
3.     Chinese_DIALECT = "zh-dialect" # 中国方言
4.     English = "en" # 英语
5.     Vietnamese = "vi" # 越南语
6.     Japanese = "ja" # 日语
7.     Korean = "ko" # 韩语
8.     Indonesia = "id" # 印度尼西亚语
9.     Thai = "th" # 泰语
10.     Portuguese = "pt" # 葡萄牙语
11.     Turkish = "tr" # 土耳其语
12.     Arabic = "ar" # 阿拉伯语
13.     Spanish = "es" # 西班牙语
14.     Hindi = "hi" # 印地语
15.     French = "fr" # 法语
16.     Malay = "ms" # 马来语
17.     Filipino = "fil" # 菲律宾语
18.     German = "de" # 德语
19.     Italian = "it" # 意大利语
20.     Russian = "ru" # 俄语
21.     Swedish = "sv" # 瑞典语
22.     Danish = "da" # 丹麦语
23.     Norwegian = "no" # 挪威语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 发起模糊识别额外可能替代语言类型,最多填写3种语言类型, 
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效

                     */
                    std::vector<std::string> m_alternativeLanguage;
                    bool m_alternativeLanguageHasBeenSet;

                    /**
                     * 自定义参数，联系后台使用

                     */
                    std::string m_customParam;
                    bool m_customParamHasBeenSet;

                    /**
                     * 语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
                     */
                    uint64_t m_vadSilenceTime;
                    bool m_vadSilenceTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STTCONFIG_H_

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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_

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
                * 语音识别使用的配置
                */
                class RecognizeConfig : public AbstractModel
                {
                public:
                    RecognizeConfig();
                    ~RecognizeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音转文字支持识别的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
可通过购买「语音转文本时长包」解锁或领取包月套餐体验版解锁此功能。

语音转文本支持语言类型如下：
- Chinese = "zh" # 中文
- Chinese_TW = "zh-TW" # 中国台湾
- English = "en" # 英语
- Chinese_YUE = "zh-yue" # 中国粤语
- Chinese_DIALECT = "zh-dialect" # 中国方言
- English = "en" # 英语
- Vietnamese = "vi" # 越南语
- Japanese = "ja" # 日语
- Korean = "ko" # 韩语
- Indonesia = "id" # 印度尼西亚语
- Thai = "th" # 泰语
- Portuguese = "pt" # 葡萄牙语
- Turkish = "tr" # 土耳其语
- Arabic = "ar" # 阿拉伯语
- Spanish = "es" # 西班牙语
- Hindi = "hi" # 印地语
- French = "fr" # 法语
- Malay = "ms" # 马来语
- Filipino = "fil" # 菲律宾语
- German = "de" # 德语
- Italian = "it" # 意大利语
- Russian = "ru" # 俄语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     * @return Language 语音转文字支持识别的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
可通过购买「语音转文本时长包」解锁或领取包月套餐体验版解锁此功能。

语音转文本支持语言类型如下：
- Chinese = "zh" # 中文
- Chinese_TW = "zh-TW" # 中国台湾
- English = "en" # 英语
- Chinese_YUE = "zh-yue" # 中国粤语
- Chinese_DIALECT = "zh-dialect" # 中国方言
- English = "en" # 英语
- Vietnamese = "vi" # 越南语
- Japanese = "ja" # 日语
- Korean = "ko" # 韩语
- Indonesia = "id" # 印度尼西亚语
- Thai = "th" # 泰语
- Portuguese = "pt" # 葡萄牙语
- Turkish = "tr" # 土耳其语
- Arabic = "ar" # 阿拉伯语
- Spanish = "es" # 西班牙语
- Hindi = "hi" # 印地语
- French = "fr" # 法语
- Malay = "ms" # 马来语
- Filipino = "fil" # 菲律宾语
- German = "de" # 德语
- Italian = "it" # 意大利语
- Russian = "ru" # 俄语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置语音转文字支持识别的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
可通过购买「语音转文本时长包」解锁或领取包月套餐体验版解锁此功能。

语音转文本支持语言类型如下：
- Chinese = "zh" # 中文
- Chinese_TW = "zh-TW" # 中国台湾
- English = "en" # 英语
- Chinese_YUE = "zh-yue" # 中国粤语
- Chinese_DIALECT = "zh-dialect" # 中国方言
- English = "en" # 英语
- Vietnamese = "vi" # 越南语
- Japanese = "ja" # 日语
- Korean = "ko" # 韩语
- Indonesia = "id" # 印度尼西亚语
- Thai = "th" # 泰语
- Portuguese = "pt" # 葡萄牙语
- Turkish = "tr" # 土耳其语
- Arabic = "ar" # 阿拉伯语
- Spanish = "es" # 西班牙语
- Hindi = "hi" # 印地语
- French = "fr" # 法语
- Malay = "ms" # 马来语
- Filipino = "fil" # 菲律宾语
- German = "de" # 德语
- Italian = "it" # 意大利语
- Russian = "ru" # 俄语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     * @param _language 语音转文字支持识别的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
可通过购买「语音转文本时长包」解锁或领取包月套餐体验版解锁此功能。

语音转文本支持语言类型如下：
- Chinese = "zh" # 中文
- Chinese_TW = "zh-TW" # 中国台湾
- English = "en" # 英语
- Chinese_YUE = "zh-yue" # 中国粤语
- Chinese_DIALECT = "zh-dialect" # 中国方言
- English = "en" # 英语
- Vietnamese = "vi" # 越南语
- Japanese = "ja" # 日语
- Korean = "ko" # 韩语
- Indonesia = "id" # 印度尼西亚语
- Thai = "th" # 泰语
- Portuguese = "pt" # 葡萄牙语
- Turkish = "tr" # 土耳其语
- Arabic = "ar" # 阿拉伯语
- Spanish = "es" # 西班牙语
- Hindi = "hi" # 印地语
- French = "fr" # 法语
- Malay = "ms" # 马来语
- Filipino = "fil" # 菲律宾语
- German = "de" # 德语
- Italian = "it" # 意大利语
- Russian = "ru" # 俄语

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
                     * 获取发起模糊识别额外可能替代语言类型,最多填写3种语言类型。
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效
                     * @return AlternativeLanguage 发起模糊识别额外可能替代语言类型,最多填写3种语言类型。
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效
                     * 
                     */
                    std::vector<std::string> GetAlternativeLanguage() const;

                    /**
                     * 设置发起模糊识别额外可能替代语言类型,最多填写3种语言类型。
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效
                     * @param _alternativeLanguage 发起模糊识别额外可能替代语言类型,最多填写3种语言类型。
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
                     * 获取目前已不支持
                     * @return Model 目前已不支持
                     * @deprecated
                     */
                    std::string GetModel() const;

                    /**
                     * 设置目前已不支持
                     * @param _model 目前已不支持
                     * @deprecated
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * @deprecated
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取填写则翻译，目前支持的语言：
中文: zh
英语: en
越南语: vi
日语: ja
韩语: ko
印度尼西亚语: id
泰语: th
葡萄牙语: pt
土耳其语: tr
阿拉伯语: ar
西班牙语: es
印地语: hi
法语: fr
马来语: ms
菲律宾语: fil
德语: de
意大利语: it
俄语: ru
瑞典语: sv
挪威语: no
丹麦语: da
                     * @return TranslationLanguage 填写则翻译，目前支持的语言：
中文: zh
英语: en
越南语: vi
日语: ja
韩语: ko
印度尼西亚语: id
泰语: th
葡萄牙语: pt
土耳其语: tr
阿拉伯语: ar
西班牙语: es
印地语: hi
法语: fr
马来语: ms
菲律宾语: fil
德语: de
意大利语: it
俄语: ru
瑞典语: sv
挪威语: no
丹麦语: da
                     * @deprecated
                     */
                    std::string GetTranslationLanguage() const;

                    /**
                     * 设置填写则翻译，目前支持的语言：
中文: zh
英语: en
越南语: vi
日语: ja
韩语: ko
印度尼西亚语: id
泰语: th
葡萄牙语: pt
土耳其语: tr
阿拉伯语: ar
西班牙语: es
印地语: hi
法语: fr
马来语: ms
菲律宾语: fil
德语: de
意大利语: it
俄语: ru
瑞典语: sv
挪威语: no
丹麦语: da
                     * @param _translationLanguage 填写则翻译，目前支持的语言：
中文: zh
英语: en
越南语: vi
日语: ja
韩语: ko
印度尼西亚语: id
泰语: th
葡萄牙语: pt
土耳其语: tr
阿拉伯语: ar
西班牙语: es
印地语: hi
法语: fr
马来语: ms
菲律宾语: fil
德语: de
意大利语: it
俄语: ru
瑞典语: sv
挪威语: no
丹麦语: da
                     * @deprecated
                     */
                    void SetTranslationLanguage(const std::string& _translationLanguage);

                    /**
                     * 判断参数 TranslationLanguage 是否已赋值
                     * @return TranslationLanguage 是否已赋值
                     * @deprecated
                     */
                    bool TranslationLanguageHasBeenSet() const;

                private:

                    /**
                     * 语音转文字支持识别的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
可通过购买「语音转文本时长包」解锁或领取包月套餐体验版解锁此功能。

语音转文本支持语言类型如下：
- Chinese = "zh" # 中文
- Chinese_TW = "zh-TW" # 中国台湾
- English = "en" # 英语
- Chinese_YUE = "zh-yue" # 中国粤语
- Chinese_DIALECT = "zh-dialect" # 中国方言
- English = "en" # 英语
- Vietnamese = "vi" # 越南语
- Japanese = "ja" # 日语
- Korean = "ko" # 韩语
- Indonesia = "id" # 印度尼西亚语
- Thai = "th" # 泰语
- Portuguese = "pt" # 葡萄牙语
- Turkish = "tr" # 土耳其语
- Arabic = "ar" # 阿拉伯语
- Spanish = "es" # 西班牙语
- Hindi = "hi" # 印地语
- French = "fr" # 法语
- Malay = "ms" # 马来语
- Filipino = "fil" # 菲律宾语
- German = "de" # 德语
- Italian = "it" # 意大利语
- Russian = "ru" # 俄语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 发起模糊识别额外可能替代语言类型,最多填写3种语言类型。
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效
                     */
                    std::vector<std::string> m_alternativeLanguage;
                    bool m_alternativeLanguageHasBeenSet;

                    /**
                     * 目前已不支持
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 填写则翻译，目前支持的语言：
中文: zh
英语: en
越南语: vi
日语: ja
韩语: ko
印度尼西亚语: id
泰语: th
葡萄牙语: pt
土耳其语: tr
阿拉伯语: ar
西班牙语: es
印地语: hi
法语: fr
马来语: ms
菲律宾语: fil
德语: de
意大利语: it
俄语: ru
瑞典语: sv
挪威语: no
丹麦语: da
                     */
                    std::string m_translationLanguage;
                    bool m_translationLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_

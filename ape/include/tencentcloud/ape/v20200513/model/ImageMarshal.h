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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_IMAGEMARSHAL_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_IMAGEMARSHAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * 图片售卖组合信息
                */
                class ImageMarshal : public AbstractModel
                {
                public:
                    ImageMarshal();
                    ~ImageMarshal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取售卖组合唯一标识
                     * @return MarshalId 售卖组合唯一标识
                     */
                    uint64_t GetMarshalId() const;

                    /**
                     * 设置售卖组合唯一标识
                     * @param MarshalId 售卖组合唯一标识
                     */
                    void SetMarshalId(const uint64_t& _marshalId);

                    /**
                     * 判断参数 MarshalId 是否已赋值
                     * @return MarshalId 是否已赋值
                     */
                    bool MarshalIdHasBeenSet() const;

                    /**
                     * 获取图片高度
                     * @return Height 图片高度
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置图片高度
                     * @param Height 图片高度
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取图片宽度
                     * @return Width 图片宽度
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置图片宽度
                     * @param Width 图片宽度
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取图片大小
                     * @return Size 图片大小
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置图片大小
                     * @param Size 图片大小
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取图片格式
                     * @return Format 图片格式
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置图片格式
                     * @param Format 图片格式
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取图片价格(单位:分)
                     * @return Price 图片价格(单位:分)
                     */
                    uint64_t GetPrice() const;

                    /**
                     * 设置图片价格(单位:分)
                     * @param Price 图片价格(单位:分)
                     */
                    void SetPrice(const uint64_t& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取授权范围
                     * @return LicenseScope 授权范围
                     */
                    std::string GetLicenseScope() const;

                    /**
                     * 设置授权范围
                     * @param LicenseScope 授权范围
                     */
                    void SetLicenseScope(const std::string& _licenseScope);

                    /**
                     * 判断参数 LicenseScope 是否已赋值
                     * @return LicenseScope 是否已赋值
                     */
                    bool LicenseScopeHasBeenSet() const;

                    /**
                     * 获取是否支持VIP购买
                     * @return IsVip 是否支持VIP购买
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置是否支持VIP购买
                     * @param IsVip 是否支持VIP购买
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     */
                    bool IsVipHasBeenSet() const;

                private:

                    /**
                     * 售卖组合唯一标识
                     */
                    uint64_t m_marshalId;
                    bool m_marshalIdHasBeenSet;

                    /**
                     * 图片高度
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 图片宽度
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 图片大小
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 图片格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 图片价格(单位:分)
                     */
                    uint64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 授权范围
                     */
                    std::string m_licenseScope;
                    bool m_licenseScopeHasBeenSet;

                    /**
                     * 是否支持VIP购买
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_IMAGEMARSHAL_H_
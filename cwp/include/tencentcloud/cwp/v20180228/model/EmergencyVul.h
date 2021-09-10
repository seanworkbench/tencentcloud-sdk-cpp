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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYVUL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 应急漏洞信息
                */
                class EmergencyVul : public AbstractModel
                {
                public:
                    EmergencyVul();
                    ~EmergencyVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param VulId 漏洞id
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取漏洞级别
                     * @return Level 漏洞级别
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置漏洞级别
                     * @param Level 漏洞级别
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param VulName 漏洞名称
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取发布日期
                     * @return PublishDate 发布日期
                     */
                    std::string GetPublishDate() const;

                    /**
                     * 设置发布日期
                     * @param PublishDate 发布日期
                     */
                    void SetPublishDate(const std::string& _publishDate);

                    /**
                     * 判断参数 PublishDate 是否已赋值
                     * @return PublishDate 是否已赋值
                     */
                    bool PublishDateHasBeenSet() const;

                    /**
                     * 获取漏洞分类
                     * @return Category 漏洞分类
                     */
                    uint64_t GetCategory() const;

                    /**
                     * 设置漏洞分类
                     * @param Category 漏洞分类
                     */
                    void SetCategory(const uint64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取漏洞状态 0未检测 1有风险 ，2无风险 ，3 检查中展示progress
                     * @return Status 漏洞状态 0未检测 1有风险 ，2无风险 ，3 检查中展示progress
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置漏洞状态 0未检测 1有风险 ，2无风险 ，3 检查中展示progress
                     * @param Status 漏洞状态 0未检测 1有风险 ，2无风险 ，3 检查中展示progress
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取最后扫描时间
                     * @return LastScanTime 最后扫描时间
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最后扫描时间
                     * @param LastScanTime 最后扫描时间
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取扫描进度
                     * @return Progress 扫描进度
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置扫描进度
                     * @param Progress 扫描进度
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞级别
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 发布日期
                     */
                    std::string m_publishDate;
                    bool m_publishDateHasBeenSet;

                    /**
                     * 漏洞分类
                     */
                    uint64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 漏洞状态 0未检测 1有风险 ，2无风险 ，3 检查中展示progress
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最后扫描时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 扫描进度
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYVUL_H_
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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETELANERULEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETELANERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeleteLaneRule请求参数结构体
                */
                class DeleteLaneRuleRequest : public AbstractModel
                {
                public:
                    DeleteLaneRuleRequest();
                    ~DeleteLaneRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取泳道规则Id
                     * @return RuleId 泳道规则Id
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置泳道规则Id
                     * @param RuleId 泳道规则Id
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 泳道规则Id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETELANERULEREQUEST_H_
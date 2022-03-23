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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DELETECUSTOMPERSONREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DELETECUSTOMPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DeleteCustomPerson请求参数结构体
                */
                class DeleteCustomPersonRequest : public AbstractModel
                {
                public:
                    DeleteCustomPersonRequest();
                    ~DeleteCustomPersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的自定义人物ID
                     * @return PersonId 待删除的自定义人物ID
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置待删除的自定义人物ID
                     * @param PersonId 待删除的自定义人物ID
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                private:

                    /**
                     * 待删除的自定义人物ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DELETECUSTOMPERSONREQUEST_H_
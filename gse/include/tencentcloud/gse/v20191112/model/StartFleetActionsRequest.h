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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_STARTFLEETACTIONSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_STARTFLEETACTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * StartFleetActions请求参数结构体
                */
                class StartFleetActionsRequest : public AbstractModel
                {
                public:
                    StartFleetActionsRequest();
                    ~StartFleetActionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队 Id
                     * @return FleetId 服务器舰队 Id
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务器舰队 Id
                     * @param FleetId 服务器舰队 Id
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取扩展策略，为空或者AUTO_SCALING
                     * @return Actions 扩展策略，为空或者AUTO_SCALING
                     */
                    std::vector<std::string> GetActions() const;

                    /**
                     * 设置扩展策略，为空或者AUTO_SCALING
                     * @param Actions 扩展策略，为空或者AUTO_SCALING
                     */
                    void SetActions(const std::vector<std::string>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     */
                    bool ActionsHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队 Id
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 扩展策略，为空或者AUTO_SCALING
                     */
                    std::vector<std::string> m_actions;
                    bool m_actionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_STARTFLEETACTIONSREQUEST_H_
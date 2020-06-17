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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETESERVICEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DeleteService请求参数结构体
                */
                class DeleteServiceRequest : public AbstractModel
                {
                public:
                    DeleteServiceRequest();
                    ~DeleteServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除服务的唯一 ID。
                     * @return ServiceId 待删除服务的唯一 ID。
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置待删除服务的唯一 ID。
                     * @param ServiceId 待删除服务的唯一 ID。
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * 待删除服务的唯一 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETESERVICEREQUEST_H_
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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_CREATEPROBETASKSREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_CREATEPROBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/ProbeTaskBasicConfiguration.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * CreateProbeTasks请求参数结构体
                */
                class CreateProbeTasksRequest : public AbstractModel
                {
                public:
                    CreateProbeTasksRequest();
                    ~CreateProbeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量任务名-地址
                     * @return BatchTasks 批量任务名-地址
                     */
                    std::vector<ProbeTaskBasicConfiguration> GetBatchTasks() const;

                    /**
                     * 设置批量任务名-地址
                     * @param BatchTasks 批量任务名-地址
                     */
                    void SetBatchTasks(const std::vector<ProbeTaskBasicConfiguration>& _batchTasks);

                    /**
                     * 判断参数 BatchTasks 是否已赋值
                     * @return BatchTasks 是否已赋值
                     */
                    bool BatchTasksHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskType 任务类型
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param TaskType 任务类型
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取探测节点
                     * @return Nodes 探测节点
                     */
                    std::vector<std::string> GetNodes() const;

                    /**
                     * 设置探测节点
                     * @param Nodes 探测节点
                     */
                    void SetNodes(const std::vector<std::string>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取探测间隔
                     * @return Interval 探测间隔
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置探测间隔
                     * @param Interval 探测间隔
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取探测参数
                     * @return Parameters 探测参数
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置探测参数
                     * @param Parameters 探测参数
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     * @return TaskCategory 任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     */
                    int64_t GetTaskCategory() const;

                    /**
                     * 设置任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     * @param TaskCategory 任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     */
                    void SetTaskCategory(const int64_t& _taskCategory);

                    /**
                     * 判断参数 TaskCategory 是否已赋值
                     * @return TaskCategory 是否已赋值
                     */
                    bool TaskCategoryHasBeenSet() const;

                    /**
                     * 获取定时任务cron表达式
                     * @return Cron 定时任务cron表达式
                     */
                    std::string GetCron() const;

                    /**
                     * 设置定时任务cron表达式
                     * @param Cron 定时任务cron表达式
                     */
                    void SetCron(const std::string& _cron);

                    /**
                     * 判断参数 Cron 是否已赋值
                     * @return Cron 是否已赋值
                     */
                    bool CronHasBeenSet() const;

                private:

                    /**
                     * 批量任务名-地址
                     */
                    std::vector<ProbeTaskBasicConfiguration> m_batchTasks;
                    bool m_batchTasksHasBeenSet;

                    /**
                     * 任务类型
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 探测节点
                     */
                    std::vector<std::string> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 探测间隔
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 探测参数
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     */
                    int64_t m_taskCategory;
                    bool m_taskCategoryHasBeenSet;

                    /**
                     * 定时任务cron表达式
                     */
                    std::string m_cron;
                    bool m_cronHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_CREATEPROBETASKSREQUEST_H_
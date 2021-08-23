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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCSEARCHTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCSEARCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateAsyncSearchTask请求参数结构体
                */
                class CreateAsyncSearchTaskRequest : public AbstractModel
                {
                public:
                    CreateAsyncSearchTaskRequest();
                    ~CreateAsyncSearchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志集ID
                     * @return LogsetId 日志集ID
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID
                     * @param LogsetId 日志集ID
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志主题ID，目前仅支持StorageType为cold的日志主题
                     * @return TopicId 日志主题ID，目前仅支持StorageType为cold的日志主题
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID，目前仅支持StorageType为cold的日志主题
                     * @param TopicId 日志主题ID，目前仅支持StorageType为cold的日志主题
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取查询语句，语句长度最大为1024
                     * @return Query 查询语句，语句长度最大为1024
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句，语句长度最大为1024
                     * @param Query 查询语句，语句长度最大为1024
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取要查询的日志的起始时间，Unix时间戳，单位ms
                     * @return From 要查询的日志的起始时间，Unix时间戳，单位ms
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置要查询的日志的起始时间，Unix时间戳，单位ms
                     * @param From 要查询的日志的起始时间，Unix时间戳，单位ms
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取要查询的日志的结束时间，Unix时间戳，单位ms
                     * @return To 要查询的日志的结束时间，Unix时间戳，单位ms
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置要查询的日志的结束时间，Unix时间戳，单位ms
                     * @param To 要查询的日志的结束时间，Unix时间戳，单位ms
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取日志扫描顺序；可选值：asc(升序)、desc(降序)，默认为 desc
                     * @return Sort 日志扫描顺序；可选值：asc(升序)、desc(降序)，默认为 desc
                     */
                    std::string GetSort() const;

                    /**
                     * 设置日志扫描顺序；可选值：asc(升序)、desc(降序)，默认为 desc
                     * @param Sort 日志扫描顺序；可选值：asc(升序)、desc(降序)，默认为 desc
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志主题ID，目前仅支持StorageType为cold的日志主题
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 查询语句，语句长度最大为1024
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 要查询的日志的起始时间，Unix时间戳，单位ms
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 要查询的日志的结束时间，Unix时间戳，单位ms
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 日志扫描顺序；可选值：asc(升序)、desc(降序)，默认为 desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCSEARCHTASKREQUEST_H_
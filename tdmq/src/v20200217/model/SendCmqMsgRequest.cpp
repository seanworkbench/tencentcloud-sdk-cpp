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

#include <tencentcloud/tdmq/v20200217/model/SendCmqMsgRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace rapidjson;
using namespace std;

SendCmqMsgRequest::SendCmqMsgRequest() :
    m_queueNameHasBeenSet(false),
    m_msgContentHasBeenSet(false),
    m_delaySecondsHasBeenSet(false)
{
}

string SendCmqMsgRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queueNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_msgContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MsgContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_msgContent.c_str(), allocator).Move(), allocator);
    }

    if (m_delaySecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delaySeconds, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendCmqMsgRequest::GetQueueName() const
{
    return m_queueName;
}

void SendCmqMsgRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool SendCmqMsgRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string SendCmqMsgRequest::GetMsgContent() const
{
    return m_msgContent;
}

void SendCmqMsgRequest::SetMsgContent(const string& _msgContent)
{
    m_msgContent = _msgContent;
    m_msgContentHasBeenSet = true;
}

bool SendCmqMsgRequest::MsgContentHasBeenSet() const
{
    return m_msgContentHasBeenSet;
}

int64_t SendCmqMsgRequest::GetDelaySeconds() const
{
    return m_delaySeconds;
}

void SendCmqMsgRequest::SetDelaySeconds(const int64_t& _delaySeconds)
{
    m_delaySeconds = _delaySeconds;
    m_delaySecondsHasBeenSet = true;
}

bool SendCmqMsgRequest::DelaySecondsHasBeenSet() const
{
    return m_delaySecondsHasBeenSet;
}


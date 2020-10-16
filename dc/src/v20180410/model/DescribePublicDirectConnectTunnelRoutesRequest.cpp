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

#include <tencentcloud/dc/v20180410/model/DescribePublicDirectConnectTunnelRoutesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dc::V20180410::Model;
using namespace rapidjson;
using namespace std;

DescribePublicDirectConnectTunnelRoutesRequest::DescribePublicDirectConnectTunnelRoutesRequest() :
    m_directConnectTunnelIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribePublicDirectConnectTunnelRoutesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directConnectTunnelIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectTunnelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_directConnectTunnelId.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePublicDirectConnectTunnelRoutesRequest::GetDirectConnectTunnelId() const
{
    return m_directConnectTunnelId;
}

void DescribePublicDirectConnectTunnelRoutesRequest::SetDirectConnectTunnelId(const string& _directConnectTunnelId)
{
    m_directConnectTunnelId = _directConnectTunnelId;
    m_directConnectTunnelIdHasBeenSet = true;
}

bool DescribePublicDirectConnectTunnelRoutesRequest::DirectConnectTunnelIdHasBeenSet() const
{
    return m_directConnectTunnelIdHasBeenSet;
}

vector<Filter> DescribePublicDirectConnectTunnelRoutesRequest::GetFilters() const
{
    return m_filters;
}

void DescribePublicDirectConnectTunnelRoutesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribePublicDirectConnectTunnelRoutesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribePublicDirectConnectTunnelRoutesRequest::GetOffset() const
{
    return m_offset;
}

void DescribePublicDirectConnectTunnelRoutesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePublicDirectConnectTunnelRoutesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribePublicDirectConnectTunnelRoutesRequest::GetLimit() const
{
    return m_limit;
}

void DescribePublicDirectConnectTunnelRoutesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePublicDirectConnectTunnelRoutesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


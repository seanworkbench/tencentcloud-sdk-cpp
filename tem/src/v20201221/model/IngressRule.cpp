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

#include <tencentcloud/tem/v20201221/model/IngressRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace rapidjson;
using namespace std;

IngressRule::IngressRule() :
    m_httpHasBeenSet(false),
    m_hostHasBeenSet(false)
{
}

CoreInternalOutcome IngressRule::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Http") && !value["Http"].IsNull())
    {
        if (!value["Http"].IsObject())
        {
            return CoreInternalOutcome(Error("response `IngressRule.Http` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_http.Deserialize(value["Http"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Error("response `IngressRule.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IngressRule::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_httpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Http";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_http.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_host.c_str(), allocator).Move(), allocator);
    }

}


IngressRuleValue IngressRule::GetHttp() const
{
    return m_http;
}

void IngressRule::SetHttp(const IngressRuleValue& _http)
{
    m_http = _http;
    m_httpHasBeenSet = true;
}

bool IngressRule::HttpHasBeenSet() const
{
    return m_httpHasBeenSet;
}

string IngressRule::GetHost() const
{
    return m_host;
}

void IngressRule::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool IngressRule::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

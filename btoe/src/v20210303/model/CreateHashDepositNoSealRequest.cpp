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

#include <tencentcloud/btoe/v20210303/model/CreateHashDepositNoSealRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Btoe::V20210303::Model;
using namespace rapidjson;
using namespace std;

CreateHashDepositNoSealRequest::CreateHashDepositNoSealRequest() :
    m_evidenceHashHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_hashTypeHasBeenSet(false),
    m_evidenceInfoHasBeenSet(false)
{
}

string CreateHashDepositNoSealRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_evidenceHashHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvidenceHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_evidenceHash.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_hashTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HashType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hashType, allocator);
    }

    if (m_evidenceInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvidenceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_evidenceInfo.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateHashDepositNoSealRequest::GetEvidenceHash() const
{
    return m_evidenceHash;
}

void CreateHashDepositNoSealRequest::SetEvidenceHash(const string& _evidenceHash)
{
    m_evidenceHash = _evidenceHash;
    m_evidenceHashHasBeenSet = true;
}

bool CreateHashDepositNoSealRequest::EvidenceHashHasBeenSet() const
{
    return m_evidenceHashHasBeenSet;
}

string CreateHashDepositNoSealRequest::GetBusinessId() const
{
    return m_businessId;
}

void CreateHashDepositNoSealRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool CreateHashDepositNoSealRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

uint64_t CreateHashDepositNoSealRequest::GetHashType() const
{
    return m_hashType;
}

void CreateHashDepositNoSealRequest::SetHashType(const uint64_t& _hashType)
{
    m_hashType = _hashType;
    m_hashTypeHasBeenSet = true;
}

bool CreateHashDepositNoSealRequest::HashTypeHasBeenSet() const
{
    return m_hashTypeHasBeenSet;
}

string CreateHashDepositNoSealRequest::GetEvidenceInfo() const
{
    return m_evidenceInfo;
}

void CreateHashDepositNoSealRequest::SetEvidenceInfo(const string& _evidenceInfo)
{
    m_evidenceInfo = _evidenceInfo;
    m_evidenceInfoHasBeenSet = true;
}

bool CreateHashDepositNoSealRequest::EvidenceInfoHasBeenSet() const
{
    return m_evidenceInfoHasBeenSet;
}


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

#include <tencentcloud/essbasic/v20210526/model/FlowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

FlowInfo::FlowInfo() :
    m_flowNameHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_flowApproversHasBeenSet(false),
    m_formFieldsHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_customerDataHasBeenSet(false)
{
}

CoreInternalOutcome FlowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInfo.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInfo.Deadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = value["Deadline"].GetInt64();
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("FlowType") && !value["FlowType"].IsNull())
    {
        if (!value["FlowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInfo.FlowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowType = string(value["FlowType"].GetString());
        m_flowTypeHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInfo.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("FlowApprovers") && !value["FlowApprovers"].IsNull())
    {
        if (!value["FlowApprovers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowInfo.FlowApprovers` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowApprovers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowApproverInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowApprovers.push_back(item);
        }
        m_flowApproversHasBeenSet = true;
    }

    if (value.HasMember("FormFields") && !value["FormFields"].IsNull())
    {
        if (!value["FormFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowInfo.FormFields` is not array type"));

        const rapidjson::Value &tmpValue = value["FormFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FormField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_formFields.push_back(item);
        }
        m_formFieldsHasBeenSet = true;
    }

    if (value.HasMember("FlowDescription") && !value["FlowDescription"].IsNull())
    {
        if (!value["FlowDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInfo.FlowDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowDescription = string(value["FlowDescription"].GetString());
        m_flowDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CustomerData") && !value["CustomerData"].IsNull())
    {
        if (!value["CustomerData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInfo.CustomerData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerData = string(value["CustomerData"].GetString());
        m_customerDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_flowApproversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowApprovers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowApprovers.begin(); itr != m_flowApprovers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_formFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_formFields.begin(); itr != m_formFields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_flowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_customerDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerData.c_str(), allocator).Move(), allocator);
    }

}


string FlowInfo::GetFlowName() const
{
    return m_flowName;
}

void FlowInfo::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool FlowInfo::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

int64_t FlowInfo::GetDeadline() const
{
    return m_deadline;
}

void FlowInfo::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool FlowInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string FlowInfo::GetTemplateId() const
{
    return m_templateId;
}

void FlowInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool FlowInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string FlowInfo::GetFlowType() const
{
    return m_flowType;
}

void FlowInfo::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool FlowInfo::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

string FlowInfo::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void FlowInfo::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool FlowInfo::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

vector<FlowApproverInfo> FlowInfo::GetFlowApprovers() const
{
    return m_flowApprovers;
}

void FlowInfo::SetFlowApprovers(const vector<FlowApproverInfo>& _flowApprovers)
{
    m_flowApprovers = _flowApprovers;
    m_flowApproversHasBeenSet = true;
}

bool FlowInfo::FlowApproversHasBeenSet() const
{
    return m_flowApproversHasBeenSet;
}

vector<FormField> FlowInfo::GetFormFields() const
{
    return m_formFields;
}

void FlowInfo::SetFormFields(const vector<FormField>& _formFields)
{
    m_formFields = _formFields;
    m_formFieldsHasBeenSet = true;
}

bool FlowInfo::FormFieldsHasBeenSet() const
{
    return m_formFieldsHasBeenSet;
}

string FlowInfo::GetFlowDescription() const
{
    return m_flowDescription;
}

void FlowInfo::SetFlowDescription(const string& _flowDescription)
{
    m_flowDescription = _flowDescription;
    m_flowDescriptionHasBeenSet = true;
}

bool FlowInfo::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

string FlowInfo::GetCustomerData() const
{
    return m_customerData;
}

void FlowInfo::SetCustomerData(const string& _customerData)
{
    m_customerData = _customerData;
    m_customerDataHasBeenSet = true;
}

bool FlowInfo::CustomerDataHasBeenSet() const
{
    return m_customerDataHasBeenSet;
}

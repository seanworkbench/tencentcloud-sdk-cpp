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

#include <tencentcloud/dnspod/v20210323/model/UserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace rapidjson;
using namespace std;

UserInfo::UserInfo() :
    m_nickHasBeenSet(false),
    m_idHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_emailVerifiedHasBeenSet(false),
    m_telephoneVerifiedHasBeenSet(false),
    m_userGradeHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_wechatBindedHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome UserInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfo.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `UserInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfo.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Telephone") && !value["Telephone"].IsNull())
    {
        if (!value["Telephone"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfo.Telephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telephone = string(value["Telephone"].GetString());
        m_telephoneHasBeenSet = true;
    }

    if (value.HasMember("EmailVerified") && !value["EmailVerified"].IsNull())
    {
        if (!value["EmailVerified"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfo.EmailVerified` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailVerified = string(value["EmailVerified"].GetString());
        m_emailVerifiedHasBeenSet = true;
    }

    if (value.HasMember("TelephoneVerified") && !value["TelephoneVerified"].IsNull())
    {
        if (!value["TelephoneVerified"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfo.TelephoneVerified` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telephoneVerified = string(value["TelephoneVerified"].GetString());
        m_telephoneVerifiedHasBeenSet = true;
    }

    if (value.HasMember("UserGrade") && !value["UserGrade"].IsNull())
    {
        if (!value["UserGrade"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfo.UserGrade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGrade = string(value["UserGrade"].GetString());
        m_userGradeHasBeenSet = true;
    }

    if (value.HasMember("RealName") && !value["RealName"].IsNull())
    {
        if (!value["RealName"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfo.RealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realName = string(value["RealName"].GetString());
        m_realNameHasBeenSet = true;
    }

    if (value.HasMember("WechatBinded") && !value["WechatBinded"].IsNull())
    {
        if (!value["WechatBinded"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInfo.WechatBinded` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatBinded = string(value["WechatBinded"].GetString());
        m_wechatBindedHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `UserInfo.Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nickHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_emailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_telephoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    if (m_emailVerifiedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EmailVerified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_emailVerified.c_str(), allocator).Move(), allocator);
    }

    if (m_telephoneVerifiedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TelephoneVerified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_telephoneVerified.c_str(), allocator).Move(), allocator);
    }

    if (m_userGradeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserGrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userGrade.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatBindedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WechatBinded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_wechatBinded.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

}


string UserInfo::GetNick() const
{
    return m_nick;
}

void UserInfo::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool UserInfo::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

int64_t UserInfo::GetId() const
{
    return m_id;
}

void UserInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UserInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UserInfo::GetEmail() const
{
    return m_email;
}

void UserInfo::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool UserInfo::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string UserInfo::GetStatus() const
{
    return m_status;
}

void UserInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UserInfo::GetTelephone() const
{
    return m_telephone;
}

void UserInfo::SetTelephone(const string& _telephone)
{
    m_telephone = _telephone;
    m_telephoneHasBeenSet = true;
}

bool UserInfo::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}

string UserInfo::GetEmailVerified() const
{
    return m_emailVerified;
}

void UserInfo::SetEmailVerified(const string& _emailVerified)
{
    m_emailVerified = _emailVerified;
    m_emailVerifiedHasBeenSet = true;
}

bool UserInfo::EmailVerifiedHasBeenSet() const
{
    return m_emailVerifiedHasBeenSet;
}

string UserInfo::GetTelephoneVerified() const
{
    return m_telephoneVerified;
}

void UserInfo::SetTelephoneVerified(const string& _telephoneVerified)
{
    m_telephoneVerified = _telephoneVerified;
    m_telephoneVerifiedHasBeenSet = true;
}

bool UserInfo::TelephoneVerifiedHasBeenSet() const
{
    return m_telephoneVerifiedHasBeenSet;
}

string UserInfo::GetUserGrade() const
{
    return m_userGrade;
}

void UserInfo::SetUserGrade(const string& _userGrade)
{
    m_userGrade = _userGrade;
    m_userGradeHasBeenSet = true;
}

bool UserInfo::UserGradeHasBeenSet() const
{
    return m_userGradeHasBeenSet;
}

string UserInfo::GetRealName() const
{
    return m_realName;
}

void UserInfo::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool UserInfo::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string UserInfo::GetWechatBinded() const
{
    return m_wechatBinded;
}

void UserInfo::SetWechatBinded(const string& _wechatBinded)
{
    m_wechatBinded = _wechatBinded;
    m_wechatBindedHasBeenSet = true;
}

bool UserInfo::WechatBindedHasBeenSet() const
{
    return m_wechatBindedHasBeenSet;
}

int64_t UserInfo::GetUin() const
{
    return m_uin;
}

void UserInfo::SetUin(const int64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool UserInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

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

#include <tencentcloud/ams/v20200608/model/ImageResultsResultDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace rapidjson;
using namespace std;

ImageResultsResultDetail::ImageResultsResultDetail() :
    m_locationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_textHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_libIdHasBeenSet(false),
    m_libNameHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_subLabelCodeHasBeenSet(false)
{
}

CoreInternalOutcome ImageResultsResultDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsArray())
            return CoreInternalOutcome(Error("response `ImageResultsResultDetail.Location` is not array type"));

        const Value &tmpValue = value["Location"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageResultsResultDetailLocation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_location.push_back(item);
        }
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageResultsResultDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageResultsResultDetail.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageResultsResultDetail.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("LibId") && !value["LibId"].IsNull())
    {
        if (!value["LibId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageResultsResultDetail.LibId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libId = string(value["LibId"].GetString());
        m_libIdHasBeenSet = true;
    }

    if (value.HasMember("LibName") && !value["LibName"].IsNull())
    {
        if (!value["LibName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageResultsResultDetail.LibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libName = string(value["LibName"].GetString());
        m_libNameHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Error("response `ImageResultsResultDetail.Keywords` is not array type"));

        const Value &tmpValue = value["Keywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageResultsResultDetail.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImageResultsResultDetail.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("SubLabelCode") && !value["SubLabelCode"].IsNull())
    {
        if (!value["SubLabelCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageResultsResultDetail.SubLabelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabelCode = string(value["SubLabelCode"].GetString());
        m_subLabelCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageResultsResultDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_locationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_location.begin(); itr != m_location.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_libIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LibId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_libId.c_str(), allocator).Move(), allocator);
    }

    if (m_libNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LibName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_libName.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_suggestionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_subLabelCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubLabelCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subLabelCode.c_str(), allocator).Move(), allocator);
    }

}


vector<ImageResultsResultDetailLocation> ImageResultsResultDetail::GetLocation() const
{
    return m_location;
}

void ImageResultsResultDetail::SetLocation(const vector<ImageResultsResultDetailLocation>& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool ImageResultsResultDetail::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string ImageResultsResultDetail::GetName() const
{
    return m_name;
}

void ImageResultsResultDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageResultsResultDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImageResultsResultDetail::GetText() const
{
    return m_text;
}

void ImageResultsResultDetail::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ImageResultsResultDetail::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string ImageResultsResultDetail::GetLabel() const
{
    return m_label;
}

void ImageResultsResultDetail::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ImageResultsResultDetail::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string ImageResultsResultDetail::GetLibId() const
{
    return m_libId;
}

void ImageResultsResultDetail::SetLibId(const string& _libId)
{
    m_libId = _libId;
    m_libIdHasBeenSet = true;
}

bool ImageResultsResultDetail::LibIdHasBeenSet() const
{
    return m_libIdHasBeenSet;
}

string ImageResultsResultDetail::GetLibName() const
{
    return m_libName;
}

void ImageResultsResultDetail::SetLibName(const string& _libName)
{
    m_libName = _libName;
    m_libNameHasBeenSet = true;
}

bool ImageResultsResultDetail::LibNameHasBeenSet() const
{
    return m_libNameHasBeenSet;
}

vector<string> ImageResultsResultDetail::GetKeywords() const
{
    return m_keywords;
}

void ImageResultsResultDetail::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool ImageResultsResultDetail::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string ImageResultsResultDetail::GetSuggestion() const
{
    return m_suggestion;
}

void ImageResultsResultDetail::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ImageResultsResultDetail::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

int64_t ImageResultsResultDetail::GetScore() const
{
    return m_score;
}

void ImageResultsResultDetail::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ImageResultsResultDetail::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string ImageResultsResultDetail::GetSubLabelCode() const
{
    return m_subLabelCode;
}

void ImageResultsResultDetail::SetSubLabelCode(const string& _subLabelCode)
{
    m_subLabelCode = _subLabelCode;
    m_subLabelCodeHasBeenSet = true;
}

bool ImageResultsResultDetail::SubLabelCodeHasBeenSet() const
{
    return m_subLabelCodeHasBeenSet;
}

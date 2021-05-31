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

#include <tencentcloud/dbbrain/v20210527/model/SchemaSpaceTimeSeries.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace rapidjson;
using namespace std;

SchemaSpaceTimeSeries::SchemaSpaceTimeSeries() :
    m_tableSchemaHasBeenSet(false),
    m_seriesDataHasBeenSet(false)
{
}

CoreInternalOutcome SchemaSpaceTimeSeries::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TableSchema") && !value["TableSchema"].IsNull())
    {
        if (!value["TableSchema"].IsString())
        {
            return CoreInternalOutcome(Error("response `SchemaSpaceTimeSeries.TableSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableSchema = string(value["TableSchema"].GetString());
        m_tableSchemaHasBeenSet = true;
    }

    if (value.HasMember("SeriesData") && !value["SeriesData"].IsNull())
    {
        if (!value["SeriesData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SchemaSpaceTimeSeries.SeriesData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_seriesData.Deserialize(value["SeriesData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_seriesDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchemaSpaceTimeSeries::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tableSchemaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableSchema.c_str(), allocator).Move(), allocator);
    }

    if (m_seriesDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SeriesData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_seriesData.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SchemaSpaceTimeSeries::GetTableSchema() const
{
    return m_tableSchema;
}

void SchemaSpaceTimeSeries::SetTableSchema(const string& _tableSchema)
{
    m_tableSchema = _tableSchema;
    m_tableSchemaHasBeenSet = true;
}

bool SchemaSpaceTimeSeries::TableSchemaHasBeenSet() const
{
    return m_tableSchemaHasBeenSet;
}

MonitorMetricSeriesData SchemaSpaceTimeSeries::GetSeriesData() const
{
    return m_seriesData;
}

void SchemaSpaceTimeSeries::SetSeriesData(const MonitorMetricSeriesData& _seriesData)
{
    m_seriesData = _seriesData;
    m_seriesDataHasBeenSet = true;
}

bool SchemaSpaceTimeSeries::SeriesDataHasBeenSet() const
{
    return m_seriesDataHasBeenSet;
}

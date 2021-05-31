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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGYREPORT_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGYREPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Part.h>
#include <tencentcloud/mrs/v20200910/model/Size.h>
#include <tencentcloud/mrs/v20200910/model/HistologyLevel.h>
#include <tencentcloud/mrs/v20200910/model/HistologyType.h>
#include <tencentcloud/mrs/v20200910/model/IHCInfo.h>
#include <tencentcloud/mrs/v20200910/model/BlockInfo.h>
#include <tencentcloud/mrs/v20200910/model/Invas.h>
#include <tencentcloud/mrs/v20200910/model/Lymph.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 病理报告
                */
                class PathologyReport : public AbstractModel
                {
                public:
                    PathologyReport();
                    ~PathologyReport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CancerPart ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Part GetCancerPart() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CancerPart ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCancerPart(const Part& _cancerPart);

                    /**
                     * 判断参数 CancerPart 是否已赋值
                     * @return CancerPart 是否已赋值
                     */
                    bool CancerPartHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CancerSize ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Size> GetCancerSize() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CancerSize ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCancerSize(const std::vector<Size>& _cancerSize);

                    /**
                     * 判断参数 CancerSize 是否已赋值
                     * @return CancerSize 是否已赋值
                     */
                    bool CancerSizeHasBeenSet() const;

                    /**
                     * 获取描述文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescText 描述文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescText() const;

                    /**
                     * 设置描述文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DescText 描述文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescText(const std::string& _descText);

                    /**
                     * 判断参数 DescText 是否已赋值
                     * @return DescText 是否已赋值
                     */
                    bool DescTextHasBeenSet() const;

                    /**
                     * 获取癌症
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HistologyLevel 癌症
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HistologyLevel GetHistologyLevel() const;

                    /**
                     * 设置癌症
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HistologyLevel 癌症
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHistologyLevel(const HistologyLevel& _histologyLevel);

                    /**
                     * 判断参数 HistologyLevel 是否已赋值
                     * @return HistologyLevel 是否已赋值
                     */
                    bool HistologyLevelHasBeenSet() const;

                    /**
                     * 获取扩散
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HistologyType 扩散
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HistologyType GetHistologyType() const;

                    /**
                     * 设置扩散
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HistologyType 扩散
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHistologyType(const HistologyType& _histologyType);

                    /**
                     * 判断参数 HistologyType 是否已赋值
                     * @return HistologyType 是否已赋值
                     */
                    bool HistologyTypeHasBeenSet() const;

                    /**
                     * 获取淋巴
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IHC 淋巴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IHCInfo> GetIHC() const;

                    /**
                     * 设置淋巴
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IHC 淋巴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIHC(const std::vector<IHCInfo>& _iHC);

                    /**
                     * 判断参数 IHC 是否已赋值
                     * @return IHC 是否已赋值
                     */
                    bool IHCHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InfiltrationDepth ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetInfiltrationDepth() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InfiltrationDepth ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInfiltrationDepth(const BlockInfo& _infiltrationDepth);

                    /**
                     * 判断参数 InfiltrationDepth 是否已赋值
                     * @return InfiltrationDepth 是否已赋值
                     */
                    bool InfiltrationDepthHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Invasive ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Invas> GetInvasive() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Invasive ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInvasive(const std::vector<Invas>& _invasive);

                    /**
                     * 判断参数 Invasive 是否已赋值
                     * @return Invasive 是否已赋值
                     */
                    bool InvasiveHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LymphNodes ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Lymph> GetLymphNodes() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LymphNodes ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLymphNodes(const std::vector<Lymph>& _lymphNodes);

                    /**
                     * 判断参数 LymphNodes 是否已赋值
                     * @return LymphNodes 是否已赋值
                     */
                    bool LymphNodesHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PTNM ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetPTNM() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PTNM ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPTNM(const BlockInfo& _pTNM);

                    /**
                     * 判断参数 PTNM 是否已赋值
                     * @return PTNM 是否已赋值
                     */
                    bool PTNMHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathologicalReportType ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetPathologicalReportType() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PathologicalReportType ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPathologicalReportType(const BlockInfo& _pathologicalReportType);

                    /**
                     * 判断参数 PathologicalReportType 是否已赋值
                     * @return PathologicalReportType 是否已赋值
                     */
                    bool PathologicalReportTypeHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportText ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReportText() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReportText ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReportText(const std::string& _reportText);

                    /**
                     * 判断参数 ReportText 是否已赋值
                     * @return ReportText 是否已赋值
                     */
                    bool ReportTextHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleType ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetSampleType() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SampleType ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSampleType(const BlockInfo& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SummaryText ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSummaryText() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SummaryText ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSummaryText(const std::string& _summaryText);

                    /**
                     * 判断参数 SummaryText 是否已赋值
                     * @return SummaryText 是否已赋值
                     */
                    bool SummaryTextHasBeenSet() const;

                private:

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Part m_cancerPart;
                    bool m_cancerPartHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Size> m_cancerSize;
                    bool m_cancerSizeHasBeenSet;

                    /**
                     * 描述文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_descText;
                    bool m_descTextHasBeenSet;

                    /**
                     * 癌症
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HistologyLevel m_histologyLevel;
                    bool m_histologyLevelHasBeenSet;

                    /**
                     * 扩散
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HistologyType m_histologyType;
                    bool m_histologyTypeHasBeenSet;

                    /**
                     * 淋巴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IHCInfo> m_iHC;
                    bool m_iHCHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_infiltrationDepth;
                    bool m_infiltrationDepthHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Invas> m_invasive;
                    bool m_invasiveHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Lymph> m_lymphNodes;
                    bool m_lymphNodesHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_pTNM;
                    bool m_pTNMHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_pathologicalReportType;
                    bool m_pathologicalReportTypeHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportText;
                    bool m_reportTextHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_summaryText;
                    bool m_summaryTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGYREPORT_H_
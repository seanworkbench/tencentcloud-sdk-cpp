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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 资产指纹中服务器列表的基本信息
                */
                class AssetMachineBaseInfo : public AbstractModel
                {
                public:
                    AssetMachineBaseInfo();
                    ~AssetMachineBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务器Quuid
                     * @return Quuid 服务器Quuid
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置服务器Quuid
                     * @param Quuid 服务器Quuid
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取服务器uuid
                     * @return Uuid 服务器uuid
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置服务器uuid
                     * @param Uuid 服务器uuid
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取服务器内网IP
                     * @return MachineIp 服务器内网IP
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置服务器内网IP
                     * @param MachineIp 服务器内网IP
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取服务器名称
                     * @return MachineName 服务器名称
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置服务器名称
                     * @param MachineName 服务器名称
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取操作系统名称
                     * @return OsInfo 操作系统名称
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置操作系统名称
                     * @param OsInfo 操作系统名称
                     */
                    void SetOsInfo(const std::string& _osInfo);

                    /**
                     * 判断参数 OsInfo 是否已赋值
                     * @return OsInfo 是否已赋值
                     */
                    bool OsInfoHasBeenSet() const;

                    /**
                     * 获取CPU信息
                     * @return Cpu CPU信息
                     */
                    std::string GetCpu() const;

                    /**
                     * 设置CPU信息
                     * @param Cpu CPU信息
                     */
                    void SetCpu(const std::string& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存容量：单位G
                     * @return MemSize 内存容量：单位G
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置内存容量：单位G
                     * @param MemSize 内存容量：单位G
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取内存使用率百分比
                     * @return MemLoad 内存使用率百分比
                     */
                    std::string GetMemLoad() const;

                    /**
                     * 设置内存使用率百分比
                     * @param MemLoad 内存使用率百分比
                     */
                    void SetMemLoad(const std::string& _memLoad);

                    /**
                     * 判断参数 MemLoad 是否已赋值
                     * @return MemLoad 是否已赋值
                     */
                    bool MemLoadHasBeenSet() const;

                    /**
                     * 获取硬盘容量：单位G
                     * @return DiskSize 硬盘容量：单位G
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置硬盘容量：单位G
                     * @param DiskSize 硬盘容量：单位G
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取硬盘使用率百分比
                     * @return DiskLoad 硬盘使用率百分比
                     */
                    std::string GetDiskLoad() const;

                    /**
                     * 设置硬盘使用率百分比
                     * @param DiskLoad 硬盘使用率百分比
                     */
                    void SetDiskLoad(const std::string& _diskLoad);

                    /**
                     * 判断参数 DiskLoad 是否已赋值
                     * @return DiskLoad 是否已赋值
                     */
                    bool DiskLoadHasBeenSet() const;

                    /**
                     * 获取分区数
                     * @return PartitionCount 分区数
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置分区数
                     * @param PartitionCount 分区数
                     */
                    void SetPartitionCount(const uint64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取主机外网IP
                     * @return MachineWanIp 主机外网IP
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置主机外网IP
                     * @param MachineWanIp 主机外网IP
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取业务组ID
                     * @return ProjectId 业务组ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置业务组ID
                     * @param ProjectId 业务组ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Cpu数量
                     * @return CpuSize Cpu数量
                     */
                    uint64_t GetCpuSize() const;

                    /**
                     * 设置Cpu数量
                     * @param CpuSize Cpu数量
                     */
                    void SetCpuSize(const uint64_t& _cpuSize);

                    /**
                     * 判断参数 CpuSize 是否已赋值
                     * @return CpuSize 是否已赋值
                     */
                    bool CpuSizeHasBeenSet() const;

                    /**
                     * 获取Cpu使用率百分比
                     * @return CpuLoad Cpu使用率百分比
                     */
                    std::string GetCpuLoad() const;

                    /**
                     * 设置Cpu使用率百分比
                     * @param CpuLoad Cpu使用率百分比
                     */
                    void SetCpuLoad(const std::string& _cpuLoad);

                    /**
                     * 判断参数 CpuLoad 是否已赋值
                     * @return CpuLoad 是否已赋值
                     */
                    bool CpuLoadHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tag 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 服务器Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 服务器uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 服务器内网IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 服务器名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 操作系统名称
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * CPU信息
                     */
                    std::string m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存容量：单位G
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 内存使用率百分比
                     */
                    std::string m_memLoad;
                    bool m_memLoadHasBeenSet;

                    /**
                     * 硬盘容量：单位G
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 硬盘使用率百分比
                     */
                    std::string m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                    /**
                     * 分区数
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * 主机外网IP
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 业务组ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Cpu数量
                     */
                    uint64_t m_cpuSize;
                    bool m_cpuSizeHasBeenSet;

                    /**
                     * Cpu使用率百分比
                     */
                    std::string m_cpuLoad;
                    bool m_cpuLoadHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEBASEINFO_H_
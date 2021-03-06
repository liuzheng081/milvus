// Copyright (C) 2019-2020 Zilliz. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed under the License
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
// or implied. See the License for the specific language governing permissions and limitations under the License.

#pragma once

#include <faiss/Index.h>
#include <string>

namespace milvus {
namespace knowhere {

namespace meta {
constexpr const char* DIM = "dim";
constexpr const char* TENSOR = "tensor";
constexpr const char* ROWS = "rows";
constexpr const char* IDS = "ids";
constexpr const char* DISTANCE = "distance";
constexpr const char* TOPK = "k";
constexpr const char* DEVICEID = "gpu_id";
};  // namespace meta

namespace IndexParams {
// IVF Params
constexpr const char* nprobe = "nprobe";
constexpr const char* nlist = "nlist";
constexpr const char* m = "m";          // PQ
constexpr const char* nbits = "nbits";  // PQ/SQ

// NSG Params
constexpr const char* knng = "knng";
constexpr const char* search_length = "search_length";
constexpr const char* out_degree = "out_degree";
constexpr const char* candidate = "candidate_pool_size";

// HNSW Params
constexpr const char* efConstruction = "efConstruction";
constexpr const char* M = "M";
constexpr const char* ef = "ef";

// Annoy Params
constexpr const char* n_trees = "n_trees";
constexpr const char* search_k = "search_k";
}  // namespace IndexParams

namespace Metric {
constexpr const char* TYPE = "metric_type";
constexpr const char* IP = "IP";
constexpr const char* L2 = "L2";
constexpr const char* HAMMING = "HAMMING";
constexpr const char* JACCARD = "JACCARD";
constexpr const char* TANIMOTO = "TANIMOTO";
constexpr const char* SUBSTRUCTURE = "SUBSTRUCTURE";
constexpr const char* SUPERSTRUCTURE = "SUPERSTRUCTURE";
}  // namespace Metric

extern faiss::MetricType
GetMetricType(const std::string& type);

}  // namespace knowhere
}  // namespace milvus

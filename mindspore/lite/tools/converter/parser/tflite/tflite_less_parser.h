/**
* Copyright 2020 Huawei Technologies Co., Ltd
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef LITE_TFLITE_LESS_PARSER_H
#define LITE_TFLITE_LESS_PARSER_H

#include <memory>
#include <vector>
#include "tools/converter/parser/tflite/tflite_node_parser.h"
#include "tools/converter/parser/tflite/tflite_node_parser_registry.h"

namespace mindspore {
namespace lite {
class TfliteLessParser : public TfliteNodeParser {
 public:
  TfliteLessParser() : TfliteNodeParser("Less") {}

  STATUS Parse(const std::unique_ptr<tflite::OperatorT> &tflite_op,
               const std::vector<std::unique_ptr<tflite::TensorT>> &tflite_tensors,
               const std::vector<std::unique_ptr<tflite::BufferT>> &tflite_model_buffer,
               const std::vector<std::unique_ptr<tflite::OperatorCodeT>> &tflite_opset, schema::CNodeT *op,
               TensorCache *tensor_cache,
               bool quantized_model) override;
};
}  // namespace lite
}  // namespace mindspore

#endif  // LITE_TFLITE_LESS_PARSER_H

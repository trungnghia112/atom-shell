// Copyright (c) 2014 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef ATOM_COMMON_NATIVE_MATE_CONVERTERS_VALUE_CONVERTER_H_
#define ATOM_COMMON_NATIVE_MATE_CONVERTERS_VALUE_CONVERTER_H_

#include "native_mate/converter.h"

namespace base {
class DictionaryValue;
class ListValue;
}

namespace mate {

template<>
struct Converter<base::DictionaryValue> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Handle<v8::Value> val,
                     base::DictionaryValue* out);
};

template<>
struct Converter<base::ListValue> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Handle<v8::Value> val,
                     base::ListValue* out);
};

}  // namespace mate

#endif  // ATOM_COMMON_NATIVE_MATE_CONVERTERS_VALUE_CONVERTER_H_

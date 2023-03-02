/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "EndianUtil.h"

bool EndianUtil::IsBigEndian()
{
    const uint32_t ENDIAN_TEST_MAGIC = 0x01020304;
    const uint32_t BIG_ENDIAN_FIRST_BYTE = 0x1;
    union {
        uint32_t data;
        char buffer[sizeof(uint32_t)];
    } test = {ENDIAN_TEST_MAGIC};

    return test.buffer[0] == BIG_ENDIAN_FIRST_BYTE;
}
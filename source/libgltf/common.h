/*
 * This software is released under the MIT license.
 *
 * Copyright (c) 2017-2019 Alex Chi, The Code 4 Game Organization
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#pragma once

#include "libgltf.h"

namespace libgltf
{
    static const std::vector<uint8_t> GSDataEmpty;
    static const string_t GSStringEmpty = GLTFTEXT("");

    /// check
    void Verify(bool condition);
    
    /// string convert
    std::u16string UTF8ToUTF16(const std::string& _sValue);
    std::string UTF16ToUTF8(const std::u16string& _sValue);
    std::u32string UTF8ToUTF32(const std::string& _sValue);
    std::string UTF32ToUTF8(const std::u32string& _sValue);
    std::wstring UTF8ToUNICODE(const std::string& _sValue);
    std::string UNICODEToUTF8(const std::wstring& _sValue);
}
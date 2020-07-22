// Copyright (c) 2020 by Robert Bosch GmbH. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef IOX_UTILS_CXX_NEWTYPE_NEWTYPE_BASE_INL
#define IOX_UTILS_CXX_NEWTYPE_NEWTYPE_BASE_INL

namespace iox
{
namespace cxx
{
namespace newtype
{
template <typename T>
inline NewTypeBase<T>::NewTypeBase(const T& value) noexcept
    : m_value(value)
{
}

template <typename T>
inline NewTypeBase<T>::operator T() const noexcept
{
    return m_value;
}

template <typename T>
inline const T& NewTypeBase<T>::value() const& noexcept
{
    return m_value;
}

template <typename T>
inline T& NewTypeBase<T>::value() & noexcept
{
    return m_value;
}

template <typename T>
inline const T&& NewTypeBase<T>::value() const&& noexcept
{
    return std::move(m_value);
}

template <typename T>
inline T&& NewTypeBase<T>::value() && noexcept
{
    return std::move(m_value);
}

} // namespace newtype
} // namespace cxx
} // namespace iox

#endif

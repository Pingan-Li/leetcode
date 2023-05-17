/**
 * @file exception.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-23
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "base/exception.h"

#include <sstream>

namespace base {

char const kIndexOutOfRangeException[] =
    "IndexOutOfRangeException: The current index is out of range!";

Exception::Exception() noexcept = default;

Exception::~Exception() noexcept = default;

Exception::Exception(Exception const&) noexcept = default;

Exception& Exception::operator=(Exception const&) noexcept = default;

Exception::Exception(Exception&&) noexcept = default;

Exception& Exception::operator=(Exception&&) noexcept = default;

IndexOutOfRangeException::IndexOutOfRangeException(std::size_t index,
                                                   std::size_t range) noexcept
    : index_(index), range_(range), message_(kIndexOutOfRangeException) {}

std::size_t IndexOutOfRangeException::GetIndex() const noexcept {
  return index_;
}

std::size_t IndexOutOfRangeException::GetRange() const noexcept {
  return range_;
}

std::string IndexOutOfRangeException::Message() const noexcept {
  return message_;
}
}  // namespace base
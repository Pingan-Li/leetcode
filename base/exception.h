/**
 * @file exception.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-23
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_BASE_EXCEPTION_H_
#define LEETCODE_BASE_EXCEPTION_H_

#include <string>

namespace base {

class Exception {
 public:
  Exception() noexcept;

  virtual ~Exception() noexcept;

  Exception(Exception const&) noexcept;

  Exception& operator=(Exception const&) noexcept;

  Exception(Exception&&) noexcept;

  Exception& operator=(Exception&&) noexcept;

  virtual std::string Message() const noexcept = 0;
};

class IndexOutOfRangeException : public Exception {
 public:
  IndexOutOfRangeException(std::size_t index, std::size_t range) noexcept;

  std::size_t GetRange() const noexcept;

  std::size_t GetIndex() const noexcept;

  std::string Message() const noexcept override;

 private:
  std::size_t index_;
  std::size_t range_;
  std::string message_;
};

}  // namespace base
#endif
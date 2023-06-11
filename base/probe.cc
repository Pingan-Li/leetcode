/**
 * @file probe.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-05-21
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "base/probe.h"

#include <glog/logging.h>

#include <cstddef>
#include <tuple>
static std::size_t g_constructor_invoke_count{0};
static std::size_t g_destructor_invoke_count{0};

namespace base {
Probe::Probe() {
  LOG(INFO) << "this = " << this << ". "
            << "Constructor called!";
  ++g_constructor_invoke_count;
}

Probe::~Probe() {
  LOG(INFO) << "this = " << this << ". "
            << "Destructor called!";
  --g_destructor_invoke_count;
}

Probe::Probe(Probe const& other) {
  std::ignore = other;
  LOG(INFO) << "this = " << this << ". "
            << "Copy constructor called!";
  ++g_constructor_invoke_count;
}

Probe::Probe(Probe&& other) {
  std::ignore = other;
  LOG(INFO) << "this = " << this << ". "
            << "Move constructor called!";
  ++g_constructor_invoke_count;
}

Probe& Probe::operator=(Probe const& other) {
  std::ignore = other;
  LOG(INFO) << "this = " << this << ", "
            << "other = " << &other << ". "
            << "Copy operator= called!";
  return *this;
}

Probe& Probe::operator=(Probe&& other) {
  std::ignore = other;
  LOG(INFO) << "this = " << this << ", "
            << "other = " << &other << ". "
            << "Move operator= called!";
  return *this;
}

std::size_t ConstructorInvokeCount() { return g_constructor_invoke_count; }

std::size_t DestructorInvokeCount() { return g_destructor_invoke_count; }
}  // namespace base
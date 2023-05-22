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

#include <tuple>

namespace base {
Probe::Probe() {
  LOG(INFO) << "this = " << this << ". "
            << "Constructor called!";
}

Probe::~Probe() {
  LOG(INFO) << "this = " << this << ". "
            << "Destructor called!";
}

Probe::Probe(Probe const& other) {
  std::ignore = other;
  LOG(INFO) << "this = " << this << ". "
            << "Copy constructor called!";
}

Probe::Probe(Probe&& other) {
  std::ignore = other;
  LOG(INFO) << "this = " << this << ". "
            << "Move constructor called!";
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
}  // namespace base
/**
 * @file probe.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-05-21
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef BASE_PROBE_H_
#define BASE_PROBE_H_

#include <cstddef>
namespace base {
class __attribute__((visibility("default"))) Probe {
 public:
  Probe();

  virtual ~Probe();

  Probe(Probe const& other);

  Probe(Probe&& other);

  Probe& operator=(Probe const& other);

  Probe& operator=(Probe&& other);

  static std::size_t ConstructorInvokeCount();

  static std::size_t DestructorInvokeCount();
};
}  // namespace base

#endif
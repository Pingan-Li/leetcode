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
namespace base {
class Probe {
 public:
  Probe();

  virtual ~Probe();

  Probe(Probe const& other);

  Probe(Probe&& other);

  Probe& operator=(Probe const& other);

  Probe& operator=(Probe&& other);

 private:
};
}  // namespace base
#endif
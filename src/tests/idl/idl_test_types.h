/**
 * Autogenerated by Thrift Compiler (@PACKAGE_VERSION@)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef idl_test_TYPES_H
#define idl_test_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace dsn { namespace idl { namespace test {

class test_thrift_item;

typedef struct _test_thrift_item__isset {
  _test_thrift_item__isset() : bool_item(false), byte_item(false), i16_item(false), i32_item(false), i64_item(false), double_item(false), string_item(false), list_i32_item(false), set_i32_item(false), map_i32_item(false) {}
  bool bool_item :1;
  bool byte_item :1;
  bool i16_item :1;
  bool i32_item :1;
  bool i64_item :1;
  bool double_item :1;
  bool string_item :1;
  bool list_i32_item :1;
  bool set_i32_item :1;
  bool map_i32_item :1;
} _test_thrift_item__isset;

class test_thrift_item {
 public:

  test_thrift_item(const test_thrift_item&);
  test_thrift_item& operator=(const test_thrift_item&);
  test_thrift_item() : bool_item(0), byte_item(0), i16_item(0), i32_item(0), i64_item(0), double_item(0), string_item() {
  }

  virtual ~test_thrift_item() throw();
  bool bool_item;
  int8_t byte_item;
  int16_t i16_item;
  int32_t i32_item;
  int64_t i64_item;
  double double_item;
  std::string string_item;
  std::vector<int32_t>  list_i32_item;
  std::set<int32_t>  set_i32_item;
  std::map<int32_t, int32_t>  map_i32_item;

  _test_thrift_item__isset __isset;

  void __set_bool_item(const bool val);

  void __set_byte_item(const int8_t val);

  void __set_i16_item(const int16_t val);

  void __set_i32_item(const int32_t val);

  void __set_i64_item(const int64_t val);

  void __set_double_item(const double val);

  void __set_string_item(const std::string& val);

  void __set_list_i32_item(const std::vector<int32_t> & val);

  void __set_set_i32_item(const std::set<int32_t> & val);

  void __set_map_i32_item(const std::map<int32_t, int32_t> & val);

  bool operator == (const test_thrift_item & rhs) const
  {
    if (!(bool_item == rhs.bool_item))
      return false;
    if (!(byte_item == rhs.byte_item))
      return false;
    if (!(i16_item == rhs.i16_item))
      return false;
    if (!(i32_item == rhs.i32_item))
      return false;
    if (!(i64_item == rhs.i64_item))
      return false;
    if (!(double_item == rhs.double_item))
      return false;
    if (!(string_item == rhs.string_item))
      return false;
    if (!(list_i32_item == rhs.list_i32_item))
      return false;
    if (!(set_i32_item == rhs.set_i32_item))
      return false;
    if (!(map_i32_item == rhs.map_i32_item))
      return false;
    return true;
  }
  bool operator != (const test_thrift_item &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const test_thrift_item & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(test_thrift_item &a, test_thrift_item &b);

inline std::ostream& operator<<(std::ostream& out, const test_thrift_item& obj)
{
  obj.printTo(out);
  return out;
}

}}} // namespace

#endif

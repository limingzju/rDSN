#ifdef DSN_NOT_USE_DEFAULT_SERIALIZATION
/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <dsn/dist/failure_detector/fd_types.h>

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace dsn { namespace fd {


beacon_msg::~beacon_msg() throw() {
}


void beacon_msg::__set_time(const int64_t val) {
  this->time = val;
}

void beacon_msg::__set_from_addr(const  ::dsn::rpc_address& val) {
  this->from_addr = val;
}

void beacon_msg::__set_to_addr(const  ::dsn::rpc_address& val) {
  this->to_addr = val;
}

uint32_t beacon_msg::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->time);
          this->__isset.time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->from_addr.read(iprot);
          this->__isset.from_addr = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->to_addr.read(iprot);
          this->__isset.to_addr = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t beacon_msg::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("beacon_msg");

  xfer += oprot->writeFieldBegin("time", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->time);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("from_addr", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->from_addr.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("to_addr", ::apache::thrift::protocol::T_STRUCT, 3);
  xfer += this->to_addr.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(beacon_msg &a, beacon_msg &b) {
  using ::std::swap;
  swap(a.time, b.time);
  swap(a.from_addr, b.from_addr);
  swap(a.to_addr, b.to_addr);
  swap(a.__isset, b.__isset);
}

beacon_msg::beacon_msg(const beacon_msg& other0) {
  time = other0.time;
  from_addr = other0.from_addr;
  to_addr = other0.to_addr;
  __isset = other0.__isset;
}
beacon_msg::beacon_msg( beacon_msg&& other1) {
  time = std::move(other1.time);
  from_addr = std::move(other1.from_addr);
  to_addr = std::move(other1.to_addr);
  __isset = std::move(other1.__isset);
}
beacon_msg& beacon_msg::operator=(const beacon_msg& other2) {
  time = other2.time;
  from_addr = other2.from_addr;
  to_addr = other2.to_addr;
  __isset = other2.__isset;
  return *this;
}
beacon_msg& beacon_msg::operator=(beacon_msg&& other3) {
  time = std::move(other3.time);
  from_addr = std::move(other3.from_addr);
  to_addr = std::move(other3.to_addr);
  __isset = std::move(other3.__isset);
  return *this;
}
void beacon_msg::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "beacon_msg(";
  out << "time=" << to_string(time);
  out << ", " << "from_addr=" << to_string(from_addr);
  out << ", " << "to_addr=" << to_string(to_addr);
  out << ")";
}


beacon_ack::~beacon_ack() throw() {
}


void beacon_ack::__set_time(const int64_t val) {
  this->time = val;
}

void beacon_ack::__set_this_node(const  ::dsn::rpc_address& val) {
  this->this_node = val;
}

void beacon_ack::__set_primary_node(const  ::dsn::rpc_address& val) {
  this->primary_node = val;
}

void beacon_ack::__set_is_master(const bool val) {
  this->is_master = val;
}

void beacon_ack::__set_allowed(const bool val) {
  this->allowed = val;
}

uint32_t beacon_ack::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->time);
          this->__isset.time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->this_node.read(iprot);
          this->__isset.this_node = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->primary_node.read(iprot);
          this->__isset.primary_node = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->is_master);
          this->__isset.is_master = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->allowed);
          this->__isset.allowed = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t beacon_ack::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("beacon_ack");

  xfer += oprot->writeFieldBegin("time", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->time);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("this_node", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->this_node.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("primary_node", ::apache::thrift::protocol::T_STRUCT, 3);
  xfer += this->primary_node.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("is_master", ::apache::thrift::protocol::T_BOOL, 4);
  xfer += oprot->writeBool(this->is_master);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("allowed", ::apache::thrift::protocol::T_BOOL, 5);
  xfer += oprot->writeBool(this->allowed);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(beacon_ack &a, beacon_ack &b) {
  using ::std::swap;
  swap(a.time, b.time);
  swap(a.this_node, b.this_node);
  swap(a.primary_node, b.primary_node);
  swap(a.is_master, b.is_master);
  swap(a.allowed, b.allowed);
  swap(a.__isset, b.__isset);
}

beacon_ack::beacon_ack(const beacon_ack& other4) {
  time = other4.time;
  this_node = other4.this_node;
  primary_node = other4.primary_node;
  is_master = other4.is_master;
  allowed = other4.allowed;
  __isset = other4.__isset;
}
beacon_ack::beacon_ack( beacon_ack&& other5) {
  time = std::move(other5.time);
  this_node = std::move(other5.this_node);
  primary_node = std::move(other5.primary_node);
  is_master = std::move(other5.is_master);
  allowed = std::move(other5.allowed);
  __isset = std::move(other5.__isset);
}
beacon_ack& beacon_ack::operator=(const beacon_ack& other6) {
  time = other6.time;
  this_node = other6.this_node;
  primary_node = other6.primary_node;
  is_master = other6.is_master;
  allowed = other6.allowed;
  __isset = other6.__isset;
  return *this;
}
beacon_ack& beacon_ack::operator=(beacon_ack&& other7) {
  time = std::move(other7.time);
  this_node = std::move(other7.this_node);
  primary_node = std::move(other7.primary_node);
  is_master = std::move(other7.is_master);
  allowed = std::move(other7.allowed);
  __isset = std::move(other7.__isset);
  return *this;
}
void beacon_ack::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "beacon_ack(";
  out << "time=" << to_string(time);
  out << ", " << "this_node=" << to_string(this_node);
  out << ", " << "primary_node=" << to_string(primary_node);
  out << ", " << "is_master=" << to_string(is_master);
  out << ", " << "allowed=" << to_string(allowed);
  out << ")";
}

}} // namespace
#endif

// Generated by gencpp from file sample_qt/hsv.msg
// DO NOT EDIT!


#ifndef SAMPLE_QT_MESSAGE_HSV_H
#define SAMPLE_QT_MESSAGE_HSV_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sample_qt
{
template <class ContainerAllocator>
struct hsv_
{
  typedef hsv_<ContainerAllocator> Type;

  hsv_()
    : Hmax(0)
    , Hmin(0)
    , Smax(0)
    , Smin(0)
    , Vmax(0)
    , Vmin(0)  {
    }
  hsv_(const ContainerAllocator& _alloc)
    : Hmax(0)
    , Hmin(0)
    , Smax(0)
    , Smin(0)
    , Vmax(0)
    , Vmin(0)  {
  (void)_alloc;
    }



   typedef int32_t _Hmax_type;
  _Hmax_type Hmax;

   typedef int32_t _Hmin_type;
  _Hmin_type Hmin;

   typedef int32_t _Smax_type;
  _Smax_type Smax;

   typedef int32_t _Smin_type;
  _Smin_type Smin;

   typedef int32_t _Vmax_type;
  _Vmax_type Vmax;

   typedef int32_t _Vmin_type;
  _Vmin_type Vmin;





  typedef boost::shared_ptr< ::sample_qt::hsv_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sample_qt::hsv_<ContainerAllocator> const> ConstPtr;

}; // struct hsv_

typedef ::sample_qt::hsv_<std::allocator<void> > hsv;

typedef boost::shared_ptr< ::sample_qt::hsv > hsvPtr;
typedef boost::shared_ptr< ::sample_qt::hsv const> hsvConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sample_qt::hsv_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sample_qt::hsv_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sample_qt

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sample_qt': ['/home/lara/catkin_ws/src/sample_qt/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sample_qt::hsv_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sample_qt::hsv_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sample_qt::hsv_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sample_qt::hsv_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sample_qt::hsv_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sample_qt::hsv_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sample_qt::hsv_<ContainerAllocator> >
{
  static const char* value()
  {
    return "370e08e363886484649819a2c794801e";
  }

  static const char* value(const ::sample_qt::hsv_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x370e08e363886484ULL;
  static const uint64_t static_value2 = 0x649819a2c794801eULL;
};

template<class ContainerAllocator>
struct DataType< ::sample_qt::hsv_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sample_qt/hsv";
  }

  static const char* value(const ::sample_qt::hsv_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sample_qt::hsv_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 Hmax\n\
int32 Hmin\n\
int32 Smax\n\
int32 Smin\n\
int32 Vmax\n\
int32 Vmin\n\
\n\
";
  }

  static const char* value(const ::sample_qt::hsv_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sample_qt::hsv_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Hmax);
      stream.next(m.Hmin);
      stream.next(m.Smax);
      stream.next(m.Smin);
      stream.next(m.Vmax);
      stream.next(m.Vmin);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct hsv_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sample_qt::hsv_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sample_qt::hsv_<ContainerAllocator>& v)
  {
    s << indent << "Hmax: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Hmax);
    s << indent << "Hmin: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Hmin);
    s << indent << "Smax: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Smax);
    s << indent << "Smin: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Smin);
    s << indent << "Vmax: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Vmax);
    s << indent << "Vmin: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Vmin);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SAMPLE_QT_MESSAGE_HSV_H
// Generated by gencpp from file astra_camera/GetUVCMirrorResponse.msg
// DO NOT EDIT!


#ifndef ASTRA_CAMERA_MESSAGE_GETUVCMIRRORRESPONSE_H
#define ASTRA_CAMERA_MESSAGE_GETUVCMIRRORRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace astra_camera
{
template <class ContainerAllocator>
struct GetUVCMirrorResponse_
{
  typedef GetUVCMirrorResponse_<ContainerAllocator> Type;

  GetUVCMirrorResponse_()
    : enable(false)  {
    }
  GetUVCMirrorResponse_(const ContainerAllocator& _alloc)
    : enable(false)  {
  (void)_alloc;
    }



   typedef uint8_t _enable_type;
  _enable_type enable;





  typedef boost::shared_ptr< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetUVCMirrorResponse_

typedef ::astra_camera::GetUVCMirrorResponse_<std::allocator<void> > GetUVCMirrorResponse;

typedef boost::shared_ptr< ::astra_camera::GetUVCMirrorResponse > GetUVCMirrorResponsePtr;
typedef boost::shared_ptr< ::astra_camera::GetUVCMirrorResponse const> GetUVCMirrorResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator1> & lhs, const ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator2> & rhs)
{
  return lhs.enable == rhs.enable;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator1> & lhs, const ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace astra_camera

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c1211af706069c994c06e00eb59ac9e";
  }

  static const char* value(const ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c1211af706069c9ULL;
  static const uint64_t static_value2 = 0x94c06e00eb59ac9eULL;
};

template<class ContainerAllocator>
struct DataType< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "astra_camera/GetUVCMirrorResponse";
  }

  static const char* value(const ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool enable\n"
"\n"
;
  }

  static const char* value(const ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetUVCMirrorResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::astra_camera::GetUVCMirrorResponse_<ContainerAllocator>& v)
  {
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ASTRA_CAMERA_MESSAGE_GETUVCMIRRORRESPONSE_H

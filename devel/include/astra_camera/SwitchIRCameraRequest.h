// Generated by gencpp from file astra_camera/SwitchIRCameraRequest.msg
// DO NOT EDIT!


#ifndef ASTRA_CAMERA_MESSAGE_SWITCHIRCAMERAREQUEST_H
#define ASTRA_CAMERA_MESSAGE_SWITCHIRCAMERAREQUEST_H


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
struct SwitchIRCameraRequest_
{
  typedef SwitchIRCameraRequest_<ContainerAllocator> Type;

  SwitchIRCameraRequest_()
    : camera()  {
    }
  SwitchIRCameraRequest_(const ContainerAllocator& _alloc)
    : camera(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _camera_type;
  _camera_type camera;





  typedef boost::shared_ptr< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SwitchIRCameraRequest_

typedef ::astra_camera::SwitchIRCameraRequest_<std::allocator<void> > SwitchIRCameraRequest;

typedef boost::shared_ptr< ::astra_camera::SwitchIRCameraRequest > SwitchIRCameraRequestPtr;
typedef boost::shared_ptr< ::astra_camera::SwitchIRCameraRequest const> SwitchIRCameraRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator1> & lhs, const ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator2> & rhs)
{
  return lhs.camera == rhs.camera;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator1> & lhs, const ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace astra_camera

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8162e9a89f39d80b11a715b34e890034";
  }

  static const char* value(const ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8162e9a89f39d80bULL;
  static const uint64_t static_value2 = 0x11a715b34e890034ULL;
};

template<class ContainerAllocator>
struct DataType< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "astra_camera/SwitchIRCameraRequest";
  }

  static const char* value(const ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string camera\n"
;
  }

  static const char* value(const ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.camera);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SwitchIRCameraRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::astra_camera::SwitchIRCameraRequest_<ContainerAllocator>& v)
  {
    s << indent << "camera: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.camera);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ASTRA_CAMERA_MESSAGE_SWITCHIRCAMERAREQUEST_H

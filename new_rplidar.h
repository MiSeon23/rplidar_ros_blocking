// Generated by gencpp from file rplidar_ros_blocking/new_rplidar.msg
// DO NOT EDIT!


#ifndef rplidar_ros_blocking_MESSAGE_NEW_RPLIDAR_H
#define rplidar_ros_blocking_MESSAGE_NEW_RPLIDAR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rplidar_ros_blocking
{
template <class ContainerAllocator>
struct new_rplidar_
{
  typedef new_rplidar_<ContainerAllocator> Type;

  new_rplidar_()
    : degree()
    , distance()
    , count(0)  {
    }
  new_rplidar_(const ContainerAllocator& _alloc)
    : degree(_alloc)
    , distance(_alloc)
    , count(0)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _degree_type;
  _degree_type degree;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _distance_type;
  _distance_type distance;

   typedef int32_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> const> ConstPtr;

}; // struct new_rplidar_

typedef ::rplidar_ros_blocking::new_rplidar_<std::allocator<void> > new_rplidar;

typedef boost::shared_ptr< ::rplidar_ros_blocking::new_rplidar > new_rplidarPtr;
typedef boost::shared_ptr< ::rplidar_ros_blocking::new_rplidar const> new_rplidarConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rplidar_ros_blocking

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'rplidar_ros_blocking': ['/home/csrl/catkin_ws/src_new/rplidar_drone_blocking/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9666a56a40c216c7862dc2ed563ffac0";
  }

  static const char* value(const ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9666a56a40c216c7ULL;
  static const uint64_t static_value2 = 0x862dc2ed563ffac0ULL;
};

template<class ContainerAllocator>
struct DataType< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rplidar_ros_blocking/new_rplidar";
  }

  static const char* value(const ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] degree    # lidar data about degree (deg)\n"
"float32[] distance  # lidar data about distance (m)\n"
"int32 count         # array size\n"
;
  }

  static const char* value(const ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.degree);
      stream.next(m.distance);
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct new_rplidar_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rplidar_ros_blocking::new_rplidar_<ContainerAllocator>& v)
  {
    s << indent << "degree[]" << std::endl;
    for (size_t i = 0; i < v.degree.size(); ++i)
    {
      s << indent << "  degree[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.degree[i]);
    }
    s << indent << "distance[]" << std::endl;
    for (size_t i = 0; i < v.distance.size(); ++i)
    {
      s << indent << "  distance[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.distance[i]);
    }
    s << indent << "count: ";
    Printer<int32_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // rplidar_ros_blocking_MESSAGE_NEW_RPLIDAR_H

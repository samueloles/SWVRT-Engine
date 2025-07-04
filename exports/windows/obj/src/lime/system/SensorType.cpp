// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_system_SensorType
#include <lime/system/SensorType.h>
#endif
namespace lime{
namespace _hx_system{

::lime::_hx_system::SensorType SensorType_obj::ACCELEROMETER;

bool SensorType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ACCELEROMETER",af,c6,4d,ef)) { outValue = SensorType_obj::ACCELEROMETER; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SensorType_obj)

int SensorType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ACCELEROMETER",af,c6,4d,ef)) return 0;
	return super::__FindIndex(inName);
}

int SensorType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ACCELEROMETER",af,c6,4d,ef)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val SensorType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ACCELEROMETER",af,c6,4d,ef)) return ACCELEROMETER;
	return super::__Field(inName,inCallProp);
}

static ::String SensorType_obj_sStaticFields[] = {
	HX_("ACCELEROMETER",af,c6,4d,ef),
	::String(null())
};

::hx::Class SensorType_obj::__mClass;

Dynamic __Create_SensorType_obj() { return new SensorType_obj; }

void SensorType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("lime.system.SensorType",ba,2d,f6,ed), ::hx::TCanCast< SensorType_obj >,SensorType_obj_sStaticFields,0,
	&__Create_SensorType_obj, &__Create,
	&super::__SGetClass(), &CreateSensorType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SensorType_obj::__GetStatic;
}

void SensorType_obj::__boot()
{
ACCELEROMETER = ::hx::CreateConstEnum< SensorType_obj >(HX_("ACCELEROMETER",af,c6,4d,ef),0);
}


} // end namespace lime
} // end namespace system

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif

namespace flixel{
namespace util{


static ::String IFlxSignal_obj_sMemberFields[] = {
	HX_("dispatch",ba,ce,63,1e),
	HX_("add",21,f2,49,00),
	HX_("addOnce",42,c0,ef,85),
	HX_("remove",44,9c,88,04),
	HX_("removeAll",3d,17,e5,ca),
	HX_("has",5a,3f,4f,00),
	::String(null()) };

::hx::Class IFlxSignal_obj::__mClass;

void IFlxSignal_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.IFlxSignal",cb,3d,c3,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxSignal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x540588cf >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util

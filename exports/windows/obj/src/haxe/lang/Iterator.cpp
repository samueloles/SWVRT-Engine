// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_lang_Iterator
#include <haxe/lang/Iterator.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f85ca578fa6b99a5_619_boot,"haxe.lang.Iterator","boot",0xca391f5a,"haxe.lang.Iterator.boot","openfl/utils/Object.hx",619,0xcbd6e8e2)
namespace haxe{
namespace lang{


static ::String Iterator_obj_sMemberFields[] = {
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class Iterator_obj::__mClass;

void Iterator_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.lang.Iterator",46,96,ec,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Iterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x1f76d722 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Iterator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f85ca578fa6b99a5_619_boot)
HXDLIN( 619)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace haxe
} // end namespace lang

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3fd8a350ddd9293e_59_resolve,"haxe.xml._Access.HasAttribAccess_Impl_","resolve",0x7da9559c,"haxe.xml._Access.HasAttribAccess_Impl_.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Access.hx",59,0xd9eced32)
namespace haxe{
namespace xml{
namespace _Access{

void HasAttribAccess_Impl__obj::__construct() { }

Dynamic HasAttribAccess_Impl__obj::__CreateEmpty() { return new HasAttribAccess_Impl__obj; }

void *HasAttribAccess_Impl__obj::_hx_vtable = 0;

Dynamic HasAttribAccess_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HasAttribAccess_Impl__obj > _hx_result = new HasAttribAccess_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HasAttribAccess_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2269a8f6;
}

bool HasAttribAccess_Impl__obj::resolve( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_3fd8a350ddd9293e_59_resolve)
HXLINE(  60)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXLINE(  61)			HX_STACK_DO_THROW((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            		}
HXLINE(  62)		return this1->exists(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HasAttribAccess_Impl__obj,resolve,return )


HasAttribAccess_Impl__obj::HasAttribAccess_Impl__obj()
{
}

bool HasAttribAccess_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HasAttribAccess_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HasAttribAccess_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HasAttribAccess_Impl__obj::__mClass;

static ::String HasAttribAccess_Impl__obj_sStaticFields[] = {
	HX_("resolve",ec,12,60,67),
	::String(null())
};

void HasAttribAccess_Impl__obj::__register()
{
	HasAttribAccess_Impl__obj _hx_dummy;
	HasAttribAccess_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.xml._Access.HasAttribAccess_Impl_",1e,73,c3,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HasAttribAccess_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HasAttribAccess_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HasAttribAccess_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HasAttribAccess_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HasAttribAccess_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Access

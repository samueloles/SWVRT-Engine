// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_06d539aa63d14cc6_75_resolve,"haxe.xml._Access.NodeListAccess_Impl_","resolve",0x07a0eeac,"haxe.xml._Access.NodeListAccess_Impl_.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Access.hx",75,0xd9eced32)
namespace haxe{
namespace xml{
namespace _Access{

void NodeListAccess_Impl__obj::__construct() { }

Dynamic NodeListAccess_Impl__obj::__CreateEmpty() { return new NodeListAccess_Impl__obj; }

void *NodeListAccess_Impl__obj::_hx_vtable = 0;

Dynamic NodeListAccess_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NodeListAccess_Impl__obj > _hx_result = new NodeListAccess_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NodeListAccess_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a92beba;
}

::Array< ::Dynamic> NodeListAccess_Impl__obj::resolve( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_06d539aa63d14cc6_75_resolve)
HXLINE(  76)		::Array< ::Dynamic> l = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  77)		{
HXLINE(  77)			 ::Dynamic x = this1->elementsNamed(name);
HXDLIN(  77)			while(( (bool)(x->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  77)				 ::Xml x1 = ( ( ::Xml)(x->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  78)				bool _hx_tmp;
HXDLIN(  78)				if ((x1->nodeType != ::Xml_obj::Document)) {
HXLINE(  78)					_hx_tmp = (x1->nodeType != ::Xml_obj::Element);
            				}
            				else {
HXLINE(  78)					_hx_tmp = false;
            				}
HXDLIN(  78)				if (_hx_tmp) {
HXLINE(  78)					HX_STACK_DO_THROW((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x1->nodeType)));
            				}
HXDLIN(  78)				l->push(x1);
            			}
            		}
HXLINE(  79)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NodeListAccess_Impl__obj,resolve,return )


NodeListAccess_Impl__obj::NodeListAccess_Impl__obj()
{
}

bool NodeListAccess_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NodeListAccess_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NodeListAccess_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class NodeListAccess_Impl__obj::__mClass;

static ::String NodeListAccess_Impl__obj_sStaticFields[] = {
	HX_("resolve",ec,12,60,67),
	::String(null())
};

void NodeListAccess_Impl__obj::__register()
{
	NodeListAccess_Impl__obj _hx_dummy;
	NodeListAccess_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.xml._Access.NodeListAccess_Impl_",2e,7c,f3,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NodeListAccess_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NodeListAccess_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NodeListAccess_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NodeListAccess_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NodeListAccess_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Access

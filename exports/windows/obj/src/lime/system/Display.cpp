// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_84dc687d4538b090_38_new,"lime.system.Display","new",0x04208dce,"lime.system.Display.new","lime/system/Display.hx",38,0x4536ff82)
namespace lime{
namespace _hx_system{

void Display_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_84dc687d4538b090_38_new)
            	}

Dynamic Display_obj::__CreateEmpty() { return new Display_obj; }

void *Display_obj::_hx_vtable = 0;

Dynamic Display_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Display_obj > _hx_result = new Display_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Display_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x061df27a;
}


Display_obj::Display_obj()
{
}

void Display_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Display);
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(currentMode,"currentMode");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(dpi,"dpi");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(supportedModes,"supportedModes");
	HX_MARK_END_CLASS();
}

void Display_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(currentMode,"currentMode");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(dpi,"dpi");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(supportedModes,"supportedModes");
}

::hx::Val Display_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { return ::hx::Val( dpi ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentMode") ) { return ::hx::Val( currentMode ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportedModes") ) { return ::hx::Val( supportedModes ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Display_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { dpi=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::lime::math::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentMode") ) { currentMode=inValue.Cast<  ::lime::_hx_system::DisplayMode >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportedModes") ) { supportedModes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Display_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bounds",75,86,1d,66));
	outFields->push(HX_("currentMode",3c,ac,f2,80));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("dpi",5d,43,4c,00));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("supportedModes",a2,a6,b8,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Display_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::math::Rectangle */ ,(int)offsetof(Display_obj,bounds),HX_("bounds",75,86,1d,66)},
	{::hx::fsObject /*  ::lime::_hx_system::DisplayMode */ ,(int)offsetof(Display_obj,currentMode),HX_("currentMode",3c,ac,f2,80)},
	{::hx::fsInt,(int)offsetof(Display_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsFloat,(int)offsetof(Display_obj,dpi),HX_("dpi",5d,43,4c,00)},
	{::hx::fsString,(int)offsetof(Display_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Display_obj,supportedModes),HX_("supportedModes",a2,a6,b8,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Display_obj_sStaticStorageInfo = 0;
#endif

static ::String Display_obj_sMemberFields[] = {
	HX_("bounds",75,86,1d,66),
	HX_("currentMode",3c,ac,f2,80),
	HX_("id",db,5b,00,00),
	HX_("dpi",5d,43,4c,00),
	HX_("name",4b,72,ff,48),
	HX_("supportedModes",a2,a6,b8,b7),
	::String(null()) };

::hx::Class Display_obj::__mClass;

void Display_obj::__register()
{
	Display_obj _hx_dummy;
	Display_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.Display",dc,4e,fe,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Display_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Display_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Display_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Display_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system

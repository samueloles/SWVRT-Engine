// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonState_Impl_
#include <flixel/ui/_FlxButton/FlxButtonState_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8ce06975c8063dcc_37_toInt,"flixel.ui._FlxButton.FlxButtonState_Impl_","toInt",0x5d7b39d4,"flixel.ui._FlxButton.FlxButtonState_Impl_.toInt","flixel/ui/FlxButton.hx",37,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_8ce06975c8063dcc_42_toString,"flixel.ui._FlxButton.FlxButtonState_Impl_","toString",0xada6590c,"flixel.ui._FlxButton.FlxButtonState_Impl_.toString","flixel/ui/FlxButton.hx",42,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_8ce06975c8063dcc_24_boot,"flixel.ui._FlxButton.FlxButtonState_Impl_","boot",0x6d0f5c92,"flixel.ui._FlxButton.FlxButtonState_Impl_.boot","flixel/ui/FlxButton.hx",24,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_8ce06975c8063dcc_27_boot,"flixel.ui._FlxButton.FlxButtonState_Impl_","boot",0x6d0f5c92,"flixel.ui._FlxButton.FlxButtonState_Impl_.boot","flixel/ui/FlxButton.hx",27,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_8ce06975c8063dcc_30_boot,"flixel.ui._FlxButton.FlxButtonState_Impl_","boot",0x6d0f5c92,"flixel.ui._FlxButton.FlxButtonState_Impl_.boot","flixel/ui/FlxButton.hx",30,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_8ce06975c8063dcc_33_boot,"flixel.ui._FlxButton.FlxButtonState_Impl_","boot",0x6d0f5c92,"flixel.ui._FlxButton.FlxButtonState_Impl_.boot","flixel/ui/FlxButton.hx",33,0xc64cf442)
namespace flixel{
namespace ui{
namespace _FlxButton{

void FlxButtonState_Impl__obj::__construct() { }

Dynamic FlxButtonState_Impl__obj::__CreateEmpty() { return new FlxButtonState_Impl__obj; }

void *FlxButtonState_Impl__obj::_hx_vtable = 0;

Dynamic FlxButtonState_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxButtonState_Impl__obj > _hx_result = new FlxButtonState_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxButtonState_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c710822;
}

int FlxButtonState_Impl__obj::NORMAL;

int FlxButtonState_Impl__obj::HIGHLIGHT;

int FlxButtonState_Impl__obj::PRESSED;

int FlxButtonState_Impl__obj::DISABLED;

int FlxButtonState_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_8ce06975c8063dcc_37_toInt)
HXDLIN(  37)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxButtonState_Impl__obj,toInt,return )

::String FlxButtonState_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_8ce06975c8063dcc_42_toString)
HXDLIN(  42)		switch((int)(this1)){
            			case (int)0: {
HXLINE(  44)				return HX_("normal",27,72,69,30);
            			}
            			break;
            			case (int)1: {
HXLINE(  45)				return HX_("highlight",34,56,00,ed);
            			}
            			break;
            			case (int)2: {
HXLINE(  46)				return HX_("pressed",a2,d2,e6,39);
            			}
            			break;
            			case (int)3: {
HXLINE(  47)				return HX_("disabled",7c,41,04,7c);
            			}
            			break;
            		}
HXLINE(  42)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxButtonState_Impl__obj,toString,return )


FlxButtonState_Impl__obj::FlxButtonState_Impl__obj()
{
}

bool FlxButtonState_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxButtonState_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxButtonState_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxButtonState_Impl__obj::NORMAL,HX_("NORMAL",27,1e,ec,e2)},
	{::hx::fsInt,(void *) &FlxButtonState_Impl__obj::HIGHLIGHT,HX_("HIGHLIGHT",14,c6,58,e8)},
	{::hx::fsInt,(void *) &FlxButtonState_Impl__obj::PRESSED,HX_("PRESSED",82,a6,ba,b9)},
	{::hx::fsInt,(void *) &FlxButtonState_Impl__obj::DISABLED,HX_("DISABLED",7c,d1,89,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxButtonState_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButtonState_Impl__obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(FlxButtonState_Impl__obj::HIGHLIGHT,"HIGHLIGHT");
	HX_MARK_MEMBER_NAME(FlxButtonState_Impl__obj::PRESSED,"PRESSED");
	HX_MARK_MEMBER_NAME(FlxButtonState_Impl__obj::DISABLED,"DISABLED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxButtonState_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButtonState_Impl__obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(FlxButtonState_Impl__obj::HIGHLIGHT,"HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(FlxButtonState_Impl__obj::PRESSED,"PRESSED");
	HX_VISIT_MEMBER_NAME(FlxButtonState_Impl__obj::DISABLED,"DISABLED");
};

#endif

::hx::Class FlxButtonState_Impl__obj::__mClass;

static ::String FlxButtonState_Impl__obj_sStaticFields[] = {
	HX_("NORMAL",27,1e,ec,e2),
	HX_("HIGHLIGHT",14,c6,58,e8),
	HX_("PRESSED",82,a6,ba,b9),
	HX_("DISABLED",7c,d1,89,d5),
	HX_("toInt",34,be,11,14),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void FlxButtonState_Impl__obj::__register()
{
	FlxButtonState_Impl__obj _hx_dummy;
	FlxButtonState_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.ui._FlxButton.FlxButtonState_Impl_",0e,64,2f,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxButtonState_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxButtonState_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxButtonState_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxButtonState_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxButtonState_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxButtonState_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxButtonState_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxButtonState_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8ce06975c8063dcc_24_boot)
HXDLIN(  24)		NORMAL = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8ce06975c8063dcc_27_boot)
HXDLIN(  27)		HIGHLIGHT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8ce06975c8063dcc_30_boot)
HXDLIN(  30)		PRESSED = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8ce06975c8063dcc_33_boot)
HXDLIN(  33)		DISABLED = 3;
            	}
}

} // end namespace flixel
} // end namespace ui
} // end namespace _FlxButton

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Icon
#include <flixel/system/debug/Icon.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Icon_ArrowRight
#include <flixel/system/debug/_Icon/ArrowRight.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Icon_Pause
#include <flixel/system/debug/_Icon/Pause.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Icon_Restart
#include <flixel/system/debug/_Icon/Restart.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Icon_Step
#include <flixel/system/debug/_Icon/Step.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fb7d725cb584fcc8_15_new,"flixel.system.debug.VCR","new",0x7584fc6f,"flixel.system.debug.VCR.new","flixel/system/debug/VCR.hx",15,0x4ecb3ec2)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7d725cb584fcc8_118_onManualPause,"flixel.system.debug.VCR","onManualPause",0x2a392cc0,"flixel.system.debug.VCR.onManualPause","flixel/system/debug/VCR.hx",118,0x4ecb3ec2)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7d725cb584fcc8_129_onPause,"flixel.system.debug.VCR","onPause",0xf9cf54e6,"flixel.system.debug.VCR.onPause","flixel/system/debug/VCR.hx",129,0x4ecb3ec2)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7d725cb584fcc8_139_onResume,"flixel.system.debug.VCR","onResume",0xb49b1dbd,"flixel.system.debug.VCR.onResume","flixel/system/debug/VCR.hx",139,0x4ecb3ec2)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7d725cb584fcc8_150_onStep,"flixel.system.debug.VCR","onStep",0x2da2775c,"flixel.system.debug.VCR.onStep","flixel/system/debug/VCR.hx",150,0x4ecb3ec2)
namespace flixel{
namespace _hx_system{
namespace debug{

void VCR_obj::__construct( ::flixel::_hx_system::debug::FlxDebugger Debugger){
            	HX_STACKFRAME(&_hx_pos_fb7d725cb584fcc8_15_new)
HXLINE(  28)		this->manualPause = false;
HXLINE(  22)		this->runtime = ((Float)0);
HXLINE(  41)		this->restartBtn = Debugger->addButton(::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn(),::flixel::_hx_system::debug::Icon_obj::restart,::flixel::FlxG_obj::resetState_dyn(),null(),null());
HXLINE(  50)		this->playbackToggleBtn = Debugger->addButton(::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn(),::flixel::_hx_system::debug::Icon_obj::pause,this->onManualPause_dyn(),null(),null());
HXLINE(  51)		this->stepBtn = Debugger->addButton(::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn(),::flixel::_hx_system::debug::Icon_obj::step,this->onStep_dyn(),null(),null());
            	}

Dynamic VCR_obj::__CreateEmpty() { return new VCR_obj; }

void *VCR_obj::_hx_vtable = 0;

Dynamic VCR_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VCR_obj > _hx_result = new VCR_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VCR_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x532e649d;
}

void VCR_obj::onManualPause(){
            	HX_STACKFRAME(&_hx_pos_fb7d725cb584fcc8_118_onManualPause)
HXLINE( 119)		this->manualPause = true;
HXLINE( 120)		::flixel::FlxG_obj::vcr->pause();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onManualPause,(void))

void VCR_obj::onPause(){
            	HX_STACKFRAME(&_hx_pos_fb7d725cb584fcc8_129_onPause)
HXLINE( 130)		this->playbackToggleBtn->upHandler = ::flixel::FlxG_obj::vcr->resume_dyn();
HXLINE( 131)		this->playbackToggleBtn->changeIcon(::flixel::_hx_system::debug::Icon_obj::arrowRight);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onPause,(void))

void VCR_obj::onResume(){
            	HX_STACKFRAME(&_hx_pos_fb7d725cb584fcc8_139_onResume)
HXLINE( 140)		this->manualPause = false;
HXLINE( 141)		this->playbackToggleBtn->upHandler = this->onManualPause_dyn();
HXLINE( 142)		this->playbackToggleBtn->changeIcon(::flixel::_hx_system::debug::Icon_obj::pause);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onResume,(void))

void VCR_obj::onStep(){
            	HX_STACKFRAME(&_hx_pos_fb7d725cb584fcc8_150_onStep)
HXLINE( 151)		if (!(::flixel::FlxG_obj::vcr->paused)) {
HXLINE( 153)			::flixel::FlxG_obj::vcr->pause();
            		}
HXLINE( 155)		::flixel::FlxG_obj::vcr->stepRequested = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onStep,(void))


::hx::ObjectPtr< VCR_obj > VCR_obj::__new( ::flixel::_hx_system::debug::FlxDebugger Debugger) {
	::hx::ObjectPtr< VCR_obj > __this = new VCR_obj();
	__this->__construct(Debugger);
	return __this;
}

::hx::ObjectPtr< VCR_obj > VCR_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::FlxDebugger Debugger) {
	VCR_obj *__this = (VCR_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VCR_obj), true, "flixel.system.debug.VCR"));
	*(void **)__this = VCR_obj::_hx_vtable;
	__this->__construct(Debugger);
	return __this;
}

VCR_obj::VCR_obj()
{
}

void VCR_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VCR);
	HX_MARK_MEMBER_NAME(runtimeDisplay,"runtimeDisplay");
	HX_MARK_MEMBER_NAME(runtime,"runtime");
	HX_MARK_MEMBER_NAME(manualPause,"manualPause");
	HX_MARK_MEMBER_NAME(playbackToggleBtn,"playbackToggleBtn");
	HX_MARK_MEMBER_NAME(stepBtn,"stepBtn");
	HX_MARK_MEMBER_NAME(restartBtn,"restartBtn");
	HX_MARK_MEMBER_NAME(recordBtn,"recordBtn");
	HX_MARK_MEMBER_NAME(openBtn,"openBtn");
	HX_MARK_END_CLASS();
}

void VCR_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(runtimeDisplay,"runtimeDisplay");
	HX_VISIT_MEMBER_NAME(runtime,"runtime");
	HX_VISIT_MEMBER_NAME(manualPause,"manualPause");
	HX_VISIT_MEMBER_NAME(playbackToggleBtn,"playbackToggleBtn");
	HX_VISIT_MEMBER_NAME(stepBtn,"stepBtn");
	HX_VISIT_MEMBER_NAME(restartBtn,"restartBtn");
	HX_VISIT_MEMBER_NAME(recordBtn,"recordBtn");
	HX_VISIT_MEMBER_NAME(openBtn,"openBtn");
}

::hx::Val VCR_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onStep") ) { return ::hx::Val( onStep_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runtime") ) { return ::hx::Val( runtime ); }
		if (HX_FIELD_EQ(inName,"stepBtn") ) { return ::hx::Val( stepBtn ); }
		if (HX_FIELD_EQ(inName,"openBtn") ) { return ::hx::Val( openBtn ); }
		if (HX_FIELD_EQ(inName,"onPause") ) { return ::hx::Val( onPause_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResume") ) { return ::hx::Val( onResume_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"recordBtn") ) { return ::hx::Val( recordBtn ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"restartBtn") ) { return ::hx::Val( restartBtn ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"manualPause") ) { return ::hx::Val( manualPause ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onManualPause") ) { return ::hx::Val( onManualPause_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"runtimeDisplay") ) { return ::hx::Val( runtimeDisplay ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playbackToggleBtn") ) { return ::hx::Val( playbackToggleBtn ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VCR_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"runtime") ) { runtime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepBtn") ) { stepBtn=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"openBtn") ) { openBtn=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"recordBtn") ) { recordBtn=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"restartBtn") ) { restartBtn=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"manualPause") ) { manualPause=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"runtimeDisplay") ) { runtimeDisplay=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playbackToggleBtn") ) { playbackToggleBtn=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VCR_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("runtimeDisplay",4a,68,09,00));
	outFields->push(HX_("runtime",d8,b4,60,ef));
	outFields->push(HX_("manualPause",d0,9a,66,c3));
	outFields->push(HX_("playbackToggleBtn",8d,e1,d3,fc));
	outFields->push(HX_("stepBtn",70,2a,3d,81));
	outFields->push(HX_("restartBtn",cd,3d,f6,1c));
	outFields->push(HX_("recordBtn",4b,b4,cb,dc));
	outFields->push(HX_("openBtn",b2,70,27,40));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VCR_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(VCR_obj,runtimeDisplay),HX_("runtimeDisplay",4a,68,09,00)},
	{::hx::fsFloat,(int)offsetof(VCR_obj,runtime),HX_("runtime",d8,b4,60,ef)},
	{::hx::fsBool,(int)offsetof(VCR_obj,manualPause),HX_("manualPause",d0,9a,66,c3)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(VCR_obj,playbackToggleBtn),HX_("playbackToggleBtn",8d,e1,d3,fc)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(VCR_obj,stepBtn),HX_("stepBtn",70,2a,3d,81)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(VCR_obj,restartBtn),HX_("restartBtn",cd,3d,f6,1c)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(VCR_obj,recordBtn),HX_("recordBtn",4b,b4,cb,dc)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(VCR_obj,openBtn),HX_("openBtn",b2,70,27,40)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VCR_obj_sStaticStorageInfo = 0;
#endif

static ::String VCR_obj_sMemberFields[] = {
	HX_("runtimeDisplay",4a,68,09,00),
	HX_("runtime",d8,b4,60,ef),
	HX_("manualPause",d0,9a,66,c3),
	HX_("playbackToggleBtn",8d,e1,d3,fc),
	HX_("stepBtn",70,2a,3d,81),
	HX_("restartBtn",cd,3d,f6,1c),
	HX_("recordBtn",4b,b4,cb,dc),
	HX_("openBtn",b2,70,27,40),
	HX_("onManualPause",f1,b7,50,26),
	HX_("onPause",57,75,95,53),
	HX_("onResume",2c,60,31,e8),
	HX_("onStep",0b,f0,e5,ee),
	::String(null()) };

::hx::Class VCR_obj::__mClass;

void VCR_obj::__register()
{
	VCR_obj _hx_dummy;
	VCR_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.VCR",fd,98,3c,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VCR_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VCR_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VCR_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VCR_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug

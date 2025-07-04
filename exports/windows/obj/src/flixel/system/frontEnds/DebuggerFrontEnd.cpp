// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Tracker
#include <flixel/system/debug/watch/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#include <flixel/system/debug/watch/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchBase
#include <flixel/system/debug/watch/WatchBase.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebugToolsFrontEnd
#include <flixel/system/frontEnds/DebugToolsFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebugWindowsFrontEnd
#include <flixel/system/frontEnds/DebugWindowsFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f944dca4f3bb528_21_new,"flixel.system.frontEnds.DebuggerFrontEnd","new",0x8bc76b9f,"flixel.system.frontEnds.DebuggerFrontEnd.new","flixel/system/frontEnds/DebuggerFrontEnd.hx",21,0x2ebb4b30)
static const int _hx_array_data_ec6bb02d_1[] = {
	(int)113,(int)192,(int)220,
};
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_79_setLayout,"flixel.system.frontEnds.DebuggerFrontEnd","setLayout",0x96c2386b,"flixel.system.frontEnds.DebuggerFrontEnd.setLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",79,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_89_resetLayout,"flixel.system.frontEnds.DebuggerFrontEnd","resetLayout",0xc33ca418,"flixel.system.frontEnds.DebuggerFrontEnd.resetLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",89,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_107_addButton,"flixel.system.frontEnds.DebuggerFrontEnd","addButton",0x7066ab72,"flixel.system.frontEnds.DebuggerFrontEnd.addButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",107,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_121_track,"flixel.system.frontEnds.DebuggerFrontEnd","track",0x1a1fb78a,"flixel.system.frontEnds.DebuggerFrontEnd.track","flixel/system/frontEnds/DebuggerFrontEnd.hx",121,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_146_addTrackerProfile,"flixel.system.frontEnds.DebuggerFrontEnd","addTrackerProfile",0xb36941d1,"flixel.system.frontEnds.DebuggerFrontEnd.addTrackerProfile","flixel/system/frontEnds/DebuggerFrontEnd.hx",146,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_159_removeButton,"flixel.system.frontEnds.DebuggerFrontEnd","removeButton",0xa0228237,"flixel.system.frontEnds.DebuggerFrontEnd.removeButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",159,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_164_set_drawDebug,"flixel.system.frontEnds.DebuggerFrontEnd","set_drawDebug",0x8073fd91,"flixel.system.frontEnds.DebuggerFrontEnd.set_drawDebug","flixel/system/frontEnds/DebuggerFrontEnd.hx",164,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_177_set_visible,"flixel.system.frontEnds.DebuggerFrontEnd","set_visible",0xfdfb51d4,"flixel.system.frontEnds.DebuggerFrontEnd.set_visible","flixel/system/frontEnds/DebuggerFrontEnd.hx",177,0x2ebb4b30)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void DebuggerFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6f944dca4f3bb528_21_new)
HXLINE(  52)		this->visible = false;
HXLINE(  50)		this->visibilityChanged =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  44)		this->drawDebugChanged =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  39)		this->drawDebug = false;
HXLINE(  33)		this->toggleKeys = ::Array_obj< int >::fromData( _hx_array_data_ec6bb02d_1,3);
HXLINE(  26)		this->precision = 3;
HXLINE(  66)		this->tools =  ::flixel::_hx_system::frontEnds::DebugToolsFrontEnd_obj::__alloc( HX_CTX );
HXLINE(  67)		this->windows =  ::flixel::_hx_system::frontEnds::DebugWindowsFrontEnd_obj::__alloc( HX_CTX );
            	}

Dynamic DebuggerFrontEnd_obj::__CreateEmpty() { return new DebuggerFrontEnd_obj; }

void *DebuggerFrontEnd_obj::_hx_vtable = 0;

Dynamic DebuggerFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DebuggerFrontEnd_obj > _hx_result = new DebuggerFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DebuggerFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76a44a29;
}

void DebuggerFrontEnd_obj::setLayout( ::flixel::_hx_system::debug::FlxDebuggerLayout Layout){
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_79_setLayout)
HXDLIN(  79)		 ::flixel::_hx_system::debug::FlxDebugger _this = ::flixel::FlxG_obj::game->debugger;
HXDLIN(  79)		_this->_layout = Layout;
HXDLIN(  79)		_this->resetLayout();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,setLayout,(void))

void DebuggerFrontEnd_obj::resetLayout(){
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_89_resetLayout)
HXDLIN(  89)		::flixel::FlxG_obj::game->debugger->resetLayout();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerFrontEnd_obj,resetLayout,(void))

 ::flixel::_hx_system::ui::FlxSystemButton DebuggerFrontEnd_obj::addButton( ::flixel::util::FlxHorizontalAlign Alignment, ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,::hx::Null< bool >  __o_ToggleMode,::hx::Null< bool >  __o_UpdateLayout){
            		bool ToggleMode = __o_ToggleMode.Default(false);
            		bool UpdateLayout = __o_UpdateLayout.Default(true);
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_107_addButton)
HXDLIN( 107)		return ::flixel::FlxG_obj::game->debugger->addButton(Alignment,Icon,UpHandler,ToggleMode,UpdateLayout);
            	}


HX_DEFINE_DYNAMIC_FUNC5(DebuggerFrontEnd_obj,addButton,return )

 ::flixel::_hx_system::debug::Window DebuggerFrontEnd_obj::track( ::Dynamic ObjectOrClass,::String WindowTitle){
            	HX_GC_STACKFRAME(&_hx_pos_6f944dca4f3bb528_121_track)
HXLINE( 123)		if (::flixel::_hx_system::debug::watch::Tracker_obj::objectsBeingTracked->contains(ObjectOrClass)) {
HXLINE( 124)			return null();
            		}
HXLINE( 126)		 ::flixel::_hx_system::debug::watch::TrackerProfile profile = ::flixel::_hx_system::debug::watch::Tracker_obj::findProfile(ObjectOrClass);
HXLINE( 127)		if (::hx::IsNull( profile )) {
HXLINE( 129)			{
HXLINE( 129)				 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN( 129)				 ::Dynamic data = ((HX_("Could not find a tracking profile for object of class '",1a,ec,71,30) + ::flixel::util::FlxStringUtil_obj::getClassName(ObjectOrClass,true)) + HX_("'.",27,22,00,00));
HXDLIN( 129)				_this->advanced(data,::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true,::hx::SourceInfo(HX_("flixel/system/frontEnds/DebuggerFrontEnd.hx",30,4b,bb,2e),129,HX_("flixel.system.frontEnds.DebuggerFrontEnd",2d,b0,6b,ec),HX_("track",8b,8e,1f,16)));
            			}
HXLINE( 130)			return null();
            		}
            		else {
HXLINE( 133)			 ::flixel::_hx_system::debug::FlxDebugger _this1 = ::flixel::FlxG_obj::game->debugger;
HXDLIN( 133)			 ::flixel::_hx_system::debug::Window window =  ::flixel::_hx_system::debug::watch::Tracker_obj::__alloc( HX_CTX ,profile,ObjectOrClass,WindowTitle);
HXDLIN( 133)			_this1->_windows->push(window);
HXDLIN( 133)			_this1->addChild(window);
HXDLIN( 133)			if (::hx::IsNotNull( _this1->_screenBounds )) {
HXLINE( 133)				_this1->updateBounds();
HXDLIN( 133)				window->bound();
            			}
HXDLIN( 133)			return window;
            		}
HXLINE( 127)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerFrontEnd_obj,track,return )

void DebuggerFrontEnd_obj::addTrackerProfile( ::flixel::_hx_system::debug::watch::TrackerProfile Profile){
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_146_addTrackerProfile)
HXDLIN( 146)		if (::hx::IsNotNull( Profile )) {
HXDLIN( 146)			::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 146)			::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,addTrackerProfile,(void))

void DebuggerFrontEnd_obj::removeButton( ::flixel::_hx_system::ui::FlxSystemButton Button,::hx::Null< bool >  __o_UpdateLayout){
            		bool UpdateLayout = __o_UpdateLayout.Default(true);
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_159_removeButton)
HXDLIN( 159)		::flixel::FlxG_obj::game->debugger->removeButton(Button,UpdateLayout);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerFrontEnd_obj,removeButton,(void))

bool DebuggerFrontEnd_obj::set_drawDebug(bool Value){
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_164_set_drawDebug)
HXLINE( 165)		if ((this->drawDebug == Value)) {
HXLINE( 166)			return this->drawDebug;
            		}
HXLINE( 168)		this->drawDebug = Value;
HXLINE( 170)		this->drawDebugChanged->dispatch();
HXLINE( 172)		return this->drawDebug;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,set_drawDebug,return )

bool DebuggerFrontEnd_obj::set_visible(bool Value){
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_177_set_visible)
HXLINE( 178)		if ((this->visible == Value)) {
HXLINE( 179)			return this->visible;
            		}
HXLINE( 181)		this->visible = Value;
HXLINE( 184)		::flixel::FlxG_obj::game->debugger->set_visible(Value);
HXLINE( 185)		::flixel::FlxG_obj::game->debugger->set_tabChildren(Value);
HXLINE( 189)		if (!(Value)) {
HXLINE( 191)			::openfl::Lib_obj::get_current()->stage->set_focus(null());
HXLINE( 194)			::flixel::FlxG_obj::mouse->enabled = true;
            		}
            		else {
HXLINE( 202)			::flixel::FlxG_obj::mouse->enabled = !(::flixel::FlxG_obj::game->debugger->interaction->isInUse());
            		}
HXLINE( 206)		this->visibilityChanged->dispatch();
HXLINE( 209)		return this->visible;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,set_visible,return )


::hx::ObjectPtr< DebuggerFrontEnd_obj > DebuggerFrontEnd_obj::__new() {
	::hx::ObjectPtr< DebuggerFrontEnd_obj > __this = new DebuggerFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DebuggerFrontEnd_obj > DebuggerFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DebuggerFrontEnd_obj *__this = (DebuggerFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DebuggerFrontEnd_obj), true, "flixel.system.frontEnds.DebuggerFrontEnd"));
	*(void **)__this = DebuggerFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DebuggerFrontEnd_obj::DebuggerFrontEnd_obj()
{
}

void DebuggerFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DebuggerFrontEnd);
	HX_MARK_MEMBER_NAME(precision,"precision");
	HX_MARK_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_MARK_MEMBER_NAME(drawDebug,"drawDebug");
	HX_MARK_MEMBER_NAME(drawDebugChanged,"drawDebugChanged");
	HX_MARK_MEMBER_NAME(visibilityChanged,"visibilityChanged");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(tools,"tools");
	HX_MARK_MEMBER_NAME(windows,"windows");
	HX_MARK_END_CLASS();
}

void DebuggerFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(precision,"precision");
	HX_VISIT_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_VISIT_MEMBER_NAME(drawDebug,"drawDebug");
	HX_VISIT_MEMBER_NAME(drawDebugChanged,"drawDebugChanged");
	HX_VISIT_MEMBER_NAME(visibilityChanged,"visibilityChanged");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(tools,"tools");
	HX_VISIT_MEMBER_NAME(windows,"windows");
}

::hx::Val DebuggerFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tools") ) { return ::hx::Val( tools ); }
		if (HX_FIELD_EQ(inName,"track") ) { return ::hx::Val( track_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return ::hx::Val( visible ); }
		if (HX_FIELD_EQ(inName,"windows") ) { return ::hx::Val( windows ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { return ::hx::Val( precision ); }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return ::hx::Val( drawDebug ); }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return ::hx::Val( setLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"addButton") ) { return ::hx::Val( addButton_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { return ::hx::Val( toggleKeys ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return ::hx::Val( resetLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { return ::hx::Val( removeButton_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_drawDebug") ) { return ::hx::Val( set_drawDebug_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawDebugChanged") ) { return ::hx::Val( drawDebugChanged ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"visibilityChanged") ) { return ::hx::Val( visibilityChanged ); }
		if (HX_FIELD_EQ(inName,"addTrackerProfile") ) { return ::hx::Val( addTrackerProfile_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DebuggerFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tools") ) { tools=inValue.Cast<  ::flixel::_hx_system::frontEnds::DebugToolsFrontEnd >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visible(inValue.Cast< bool >()) );visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windows") ) { windows=inValue.Cast<  ::flixel::_hx_system::frontEnds::DebugWindowsFrontEnd >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { precision=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_drawDebug(inValue.Cast< bool >()) );drawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { toggleKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawDebugChanged") ) { drawDebugChanged=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"visibilityChanged") ) { visibilityChanged=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DebuggerFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("precision",3e,d5,c7,80));
	outFields->push(HX_("toggleKeys",a8,27,bd,de));
	outFields->push(HX_("drawDebug",af,87,2a,9f));
	outFields->push(HX_("drawDebugChanged",05,35,de,47));
	outFields->push(HX_("visibilityChanged",42,69,31,f5));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("tools",1b,92,2e,14));
	outFields->push(HX_("windows",83,de,74,e8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DebuggerFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(DebuggerFrontEnd_obj,precision),HX_("precision",3e,d5,c7,80)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(DebuggerFrontEnd_obj,toggleKeys),HX_("toggleKeys",a8,27,bd,de)},
	{::hx::fsBool,(int)offsetof(DebuggerFrontEnd_obj,drawDebug),HX_("drawDebug",af,87,2a,9f)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(DebuggerFrontEnd_obj,drawDebugChanged),HX_("drawDebugChanged",05,35,de,47)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(DebuggerFrontEnd_obj,visibilityChanged),HX_("visibilityChanged",42,69,31,f5)},
	{::hx::fsBool,(int)offsetof(DebuggerFrontEnd_obj,visible),HX_("visible",72,78,24,a3)},
	{::hx::fsObject /*  ::flixel::_hx_system::frontEnds::DebugToolsFrontEnd */ ,(int)offsetof(DebuggerFrontEnd_obj,tools),HX_("tools",1b,92,2e,14)},
	{::hx::fsObject /*  ::flixel::_hx_system::frontEnds::DebugWindowsFrontEnd */ ,(int)offsetof(DebuggerFrontEnd_obj,windows),HX_("windows",83,de,74,e8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DebuggerFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String DebuggerFrontEnd_obj_sMemberFields[] = {
	HX_("precision",3e,d5,c7,80),
	HX_("toggleKeys",a8,27,bd,de),
	HX_("drawDebug",af,87,2a,9f),
	HX_("drawDebugChanged",05,35,de,47),
	HX_("visibilityChanged",42,69,31,f5),
	HX_("visible",72,78,24,a3),
	HX_("tools",1b,92,2e,14),
	HX_("windows",83,de,74,e8),
	HX_("setLayout",ec,23,60,b8),
	HX_("resetLayout",d9,31,cd,f8),
	HX_("addButton",f3,96,04,92),
	HX_("track",8b,8e,1f,16),
	HX_("addTrackerProfile",52,16,10,21),
	HX_("removeButton",56,fd,0d,49),
	HX_("set_drawDebug",92,3d,94,a5),
	HX_("set_visible",95,df,8b,33),
	::String(null()) };

::hx::Class DebuggerFrontEnd_obj::__mClass;

void DebuggerFrontEnd_obj::__register()
{
	DebuggerFrontEnd_obj _hx_dummy;
	DebuggerFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.DebuggerFrontEnd",2d,b0,6b,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DebuggerFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DebuggerFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DebuggerFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DebuggerFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

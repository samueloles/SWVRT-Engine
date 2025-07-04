// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Icon
#include <flixel/system/debug/Icon.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Icon_BitmapLog
#include <flixel/system/debug/_Icon/BitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_LogBitmap
#include <flixel/system/debug/interaction/tools/LogBitmap.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_45958364d561d3c9_18_new,"flixel.system.debug.interaction.tools.LogBitmap","new",0x4435722e,"flixel.system.debug.interaction.tools.LogBitmap.new","flixel/system/debug/interaction/tools/LogBitmap.hx",18,0xd55972a5)
HX_LOCAL_STACK_FRAME(_hx_pos_45958364d561d3c9_21_init,"flixel.system.debug.interaction.tools.LogBitmap","init",0x67472d82,"flixel.system.debug.interaction.tools.LogBitmap.init","flixel/system/debug/interaction/tools/LogBitmap.hx",21,0xd55972a5)
HX_LOCAL_STACK_FRAME(_hx_pos_45958364d561d3c9_35_update,"flixel.system.debug.interaction.tools.LogBitmap","update",0x194878fb,"flixel.system.debug.interaction.tools.LogBitmap.update","flixel/system/debug/interaction/tools/LogBitmap.hx",35,0xd55972a5)
HX_LOCAL_STACK_FRAME(_hx_pos_45958364d561d3c9_42_onButtonClicked,"flixel.system.debug.interaction.tools.LogBitmap","onButtonClicked",0xe143c504,"flixel.system.debug.interaction.tools.LogBitmap.onButtonClicked","flixel/system/debug/interaction/tools/LogBitmap.hx",42,0xd55972a5)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void LogBitmap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_45958364d561d3c9_18_new)
HXDLIN(  18)		super::__construct();
            	}

Dynamic LogBitmap_obj::__CreateEmpty() { return new LogBitmap_obj; }

void *LogBitmap_obj::_hx_vtable = 0;

Dynamic LogBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LogBitmap_obj > _hx_result = new LogBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LogBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ae58a6a) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1361d5a9 || inClassId==(int)0x1ae58a6a;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

 ::flixel::_hx_system::debug::interaction::tools::Tool LogBitmap_obj::init( ::flixel::_hx_system::debug::interaction::Interaction brain){
            	HX_STACKFRAME(&_hx_pos_45958364d561d3c9_21_init)
HXLINE(  22)		this->super::init(brain);
HXLINE(  24)		this->_name = HX_("Log selected bitmaps",1b,a6,83,78);
HXLINE(  25)		this->setButton(::flixel::_hx_system::debug::Icon_obj::bitmapLog);
HXLINE(  26)		this->button->toggleMode = false;
HXLINE(  31)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


void LogBitmap_obj::update(){
            	HX_STACKFRAME(&_hx_pos_45958364d561d3c9_35_update)
HXLINE(  36)		int _hx_tmp = this->_brain->selectedItems->countLiving();
HXDLIN(  36)		this->button->enabled = (_hx_tmp > 0);
HXLINE(  37)		this->button->mouseEnabled = this->button->enabled;
HXLINE(  38)		Float _hx_tmp1;
HXDLIN(  38)		if (this->button->enabled) {
HXLINE(  38)			_hx_tmp1 = ((Float)0.3);
            		}
            		else {
HXLINE(  38)			_hx_tmp1 = ((Float)0.1);
            		}
HXDLIN(  38)		this->button->set_alpha(_hx_tmp1);
            	}


void LogBitmap_obj::onButtonClicked(){
            	HX_STACKFRAME(&_hx_pos_45958364d561d3c9_42_onButtonClicked)
HXLINE(  45)		if ((this->_brain->selectedItems->length == 0)) {
HXLINE(  46)			return;
            		}
HXLINE(  48)		{
HXLINE(  48)			 ::Dynamic filter = null();
HXDLIN(  48)			::Array< ::Dynamic> _g__groupMembers = this->_brain->selectedItems->members;
HXDLIN(  48)			 ::Dynamic _g__filter = filter;
HXDLIN(  48)			int _g__cursor = 0;
HXDLIN(  48)			int _g__length = _g__groupMembers->length;
HXDLIN(  48)			while(true){
HXLINE(  48)				while(true){
HXLINE(  48)					bool _hx_tmp;
HXDLIN(  48)					if ((_g__cursor < _g__length)) {
HXLINE(  48)						if (::hx::IsNotNull( _g__groupMembers->__get(_g__cursor).StaticCast<  ::flixel::FlxObject >() )) {
HXLINE(  48)							if (::hx::IsNotNull( _g__filter )) {
HXLINE(  48)								_hx_tmp = !(( (bool)(_g__filter(_g__groupMembers->__get(_g__cursor).StaticCast<  ::flixel::FlxObject >())) ));
            							}
            							else {
HXLINE(  48)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE(  48)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE(  48)						_hx_tmp = false;
            					}
HXDLIN(  48)					if (!(_hx_tmp)) {
HXLINE(  48)						goto _hx_goto_4;
            					}
HXDLIN(  48)					_g__cursor = (_g__cursor + 1);
            				}
            				_hx_goto_4:;
HXDLIN(  48)				if (!((_g__cursor < _g__length))) {
HXLINE(  48)					goto _hx_goto_3;
            				}
HXDLIN(  48)				 ::flixel::FlxObject member;
HXDLIN(  48)				while(true){
HXLINE(  48)					bool member1;
HXDLIN(  48)					if ((_g__cursor < _g__length)) {
HXLINE(  48)						if (::hx::IsNotNull( _g__groupMembers->__get(_g__cursor).StaticCast<  ::flixel::FlxObject >() )) {
HXLINE(  48)							if (::hx::IsNotNull( _g__filter )) {
HXLINE(  48)								member1 = !(( (bool)(_g__filter(_g__groupMembers->__get(_g__cursor).StaticCast<  ::flixel::FlxObject >())) ));
            							}
            							else {
HXLINE(  48)								member1 = false;
            							}
            						}
            						else {
HXLINE(  48)							member1 = true;
            						}
            					}
            					else {
HXLINE(  48)						member1 = false;
            					}
HXDLIN(  48)					if (!(member1)) {
HXLINE(  48)						goto _hx_goto_5;
            					}
HXDLIN(  48)					_g__cursor = (_g__cursor + 1);
            				}
            				_hx_goto_5:;
HXDLIN(  48)				if ((_g__cursor < _g__length)) {
HXLINE(  48)					_g__cursor = (_g__cursor + 1);
HXDLIN(  48)					member = _g__groupMembers->__get((_g__cursor - 1)).StaticCast<  ::flixel::FlxObject >();
            				}
            				else {
HXLINE(  48)					member = null();
            				}
HXDLIN(  48)				 ::flixel::FlxObject member2 = member;
HXLINE(  50)				bool _hx_tmp1;
HXDLIN(  50)				if (::hx::IsNotNull( member2 )) {
HXLINE(  50)					_hx_tmp1 = ::Std_obj::isOfType(member2,::hx::ClassOf< ::flixel::FlxSprite >());
            				}
            				else {
HXLINE(  50)					_hx_tmp1 = false;
            				}
HXDLIN(  50)				if (_hx_tmp1) {
HXLINE(  52)					 ::flixel::FlxSprite sprite = ( ( ::flixel::FlxSprite)(member2) );
HXLINE(  53)					{
HXLINE(  53)						::String name = null();
HXDLIN(  53)						::flixel::FlxG_obj::bitmapLog->addGraphic(sprite->graphic,name);
            					}
            				}
            			}
            			_hx_goto_3:;
            		}
            	}



::hx::ObjectPtr< LogBitmap_obj > LogBitmap_obj::__new() {
	::hx::ObjectPtr< LogBitmap_obj > __this = new LogBitmap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LogBitmap_obj > LogBitmap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LogBitmap_obj *__this = (LogBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LogBitmap_obj), true, "flixel.system.debug.interaction.tools.LogBitmap"));
	*(void **)__this = LogBitmap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LogBitmap_obj::LogBitmap_obj()
{
}

::hx::Val LogBitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onButtonClicked") ) { return ::hx::Val( onButtonClicked_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LogBitmap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LogBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String LogBitmap_obj_sMemberFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("update",09,86,05,87),
	HX_("onButtonClicked",36,a6,0f,a0),
	::String(null()) };

::hx::Class LogBitmap_obj::__mClass;

void LogBitmap_obj::__register()
{
	LogBitmap_obj _hx_dummy;
	LogBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools.LogBitmap",3c,83,f1,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LogBitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LogBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools

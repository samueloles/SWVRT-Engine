// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_adae7e0047179c26_6_new,"flixel.tweens.motion.LinearMotion","new",0x1860e4d1,"flixel.tweens.motion.LinearMotion.new","flixel/tweens/motion/LinearMotion.hx",6,0x15b892fe)
HX_LOCAL_STACK_FRAME(_hx_pos_adae7e0047179c26_31_setMotion,"flixel.tweens.motion.LinearMotion","setMotion",0x53127aa9,"flixel.tweens.motion.LinearMotion.setMotion","flixel/tweens/motion/LinearMotion.hx",31,0x15b892fe)
HX_LOCAL_STACK_FRAME(_hx_pos_adae7e0047179c26_53_update,"flixel.tweens.motion.LinearMotion","update",0xb80e0e38,"flixel.tweens.motion.LinearMotion.update","flixel/tweens/motion/LinearMotion.hx",53,0x15b892fe)
HX_LOCAL_STACK_FRAME(_hx_pos_adae7e0047179c26_69_get_distance,"flixel.tweens.motion.LinearMotion","get_distance",0xd1a29cad,"flixel.tweens.motion.LinearMotion.get_distance","flixel/tweens/motion/LinearMotion.hx",69,0x15b892fe)
namespace flixel{
namespace tweens{
namespace motion{

void LinearMotion_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_adae7e0047179c26_6_new)
HXLINE(  18)		this->_distance = ((Float)-1);
HXLINE(  17)		this->_moveY = ((Float)0);
HXLINE(  16)		this->_moveX = ((Float)0);
HXLINE(  15)		this->_fromY = ((Float)0);
HXLINE(  14)		this->_fromX = ((Float)0);
HXLINE(   6)		super::__construct(Options,manager);
            	}

Dynamic LinearMotion_obj::__CreateEmpty() { return new LinearMotion_obj; }

void *LinearMotion_obj::_hx_vtable = 0;

Dynamic LinearMotion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LinearMotion_obj > _hx_result = new LinearMotion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LinearMotion_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21dceb90) {
		if (inClassId<=(int)0x104846c5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x104846c5;
		} else {
			return inClassId==(int)0x21dceb90;
		}
	} else {
		return inClassId==(int)0x57b2119d;
	}
}

 ::flixel::tweens::motion::LinearMotion LinearMotion_obj::setMotion(Float FromX,Float FromY,Float ToX,Float ToY,Float DurationOrSpeed,::hx::Null< bool >  __o_UseDuration){
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACKFRAME(&_hx_pos_adae7e0047179c26_31_setMotion)
HXLINE(  32)		this->_distance = ( (Float)(-1) );
HXLINE(  33)		this->x = (this->_fromX = FromX);
HXLINE(  34)		this->y = (this->_fromY = FromY);
HXLINE(  35)		this->_moveX = (ToX - FromX);
HXLINE(  36)		this->_moveY = (ToY - FromY);
HXLINE(  38)		if (UseDuration) {
HXLINE(  40)			this->duration = DurationOrSpeed;
            		}
            		else {
HXLINE(  44)			this->duration = (this->get_distance() / DurationOrSpeed);
            		}
HXLINE(  47)		this->start();
HXLINE(  49)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC6(LinearMotion_obj,setMotion,return )

void LinearMotion_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_adae7e0047179c26_53_update)
HXLINE(  54)		this->super::update(elapsed);
HXLINE(  55)		this->x = (this->_fromX + (this->_moveX * this->scale));
HXLINE(  56)		this->y = (this->_fromY + (this->_moveY * this->scale));
HXLINE(  58)		bool _hx_tmp;
HXDLIN(  58)		bool _hx_tmp1;
HXDLIN(  58)		bool _hx_tmp2;
HXDLIN(  58)		if ((this->x == (this->_fromX + this->_moveX))) {
HXLINE(  58)			_hx_tmp2 = (this->y == (this->_fromY + this->_moveY));
            		}
            		else {
HXLINE(  58)			_hx_tmp2 = false;
            		}
HXDLIN(  58)		if (_hx_tmp2) {
HXLINE(  58)			_hx_tmp1 = this->active;
            		}
            		else {
HXLINE(  58)			_hx_tmp1 = false;
            		}
HXDLIN(  58)		if (_hx_tmp1) {
HXLINE(  58)			_hx_tmp = (this->_secondsSinceStart >= this->duration);
            		}
            		else {
HXLINE(  58)			_hx_tmp = false;
            		}
HXDLIN(  58)		if (_hx_tmp) {
HXLINE(  60)			this->finished = true;
            		}
HXLINE(  62)		if (this->finished) {
HXLINE(  64)			this->postUpdate();
            		}
            	}


Float LinearMotion_obj::get_distance(){
            	HX_STACKFRAME(&_hx_pos_adae7e0047179c26_69_get_distance)
HXLINE(  70)		if ((this->_distance >= 0)) {
HXLINE(  71)			return this->_distance;
            		}
HXLINE(  72)		return (this->_distance = ::Math_obj::sqrt(((this->_moveX * this->_moveX) + (this->_moveY * this->_moveY))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(LinearMotion_obj,get_distance,return )


::hx::ObjectPtr< LinearMotion_obj > LinearMotion_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< LinearMotion_obj > __this = new LinearMotion_obj();
	__this->__construct(Options,manager);
	return __this;
}

::hx::ObjectPtr< LinearMotion_obj > LinearMotion_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	LinearMotion_obj *__this = (LinearMotion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LinearMotion_obj), true, "flixel.tweens.motion.LinearMotion"));
	*(void **)__this = LinearMotion_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

LinearMotion_obj::LinearMotion_obj()
{
}

::hx::Val LinearMotion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return ::hx::Val( _fromX ); }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return ::hx::Val( _fromY ); }
		if (HX_FIELD_EQ(inName,"_moveX") ) { return ::hx::Val( _moveX ); }
		if (HX_FIELD_EQ(inName,"_moveY") ) { return ::hx::Val( _moveY ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_distance() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return ::hx::Val( _distance ); }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return ::hx::Val( setMotion_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return ::hx::Val( get_distance_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LinearMotion_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { _moveX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { _moveY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("distance",35,93,f9,6b));
	outFields->push(HX_("_fromX",ef,5e,75,02));
	outFields->push(HX_("_fromY",f0,5e,75,02));
	outFields->push(HX_("_moveX",68,13,4d,08));
	outFields->push(HX_("_moveY",69,13,4d,08));
	outFields->push(HX_("_distance",94,8a,8f,b3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LinearMotion_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(LinearMotion_obj,_fromX),HX_("_fromX",ef,5e,75,02)},
	{::hx::fsFloat,(int)offsetof(LinearMotion_obj,_fromY),HX_("_fromY",f0,5e,75,02)},
	{::hx::fsFloat,(int)offsetof(LinearMotion_obj,_moveX),HX_("_moveX",68,13,4d,08)},
	{::hx::fsFloat,(int)offsetof(LinearMotion_obj,_moveY),HX_("_moveY",69,13,4d,08)},
	{::hx::fsFloat,(int)offsetof(LinearMotion_obj,_distance),HX_("_distance",94,8a,8f,b3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LinearMotion_obj_sStaticStorageInfo = 0;
#endif

static ::String LinearMotion_obj_sMemberFields[] = {
	HX_("_fromX",ef,5e,75,02),
	HX_("_fromY",f0,5e,75,02),
	HX_("_moveX",68,13,4d,08),
	HX_("_moveY",69,13,4d,08),
	HX_("_distance",94,8a,8f,b3),
	HX_("setMotion",78,fb,04,2b),
	HX_("update",09,86,05,87),
	HX_("get_distance",3e,47,13,21),
	::String(null()) };

::hx::Class LinearMotion_obj::__mClass;

void LinearMotion_obj::__register()
{
	LinearMotion_obj _hx_dummy;
	LinearMotion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.motion.LinearMotion",5f,28,60,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LinearMotion_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LinearMotion_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LinearMotion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LinearMotion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

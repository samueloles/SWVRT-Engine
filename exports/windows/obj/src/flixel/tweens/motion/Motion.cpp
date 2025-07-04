// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3615c645ab6bc3d8_9_new,"flixel.tweens.motion.Motion","new",0x8c813b8c,"flixel.tweens.motion.Motion.new","flixel/tweens/motion/Motion.hx",9,0xc6c8a363)
HX_LOCAL_STACK_FRAME(_hx_pos_3615c645ab6bc3d8_25_destroy,"flixel.tweens.motion.Motion","destroy",0x00e69e26,"flixel.tweens.motion.Motion.destroy","flixel/tweens/motion/Motion.hx",25,0xc6c8a363)
HX_LOCAL_STACK_FRAME(_hx_pos_3615c645ab6bc3d8_31_setObject,"flixel.tweens.motion.Motion","setObject",0x7f27082d,"flixel.tweens.motion.Motion.setObject","flixel/tweens/motion/Motion.hx",31,0xc6c8a363)
HX_LOCAL_STACK_FRAME(_hx_pos_3615c645ab6bc3d8_39_update,"flixel.tweens.motion.Motion","update",0xebe25e5d,"flixel.tweens.motion.Motion.update","flixel/tweens/motion/Motion.hx",39,0xc6c8a363)
HX_LOCAL_STACK_FRAME(_hx_pos_3615c645ab6bc3d8_45_onEnd,"flixel.tweens.motion.Motion","onEnd",0x35242628,"flixel.tweens.motion.Motion.onEnd","flixel/tweens/motion/Motion.hx",45,0xc6c8a363)
HX_LOCAL_STACK_FRAME(_hx_pos_3615c645ab6bc3d8_52_postUpdate,"flixel.tweens.motion.Motion","postUpdate",0xca0f98dd,"flixel.tweens.motion.Motion.postUpdate","flixel/tweens/motion/Motion.hx",52,0xc6c8a363)
HX_LOCAL_STACK_FRAME(_hx_pos_3615c645ab6bc3d8_60_isTweenOf,"flixel.tweens.motion.Motion","isTweenOf",0xe4ff31c4,"flixel.tweens.motion.Motion.isTweenOf","flixel/tweens/motion/Motion.hx",60,0xc6c8a363)
namespace flixel{
namespace tweens{
namespace motion{

void Motion_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_3615c645ab6bc3d8_9_new)
HXLINE(  19)		this->y = ((Float)0);
HXLINE(  14)		this->x = ((Float)0);
HXLINE(   9)		super::__construct(Options,manager);
            	}

Dynamic Motion_obj::__CreateEmpty() { return new Motion_obj; }

void *Motion_obj::_hx_vtable = 0;

Dynamic Motion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Motion_obj > _hx_result = new Motion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Motion_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x104846c5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x104846c5;
	} else {
		return inClassId==(int)0x21dceb90;
	}
}

void Motion_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_3615c645ab6bc3d8_25_destroy)
HXLINE(  26)		this->super::destroy();
HXLINE(  27)		this->_object = null();
            	}


 ::flixel::tweens::motion::Motion Motion_obj::setObject( ::flixel::FlxObject object){
            	HX_STACKFRAME(&_hx_pos_3615c645ab6bc3d8_31_setObject)
HXLINE(  32)		this->_object = object;
HXLINE(  33)		this->_wasObjectImmovable = this->_object->immovable;
HXLINE(  34)		this->_object->set_immovable(true);
HXLINE(  35)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Motion_obj,setObject,return )

void Motion_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_3615c645ab6bc3d8_39_update)
HXLINE(  40)		this->super::update(elapsed);
HXLINE(  41)		this->postUpdate();
            	}


void Motion_obj::onEnd(){
            	HX_STACKFRAME(&_hx_pos_3615c645ab6bc3d8_45_onEnd)
HXLINE(  46)		this->_object->set_immovable(this->_wasObjectImmovable);
HXLINE(  47)		this->super::onEnd();
            	}


void Motion_obj::postUpdate(){
            	HX_STACKFRAME(&_hx_pos_3615c645ab6bc3d8_52_postUpdate)
HXDLIN(  52)		if (::hx::IsNotNull( this->_object )) {
HXLINE(  54)			this->_object->setPosition(this->x,this->y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Motion_obj,postUpdate,(void))

bool Motion_obj::isTweenOf( ::Dynamic object,::String field){
            	HX_STACKFRAME(&_hx_pos_3615c645ab6bc3d8_60_isTweenOf)
HXDLIN(  60)		if (::hx::IsInstanceEq( this->_object,object )) {
HXLINE(  61)			bool _hx_tmp;
HXDLIN(  61)			if (::hx::IsNotNull( field )) {
HXLINE(  61)				_hx_tmp = (field == HX_("x",78,00,00,00));
            			}
            			else {
HXLINE(  61)				_hx_tmp = true;
            			}
HXDLIN(  61)			if (!(_hx_tmp)) {
HXLINE(  61)				return (field == HX_("y",79,00,00,00));
            			}
            			else {
HXLINE(  61)				return true;
            			}
            		}
            		else {
HXDLIN(  60)			return false;
            		}
HXDLIN(  60)		return false;
            	}



::hx::ObjectPtr< Motion_obj > Motion_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< Motion_obj > __this = new Motion_obj();
	__this->__construct(Options,manager);
	return __this;
}

::hx::ObjectPtr< Motion_obj > Motion_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	Motion_obj *__this = (Motion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Motion_obj), true, "flixel.tweens.motion.Motion"));
	*(void **)__this = Motion_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

Motion_obj::Motion_obj()
{
}

void Motion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Motion);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(_object,"_object");
	HX_MARK_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	 ::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Motion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(_object,"_object");
	HX_VISIT_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	 ::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Motion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onEnd") ) { return ::hx::Val( onEnd_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return ::hx::Val( _object ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setObject") ) { return ::hx::Val( setObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"isTweenOf") ) { return ::hx::Val( isTweenOf_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return ::hx::Val( postUpdate_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { return ::hx::Val( _wasObjectImmovable ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Motion_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { _wasObjectImmovable=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Motion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("_object",5e,90,b6,83));
	outFields->push(HX_("_wasObjectImmovable",41,d9,92,98));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Motion_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Motion_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Motion_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(Motion_obj,_object),HX_("_object",5e,90,b6,83)},
	{::hx::fsBool,(int)offsetof(Motion_obj,_wasObjectImmovable),HX_("_wasObjectImmovable",41,d9,92,98)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Motion_obj_sStaticStorageInfo = 0;
#endif

static ::String Motion_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("_object",5e,90,b6,83),
	HX_("_wasObjectImmovable",41,d9,92,98),
	HX_("destroy",fa,2c,86,24),
	HX_("setObject",01,f4,e6,74),
	HX_("update",09,86,05,87),
	HX_("onEnd",fc,97,64,32),
	HX_("postUpdate",89,06,3e,dc),
	HX_("isTweenOf",98,1d,bf,da),
	::String(null()) };

::hx::Class Motion_obj::__mClass;

void Motion_obj::__register()
{
	Motion_obj _hx_dummy;
	Motion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.motion.Motion",9a,c5,49,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Motion_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Motion_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Motion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Motion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_243e2ff0f36e9c70_5_new,"flixel.input.gamepad.FlxGamepadButton","new",0xa97275d6,"flixel.input.gamepad.FlxGamepadButton.new","flixel/input/gamepad/FlxGamepadButton.hx",5,0xa176f377)
namespace flixel{
namespace input{
namespace gamepad{

void FlxGamepadButton_obj::__construct(int ID){
            	HX_STACKFRAME(&_hx_pos_243e2ff0f36e9c70_5_new)
HXLINE(  10)		this->value = ((Float)0);
HXLINE(   5)		super::__construct(ID);
            	}

Dynamic FlxGamepadButton_obj::__CreateEmpty() { return new FlxGamepadButton_obj; }

void *FlxGamepadButton_obj::_hx_vtable = 0;

Dynamic FlxGamepadButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGamepadButton_obj > _hx_result = new FlxGamepadButton_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxGamepadButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21c9947c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21c9947c;
	} else {
		return inClassId==(int)0x6f581646;
	}
}


::hx::ObjectPtr< FlxGamepadButton_obj > FlxGamepadButton_obj::__new(int ID) {
	::hx::ObjectPtr< FlxGamepadButton_obj > __this = new FlxGamepadButton_obj();
	__this->__construct(ID);
	return __this;
}

::hx::ObjectPtr< FlxGamepadButton_obj > FlxGamepadButton_obj::__alloc(::hx::Ctx *_hx_ctx,int ID) {
	FlxGamepadButton_obj *__this = (FlxGamepadButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadButton_obj), true, "flixel.input.gamepad.FlxGamepadButton"));
	*(void **)__this = FlxGamepadButton_obj::_hx_vtable;
	__this->__construct(ID);
	return __this;
}

FlxGamepadButton_obj::FlxGamepadButton_obj()
{
}

::hx::Val FlxGamepadButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxGamepadButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGamepadButton_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxGamepadButton_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxGamepadButton_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadButton_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	::String(null()) };

::hx::Class FlxGamepadButton_obj::__mClass;

void FlxGamepadButton_obj::__register()
{
	FlxGamepadButton_obj _hx_dummy;
	FlxGamepadButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.FlxGamepadButton",e4,92,29,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGamepadButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGamepadButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_objetos_ImagenMenu
#include <objetos/ImagenMenu.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_794c89ba171aed83_8_new,"objetos.ImagenMenu","new",0xf0c5cb28,"objetos.ImagenMenu.new","objetos/ImagenMenu.hx",8,0xdd0324a7)
namespace objetos{

void ImagenMenu_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String ruta){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_794c89ba171aed83_8_new)
HXLINE(   9)		this->ruta = ruta;
HXLINE(  10)		super::__construct(x,y,null());
HXLINE(  11)		bool _hx_tmp;
HXDLIN(  11)		if (::hx::IsNotNull( ruta )) {
HXLINE(  11)			_hx_tmp = (ruta != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  11)			_hx_tmp = false;
            		}
HXDLIN(  11)		if (_hx_tmp) {
HXLINE(  12)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  13)				this->loadGraphic(ruta,null(),null(),null(),null(),null());
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  14)					{
HXLINE(  14)						null();
            					}
HXDLIN(  14)					 ::Dynamic e = _g;
HXDLIN(  14)					{
HXLINE(  15)						 ::Dynamic _hx_tmp1 = ::haxe::Log_obj::trace;
HXDLIN(  15)						::String _hx_tmp2 = (((HX_("Error cargando imagen: ",56,99,00,1a) + ruta) + HX_(" - ",73,6f,18,00)) + ::Std_obj::string(e));
HXDLIN(  15)						_hx_tmp1(_hx_tmp2,::hx::SourceInfo(HX_("source/objetos/ImagenMenu.hx",33,39,ca,1b),15,HX_("objetos.ImagenMenu",36,57,6f,7a),HX_("new",60,d0,53,00)));
HXLINE(  16)						this->makeGraphic(100,100,-65536,null(),null());
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            	}

Dynamic ImagenMenu_obj::__CreateEmpty() { return new ImagenMenu_obj; }

void *ImagenMenu_obj::_hx_vtable = 0;

Dynamic ImagenMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImagenMenu_obj > _hx_result = new ImagenMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ImagenMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7d18a2f8 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< ImagenMenu_obj > ImagenMenu_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String ruta) {
	::hx::ObjectPtr< ImagenMenu_obj > __this = new ImagenMenu_obj();
	__this->__construct(__o_x,__o_y,ruta);
	return __this;
}

::hx::ObjectPtr< ImagenMenu_obj > ImagenMenu_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String ruta) {
	ImagenMenu_obj *__this = (ImagenMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImagenMenu_obj), true, "objetos.ImagenMenu"));
	*(void **)__this = ImagenMenu_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,ruta);
	return __this;
}

ImagenMenu_obj::ImagenMenu_obj()
{
}

void ImagenMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImagenMenu);
	HX_MARK_MEMBER_NAME(ruta,"ruta");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImagenMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ruta,"ruta");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ImagenMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ruta") ) { return ::hx::Val( ruta ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImagenMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ruta") ) { ruta=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImagenMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ruta",f0,7f,b3,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImagenMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ImagenMenu_obj,ruta),HX_("ruta",f0,7f,b3,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImagenMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String ImagenMenu_obj_sMemberFields[] = {
	HX_("ruta",f0,7f,b3,4b),
	::String(null()) };

::hx::Class ImagenMenu_obj::__mClass;

void ImagenMenu_obj::__register()
{
	ImagenMenu_obj _hx_dummy;
	ImagenMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objetos.ImagenMenu",36,57,6f,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImagenMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImagenMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImagenMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImagenMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objetos

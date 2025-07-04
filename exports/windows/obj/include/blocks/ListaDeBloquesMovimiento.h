// Generated by Haxe 4.3.7
#ifndef INCLUDED_blocks_ListaDeBloquesMovimiento
#define INCLUDED_blocks_ListaDeBloquesMovimiento

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(blocks,ListaDeBloquesMovimiento)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace blocks{


class HXCPP_CLASS_ATTRIBUTES ListaDeBloquesMovimiento_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef ListaDeBloquesMovimiento_obj OBJ_;
		ListaDeBloquesMovimiento_obj();

	public:
		enum { _hx_ClassId = 0x276de696 };

		void __construct(::String categoria, ::Dynamic onBloqueClick);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="blocks.ListaDeBloquesMovimiento")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"blocks.ListaDeBloquesMovimiento"); }
		static ::hx::ObjectPtr< ListaDeBloquesMovimiento_obj > __new(::String categoria, ::Dynamic onBloqueClick);
		static ::hx::ObjectPtr< ListaDeBloquesMovimiento_obj > __alloc(::hx::Ctx *_hx_ctx,::String categoria, ::Dynamic onBloqueClick);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListaDeBloquesMovimiento_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListaDeBloquesMovimiento",48,a0,a9,5a); }

		 ::Dynamic onBloqueClick;
		Dynamic onBloqueClick_dyn() { return onBloqueClick;}
		::Array< ::Dynamic> bloquesTxt;
		void update(Float elapsed);

};

} // end namespace blocks

#endif /* INCLUDED_blocks_ListaDeBloquesMovimiento */ 

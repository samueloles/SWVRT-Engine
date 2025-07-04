// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_system_FlxBGSprite
#define INCLUDED_flixel_system_FlxBGSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxBGSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES FlxBGSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxBGSprite_obj OBJ_;
		FlxBGSprite_obj();

	public:
		enum { _hx_ClassId = 0x4f941191 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxBGSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.FlxBGSprite"); }
		static ::hx::ObjectPtr< FlxBGSprite_obj > __new();
		static ::hx::ObjectPtr< FlxBGSprite_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBGSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBGSprite",fc,c9,04,7d); }

		void draw();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxBGSprite */ 

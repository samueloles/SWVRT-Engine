// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_path__FlxBasePath_FlxPathDirection_Impl_
#define INCLUDED_flixel_path__FlxBasePath_FlxPathDirection_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,path,_FlxBasePath,FlxPathDirection_Impl_)

namespace flixel{
namespace path{
namespace _FlxBasePath{


class HXCPP_CLASS_ATTRIBUTES FlxPathDirection_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxPathDirection_Impl__obj OBJ_;
		FlxPathDirection_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7a288f52 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.path._FlxBasePath.FlxPathDirection_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.path._FlxBasePath.FlxPathDirection_Impl_"); }

		inline static ::hx::ObjectPtr< FlxPathDirection_Impl__obj > __new() {
			::hx::ObjectPtr< FlxPathDirection_Impl__obj > __this = new FlxPathDirection_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxPathDirection_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxPathDirection_Impl__obj *__this = (FlxPathDirection_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxPathDirection_Impl__obj), false, "flixel.path._FlxBasePath.FlxPathDirection_Impl_"));
			*(void **)__this = FlxPathDirection_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxPathDirection_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxPathDirection_Impl_",c8,d2,77,4f); }

		static void __boot();
		static bool FORWARD;
		static bool BACKWARD;
		static int toInt(bool this1);
		static ::Dynamic toInt_dyn();

};

} // end namespace flixel
} // end namespace path
} // end namespace _FlxBasePath

#endif /* INCLUDED_flixel_path__FlxBasePath_FlxPathDirection_Impl_ */ 

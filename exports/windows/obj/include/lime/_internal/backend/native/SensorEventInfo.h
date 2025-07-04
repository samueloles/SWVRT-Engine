// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime__internal_backend_native_SensorEventInfo
#define INCLUDED_lime__internal_backend_native_SensorEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_60e5fd49cce3a06e_853_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,SensorEventInfo)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES SensorEventInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SensorEventInfo_obj OBJ_;
		SensorEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x3e27670a };

		void __construct( ::Dynamic type,::hx::Null< int >  __o_id,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.backend.native.SensorEventInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.backend.native.SensorEventInfo"); }

		inline static ::hx::ObjectPtr< SensorEventInfo_obj > __new( ::Dynamic type,::hx::Null< int >  __o_id,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z) {
			::hx::ObjectPtr< SensorEventInfo_obj > __this = new SensorEventInfo_obj();
			__this->__construct(type,__o_id,__o_x,__o_y,__o_z);
			return __this;
		}

		inline static ::hx::ObjectPtr< SensorEventInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type,::hx::Null< int >  __o_id,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z) {
			SensorEventInfo_obj *__this = (SensorEventInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SensorEventInfo_obj), false, "lime._internal.backend.native.SensorEventInfo"));
			*(void **)__this = SensorEventInfo_obj::_hx_vtable;
{
            		int id = __o_id.Default(0);
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float z = __o_z.Default(0);
            	HX_STACKFRAME(&_hx_pos_60e5fd49cce3a06e_853_new)
HXLINE( 854)		( ( ::lime::_internal::backend::native::SensorEventInfo)(__this) )->type = ( (int)(type) );
HXLINE( 855)		( ( ::lime::_internal::backend::native::SensorEventInfo)(__this) )->id = id;
HXLINE( 856)		( ( ::lime::_internal::backend::native::SensorEventInfo)(__this) )->x = x;
HXLINE( 857)		( ( ::lime::_internal::backend::native::SensorEventInfo)(__this) )->y = y;
HXLINE( 858)		( ( ::lime::_internal::backend::native::SensorEventInfo)(__this) )->z = z;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SensorEventInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SensorEventInfo",ee,df,df,b5); }

		int id;
		Float x;
		Float y;
		Float z;
		int type;
		 ::lime::_internal::backend::native::SensorEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_SensorEventInfo */ 

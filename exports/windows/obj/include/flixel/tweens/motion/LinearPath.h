// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#define INCLUDED_flixel_tweens_motion_LinearPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearPath)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES LinearPath_obj : public  ::flixel::tweens::motion::Motion_obj
{
	public:
		typedef  ::flixel::tweens::motion::Motion_obj super;
		typedef LinearPath_obj OBJ_;
		LinearPath_obj();

	public:
		enum { _hx_ClassId = 0x06fcf94c };

		void __construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.motion.LinearPath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tweens.motion.LinearPath"); }
		static ::hx::ObjectPtr< LinearPath_obj > __new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static ::hx::ObjectPtr< LinearPath_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LinearPath_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LinearPath",4a,be,3b,38); }

		Float distance;
		::Array< ::Dynamic> points;
		::Array< Float > _pointD;
		::Array< Float > _pointT;
		Float _speed;
		int _index;
		 ::flixel::math::FlxBasePoint _last;
		 ::flixel::math::FlxBasePoint _prevPoint;
		 ::flixel::math::FlxBasePoint _nextPoint;
		void destroy();

		 ::flixel::tweens::motion::LinearPath setMotion(Float DurationOrSpeed,::hx::Null< bool >  UseDuration);
		::Dynamic setMotion_dyn();

		 ::flixel::tweens::motion::LinearPath addPoint(::hx::Null< Float >  x,::hx::Null< Float >  y);
		::Dynamic addPoint_dyn();

		 ::flixel::math::FlxBasePoint getPoint(::hx::Null< int >  index);
		::Dynamic getPoint_dyn();

		 ::flixel::tweens::FlxTween start();

		void update(Float elapsed);

		void updatePath();
		::Dynamic updatePath_dyn();

};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_LinearPath */ 

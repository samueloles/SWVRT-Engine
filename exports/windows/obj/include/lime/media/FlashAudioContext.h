// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_media_FlashAudioContext
#define INCLUDED_lime_media_FlashAudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,media,AudioBuffer)
HX_DECLARE_CLASS2(lime,media,FlashAudioContext)

namespace lime{
namespace media{


class HXCPP_CLASS_ATTRIBUTES FlashAudioContext_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlashAudioContext_obj OBJ_;
		FlashAudioContext_obj();

	public:
		enum { _hx_ClassId = 0x285b571a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.media.FlashAudioContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.media.FlashAudioContext"); }
		static ::hx::ObjectPtr< FlashAudioContext_obj > __new();
		static ::hx::ObjectPtr< FlashAudioContext_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlashAudioContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlashAudioContext",69,b5,68,01); }

		 ::lime::media::AudioBuffer createBuffer( ::Dynamic stream, ::Dynamic context);
		::Dynamic createBuffer_dyn();

		int getBytesLoaded( ::lime::media::AudioBuffer buffer);
		::Dynamic getBytesLoaded_dyn();

		int getBytesTotal( ::lime::media::AudioBuffer buffer);
		::Dynamic getBytesTotal_dyn();

		 ::Dynamic getID3( ::lime::media::AudioBuffer buffer);
		::Dynamic getID3_dyn();

		bool getIsBuffering( ::lime::media::AudioBuffer buffer);
		::Dynamic getIsBuffering_dyn();

		bool getIsURLInaccessible( ::lime::media::AudioBuffer buffer);
		::Dynamic getIsURLInaccessible_dyn();

		Float getLength( ::lime::media::AudioBuffer buffer);
		::Dynamic getLength_dyn();

		::String getURL( ::lime::media::AudioBuffer buffer);
		::Dynamic getURL_dyn();

		void close( ::lime::media::AudioBuffer buffer);
		::Dynamic close_dyn();

		Float extract( ::lime::media::AudioBuffer buffer, ::Dynamic target,Float length,::hx::Null< Float >  startPosition);
		::Dynamic extract_dyn();

		void load( ::lime::media::AudioBuffer buffer, ::Dynamic stream, ::Dynamic context);
		::Dynamic load_dyn();

		void loadCompressedDataFromByteArray( ::lime::media::AudioBuffer buffer, ::Dynamic bytes,int bytesLength);
		::Dynamic loadCompressedDataFromByteArray_dyn();

		void loadPCMFromByteArray( ::lime::media::AudioBuffer buffer, ::Dynamic bytes,int samples,::String format,::hx::Null< bool >  stereo,::hx::Null< Float >  sampleRate);
		::Dynamic loadPCMFromByteArray_dyn();

		 ::Dynamic play( ::lime::media::AudioBuffer buffer,::hx::Null< Float >  startTime,::hx::Null< int >  loops, ::Dynamic sndTransform);
		::Dynamic play_dyn();

};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_FlashAudioContext */ 

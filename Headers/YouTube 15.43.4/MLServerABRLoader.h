//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/HAMDataLoadTaskDelegate-Protocol.h>
#import <Module_Framework/MLServerABRUMPParserDelegate-Protocol.h>

@class HAMRangedURL, MLClientABRStateFiller, MLPlayerItemEventCenter, MLServerABRSampleBufferSource, MLViewportSize, NSArray, NSString;
@protocol HAMClock, HAMDataLoadTask, HAMDataLoader, HAMNetworkStatsProvider, MLServerABRLoaderDelegate, OS_dispatch_queue;

@interface MLServerABRLoader : NSObject <HAMDataLoadTaskDelegate, MLServerABRUMPParserDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <HAMDataLoader> _dataLoader;
    MLPlayerItemEventCenter *_playerItemEventCenter;
    id <HAMClock> _clock;
    id <HAMNetworkStatsProvider> _networkStatsProvider;
    MLClientABRStateFiller *_clientABRStateFiller;
    id <MLServerABRLoaderDelegate> _delegate;
    NSArray *_allFormats;
    NSArray *_audioFormats;
    NSArray *_videoFormats;
    CDStruct_1b6d18a9 _playerTime;
    MLViewportSize *_viewportSize;
    HAMRangedURL *_URL;
    // Error parsing type: {VideoPlaybackAbrRequestProto="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadata="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"{__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >="__a_value"Ai}}}"initialization_format_ids_"{WeakRepeatedPtrField<video_streaming::FormatID>=""(?="weak"{RepeatedPtrField<video_streaming::FormatID>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}})}"buffered_ranges_"{WeakRepeatedPtrField<video_streaming::BufferedRange>=""(?="weak"{RepeatedPtrField<video_streaming::BufferedRange>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}})}"selected_audio_format_ids_"{WeakRepeatedPtrField<video_streaming::FormatID>=""(?="weak"{RepeatedPtrField<video_streaming::FormatID>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}})}"selected_video_format_ids_"{WeakRepeatedPtrField<video_streaming::FormatID>=""(?="weak"{RepeatedPtrField<video_streaming::FormatID>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}})}"selected_caption_format_ids_"{WeakRepeatedPtrField<video_streaming::FormatID>=""(?="weak"{RepeatedPtrField<video_streaming::FormatID>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}})}"video_playback_ustreamer_config_"{ArenaStringPtr="tagged_ptr_"{TaggedPtr<std::__1::basic_string<char> >="ptr_"^v}}"client_abr_state_"^{MessageLite}}, name: _baseRequestProto
    MLServerABRSampleBufferSource *_audioSampleBufferSource;
    MLServerABRSampleBufferSource *_videoSampleBufferSource;
    id <HAMDataLoadTask> _currentTask;
    struct unique_ptr<youtube::media::ServerABRUMPParser, std::__1::default_delete<youtube::media::ServerABRUMPParser>> _parser;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onChunkComplete:(id)arg1;
-     // Error parsing type: @24@0:8r^{MediaHeader=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}iIQqBiq{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}q}16, name: formatForMediaHeader:
- (_Bool)dataLoadTask:(id)arg1 shouldFollowRedirectWithResponse:(id)arg2 toURL:(id)arg3;
- (void)dataLoadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveData:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)terminate;
- (void)setVideoFormatConstraint:(id)arg1;
- (void)setAudioFormatConstraint:(id)arg1;
- (void)setViewportSize:(id)arg1;
- (void)setPlayerTime:(CDStruct_1b6d18a9)arg1;
- (void)addSampleBufferSource:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 dataLoader:(id)arg2 playerEventCenter:(id)arg3 playerItemEventCenter:(id)arg4 streamingData:(id)arg5 ustreamerRequestConfig:(id)arg6 delegate:(id)arg7;
- (void)onInitializationDataAvailableForFormat:(id)arg1;
- (void)continueLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


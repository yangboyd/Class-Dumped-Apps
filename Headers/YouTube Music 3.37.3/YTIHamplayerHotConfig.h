//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIHamplayerAudioEngineConfig, YTIHamplayerDataLoaderSupportedConfigs;

@interface YTIHamplayerHotConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool alwaysCreateTextTrackRenderer; // @dynamic alwaysCreateTextTrackRenderer;
@property(nonatomic) _Bool asyncDecode; // @dynamic asyncDecode;
@property(retain, nonatomic) YTIHamplayerAudioEngineConfig *audioEngineConfig; // @dynamic audioEngineConfig;
@property(retain, nonatomic) YTIHamplayerDataLoaderSupportedConfigs *dataLoaderConfig; // @dynamic dataLoaderConfig;
@property(nonatomic) int decodeMaxSampleCount; // @dynamic decodeMaxSampleCount;
@property(nonatomic) int decodeQosClass; // @dynamic decodeQosClass;
@property(nonatomic) int decodeQosRelativePriority; // @dynamic decodeQosRelativePriority;
@property(nonatomic) _Bool enableCuepointCollector; // @dynamic enableCuepointCollector;
@property(nonatomic) _Bool hasAlwaysCreateTextTrackRenderer; // @dynamic hasAlwaysCreateTextTrackRenderer;
@property(nonatomic) _Bool hasAsyncDecode; // @dynamic hasAsyncDecode;
@property(nonatomic) _Bool hasAudioEngineConfig; // @dynamic hasAudioEngineConfig;
@property(nonatomic) _Bool hasDataLoaderConfig; // @dynamic hasDataLoaderConfig;
@property(nonatomic) _Bool hasDecodeMaxSampleCount; // @dynamic hasDecodeMaxSampleCount;
@property(nonatomic) _Bool hasDecodeQosClass; // @dynamic hasDecodeQosClass;
@property(nonatomic) _Bool hasDecodeQosRelativePriority; // @dynamic hasDecodeQosRelativePriority;
@property(nonatomic) _Bool hasEnableCuepointCollector; // @dynamic hasEnableCuepointCollector;
@property(nonatomic) _Bool hasKeepSharedResources; // @dynamic hasKeepSharedResources;
@property(nonatomic) _Bool hasLibvpxDecodeThreads; // @dynamic hasLibvpxDecodeThreads;
@property(nonatomic) _Bool hasLibvpxLoopFilterOptimization; // @dynamic hasLibvpxLoopFilterOptimization;
@property(nonatomic) _Bool hasLibvpxRowThreading; // @dynamic hasLibvpxRowThreading;
@property(nonatomic) _Bool hasLibvpxSkipLoopFilter; // @dynamic hasLibvpxSkipLoopFilter;
@property(nonatomic) _Bool hasPreallocateSharedResources; // @dynamic hasPreallocateSharedResources;
@property(nonatomic) _Bool hasPrepareAudioEngine; // @dynamic hasPrepareAudioEngine;
@property(nonatomic) _Bool hasQosClass; // @dynamic hasQosClass;
@property(nonatomic) _Bool hasQosRelativePriority; // @dynamic hasQosRelativePriority;
@property(nonatomic) _Bool hasRenderViewType; // @dynamic hasRenderViewType;
@property(nonatomic) _Bool hasTrimAudioEncoderPadding; // @dynamic hasTrimAudioEncoderPadding;
@property(nonatomic) _Bool hasUseAudioSessionDelegate; // @dynamic hasUseAudioSessionDelegate;
@property(nonatomic) _Bool hasUseMultiNodesAudioRenderer; // @dynamic hasUseMultiNodesAudioRenderer;
@property(nonatomic) _Bool hasUseOpenglRenderView; // @dynamic hasUseOpenglRenderView;
@property(nonatomic) _Bool hasUsePresentDrawableMinimumDuration; // @dynamic hasUsePresentDrawableMinimumDuration;
@property(nonatomic) _Bool hasUseRenderViewType; // @dynamic hasUseRenderViewType;
@property(nonatomic) _Bool hasUseSbdlRenderView; // @dynamic hasUseSbdlRenderView;
@property(nonatomic) _Bool keepSharedResources; // @dynamic keepSharedResources;
@property(nonatomic) int libvpxDecodeThreads; // @dynamic libvpxDecodeThreads;
@property(nonatomic) _Bool libvpxLoopFilterOptimization; // @dynamic libvpxLoopFilterOptimization;
@property(nonatomic) _Bool libvpxRowThreading; // @dynamic libvpxRowThreading;
@property(nonatomic) _Bool libvpxSkipLoopFilter; // @dynamic libvpxSkipLoopFilter;
@property(nonatomic) _Bool preallocateSharedResources; // @dynamic preallocateSharedResources;
@property(nonatomic) _Bool prepareAudioEngine; // @dynamic prepareAudioEngine;
@property(nonatomic) int qosClass; // @dynamic qosClass;
@property(nonatomic) int qosRelativePriority; // @dynamic qosRelativePriority;
@property(nonatomic) int renderViewType; // @dynamic renderViewType;
@property(nonatomic) _Bool trimAudioEncoderPadding; // @dynamic trimAudioEncoderPadding;
@property(nonatomic) _Bool useAudioSessionDelegate; // @dynamic useAudioSessionDelegate;
@property(nonatomic) _Bool useMultiNodesAudioRenderer; // @dynamic useMultiNodesAudioRenderer;
@property(nonatomic) _Bool useOpenglRenderView; // @dynamic useOpenglRenderView;
@property(nonatomic) _Bool usePresentDrawableMinimumDuration; // @dynamic usePresentDrawableMinimumDuration;
@property(nonatomic) _Bool useRenderViewType; // @dynamic useRenderViewType;
@property(nonatomic) _Bool useSbdlRenderView; // @dynamic useSbdlRenderView;

@end


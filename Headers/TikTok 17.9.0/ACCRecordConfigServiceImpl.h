//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCRecordConfigService-Protocol.h"

@class AWEVideoPublishViewModel, NSHashTable, NSString;
@protocol ACCVideoConfigProtocol;

@interface ACCRecordConfigServiceImpl : NSObject <ACCRecordConfigService>
{
    _Bool _hasCameraAuth;
    AWEVideoPublishViewModel *_publishModel;
    NSHashTable *_durationHandlers;
    NSHashTable *_audioHandlers;
    NSHashTable *_videoFragmentHandlers;
    id <ACCVideoConfigProtocol> _videoConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ACCVideoConfigProtocol> videoConfig; // @synthesize videoConfig=_videoConfig;
@property(nonatomic) _Bool hasCameraAuth; // @synthesize hasCameraAuth=_hasCameraAuth;
@property(retain, nonatomic) NSHashTable *videoFragmentHandlers; // @synthesize videoFragmentHandlers=_videoFragmentHandlers;
@property(retain, nonatomic) NSHashTable *audioHandlers; // @synthesize audioHandlers=_audioHandlers;
@property(retain, nonatomic) NSHashTable *durationHandlers; // @synthesize durationHandlers=_durationHandlers;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishModel; // @synthesize publishModel=_publishModel;
- (void)configVideoFragmentInfo;
- (void)recordAudioRelatedInfo;
- (void)configFinishPublishModel;
- (void)configBgmAsset;
- (void)configPublishModelPhaseInfo;
- (void)createVideoDataIfNeeded;
- (void)registVideoFragmentHandler:(id)arg1;
- (void)registAudioHandler:(id)arg1;
- (void)registDurationHandler:(id)arg1;
- (void)configRecordingMultiSegmentMaximumResolutionLimit;
- (void)configPublishModelMaxDurationWithAsset:(id)arg1 showRecordLengthTipBlock:(_Bool)arg2 isFirstEmbed:(_Bool)arg3;
- (void)configPublishModelMaxDurationAfterCameraSetMusic;
- (void)configAudioWithCompletion:(CDUnknownBlockType)arg1;
- (double)videoMaxDuration;
- (void)setupInitialConfig;
- (id)initWithPublishModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


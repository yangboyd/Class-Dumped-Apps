//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAdQualityManager, NSNumber, NSString, UIView;

@interface FBAdVideoLogger : NSObject
{
    _Bool _autoplay;
    _Bool _hasLoggedIABImpression;
    _Bool _seeking;
    UIView *_targetView;
    FBAdQualityManager *_adQualityManager;
    NSString *_inlineClientToken;
    double _lastProgressBoundaryTime;
    double _lastProgressCurrentTime;
    CDUnknownBlockType _targetVolumeBlock;
    CDUnknownBlockType _viewableImpressionBlock;
    NSNumber *_cardIndex;
    NSNumber *_cardCount;
}

@property(retain, nonatomic) NSNumber *cardCount; // @synthesize cardCount=_cardCount;
@property(retain, nonatomic) NSNumber *cardIndex; // @synthesize cardIndex=_cardIndex;
@property(copy, nonatomic) CDUnknownBlockType viewableImpressionBlock; // @synthesize viewableImpressionBlock=_viewableImpressionBlock;
@property(copy, nonatomic) CDUnknownBlockType targetVolumeBlock; // @synthesize targetVolumeBlock=_targetVolumeBlock;
@property(nonatomic) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic) double lastProgressCurrentTime; // @synthesize lastProgressCurrentTime=_lastProgressCurrentTime;
@property(nonatomic) double lastProgressBoundaryTime; // @synthesize lastProgressBoundaryTime=_lastProgressBoundaryTime;
@property(copy, nonatomic) NSString *inlineClientToken; // @synthesize inlineClientToken=_inlineClientToken;
@property(nonatomic) _Bool hasLoggedIABImpression; // @synthesize hasLoggedIABImpression=_hasLoggedIABImpression;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(readonly, nonatomic) FBAdQualityManager *adQualityManager; // @synthesize adQualityManager=_adQualityManager;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
- (void).cxx_destruct;
- (id)extraDataForVideoFunnelLogging:(CDStruct_1b6d18a9)arg1;
- (float)effectiveVolume;
- (void)registerProgress:(CDStruct_1b6d18a9)arg1 forceLog:(_Bool)arg2;
- (void)onViewableImpressionRuleCallback:(_Bool)arg1 passed:(_Bool)arg2;
- (void)onMRCRuleCallback:(_Bool)arg1 passed:(_Bool)arg2;
- (void)logVideoTime;
- (void)logVideoEventForAction:(long long)arg1;
- (void)logVideoEvent:(id)arg1;
- (void)logProgress;
- (void)flush:(CDStruct_1b6d18a9)arg1 isContinuous:(_Bool)arg2;
- (void)registerStop:(CDStruct_1b6d18a9)arg1;
- (void)registerSkip:(CDStruct_1b6d18a9)arg1;
- (void)registerSeekStart:(CDStruct_1b6d18a9)arg1;
- (void)registerSeekEnd:(CDStruct_1b6d18a9)arg1;
- (void)registerResume:(CDStruct_1b6d18a9)arg1;
- (void)registerProgress:(CDStruct_1b6d18a9)arg1;
- (void)registerPause:(CDStruct_1b6d18a9)arg1;
- (void)registerComplete:(CDStruct_1b6d18a9)arg1;
- (void)initializeWithTargetView:(id)arg1;
- (id)initWithTargetView:(id)arg1 inlineClientToken:(id)arg2 viewableImpressionBlock:(CDUnknownBlockType)arg3 targetVolumeBlock:(CDUnknownBlockType)arg4 autoplay:(_Bool)arg5 cardIndex:(id)arg6 cardCount:(id)arg7;
- (id)initWithTargetView:(id)arg1 inlineClientToken:(id)arg2 targetVolumeBlock:(CDUnknownBlockType)arg3 autoplay:(_Bool)arg4;

@end


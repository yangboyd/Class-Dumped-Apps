//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRMetricAppStateInfo, CHRMetricHandoffInfo, CHRMetricIntentDetectorInfo, CHRMetricPrivacyScreenInfo, CHRMetricSiriInfo;

@interface CHRMetricAdditionalInfo : NSObject
{
    CHRMetricAppStateInfo *_appStateInfo;
    CHRMetricHandoffInfo *_handoffInfo;
    CHRMetricPrivacyScreenInfo *_privacyScreenInfo;
    CHRMetricSiriInfo *_siriInfo;
    CHRMetricIntentDetectorInfo *_intentDetectorInfo;
}

@property(readonly, nonatomic) CHRMetricIntentDetectorInfo *intentDetectorInfo; // @synthesize intentDetectorInfo=_intentDetectorInfo;
@property(readonly, nonatomic) CHRMetricSiriInfo *siriInfo; // @synthesize siriInfo=_siriInfo;
@property(readonly, nonatomic) CHRMetricPrivacyScreenInfo *privacyScreenInfo; // @synthesize privacyScreenInfo=_privacyScreenInfo;
@property(readonly, nonatomic) CHRMetricHandoffInfo *handoffInfo; // @synthesize handoffInfo=_handoffInfo;
@property(readonly, nonatomic) CHRMetricAppStateInfo *appStateInfo; // @synthesize appStateInfo=_appStateInfo;
- (void).cxx_destruct;
- (id)initWithAppStateInfo:(id)arg1 handoffInfo:(id)arg2 siriInfo:(id)arg3 intentDetectorInfo:(id)arg4 privacyScreenInfo:(id)arg5;

@end


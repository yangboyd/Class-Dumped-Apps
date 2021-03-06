//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLVideoFormatConstraint-Protocol.h>

@class MLUserFeaturesSnapshot, NSString;
@protocol YTReachabilityController;

@interface MLPersistentVideoQualitySettingFormatConstraint : NSObject <MLVideoFormatConstraint>
{
    id <YTReachabilityController> _reachability;
    MLUserFeaturesSnapshot *_userFeaturesSnapshot;
    int _resolutionCap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int videoQualitySetting;
@property(readonly, nonatomic) long long formatSelectionReason;
- (id)filterFormats:(id)arg1;
@property(readonly, nonatomic) _Bool disableTrack;
- (id)initWithReachability:(id)arg1 userFeaturesSnapshot:(id)arg2 resolutionCap:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


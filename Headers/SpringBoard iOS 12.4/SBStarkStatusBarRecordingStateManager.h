//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBStarkStatusBarRecordingStateProviding.h"

@class AVSystemController, NSString, SBApplicationController;

@interface SBStarkStatusBarRecordingStateManager : NSObject <SBStarkStatusBarRecordingStateProviding>
{
    id <SBStarkSessionConfiguring> _configuration;
    NSString *_activeBundleIdentifier;
    SBApplicationController *_applicationController;
    AVSystemController *_avSystemController;
}

- (void).cxx_destruct;
- (_Bool)shouldShowRecordingItem;
- (id)recordingApplication;
- (void)setActiveBundleIdentifier:(id)arg1;
- (id)initWithConfiguration:(id)arg1 applicationController:(id)arg2 avSystemController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


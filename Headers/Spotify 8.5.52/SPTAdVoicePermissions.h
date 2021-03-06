//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAdFeatureFlagChecks;
@protocol SPTLinkDispatcher, SPTLocalSettings;

@interface SPTAdVoicePermissions : NSObject
{
    id <SPTLocalSettings> _localSettings;
    SPTAdFeatureFlagChecks *_featureFlagChecker;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTAdFeatureFlagChecks *featureFlagChecker; // @synthesize featureFlagChecker=_featureFlagChecker;
@property(nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)handleDeepLinkURL:(id)arg1;
- (void)requestRecordPermissionIfNeeded;
- (_Bool)isVoiceAdPreferenceAllowed;
- (_Bool)isRecordingAllowed;
@property(readonly, nonatomic, getter=isVoiceAdAllowed) _Bool voiceAdAllowed;
- (id)initWithLocalSettings:(id)arg1 featureFlagChecker:(id)arg2 linkDispatcher:(id)arg3;

@end


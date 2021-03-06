//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAssistantHandoff-Protocol.h"
#import "HMEAssistantSpeakerID-Protocol.h"
#import "NSObject-Protocol.h"

@class NSURL, NSUserActivity, UIViewController;

@protocol HMEAssistantSettings <NSObject, HMEAssistantSpeakerID, HMEAssistantHandoff>
@property(readonly, nonatomic) int versionNumber;
- (void)checkUDCConsentWithPresentingViewController:(UIViewController *)arg1 completion:(void (^)(_Bool))arg2;
- (void)fetchSupportedLocalesForDeviceType:(long long)arg1 completion:(void (^)(NSArray *))arg2;
- (_Bool)handleContinueUserActivity:(NSUserActivity *)arg1;
- (_Bool)openURL:(NSURL *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2 presentingViewController:(UIViewController *)arg3;
- (_Bool)openURL:(NSURL *)arg1;
- (void)requestViewControllerForURL:(NSURL *)arg1 callback:(void (^)(UIViewController *, NSError *))arg2;
- (_Bool)isHotwordSensitivitySettingEnabled;
- (_Bool)canOpenURL:(NSURL *)arg1;
- (_Bool)isAssistantSettingsURL:(NSURL *)arg1;
@end


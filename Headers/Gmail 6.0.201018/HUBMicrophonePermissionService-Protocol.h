//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise, NSString, PHSChannel;
@protocol HUBPermissionsPrompt;

@protocol HUBMicrophonePermissionService <NSObject>
- (void)subscribeToMicrophonePermissionChange:(PHSChannel *)arg1;
- (GPCPromise *)requestMicrophonePermissionWithPrompt:(id <HUBPermissionsPrompt>)arg1 settingsPromptMessage:(NSString *)arg2 settingsPromptTitle:(NSString *)arg3;
- (GPCPromise *)requestMicrophonePermissionWithPrompt:(id <HUBPermissionsPrompt>)arg1 suppressSettingsDialog:(_Bool)arg2;
- (GPCPromise *)requestMicrophonePermissionWithPrompt:(id <HUBPermissionsPrompt>)arg1;
- (long long)microphonePermissionStatus;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIPhotosSharedLibrarySettingChange_SharedLibraryOptions, ARIPhotosSharedLibrarySettingChange_StopSharingLibraryOptions, ARITwoStateSettingValue;

@interface ARIPhotosSharedLibrarySettingChange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNewValue; // @dynamic hasNewValue;
@property(nonatomic) _Bool hasSharedLibrariesOptions; // @dynamic hasSharedLibrariesOptions;
@property(nonatomic) _Bool hasStopSharingLibraryOptions; // @dynamic hasStopSharingLibraryOptions;
@property(retain, nonatomic) ARITwoStateSettingValue *newValue; // @dynamic newValue;
@property(retain, nonatomic) ARIPhotosSharedLibrarySettingChange_SharedLibraryOptions *sharedLibrariesOptions; // @dynamic sharedLibrariesOptions;
@property(retain, nonatomic) ARIPhotosSharedLibrarySettingChange_StopSharingLibraryOptions *stopSharingLibraryOptions; // @dynamic stopSharingLibraryOptions;

@end


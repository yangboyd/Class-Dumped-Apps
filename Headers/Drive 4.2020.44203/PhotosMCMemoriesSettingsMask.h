//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCMemoriesSettingsMask_CreationSettingsMask, PhotosMCMemoriesSettingsMask_MemoryTypeSettingsMask;

@interface PhotosMCMemoriesSettingsMask : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCMemoriesSettingsMask_CreationSettingsMask *creationSettings; // @dynamic creationSettings;
@property(nonatomic) _Bool hasCreationSettings; // @dynamic hasCreationSettings;
@property(nonatomic) _Bool hasMemoryTypeSettings; // @dynamic hasMemoryTypeSettings;
@property(retain, nonatomic) PhotosMCMemoriesSettingsMask_MemoryTypeSettingsMask *memoryTypeSettings; // @dynamic memoryTypeSettings;

@end


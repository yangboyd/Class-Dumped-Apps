//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIAndroidGeneralComplexTextDetails, ARIAndroidTextDetails, NSMutableArray;

@interface ARIPhotosAndroidAutobackupSheetTextDetails_BackupOptionsTextDetails_QualityOptionsTextDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *descriptionTextArray; // @dynamic descriptionTextArray;
@property(readonly, nonatomic) unsigned long long descriptionTextArray_Count; // @dynamic descriptionTextArray_Count;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(retain, nonatomic) ARIAndroidGeneralComplexTextDetails *qualityOptionSubtitleText; // @dynamic qualityOptionSubtitleText;
@property(retain, nonatomic) ARIAndroidTextDetails *subtitleText; // @dynamic subtitleText;
@property(readonly, nonatomic) int subtitleTextOneofOneOfCase; // @dynamic subtitleTextOneofOneOfCase;
@property(retain, nonatomic) ARIAndroidGeneralComplexTextDetails *titleText; // @dynamic titleText;

@end


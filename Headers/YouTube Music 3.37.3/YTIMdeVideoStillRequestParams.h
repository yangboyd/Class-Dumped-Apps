//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICustomThumbnailImage;

@interface YTIMdeVideoStillRequestParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasNewStillId; // @dynamic hasNewStillId;
@property(nonatomic) _Bool hasOperation; // @dynamic hasOperation;
@property(retain, nonatomic) YTICustomThumbnailImage *image; // @dynamic image;
@property(nonatomic) int newStillId; // @dynamic newStillId;
@property(nonatomic) int operation; // @dynamic operation;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIKidsCuratorOption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *approvalItemsArray; // @dynamic approvalItemsArray;
@property(readonly, nonatomic) unsigned long long approvalItemsArray_Count; // @dynamic approvalItemsArray_Count;
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(copy, nonatomic) NSString *curatorId; // @dynamic curatorId;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasCuratorId; // @dynamic hasCuratorId;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasNavigateCommand; // @dynamic hasNavigateCommand;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(retain, nonatomic) YTIFormattedString *name; // @dynamic name;
@property(retain, nonatomic) YTICommand *navigateCommand; // @dynamic navigateCommand;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;

@end


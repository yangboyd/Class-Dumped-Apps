//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString;

@interface YTIFeedEntryActionMenuItemData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *commentAction; // @dynamic commentAction;
@property(nonatomic) _Bool hasCommentAction; // @dynamic hasCommentAction;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIIcon;

@interface YTICommentReplyFormRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *collapsedTopLevelReplyButtonLabel; // @dynamic collapsedTopLevelReplyButtonLabel;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(retain, nonatomic) YTIFormattedString *expandedTopLevelReplyButtonLabel; // @dynamic expandedTopLevelReplyButtonLabel;
@property(nonatomic) _Bool hasCollapsedTopLevelReplyButtonLabel; // @dynamic hasCollapsedTopLevelReplyButtonLabel;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasExpandedTopLevelReplyButtonLabel; // @dynamic hasExpandedTopLevelReplyButtonLabel;
@property(nonatomic) _Bool hasInitialReplyText; // @dynamic hasInitialReplyText;
@property(nonatomic) _Bool hasPrivacyIcon; // @dynamic hasPrivacyIcon;
@property(nonatomic) _Bool hasPrivacyLabel; // @dynamic hasPrivacyLabel;
@property(nonatomic) _Bool hasReplyFormHeader; // @dynamic hasReplyFormHeader;
@property(nonatomic) _Bool hasReplyHint; // @dynamic hasReplyHint;
@property(retain, nonatomic) YTIFormattedString *initialReplyText; // @dynamic initialReplyText;
@property(retain, nonatomic) YTIIcon *privacyIcon; // @dynamic privacyIcon;
@property(retain, nonatomic) YTIFormattedString *privacyLabel; // @dynamic privacyLabel;
@property(retain, nonatomic) YTIFormattedString *replyFormHeader; // @dynamic replyFormHeader;
@property(retain, nonatomic) YTIFormattedString *replyHint; // @dynamic replyHint;

@end


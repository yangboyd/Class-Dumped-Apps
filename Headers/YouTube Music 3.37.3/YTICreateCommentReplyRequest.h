//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIBackstageImageAttachment, YTIBackstageLightweightVideoAttachment, YTIInnerTubeContext;

@interface YTICreateCommentReplyRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int attachmentOneOfCase; // @dynamic attachmentOneOfCase;
@property(copy, nonatomic) NSString *botguardResponse; // @dynamic botguardResponse;
@property(copy, nonatomic) NSString *commentText; // @dynamic commentText;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *createReplyParams; // @dynamic createReplyParams;
@property(nonatomic) _Bool hasBotguardResponse; // @dynamic hasBotguardResponse;
@property(nonatomic) _Bool hasCommentText; // @dynamic hasCommentText;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasCreateReplyParams; // @dynamic hasCreateReplyParams;
@property(nonatomic) _Bool hasParentCommentId; // @dynamic hasParentCommentId;
@property(retain, nonatomic) YTIBackstageImageAttachment *imageAttachment; // @dynamic imageAttachment;
@property(retain, nonatomic) YTIBackstageLightweightVideoAttachment *lightweightVideoAttachment; // @dynamic lightweightVideoAttachment;
@property(copy, nonatomic) NSString *parentCommentId; // @dynamic parentCommentId;

@end


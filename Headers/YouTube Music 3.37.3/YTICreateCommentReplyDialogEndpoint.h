//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommentActionConfirmDialogSupportedRenderers, YTICommentReplyDialogSupportedRenderers;

@interface YTICreateCommentReplyDialogEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommentActionConfirmDialogSupportedRenderers *commentWithoutVoteDialog; // @dynamic commentWithoutVoteDialog;
@property(retain, nonatomic) YTICommentReplyDialogSupportedRenderers *dialog; // @dynamic dialog;
@property(nonatomic) _Bool hasCommentWithoutVoteDialog; // @dynamic hasCommentWithoutVoteDialog;
@property(nonatomic) _Bool hasDialog; // @dynamic hasDialog;
@property(nonatomic) _Bool hasNoMoreCommentDialog; // @dynamic hasNoMoreCommentDialog;
@property(nonatomic) _Bool hasOpenInPersistentCommentBox; // @dynamic hasOpenInPersistentCommentBox;
@property(retain, nonatomic) YTICommentActionConfirmDialogSupportedRenderers *noMoreCommentDialog; // @dynamic noMoreCommentDialog;
@property(nonatomic) _Bool openInPersistentCommentBox; // @dynamic openInPersistentCommentBox;

@end


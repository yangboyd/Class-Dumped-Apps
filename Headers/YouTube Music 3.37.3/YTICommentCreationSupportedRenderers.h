//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIBackstagePostDialogRenderer, YTICommentSimpleboxRenderer, YTIFormattedString, YTIPostCreationDialogElementRenderer, YTIThumbnailDetails;

@interface YTICommentCreationSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;
- (id)createPostViewControllerWithParentResponder:(id)arg1 fromView:(id)arg2 gimme:(id)arg3;
@property(readonly, nonatomic) YTIFormattedString *placeholderText;
@property(readonly, nonatomic) YTIThumbnailDetails *authorThumbnail;
@property(readonly, nonatomic) id creationRenderer;
@property(readonly, nonatomic) _Bool hasCreationRenderer;
@property(readonly, nonatomic, getter=isForComment) _Bool forComment;
@property(readonly, nonatomic, getter=isForPost) _Bool forPost;

// Remaining properties
@property(retain, nonatomic) YTIBackstagePostDialogRenderer *backstagePostDialogRenderer; // @dynamic backstagePostDialogRenderer;
@property(retain, nonatomic) YTICommentSimpleboxRenderer *commentSimpleboxRenderer; // @dynamic commentSimpleboxRenderer;
@property(nonatomic) _Bool hasBackstagePostDialogRenderer; // @dynamic hasBackstagePostDialogRenderer;
@property(nonatomic) _Bool hasCommentSimpleboxRenderer; // @dynamic hasCommentSimpleboxRenderer;
@property(nonatomic) _Bool hasPostCreationDialogElementRenderer; // @dynamic hasPostCreationDialogElementRenderer;
@property(retain, nonatomic) YTIPostCreationDialogElementRenderer *postCreationDialogElementRenderer; // @dynamic postCreationDialogElementRenderer;

@end


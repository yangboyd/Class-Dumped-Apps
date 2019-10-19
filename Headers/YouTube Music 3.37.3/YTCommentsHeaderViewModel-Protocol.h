//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTICommand, YTICommentCreationSupportedRenderers, YTIFormattedString, YTISortFilterSubMenuRenderer;

@protocol YTCommentsHeaderViewModel <NSObject>
@property(readonly, nonatomic) YTIFormattedString *redOnlyCommentingText;
@property(readonly, nonatomic) YTIFormattedString *commentsCountText;
@property(readonly, nonatomic) YTIFormattedString *commentTitleText;
@property(readonly, nonatomic) YTISortFilterSubMenuRenderer *sortMenuRenderer;
@property(retain, nonatomic) YTICommand *createBackstagePostDialogCommand;
@property(readonly, nonatomic) YTICommand *openPersistentCommentBoxCommand;
@property(readonly, nonatomic) YTICommentCreationSupportedRenderers *createCommentRenderer;
@property(readonly, nonatomic) _Bool shouldShowSeparator;
@property(readonly, nonatomic) _Bool showCreateDialog;
@property(readonly, nonatomic) _Bool shouldHideSimplebox;
@property(readonly, nonatomic) _Bool hasRedOnlyCommentingText;
@property(readonly, nonatomic) _Bool hasCommentsCountText;
@property(readonly, nonatomic) _Bool hasCommentTitleText;
@property(readonly, nonatomic) _Bool hasSortMenuRenderer;
@property(readonly, nonatomic) _Bool useSmallUserThumbnail;
@end


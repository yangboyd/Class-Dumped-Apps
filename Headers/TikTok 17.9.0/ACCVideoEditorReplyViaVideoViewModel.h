//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCEditViewModel.h"

@class AWECommentBubbleModel;

@interface ACCVideoEditorReplyViaVideoViewModel : ACCEditViewModel
{
    _Bool _shouldCleanPlayerForReplyViaVideo;
    AWECommentBubbleModel *_bubbleModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCleanPlayerForReplyViaVideo; // @synthesize shouldCleanPlayerForReplyViaVideo=_shouldCleanPlayerForReplyViaVideo;
@property(retain, nonatomic) AWECommentBubbleModel *bubbleModel; // @synthesize bubbleModel=_bubbleModel;
- (void)onCleared;
- (void)resetCommentSticker;
- (_Bool)hasBubble;
- (void)loadModelFromRepo;
- (id)init;

@end


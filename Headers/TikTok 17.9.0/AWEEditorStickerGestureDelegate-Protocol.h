//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEVideoPublishViewModel, UIButton, UIView;

@protocol AWEEditorStickerGestureDelegate <NSObject>
- (void)editorSticker:(UIView *)arg1 clickedDeleteButton:(UIButton *)arg2;

@optional
- (AWEVideoPublishViewModel *)publishModel;
- (void)resignActiveFinished;
- (void)editorSticker:(UIView *)arg1 clickedTextEditButton:(UIButton *)arg2;
- (void)editorSticker:(UIView *)arg1 clickedPinStickerButton:(UIButton *)arg2;
- (void)editorSticker:(UIView *)arg1 clickedSelectTimeButton:(UIButton *)arg2;
@end


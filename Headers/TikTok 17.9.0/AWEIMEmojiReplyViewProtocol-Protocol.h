//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEIMMessage, UIButton;

@protocol AWEIMEmojiReplyViewProtocol <NSObject>
@property(nonatomic) _Bool shouldShowGuideTip;
@property(nonatomic) _Bool shouldShowLoveBtn;
@property(nonatomic) struct CGRect bubbleFrame;
@property(copy, nonatomic) CDUnknownBlockType refreshBlock;
@property(copy, nonatomic) CDUnknownBlockType loveBtnClickBlock;
@property(retain, nonatomic) UIButton *loveBtn;
- (void)configWithMessage:(AWEIMMessage *)arg1;
@end


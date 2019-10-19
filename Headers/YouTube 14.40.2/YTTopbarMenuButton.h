//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTQTMButton.h"

@class UILongPressGestureRecognizer, UIView, YTITopbarMenuButtonRenderer, YTImageView;

@interface YTTopbarMenuButton : YTQTMButton
{
    YTITopbarMenuButtonRenderer *_renderer;
    YTImageView *_iconImageView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIView *_activityDot;
    YTImageView *_avatarImageView;
}

+ (id)button;
@property(readonly, nonatomic) YTImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (double)activityDotPadding;
- (void)dealloc;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)setAccountButtonNotificationDotVisible:(_Bool)arg1;
- (void)setRenderer:(id)arg1;
- (void)layoutSubviews;

@end


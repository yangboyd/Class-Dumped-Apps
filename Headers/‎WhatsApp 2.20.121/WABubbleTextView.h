//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol WABubbleTextViewDelegate;

@interface WABubbleTextView : UIView
{
    UILabel *_textLabel;
    UIButton *_actionButton;
    _Bool _fadingIn;
    _Bool _fadingOut;
    id <WABubbleTextViewDelegate> _delegate;
    NSString *_accessibilityAnnouncementText;
    unsigned long long _action;
    double _fontSize;
    double _animationDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *accessibilityAnnouncementText; // @synthesize accessibilityAnnouncementText=_accessibilityAnnouncementText;
@property(nonatomic) __weak id <WABubbleTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isAccessibilityElement;
@property(copy, nonatomic) NSString *text;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isVisible) _Bool visible;
- (void)announceAccessibility;
- (void)dismissTooltip;
- (void)actionButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, IGTextButton, NSString;

@interface IGFeedUpcomingEventBottomButtonsView : UIView
{
    IGTextButton *_button;
    CDUnknownBlockType _buttonHandler;
    NSString *_primaryButtonTitle;
    NSString *_secondaryButtonTitle;
    IGCoreTextView *_footerTextView;
    _Bool _isLoading;
    _Bool _isEnabled;
    unsigned long long _activeButtonType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long activeButtonType; // @synthesize activeButtonType=_activeButtonType;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (double)_contentWidthForMaxWidth:(double)arg1;
- (void)dockToBottomOfHostView:(id)arg1 shouldConsiderSafeInsets:(_Bool)arg2;
- (void)_buttonTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithPrimaryButtonTitle:(id)arg1 secondaryButtonTitle:(id)arg2 footerText:(id)arg3 initialButtonType:(unsigned long long)arg4 buttonHandler:(CDUnknownBlockType)arg5;

@end


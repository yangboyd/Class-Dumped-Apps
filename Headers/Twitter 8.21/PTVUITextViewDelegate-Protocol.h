//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/UITextViewDelegate-Protocol.h>

@class PTVUITextView;

@protocol PTVUITextViewDelegate <UITextViewDelegate>

@optional
- (void)ptvUITextViewDidResignFirstResponder:(PTVUITextView *)arg1;
- (void)ptvUITextViewDidFailToResignFirstResponder:(PTVUITextView *)arg1;
- (void)ptvUITextViewWillResignFirstResponder:(PTVUITextView *)arg1;
- (void)ptvUITextViewDidBecomeFirstResponder:(PTVUITextView *)arg1;
- (void)ptvUITextViewDidFailToBecomeFirstResponder:(PTVUITextView *)arg1;
- (void)ptvUITextViewWillBecomeFirstResponder:(PTVUITextView *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGShowreelNativeViewDelegate-Protocol.h>

@class IGShowreelNativeView, NSString;
@protocol IGFeedShowreelNativeViewDelegate;

@interface IGFeedShowreelNativeView : UIView <IGShowreelNativeViewDelegate>
{
    id <IGFeedShowreelNativeViewDelegate> _feedShowreelNativeViewDelegate;
    IGShowreelNativeView *_snView;
    unsigned long long _snPlaybackState;
}

- (void).cxx_destruct;
- (void)_setPlaybackState:(unsigned long long)arg1;
- (void)showreelNativeViewDidTapRetryButton:(id)arg1;
- (void)updatePlayBackState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 feedShowreelNativeViewDelegate:(id)arg2 playerView:(id)arg3 playbackState:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


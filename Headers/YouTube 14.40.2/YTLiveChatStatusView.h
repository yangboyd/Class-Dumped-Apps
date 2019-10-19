//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YCHLiveChatStatusViewProtocol.h"
#import "YTFeedStatusViewDelegate.h"

@class NSString, YCHLiveChatStatusShimmeringView, YTFeedStatusView;

@interface YTLiveChatStatusView : UIView <YTFeedStatusViewDelegate, YCHLiveChatStatusViewProtocol>
{
    id <YCHLiveChatStatusViewDelegate> _statusViewDelegate;
    YTFeedStatusView *_feedStatusView;
    YCHLiveChatStatusShimmeringView *_shimmerView;
}

@property(readonly, nonatomic) YCHLiveChatStatusShimmeringView *shimmerView; // @synthesize shimmerView=_shimmerView;
@property(readonly, nonatomic) YTFeedStatusView *feedStatusView; // @synthesize feedStatusView=_feedStatusView;
@property(nonatomic) __weak id <YCHLiveChatStatusViewDelegate> statusViewDelegate; // @synthesize statusViewDelegate=_statusViewDelegate;
- (void).cxx_destruct;
- (void)resetState;
- (void)didTapSwitchAccountFromView:(id)arg1;
- (void)didTapStatusLink:(id)arg1 fromView:(id)arg2;
- (void)didTapStatusView:(id)arg1;
- (void)hideActivityIndicator;
- (void)showError;
- (void)showActivityIndicator;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 styleFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


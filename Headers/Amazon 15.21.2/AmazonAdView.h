//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AMAdViewDelegate-Protocol.h"

@class AMAdView, AmazonAdOptions, NSString;
@protocol AmazonAdViewDelegate, AmazonOOAdViewDelegate;

@interface AmazonAdView : UIView <AMAdViewDelegate>
{
    id <AmazonAdViewDelegate> _delegate;
    AMAdView *_amAdView;
    AmazonAdOptions *_options;
    id <AmazonOOAdViewDelegate> _ooDelegate;
}

+ (id)alloc;
+ (id)amazonAdViewWithAdSize:(struct CGSize)arg1;
@property(nonatomic) __weak id <AmazonOOAdViewDelegate> ooDelegate; // @synthesize ooDelegate=_ooDelegate;
@property(retain, nonatomic) AmazonAdOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) AMAdView *amAdView; // @synthesize amAdView=_amAdView;
@property(nonatomic) __weak id <AmazonAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)adViewDidClickOnAd:(id)arg1 withPrivateURL:(id)arg2;
- (void)willResizeAd:(id)arg1 toFrame:(struct CGRect)arg2;
- (void)adViewDidLoadAd;
- (void)adViewDidFailToLoadAdWithError:(id)arg1;
- (void)didDismissModalViewForAd:(id)arg1;
- (void)willPresentModalViewForAd:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (id)adErrorFromError:(id)arg1;
- (_Bool)isAdExpanded;
- (void)loadAd:(id)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (void)dealloc;
- (id)initProperties:(struct CGSize)arg1 autoSizeEnabled:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 autoSizeEnabled:(_Bool)arg2;
- (id)initWithAdSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


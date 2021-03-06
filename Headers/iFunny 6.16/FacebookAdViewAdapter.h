//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FBAdViewDelegate-Protocol.h>
#import <Funny/MPNativeAdAdapter-Protocol.h>

@class FBAdView, FacebookAdViewMissclickFixWrapper, NSDictionary, NSString, NSURL, UIViewController;
@protocol MPNativeAdAdapterDelegate;

@interface FacebookAdViewAdapter : NSObject <FBAdViewDelegate, MPNativeAdAdapter>
{
    NSDictionary *_properties;
    id <MPNativeAdAdapterDelegate> _delegate;
    NSString *_tierName;
    NSString *_networkName;
    FBAdView *_fbAdView;
    FacebookAdViewMissclickFixWrapper *_fbAdViewWrapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FacebookAdViewMissclickFixWrapper *fbAdViewWrapper; // @synthesize fbAdViewWrapper=_fbAdViewWrapper;
@property(retain, nonatomic) FBAdView *fbAdView; // @synthesize fbAdView=_fbAdView;
@property(copy, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(copy, nonatomic) NSString *tierName; // @synthesize tierName=_tierName;
@property(nonatomic) __weak id <MPNativeAdAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)adViewDidFinishHandlingClick:(id)arg1;
- (void)adViewDidClick:(id)arg1;
- (void)adViewWillLogImpression:(id)arg1;
- (id)mainMediaView;
- (_Bool)enableThirdPartyClickTracking;
@property(readonly, nonatomic) NSURL *defaultActionURL;
- (id)initWithFBAdView:(id)arg1 adProperties:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


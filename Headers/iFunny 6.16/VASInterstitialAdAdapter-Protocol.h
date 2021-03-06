//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/VASAdAdapter-Protocol.h>

@class UIViewController;
@protocol VASInterstitialAdAdapterDelegate;

@protocol VASInterstitialAdAdapter <VASAdAdapter>
@property(nonatomic) long long exitAnimationId;
@property(nonatomic) long long enterAnimationId;
@property(nonatomic, getter=isImmersiveEnabled) _Bool immersiveEnabled;
@property __weak id <VASInterstitialAdAdapterDelegate> delegate;
- (void)fireImpression;
- (void)releaseResources;
- (void)showFromViewController:(UIViewController *)arg1;
- (void)abortLoad;
- (void)loadWithTimeout:(double)arg1 completionHandler:(void (^)(VASErrorInfo *))arg2;
@end


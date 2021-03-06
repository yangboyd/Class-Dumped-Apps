//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSString, UIView;

@protocol ChartboostDelegate <NSObject>

@optional
- (void)didPauseClickForConfirmation;
- (void)didCompleteAppStoreSheetFlow;
- (void)willDisplayVideo:(NSString *)arg1;
- (void)willDisplayInterstitial:(NSString *)arg1;
- (void)didFailToLoadInPlay:(NSString *)arg1 withError:(unsigned long long)arg2;
- (void)didCacheInPlay:(NSString *)arg1;
- (void)didCompleteRewardedVideo:(NSString *)arg1 withReward:(int)arg2;
- (void)didClickRewardedVideo:(NSString *)arg1;
- (void)didCloseRewardedVideo:(NSString *)arg1;
- (void)didDismissRewardedVideo:(NSString *)arg1;
- (void)didFailToLoadRewardedVideo:(NSString *)arg1 withError:(unsigned long long)arg2;
- (void)didCacheRewardedVideo:(NSString *)arg1;
- (void)didDisplayRewardedVideo:(NSString *)arg1;
- (_Bool)shouldDisplayRewardedVideo:(NSString *)arg1;
- (void)didClickInterstitial:(NSString *)arg1;
- (void)didCloseInterstitial:(NSString *)arg1;
- (void)didDismissInterstitial:(NSString *)arg1;
- (void)didFailToRecordClick:(NSString *)arg1 withError:(unsigned long long)arg2;
- (void)didFailToLoadInterstitial:(NSString *)arg1 withError:(unsigned long long)arg2;
- (void)didCacheInterstitial:(NSString *)arg1;
- (void)didDisplayInterstitial:(NSString *)arg1;
- (_Bool)shouldDisplayInterstitial:(NSString *)arg1;
- (_Bool)shouldRequestInterstitial:(NSString *)arg1;
- (void)didInitialize:(_Bool)arg1;
- (UIView *)customAgeGateView;
@end


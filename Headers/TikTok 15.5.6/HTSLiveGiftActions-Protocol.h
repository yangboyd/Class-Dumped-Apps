//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IESLiveChargeModel;

@protocol HTSLiveGiftActions <NSObject>

@optional
- (void)giftViewWillDismiss;
- (void)giftViewWillShow;
- (void)chargeSuccess:(IESLiveChargeModel *)arg1;
- (void)chargeClick:(IESLiveChargeModel *)arg1;
- (void)updateWalletModel;
- (void)didSendGiftWithCost:(long long)arg1;
@end


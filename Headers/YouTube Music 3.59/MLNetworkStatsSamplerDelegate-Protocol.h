//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLNetworkStatsSampler;

@protocol MLNetworkStatsSamplerDelegate <NSObject>
- (void)sampler:(MLNetworkStatsSampler *)arg1 hasSampleWithNetworkLatency:(double)arg2;
- (void)sampler:(MLNetworkStatsSampler *)arg1 hasSampleWithBytesTransferred:(long long)arg2 transferTime:(double)arg3;
@end


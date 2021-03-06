//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSNumber;
@protocol BDSAdLoaderProtocol;

@protocol BDSAdLoaderDelegate <NSObject>
- (void)bdsAdLoadTimeout:(id <BDSAdLoaderProtocol>)arg1;
- (void)bdsAdLoadFailed:(id <BDSAdLoaderProtocol>)arg1 error:(NSError *)arg2;
- (void)bdsAdLoad:(NSArray *)arg1 from:(id <BDSAdLoaderProtocol>)arg2;

@optional
- (_Bool)preBidding:(float)arg1 provider:(NSNumber *)arg2;
@end


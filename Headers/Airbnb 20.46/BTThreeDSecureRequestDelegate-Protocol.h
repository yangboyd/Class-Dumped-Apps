//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BTThreeDSecureLookup, BTThreeDSecureRequest;

@protocol BTThreeDSecureRequestDelegate
- (void)onLookupComplete:(BTThreeDSecureRequest *)arg1 result:(BTThreeDSecureLookup *)arg2 next:(void (^)(void))arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWSMobileAnalyticsConnectivity-Protocol.h"

@class AWSKSReachability, NSString;

@interface AWSMobileAnalyticsIOSConnectivity : NSObject <AWSMobileAnalyticsConnectivity>
{
    AWSKSReachability *_reachability;
}

+ (id)defaultConnectivity;
@property(retain, nonatomic) AWSKSReachability *reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasWANOnly;
@property(readonly, nonatomic) _Bool hasWifi;
@property(readonly, nonatomic) _Bool isConnected;
- (id)initWithReachability:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


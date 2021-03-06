//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTReachabilityNetworkProperties : NSObject
{
    _Bool _lowDataMode;
    int _connectionType;
    int _detailedNetworkType;
    int _networkMeteredState;
}

@property(readonly, nonatomic) _Bool lowDataMode; // @synthesize lowDataMode=_lowDataMode;
@property(readonly, nonatomic) int networkMeteredState; // @synthesize networkMeteredState=_networkMeteredState;
@property(readonly, nonatomic) int detailedNetworkType; // @synthesize detailedNetworkType=_detailedNetworkType;
@property(readonly, nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToNetworkProperties:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithConnectionType:(int)arg1 detailedNetworkType:(int)arg2 networkMeteredState:(int)arg3 lowDataMode:(_Bool)arg4;

@end


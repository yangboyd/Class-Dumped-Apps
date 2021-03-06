//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData;

@interface NLGWeaveNetworkData : NSObject <NSCopying>
{
    NSData *_fabricConfig;
    NSArray *_threadNetworks;
    NSArray *_wifiNetworks;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *wifiNetworks; // @synthesize wifiNetworks=_wifiNetworks;
@property(readonly, copy, nonatomic) NSArray *threadNetworks; // @synthesize threadNetworks=_threadNetworks;
@property(readonly, copy, nonatomic) NSData *fabricConfig; // @synthesize fabricConfig=_fabricConfig;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFabricConfig:(id)arg1 threadNetworks:(id)arg2 wifiNetworks:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class VPBPhoneNumber;

@interface VPBProxyNumber : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool cacheable; // @dynamic cacheable;
@property(nonatomic) _Bool hasCacheable; // @dynamic hasCacheable;
@property(nonatomic) _Bool hasProxyNumber; // @dynamic hasProxyNumber;
@property(nonatomic) _Bool hasTtlMs; // @dynamic hasTtlMs;
@property(retain, nonatomic) VPBPhoneNumber *proxyNumber; // @dynamic proxyNumber;
@property(nonatomic) unsigned long long ttlMs; // @dynamic ttlMs;

@end


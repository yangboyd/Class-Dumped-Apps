//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RLMSyncTimeoutOptions : NSObject
{
    struct SyncClientTimeouts _options;
    unsigned long long _connectionLingerTime;
}

- (id).cxx_construct;
@property(nonatomic) unsigned long long connectionLingerTime; // @synthesize connectionLingerTime=_connectionLingerTime;
@property(nonatomic) unsigned long long fastReconnectLimit;
@property(nonatomic) unsigned long long pongKeepaliveTimeout;
@property(nonatomic) unsigned long long pingKeepalivePeriod;
- (unsigned long long)connectLingerTime;
@property(nonatomic) unsigned long long connectTimeout;

@end


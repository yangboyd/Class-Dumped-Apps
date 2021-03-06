//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BDPRequestMetrics : NSObject
{
    _Bool _reuseConnect;
    long long _dns;
    long long _tcp;
    long long _ssl;
    long long _send;
    long long _wait;
    long long _receive;
}

+ (id)metricsFromTransactionMetrics:(id)arg1;
+ (id)metricsFromChromiumTimeInfo:(id)arg1;
@property(nonatomic) _Bool reuseConnect; // @synthesize reuseConnect=_reuseConnect;
@property(nonatomic) long long receive; // @synthesize receive=_receive;
@property(nonatomic) long long wait; // @synthesize wait=_wait;
@property(nonatomic) long long send; // @synthesize send=_send;
@property(nonatomic) long long ssl; // @synthesize ssl=_ssl;
@property(nonatomic) long long tcp; // @synthesize tcp=_tcp;
@property(nonatomic) long long dns; // @synthesize dns=_dns;
- (void)updateWithMetrics:(id)arg1;

@end


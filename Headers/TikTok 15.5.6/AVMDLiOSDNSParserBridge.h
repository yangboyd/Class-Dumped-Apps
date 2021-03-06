//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

@interface AVMDLiOSDNSParserBridge : NSObject
{
    NSString *_hostname;
    struct AVMDLDNSParserImplement *_implement;
    long long _startT;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long startT; // @synthesize startT=_startT;
@property(nonatomic) struct AVMDLDNSParserImplement *implement; // @synthesize implement=_implement;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void).cxx_destruct;
- (void)close;
- (int)startParse:(const char *)arg1 implement:(struct AVMDLDNSParserImplement *)arg2;
- (id)init;
- (void)dealloc;

@end


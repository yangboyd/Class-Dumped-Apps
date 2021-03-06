//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWSKSReachability : NSObject
{
    _Bool _reachable;
    _Bool _WWANOnly;
    _Bool _initialized;
    unsigned int _flags;
    CDUnknownBlockType _onInitializationComplete;
    CDUnknownBlockType _onReachabilityChanged;
    struct __SCNetworkReachability *_reachabilityRef;
    NSString *_hostname;
    NSString *_notificationName;
}

+ (id)reachabilityToInternet;
+ (id)reachabilityToLocalNetwork;
+ (id)reachabilityToHost:(id)arg1;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(nonatomic) _Bool WWANOnly; // @synthesize WWANOnly=_WWANOnly;
@property(nonatomic) _Bool reachable; // @synthesize reachable=_reachable;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy) CDUnknownBlockType onReachabilityChanged; // @synthesize onReachabilityChanged=_onReachabilityChanged;
- (void).cxx_destruct;
- (void)onReachabilityFlagsChanged:(unsigned int)arg1;
- (void)callInitializationComplete;
@property(copy) CDUnknownBlockType onInitializationComplete; // @synthesize onInitializationComplete=_onInitializationComplete;
- (_Bool)isReachableWWANOnlyWithFlags:(unsigned int)arg1;
- (_Bool)isReachableWithFlags:(unsigned int)arg1;
- (id)extractHostName:(id)arg1;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1 hostname:(id)arg2;
- (id)initWithAddress:(const struct sockaddr *)arg1;
- (id)initWithHost:(id)arg1;

@end


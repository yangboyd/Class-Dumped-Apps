//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFNetworkReachabilityManager : NSObject
{
    long long _networkReachabilityStatus;
    id _networkReachability;
    CDUnknownBlockType _networkReachabilityStatusBlock;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)managerForAddress:(const void *)arg1;
+ (id)managerForDomain:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType networkReachabilityStatusBlock; // @synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock;
@property(retain, nonatomic) id networkReachability; // @synthesize networkReachability=_networkReachability;
@property(nonatomic) long long networkReachabilityStatus; // @synthesize networkReachabilityStatus=_networkReachabilityStatus;
- (void)setReachabilityStatusChangeBlock:(CDUnknownBlockType)arg1;
- (id)localizedNetworkReachabilityStatusString;
- (void)stopMonitoring;
- (void)startMonitoring;
@property(readonly, nonatomic, getter=isReachableViaWiFi) _Bool reachableViaWiFi;
@property(readonly, nonatomic, getter=isReachableViaWWAN) _Bool reachableViaWWAN;
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;
- (void)dealloc;
- (id)init;
- (id)initWithReachability:(struct __SCNetworkReachability *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol YTReachabilityController;

@interface MLDataSaverBitrateCap : NSObject
{
    id <YTReachabilityController> _reachabilityController;
    long long _dataSaverBitrateCap;
    struct flat_hash_set<YTIClientConnectionType, absl::hash_internal::Hash<YTIClientConnectionType>, std::__1::equal_to<YTIClientConnectionType>, std::__1::allocator<YTIClientConnectionType>> _dataSaverConnectionTypes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long bitrateCap;
- (id)initWithDataSaverConfig:(id)arg1;

@end


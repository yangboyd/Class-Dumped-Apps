//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GULReachabilityDelegate;

@interface GULReachabilityChecker : NSObject
{
    int reachabilityStatus_;
    const struct GULReachabilityApi *reachabilityApi_;
    struct __SCNetworkReachability *reachability_;
    NSString *host_;
    id <GULReachabilityDelegate> reachabilityDelegate_;
}

@property(nonatomic) __weak id <GULReachabilityDelegate> reachabilityDelegate; // @synthesize reachabilityDelegate=reachabilityDelegate_;
@property(copy, nonatomic) NSString *host; // @synthesize host=host_;
@property(nonatomic) int reachabilityStatus; // @synthesize reachabilityStatus=reachabilityStatus_;
@property(nonatomic) struct __SCNetworkReachability *reachability; // @synthesize reachability=reachability_;
- (void).cxx_destruct;
- (void)reachabilityFlagsChanged:(unsigned int)arg1;
- (int)statusForFlags:(unsigned int)arg1;
- (void)stop;
- (_Bool)start;
- (void)dealloc;
- (id)initWithReachabilityDelegate:(id)arg1 withHost:(id)arg2;
@property(readonly, nonatomic) _Bool isActive;
@property(nonatomic) const struct GULReachabilityApi *reachabilityApi; // @synthesize reachabilityApi=reachabilityApi_;

@end


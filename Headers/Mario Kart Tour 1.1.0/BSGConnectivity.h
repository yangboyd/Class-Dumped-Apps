//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface BSGConnectivity : NSObject
{
    CDUnknownBlockType _connectivityChangeBlock;
    struct __SCNetworkReachability *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CDUnknownBlockType _callbackBlock;
}

@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(copy, nonatomic) CDUnknownBlockType connectivityChangeBlock; // @synthesize connectivityChangeBlock=_connectivityChangeBlock;
- (void).cxx_destruct;
- (void)connectivityChanged:(unsigned int)arg1;
- (void)stopWatchingConnectivity;
- (void)startWatchingConnectivity;
- (void)dealloc;
- (id)initWithURL:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;

@end


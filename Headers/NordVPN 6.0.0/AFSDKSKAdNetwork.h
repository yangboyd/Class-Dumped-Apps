//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFSDKSKAdNetworkDataSource-Protocol.h"

@class NSString;
@protocol AFSDKStorageProtocol, OS_dispatch_queue;

@interface AFSDKSKAdNetwork : NSObject <AFSDKSKAdNetworkDataSource>
{
    NSObject<OS_dispatch_queue> *Queue;
    unsigned long long Mode;
    struct SKAdRule Rule;
    id <AFSDKStorageProtocol> Storage;
    Class SKAdNetworkClass;
}

- (void).cxx_destruct;
- (long long)willUpdateConversionValueWithName:(id)arg1 values:(id)arg2;
- (long long)didReceiveConfiguration:(id)arg1;
- (id)initWithQueue:(id)arg1 storage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


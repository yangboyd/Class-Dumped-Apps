//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface BDPCommonJSBridge : NSObject <NSCopying>
{
    NSMapTable *_jsMethods;
    NSMapTable *_jsTagets;
    NSObject<OS_dispatch_queue> *_commJSBridgeQueue;
}

+ (id)sharedJSBridge;
@property(retain) NSObject<OS_dispatch_queue> *commJSBridgeQueue; // @synthesize commJSBridgeQueue=_commJSBridgeQueue;
@property(retain) NSMapTable *jsTagets; // @synthesize jsTagets=_jsTagets;
@property(retain) NSMapTable *jsMethods; // @synthesize jsMethods=_jsMethods;
- (void).cxx_destruct;
- (id)invoke:(id)arg1;
- (id)instanceOfModule:(Class)arg1;
- (void)registerModule:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


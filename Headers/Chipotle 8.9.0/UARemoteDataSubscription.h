//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface UARemoteDataSubscription : NSObject
{
    NSArray *_payloadTypes;
    CDUnknownBlockType _publishBlock;
    NSArray *_previousPayloads;
}

+ (id)remoteDataSubscriptionWithTypes:(id)arg1 publishBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *previousPayloads; // @synthesize previousPayloads=_previousPayloads;
@property(copy, nonatomic) CDUnknownBlockType publishBlock; // @synthesize publishBlock=_publishBlock;
@property(copy, nonatomic) NSArray *payloadTypes; // @synthesize payloadTypes=_payloadTypes;
- (void)notifyRemoteData:(id)arg1 dispatcher:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithTypes:(id)arg1 block:(CDUnknownBlockType)arg2;

@end


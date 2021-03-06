//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class FBMPSessionContext, NSArray;
@protocol FBMPProducerPort;

@protocol FBMPInput <NSObject>
@property(readonly, copy, nonatomic) NSArray *producerPorts;
- (void)invalidate;
- (void)sessionDisconnectedPort:(id <FBMPProducerPort>)arg1 context:(FBMPSessionContext *)arg2;
- (void)sessionConnectedPort:(id <FBMPProducerPort>)arg1 context:(FBMPSessionContext *)arg2;
- (void)sessionWillStop:(FBMPSessionContext *)arg1;
- (void)sessionWillStart:(FBMPSessionContext *)arg1;
@end


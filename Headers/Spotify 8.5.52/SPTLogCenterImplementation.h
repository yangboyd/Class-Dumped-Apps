//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLogCenter-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, SPTLogger;

@interface SPTLogCenterImplementation : NSObject <SPTLogCenter>
{
    NSString *_anonymousToken;
    NSMutableArray *_messages;
    id <SPTLogger> _logger;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SPTLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain) NSString *anonymousToken; // @synthesize anonymousToken=_anonymousToken;
- (void).cxx_destruct;
- (_Bool)applyExtraValidationForAudioOutputRouteMessage:(id)arg1;
- (_Bool)sendMessageWithSequenceNumber:(id)arg1 messageName:(id)arg2;
- (_Bool)updateMessageWithSequenceNumber:(id)arg1 messageName:(id)arg2 message:(id)arg3;
- (id)createMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)init;
- (void)detachCoreLogger;
- (void)attachCoreLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


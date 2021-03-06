//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectDataSubscriptionListener-Protocol.h>
#import <FBSharedFramework/IGSubscriptionToken-Protocol.h>

@class IGDirectDataSubscriptionPipe, NSString;
@protocol IGSubscriptionToken;

@interface IGDirectSubscriptionPipeSubscriber : NSObject <IGDirectDataSubscriptionListener, IGSubscriptionToken>
{
    IGDirectDataSubscriptionPipe *_pipe;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _errorBlock;
    id <IGSubscriptionToken> _tokenFromPipe;
}

+ (id)subscriberWithPipe:(id)arg1 updateBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)cancel;
- (void)didReceiveError:(id)arg1 fromSubscriptionPipe:(id)arg2;
- (void)didReceiveValue:(id)arg1 fromSubscriptionPipe:(id)arg2;
- (id)_initWithPipe:(id)arg1 updateBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


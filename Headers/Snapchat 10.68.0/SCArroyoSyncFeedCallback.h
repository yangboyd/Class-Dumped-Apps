//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingSyncFeedCallback-Protocol.h"

@interface SCArroyoSyncFeedCallback : NSObject <SCNMessagingSyncFeedCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
    CDUnknownBlockType _notBootstrappedCallback;
}

- (void).cxx_destruct;
- (void)onBootstrapNotComplete;
- (void)onError:(long long)arg1;
- (void)onSyncFeedComplete:(id)arg1 feedEntriesDeleted:(id)arg2 resetFeed:(_Bool)arg3;
- (id)initWithSucccessCallback:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2 notBootstrappedCallback:(CDUnknownBlockType)arg3;

@end


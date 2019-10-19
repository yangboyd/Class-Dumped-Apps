//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCOpenUnifiedProfileActionHandler, SCSnapchattersActionHandler;

@interface SCChatSnapchatterActionHandler : NSObject <SCActionHandling>
{
    SCSnapchattersActionHandler *_friendsSnapchatterActionHandler;
    SCOpenUnifiedProfileActionHandler *_openUnifiedProfileActionHandler;
}

- (void).cxx_destruct;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithFriendsSnapchatterActionHandler:(id)arg1 openUnifiedProfileActionHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


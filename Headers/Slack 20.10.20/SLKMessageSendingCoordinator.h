//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MessageSendingCoordinatorInterface-Protocol.h"

@interface SLKMessageSendingCoordinator : NSObject <MessageSendingCoordinatorInterface>
{
}

- (void)commitEditedMessageWithText:(id)arg1 message:(id)arg2 dependencies:(id)arg3 currentLocaleIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendTextMessage:(id)arg1 toChannel:(id)arg2 clientMessageId:(id)arg3 threadTimestamp:(id)arg4 broadcast:(_Bool)arg5 dependencies:(id)arg6 textView:(id)arg7 isEditing:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDirectSeenStateHelper : NSObject
{
}

+ (id)seenUsersForMessage:(id)arg1 threadMetadata:(id)arg2 currentUserPK:(id)arg3 shouldIncludeMessageSender:(_Bool)arg4 shouldSortByTimestamp:(_Bool)arg5;
+ (id)messageStatesForMessageKeysDictionaryForMessages:(id)arg1 thread:(id)arg2 currentUserPK:(id)arg3 mostRecentActiveTypingStatus:(id)arg4 shouldSortByTimestamp:(_Bool)arg5 shouldShowSeenTime:(_Bool)arg6 shouldShowOnlyOneSeenUser:(_Bool)arg7 shouldUseDeliveredFailedStates:(_Bool)arg8 nicknameManager:(id)arg9 featureSetProvider:(id)arg10;
+ (id)seenUsersForMessageServerId:(id)arg1 messageSenderId:(id)arg2 threadMetadata:(id)arg3 currentUserPK:(id)arg4 shouldIncludeMessageSender:(_Bool)arg5 shouldSortByTimestamp:(_Bool)arg6;
+ (id)usernamesForSeenUsers:(id)arg1 nicknameManager:(id)arg2 featureSetProvider:(id)arg3;

@end


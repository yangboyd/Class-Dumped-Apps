//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DYNStreamDirectMessageOptions, NSArray, NSString, UIViewController;
@protocol DYNGroupBase, DYNGroupId, DYNMessage, DYNMessageId, DYNScrollableProtocol><DYNStream;

@protocol DYNStreamDMFactoryService <NSObject>
- (UIViewController<DYNScrollableProtocol><DYNStream> *)streamViewControllerForDMWithOptions:(DYNStreamDirectMessageOptions *)arg1;
- (UIViewController *)streamViewControllerForDMCreationWithUserGaiaIDs:(NSArray *)arg1;
- (UIViewController *)streamViewControllerForDMCreationWithUserEmailAddresses:(NSArray *)arg1 openedFromDeepLink:(_Bool)arg2;
- (UIViewController *)streamViewControllerForDMWithID:(id <DYNGroupId>)arg1 name:(NSString *)arg2 forwardingMessage:(id <DYNMessage>)arg3;
- (UIViewController *)streamViewControllerForSpecificMessageWithDMID:(id <DYNGroupId>)arg1 name:(NSString *)arg2 focusedMessageID:(id <DYNMessageId>)arg3;
- (UIViewController *)streamViewControllerFromNotificationForDMWithID:(id <DYNGroupId>)arg1 name:(NSString *)arg2;
- (UIViewController *)streamViewControllerForDMCreationWithName:(NSString *)arg1 users:(NSArray *)arg2 showDynamicDM:(_Bool)arg3;
- (UIViewController *)streamViewControllerForDMWithID:(id <DYNGroupId>)arg1 name:(NSString *)arg2 hasUnreadMessages:(_Bool)arg3 inviteState:(int)arg4 groupBase:(id <DYNGroupBase>)arg5 showDynamicDM:(_Bool)arg6;
@end


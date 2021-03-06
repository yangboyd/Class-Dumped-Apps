//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UITableViewCell, WAContact, WASinglePersonPicker;

@protocol WASinglePersonPickerDelegate <NSObject>
- (_Bool)singlePersonPickerShouldSearchPushNamesForChatsSection:(WASinglePersonPicker *)arg1;
- (void)singlePersonPickerDidCancel:(WASinglePersonPicker *)arg1;
- (void)singlePersonPicker:(WASinglePersonPicker *)arg1 didSelectContact:(WAContact *)arg2 frequentlyContacted:(_Bool)arg3;

@optional
- (void)singlePersonPicker:(WASinglePersonPicker *)arg1 didAskToStartCallWithContacts:(NSArray *)arg2 videoEnabled:(_Bool)arg3;
- (NSArray *)excludedJIDsForWASinglePersonPicker:(WASinglePersonPicker *)arg1;
- (void)singlePersonPickerDidAskToCreateNewContact:(WASinglePersonPicker *)arg1;
- (void)singlePersonPickerDidAskToCreateNewGroup:(WASinglePersonPicker *)arg1;
- (void)singlePersonPicker:(WASinglePersonPicker *)arg1 didAskToInviteFriendsFromTableViewCell:(UITableViewCell *)arg2;
@end


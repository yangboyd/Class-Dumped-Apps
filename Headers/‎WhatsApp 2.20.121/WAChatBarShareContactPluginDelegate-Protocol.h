//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatBarMenuPluginDelegate-Protocol.h"

@class NSArray, NSString, WAChatBarShareContactPlugin, WAParticipantPickerViewController, WAVCard;

@protocol WAChatBarShareContactPluginDelegate <WAChatBarMenuPluginDelegate>
- (void)chatBarShareContactPlugin:(WAChatBarShareContactPlugin *)arg1 didSelectContacts:(NSArray *)arg2 withParticipantPicker:(WAParticipantPickerViewController *)arg3;
- (void)chatBarShareContactPlugin:(WAChatBarShareContactPlugin *)arg1 sendVCard:(WAVCard *)arg2 withCompletion:(void (^)(unsigned long long, long long))arg3;
- (void)chatBarShareContactPlugin:(WAChatBarShareContactPlugin *)arg1 showUploadFailedFileTooLargeWithItemCount:(long long)arg2;
- (void)chatBarShareContactPlugin:(WAChatBarShareContactPlugin *)arg1 presentAddressBookPermissionsScreenWithTitle:(NSString *)arg2;
@end


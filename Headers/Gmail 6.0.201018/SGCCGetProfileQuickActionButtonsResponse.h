//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

#import "GSCProfileData-Protocol.h"
#import "PSTCustardResponse-Protocol.h"

@class NSString, SGCCCallButton, SGCCChatButton, SGCCEmailButton, SGCCMeetButton, SGCCScheduleButton;

@interface SGCCGetProfileQuickActionButtonsResponse : GPBMessage <PSTCustardResponse, GSCProfileData>
{
}

+ (id)descriptor;
+ (id)callButtonDataFromPhones:(id)arg1;
+ (id)scheduleButtonDataFromEmails:(id)arg1;
+ (id)emailButtonDataFromEmails:(id)arg1;
+ (id)buttonDataFromProfile:(id)arg1 withConfig:(id)arg2;
- (id)gscProfileDataArray;
@property(readonly) NSString *key;
- (_Bool)isLocalDataCheckRequired;

// Remaining properties
@property(retain, nonatomic) SGCCCallButton *callButton; // @dynamic callButton;
@property(retain, nonatomic) SGCCChatButton *chatButton; // @dynamic chatButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SGCCEmailButton *emailButton; // @dynamic emailButton;
@property(nonatomic) _Bool hasCallButton; // @dynamic hasCallButton;
@property(nonatomic) _Bool hasChatButton; // @dynamic hasChatButton;
@property(nonatomic) _Bool hasEmailButton; // @dynamic hasEmailButton;
@property(nonatomic) _Bool hasMeetButton; // @dynamic hasMeetButton;
@property(nonatomic) _Bool hasScheduleButton; // @dynamic hasScheduleButton;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SGCCMeetButton *meetButton; // @dynamic meetButton;
@property(retain, nonatomic) SGCCScheduleButton *scheduleButton; // @dynamic scheduleButton;
@property(readonly) Class superclass;

@end


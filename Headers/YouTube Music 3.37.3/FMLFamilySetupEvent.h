//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class FMLFamilyInvitesEvent;

@interface FMLFamilySetupEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasInvitesEvent; // @dynamic hasInvitesEvent;
@property(retain, nonatomic) FMLFamilyInvitesEvent *invitesEvent; // @dynamic invitesEvent;

@end


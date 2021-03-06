//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCActorRef, PhotosMCPartnerSharingIncomingInfo, PhotosMCPartnerSharingOutgoingInfo;

@interface PhotosMCPartnerSharingInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIncoming; // @dynamic hasIncoming;
@property(nonatomic) _Bool hasOutgoing; // @dynamic hasOutgoing;
@property(nonatomic) _Bool hasPartner; // @dynamic hasPartner;
@property(retain, nonatomic) PhotosMCPartnerSharingIncomingInfo *incoming; // @dynamic incoming;
@property(retain, nonatomic) PhotosMCPartnerSharingOutgoingInfo *outgoing; // @dynamic outgoing;
@property(retain, nonatomic) PhotosMCActorRef *partner; // @dynamic partner;

@end


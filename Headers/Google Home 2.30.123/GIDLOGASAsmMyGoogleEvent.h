//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIDLOGASLaunch, GIDLOGASOutbound, GIDLOGASReturnFromOutbound, GIDLOGASTapped;

@interface GIDLOGASAsmMyGoogleEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLaunch; // @dynamic hasLaunch;
@property(nonatomic) _Bool hasOutbound; // @dynamic hasOutbound;
@property(nonatomic) _Bool hasReturnEvent; // @dynamic hasReturnEvent;
@property(nonatomic) _Bool hasTapped; // @dynamic hasTapped;
@property(retain, nonatomic) GIDLOGASLaunch *launch; // @dynamic launch;
@property(retain, nonatomic) GIDLOGASOutbound *outbound; // @dynamic outbound;
@property(retain, nonatomic) GIDLOGASReturnFromOutbound *returnEvent; // @dynamic returnEvent;
@property(retain, nonatomic) GIDLOGASTapped *tapped; // @dynamic tapped;

@end


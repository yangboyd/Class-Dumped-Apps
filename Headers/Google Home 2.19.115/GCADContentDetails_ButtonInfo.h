//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCAORLinkableApplication, NSString;

@interface GCADContentDetails_ButtonInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *buttonAction; // @dynamic buttonAction;
@property(nonatomic) int buttonBehavior; // @dynamic buttonBehavior;
@property(copy, nonatomic) NSString *buttonText; // @dynamic buttonText;
@property(nonatomic) _Bool hasButtonAction; // @dynamic hasButtonAction;
@property(nonatomic) _Bool hasButtonBehavior; // @dynamic hasButtonBehavior;
@property(nonatomic) _Bool hasButtonText; // @dynamic hasButtonText;
@property(nonatomic) _Bool hasIntentToJoinURLScheme; // @dynamic hasIntentToJoinURLScheme;
@property(nonatomic) _Bool hasLinkableApplication; // @dynamic hasLinkableApplication;
@property(copy, nonatomic) NSString *intentToJoinURLScheme; // @dynamic intentToJoinURLScheme;
@property(retain, nonatomic) GCAORLinkableApplication *linkableApplication; // @dynamic linkableApplication;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class EIDClientEventIdMessage, EIDEventIdMessage, LOGClickTrackingCGI, NSString;

@interface LOGVisualElementTreeRef : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) EIDClientEventIdMessage *clientEvent; // @dynamic clientEvent;
@property(copy, nonatomic) NSString *ei; // @dynamic ei;
@property(retain, nonatomic) EIDEventIdMessage *event; // @dynamic event;
@property(readonly, nonatomic) int eventsOneOfCase; // @dynamic eventsOneOfCase;
@property(readonly, nonatomic) int rootOneOfCase; // @dynamic rootOneOfCase;
@property(retain, nonatomic) LOGClickTrackingCGI *rootVe; // @dynamic rootVe;
@property(copy, nonatomic) NSString *ved; // @dynamic ved;

@end


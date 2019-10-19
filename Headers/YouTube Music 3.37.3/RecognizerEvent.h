//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GRCEndpointerEvent, GRCRecognitionEvent, NSString;

@interface RecognizerEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GRCEndpointerEvent *endpointerEvent; // @dynamic endpointerEvent;
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasSpokenLanguage; // @dynamic hasSpokenLanguage;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(readonly, nonatomic) int payloadOneOfCase; // @dynamic payloadOneOfCase;
@property(retain, nonatomic) GRCRecognitionEvent *recognitionEvent; // @dynamic recognitionEvent;
@property(copy, nonatomic) NSString *spokenLanguage; // @dynamic spokenLanguage;

@end


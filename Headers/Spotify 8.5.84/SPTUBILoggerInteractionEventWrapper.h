//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UBIInteractionEvent-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol SPTUBIInteractionEvent, UBIEventAbsoluteLocation, UBIInteractionEventLocation;

@interface SPTUBILoggerInteractionEventWrapper : NSObject <UBIInteractionEvent>
{
    id <SPTUBIInteractionEvent> _wrappedEvent;
    id <UBIInteractionEventLocation> _location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <UBIInteractionEventLocation> location; // @synthesize location=_location;
@property(retain, nonatomic) id <SPTUBIInteractionEvent> wrappedEvent; // @synthesize wrappedEvent=_wrappedEvent;
@property(readonly, nonatomic) id <UBIEventAbsoluteLocation> parentAbsoluteLocation;
@property(readonly, copy, nonatomic) NSArray *errors;
@property(readonly, copy, nonatomic) NSDictionary *actionParameters;
@property(readonly, nonatomic) long long actionVersion;
@property(readonly, copy, nonatomic) NSString *action;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


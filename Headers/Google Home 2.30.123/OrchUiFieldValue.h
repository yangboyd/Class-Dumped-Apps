//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, OrchDate, OrchUiFieldValue_MultiSelectValue;

@interface OrchUiFieldValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int checkboxState; // @dynamic checkboxState;
@property(copy, nonatomic) NSData *dataToken; // @dynamic dataToken;
@property(retain, nonatomic) OrchDate *date; // @dynamic date;
@property(copy, nonatomic) NSString *eesSessionMaterial; // @dynamic eesSessionMaterial;
@property(nonatomic) _Bool hasDataToken; // @dynamic hasDataToken;
@property(nonatomic) _Bool hasEesSessionMaterial; // @dynamic hasEesSessionMaterial;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasRedactedValue; // @dynamic hasRedactedValue;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) OrchUiFieldValue_MultiSelectValue *multiSelectValue; // @dynamic multiSelectValue;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *notLoggedStringValue; // @dynamic notLoggedStringValue;
@property(copy, nonatomic) NSString *redactedValue; // @dynamic redactedValue;
@property(copy, nonatomic) NSString *secureStringValue; // @dynamic secureStringValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(nonatomic) long long uiReference; // @dynamic uiReference;
@property(copy, nonatomic) NSData *valueDataToken; // @dynamic valueDataToken;
@property(readonly, nonatomic) int valueOneOfCase; // @dynamic valueOneOfCase;

@end


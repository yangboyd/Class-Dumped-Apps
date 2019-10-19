//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface GSCContact : NSObject
{
    NSNumber *_contactId;
    NSString *_firstName;
    NSString *_phoneticFirstName;
    NSString *_familyName;
    NSString *_phoneticFamilyName;
    NSString *_displayName;
    NSArray *_emails;
    NSArray *_emailsWithLabels;
    NSArray *_phoneNumbers;
    NSArray *_phoneNumbersWithLabels;
    double _affinityScore;
}

@property(nonatomic) double affinityScore; // @synthesize affinityScore=_affinityScore;
@property(readonly, copy, nonatomic) NSArray *phoneNumbersWithLabels; // @synthesize phoneNumbersWithLabels=_phoneNumbersWithLabels;
@property(readonly, copy, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly, copy, nonatomic) NSArray *emailsWithLabels; // @synthesize emailsWithLabels=_emailsWithLabels;
@property(readonly, copy, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property(readonly, copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(readonly, copy, nonatomic) NSString *phoneticFirstName; // @synthesize phoneticFirstName=_phoneticFirstName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, copy, nonatomic) NSNumber *contactId; // @synthesize contactId=_contactId;
- (void).cxx_destruct;
- (id)stringFromNormalizingPhoneNumber:(id)arg1;
- (id)stringByRemovingCharacters:(id)arg1 fromString:(id)arg2;
- (id)stringByTrimmingWhitespace:(id)arg1;
- (id)description;
- (id)initWithABPerson:(id)arg1;

@end


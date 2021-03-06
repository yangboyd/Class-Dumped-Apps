//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WAVCard : NSObject
{
    NSString *_contactName;
    NSString *_vCardString;
    NSArray *_vCards;
}

+ (id)prepareVCardAsDocument:(CDStruct_a70f6672)arg1;
+ (_Bool)shouldSendAsDocumentForSize:(unsigned long long)arg1;
+ (_Bool)isEstimatedVCardBelowLimitForSize:(unsigned long long)arg1;
+ (unsigned long long)estimatedVCardSizeForValues:(CDStruct_a70f6672)arg1;
+ (id)vCardContactsForDocumentMessage:(id)arg1 limit:(unsigned long long)arg2;
+ (id)vCardContactsForMessage:(id)arg1 limit:(unsigned long long)arg2;
+ (id)contactsMatchingJID:(id)arg1 inVCardContacts:(id)arg2;
+ (id)contactsFromSystemMultiVCardRepresentation:(id)arg1;
+ (id)contactFromVCardString:(id)arg1;
+ (id)labelFromFieldDescriptions:(id)arg1;
+ (_Bool)isFieldNameForIMServiceValid:(id)arg1;
+ (_Bool)canShareInstantMessagingService:(id)arg1;
+ (id)masterVCardFromContacts:(id)arg1;
+ (id)fullVCardForContact:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *vCards; // @synthesize vCards=_vCards;
@property(copy, nonatomic) NSString *vCardString; // @synthesize vCardString=_vCardString;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
- (CDStruct_a70f6672)generateVCardValues;
@property(readonly, nonatomic, getter=isMultiVCard) _Bool multiVCard;

@end


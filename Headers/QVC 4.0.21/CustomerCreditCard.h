//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePaymentMethod.h"

@class NSString;

@interface CustomerCreditCard : BasePaymentMethod
{
    NSString *type;
    NSString *number;
    NSString *expMonth;
    NSString *expYear;
    NSString *cvv;
    NSString *cardId;
    NSString *cardTypeDescription;
    NSString *lastFour;
    _Bool isDowntimeCard;
    _Bool isCvvRequired;
    NSString *cartTypeDescription;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCvvRequired; // @synthesize isCvvRequired;
@property(nonatomic) _Bool isDowntimeCard; // @synthesize isDowntimeCard;
@property(retain, nonatomic) NSString *lastFour; // @synthesize lastFour;
@property(retain, nonatomic) NSString *cartTypeDescription; // @synthesize cartTypeDescription;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(retain, nonatomic) NSString *cvv; // @synthesize cvv;
@property(retain, nonatomic) NSString *expYear; // @synthesize expYear;
@property(retain, nonatomic) NSString *expMonth; // @synthesize expMonth;
@property(retain, nonatomic) NSString *number; // @synthesize number;
@property(retain, nonatomic) NSString *type; // @synthesize type;
- (_Bool)isCardExpired;
- (_Bool)isNumberValid;
- (_Bool)isCvvValid;
- (id)displayValue;
- (id)description;
- (id)fetchPostVariables;
- (_Bool)isEqualTo:(id)arg1;
- (id)initWithFormFieldDictionary:(id)arg1;
@property(readonly) int cardType;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, POEMPersonFieldMetadata;

@interface POEMGender : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *addressMeAs; // @dynamic addressMeAs;
@property(copy, nonatomic) NSString *customType; // @dynamic customType;
@property(copy, nonatomic) NSString *formattedType; // @dynamic formattedType;
@property(nonatomic) _Bool hasAddressMeAs; // @dynamic hasAddressMeAs;
@property(nonatomic) _Bool hasCustomType; // @dynamic hasCustomType;
@property(nonatomic) _Bool hasFormattedType; // @dynamic hasFormattedType;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) POEMPersonFieldMetadata *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end


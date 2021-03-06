//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBInt64Array, NSMutableArray, NSString;

@interface GDCSimpleAttributeValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool booleanValue; // @dynamic booleanValue;
@property(copy, nonatomic) NSString *choiceSetValue; // @dynamic choiceSetValue;
@property(retain, nonatomic) NSMutableArray *choiceSetValuesArray; // @dynamic choiceSetValuesArray;
@property(readonly, nonatomic) unsigned long long choiceSetValuesArray_Count; // @dynamic choiceSetValuesArray_Count;
@property(nonatomic) _Bool hasBooleanValue; // @dynamic hasBooleanValue;
@property(nonatomic) _Bool hasChoiceSetValue; // @dynamic hasChoiceSetValue;
@property(nonatomic) _Bool hasIntegerValue; // @dynamic hasIntegerValue;
@property(nonatomic) _Bool hasLongTextValue; // @dynamic hasLongTextValue;
@property(nonatomic) _Bool hasShortTextValue; // @dynamic hasShortTextValue;
@property(nonatomic) _Bool hasValueType; // @dynamic hasValueType;
@property(nonatomic) long long integerValue; // @dynamic integerValue;
@property(retain, nonatomic) GPBInt64Array *integerValuesArray; // @dynamic integerValuesArray;
@property(readonly, nonatomic) unsigned long long integerValuesArray_Count; // @dynamic integerValuesArray_Count;
@property(copy, nonatomic) NSString *longTextValue; // @dynamic longTextValue;
@property(copy, nonatomic) NSString *shortTextValue; // @dynamic shortTextValue;
@property(retain, nonatomic) NSMutableArray *shortTextValuesArray; // @dynamic shortTextValuesArray;
@property(readonly, nonatomic) unsigned long long shortTextValuesArray_Count; // @dynamic shortTextValuesArray_Count;
@property(nonatomic) int valueType; // @dynamic valueType;

@end


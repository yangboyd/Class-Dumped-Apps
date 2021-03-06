//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, OrchImageWithCaption, OrchInfoMessage;

@interface OrchUiField_SelectField_Option : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionItemArray; // @dynamic actionItemArray;
@property(readonly, nonatomic) unsigned long long actionItemArray_Count; // @dynamic actionItemArray_Count;
@property(readonly, nonatomic) int displayOneOfCase; // @dynamic displayOneOfCase;
@property(retain, nonatomic) OrchInfoMessage *displaySubValue; // @dynamic displaySubValue;
@property(copy, nonatomic) NSString *displayValue; // @dynamic displayValue;
@property(retain, nonatomic) OrchInfoMessage *extendedDescriptionInfo; // @dynamic extendedDescriptionInfo;
@property(nonatomic) _Bool hasDisplaySubValue; // @dynamic hasDisplaySubValue;
@property(nonatomic) _Bool hasExtendedDescriptionInfo; // @dynamic hasExtendedDescriptionInfo;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIsDisabled; // @dynamic hasIsDisabled;
@property(nonatomic) _Bool hasIsSelected; // @dynamic hasIsSelected;
@property(nonatomic) _Bool hasSelectedAndCollapsedDisplaySubValue; // @dynamic hasSelectedAndCollapsedDisplaySubValue;
@property(nonatomic) _Bool hasSelectedAndCollapsedDisplayValue; // @dynamic hasSelectedAndCollapsedDisplayValue;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(nonatomic) _Bool hasValueDataToken; // @dynamic hasValueDataToken;
@property(retain, nonatomic) OrchImageWithCaption *icon; // @dynamic icon;
@property(nonatomic) _Bool isDisabled; // @dynamic isDisabled;
@property(nonatomic) _Bool isSelected; // @dynamic isSelected;
@property(retain, nonatomic) OrchInfoMessage *selectedAndCollapsedDisplaySubValue; // @dynamic selectedAndCollapsedDisplaySubValue;
@property(copy, nonatomic) NSString *selectedAndCollapsedDisplayValue; // @dynamic selectedAndCollapsedDisplayValue;
@property(copy, nonatomic) NSString *sensitiveDisplayValue; // @dynamic sensitiveDisplayValue;
@property(nonatomic) long long uiReference; // @dynamic uiReference;
@property(copy, nonatomic) NSString *value; // @dynamic value;
@property(copy, nonatomic) NSData *valueDataToken; // @dynamic valueDataToken;

@end


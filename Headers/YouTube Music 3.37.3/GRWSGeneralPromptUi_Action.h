//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GRWSAndroidIntentTarget, GRWSApplicationIdentifier, GTPColor, NSMutableArray, NSString;

@interface GRWSGeneralPromptUi_Action : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(nonatomic) int actionType; // @dynamic actionType;
@property(copy, nonatomic) NSString *buttonText; // @dynamic buttonText;
@property(nonatomic) _Bool hasActionType; // @dynamic hasActionType;
@property(nonatomic) _Bool hasButtonText; // @dynamic hasButtonText;
@property(nonatomic) _Bool hasPromotedApp; // @dynamic hasPromotedApp;
@property(nonatomic) _Bool hasPromotionCode; // @dynamic hasPromotionCode;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasTextColor; // @dynamic hasTextColor;
@property(nonatomic) _Bool hasTouchFeedbackColor; // @dynamic hasTouchFeedbackColor;
@property(retain, nonatomic) GRWSAndroidIntentTarget *intentTarget; // @dynamic intentTarget;
@property(retain, nonatomic) GRWSApplicationIdentifier *promotedApp; // @dynamic promotedApp;
@property(copy, nonatomic) NSString *promotionCode; // @dynamic promotionCode;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) NSMutableArray *stylingSchemeArray; // @dynamic stylingSchemeArray;
@property(readonly, nonatomic) unsigned long long stylingSchemeArray_Count; // @dynamic stylingSchemeArray_Count;
@property(readonly, nonatomic) int targetOneOfCase; // @dynamic targetOneOfCase;
@property(retain, nonatomic) GTPColor *textColor; // @dynamic textColor;
@property(retain, nonatomic) GTPColor *touchFeedbackColor; // @dynamic touchFeedbackColor;

@end


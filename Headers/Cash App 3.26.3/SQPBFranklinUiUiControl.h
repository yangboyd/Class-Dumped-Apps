//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBFranklinStatusResult, SQPBFranklinUiUiControl_Dialog, SQPBFranklinUiUiControl_IconButton, SQPBFranklinUiUiControl_TextButton;

@interface SQPBFranklinUiUiControl : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityText; // @dynamic accessibilityText;
@property(nonatomic) int action; // @dynamic action;
@property(copy, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(readonly, nonatomic) int buttonOneOfCase; // @dynamic buttonOneOfCase;
@property(nonatomic) int clientScenario; // @dynamic clientScenario;
@property(retain, nonatomic) SQPBFranklinUiUiControl_Dialog *dialog; // @dynamic dialog;
@property(nonatomic) _Bool hasAccessibilityText; // @dynamic hasAccessibilityText;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasClientScenario; // @dynamic hasClientScenario;
@property(nonatomic) _Bool hasDialog; // @dynamic hasDialog;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasMainText; // @dynamic hasMainText;
@property(nonatomic) _Bool hasMainTextColor; // @dynamic hasMainTextColor;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(nonatomic) _Bool hasStatusResult; // @dynamic hasStatusResult;
@property(nonatomic) _Bool hasSubText; // @dynamic hasSubText;
@property(nonatomic) _Bool hasSubTextColor; // @dynamic hasSubTextColor;
@property(nonatomic) _Bool hasSupportNodeToken; // @dynamic hasSupportNodeToken;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTextColor; // @dynamic hasTextColor;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int icon; // @dynamic icon;
@property(retain, nonatomic) SQPBFranklinUiUiControl_IconButton *iconButton; // @dynamic iconButton;
@property(copy, nonatomic) NSString *mainText; // @dynamic mainText;
@property(copy, nonatomic) NSString *mainTextColor; // @dynamic mainTextColor;
@property(nonatomic) int state; // @dynamic state;
@property(retain, nonatomic) SQPBFranklinStatusResult *statusResult; // @dynamic statusResult;
@property(copy, nonatomic) NSString *subText; // @dynamic subText;
@property(copy, nonatomic) NSString *subTextColor; // @dynamic subTextColor;
@property(copy, nonatomic) NSString *supportNodeToken; // @dynamic supportNodeToken;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) SQPBFranklinUiUiControl_TextButton *textButton; // @dynamic textButton;
@property(copy, nonatomic) NSString *textColor; // @dynamic textColor;
@property(nonatomic) int type; // @dynamic type;

@end


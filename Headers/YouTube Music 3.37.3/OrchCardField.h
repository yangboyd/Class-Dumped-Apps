//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class OrchAddressForm, OrchButton, OrchOtpField, OrchUiField;

@interface OrchCardField : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchAddressForm *addressForm; // @dynamic addressForm;
@property(retain, nonatomic) OrchButton *button; // @dynamic button;
@property(readonly, nonatomic) int cardFieldOneOfCase; // @dynamic cardFieldOneOfCase;
@property(nonatomic) _Bool hasHideFieldsBelow; // @dynamic hasHideFieldsBelow;
@property(nonatomic) _Bool hideFieldsBelow; // @dynamic hideFieldsBelow;
@property(retain, nonatomic) OrchOtpField *otpField; // @dynamic otpField;
@property(retain, nonatomic) OrchUiField *uiField; // @dynamic uiField;

@end


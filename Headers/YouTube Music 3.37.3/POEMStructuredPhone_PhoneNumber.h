//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, POEMStructuredPhone_PhoneNumber_I18nData;

@interface POEMStructuredPhone_PhoneNumber : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *e164; // @dynamic e164;
@property(nonatomic) _Bool hasE164; // @dynamic hasE164;
@property(nonatomic) _Bool hasI18NData; // @dynamic hasI18NData;
@property(retain, nonatomic) POEMStructuredPhone_PhoneNumber_I18nData *i18NData; // @dynamic i18NData;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GPBMessage.h>

@class GMSx_GMTTDCompactPolyline, GMSx_GMTTEntity, GMSx_GMTTLatLng, GMSx_GSTimeScheduleProto, NSString;

@interface GMSx_GMTTAttributeValue : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool boolValue; // @dynamic boolValue;
@property(nonatomic) _Bool currentDisturbance; // @dynamic currentDisturbance;
@property(retain, nonatomic) GMSx_GMTTEntity *entity; // @dynamic entity;
@property(copy, nonatomic) NSString *feedbackType; // @dynamic feedbackType;
@property(nonatomic) _Bool hasBoolValue; // @dynamic hasBoolValue;
@property(nonatomic) _Bool hasCurrentDisturbance; // @dynamic hasCurrentDisturbance;
@property(nonatomic) _Bool hasEntity; // @dynamic hasEntity;
@property(nonatomic) _Bool hasFeedbackType; // @dynamic hasFeedbackType;
@property(nonatomic) _Bool hasIntegerValue; // @dynamic hasIntegerValue;
@property(nonatomic) _Bool hasLanguageCodeBcp47; // @dynamic hasLanguageCodeBcp47;
@property(nonatomic) _Bool hasLatLng; // @dynamic hasLatLng;
@property(nonatomic) _Bool hasNoValue; // @dynamic hasNoValue;
@property(nonatomic) _Bool hasPolyline; // @dynamic hasPolyline;
@property(nonatomic) _Bool hasStringValue; // @dynamic hasStringValue;
@property(nonatomic) _Bool hasTimeSchedule; // @dynamic hasTimeSchedule;
@property(nonatomic) int integerValue; // @dynamic integerValue;
@property(copy, nonatomic) NSString *languageCodeBcp47; // @dynamic languageCodeBcp47;
@property(retain, nonatomic) GMSx_GMTTLatLng *latLng; // @dynamic latLng;
@property(nonatomic) _Bool noValue; // @dynamic noValue;
@property(retain, nonatomic) GMSx_GMTTDCompactPolyline *polyline; // @dynamic polyline;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(retain, nonatomic) GMSx_GSTimeScheduleProto *timeSchedule; // @dynamic timeSchedule;

@end


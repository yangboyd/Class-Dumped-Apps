//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCalendarDayPrice, AIRCalendarDayPromotion, AIRCalendarReservation, AIRDate, NSArray, NSNumber, NSString;

@interface AIRCalendarDay : AIRModel
{
    AIRCalendarDay *_previousDay;
    AIRCalendarDay *_nextDay;
    _Bool _available;
    _Bool _isAvailabilityLocked;
    _Bool _bookable;
    _Bool _hostBusy;
    NSNumber *_availableForCheckin;
    AIRDate *_date;
    NSString *_groupId;
    NSString *_type;
    NSString *_subtype;
    NSString *_reason;
    NSString *_notes;
    AIRCalendarDayPrice *_price;
    AIRCalendarReservation *_reservation;
    AIRCalendarDayPromotion *_smartPromotion;
    NSArray *_nestedBusyDetails;
}

+ (id)dateStringDictionaryWithDays:(id)arg1;
+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hostBusy; // @synthesize hostBusy=_hostBusy;
@property(readonly, copy, nonatomic) NSArray *nestedBusyDetails; // @synthesize nestedBusyDetails=_nestedBusyDetails;
@property(readonly, copy, nonatomic) AIRCalendarDayPromotion *smartPromotion; // @synthesize smartPromotion=_smartPromotion;
@property(readonly, copy, nonatomic) AIRCalendarReservation *reservation; // @synthesize reservation=_reservation;
@property(readonly, copy, nonatomic) AIRCalendarDayPrice *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, copy, nonatomic) AIRDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) _Bool bookable; // @synthesize bookable=_bookable;
@property(readonly, nonatomic) NSNumber *availableForCheckin; // @synthesize availableForCheckin=_availableForCheckin;
@property(readonly, nonatomic) _Bool isAvailabilityLocked; // @synthesize isAvailabilityLocked=_isAvailabilityLocked;
@property(readonly, nonatomic) _Bool available; // @synthesize available=_available;
- (_Bool)hasSamePriceAsCalendarDay:(id)arg1;
- (_Bool)hasSameAvailabilityAsCalendarDay:(id)arg1;
- (_Bool)hasSameDemandBasedPricingOverrideFlagAsCalendarDay:(id)arg1;
- (_Bool)hasSameNotesAsCalendarDay:(id)arg1;
- (_Bool)isEqualToCalendarDay:(id)arg1;
- (id)serializedDictionaryValue;
- (void)setNextDay:(id)arg1;
- (id)nextDay;
- (void)setPreviousDay:(id)arg1;
- (id)previousDay;
@property(readonly, nonatomic) NSString *rawAvailability;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithDate:(id)arg1 price:(id)arg2 isAvailable:(_Bool)arg3 isAvailabilityLocked:(_Bool)arg4 type:(id)arg5 subtype:(id)arg6 reason:(id)arg7 notes:(id)arg8 smartPromotion:(id)arg9 reservation:(id)arg10 nestedBusyDetails:(id)arg11;
@property(nonatomic, readonly) _Bool isUnavailableByBookingWindow;

@end


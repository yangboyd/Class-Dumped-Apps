//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCalendar_FlightReservation, GTLRCalendar_GenericSmartMail, GTLRCalendar_LodgingReservation, GTLRCalendar_RestaurantReservation, GTLRCalendar_Time, NSArray;

@interface GTLRCalendar_SmartMailSegment : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSArray *actions; // @dynamic actions;
@property(retain, nonatomic) NSArray *emailReferences; // @dynamic emailReferences;
@property(retain, nonatomic) GTLRCalendar_FlightReservation *flightReservation; // @dynamic flightReservation;
@property(retain, nonatomic) GTLRCalendar_GenericSmartMail *genericSmartmail; // @dynamic genericSmartmail;
@property(retain, nonatomic) GTLRCalendar_LodgingReservation *lodgingReservation; // @dynamic lodgingReservation;
@property(retain, nonatomic) GTLRCalendar_RestaurantReservation *restaurantReservation; // @dynamic restaurantReservation;
@property(retain, nonatomic) GTLRCalendar_Time *sortingEndTime; // @dynamic sortingEndTime;
@property(retain, nonatomic) GTLRCalendar_Time *sortingStartTime; // @dynamic sortingStartTime;

@end


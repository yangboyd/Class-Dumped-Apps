//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCalendar_Action, GTLRCalendar_Badge, GTLRCalendar_FormattedText, NSArray, NSString;

@interface GTLRCalendar_SummaryLayout : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRCalendar_Badge *badge; // @dynamic badge;
@property(retain, nonatomic) NSArray *detailLines; // @dynamic detailLines;
@property(retain, nonatomic) GTLRCalendar_Action *entireLayoutAction; // @dynamic entireLayoutAction;
@property(copy, nonatomic) NSString *iconOverlay; // @dynamic iconOverlay;
@property(retain, nonatomic) NSArray *images; // @dynamic images;
@property(retain, nonatomic) GTLRCalendar_FormattedText *title; // @dynamic title;

@end


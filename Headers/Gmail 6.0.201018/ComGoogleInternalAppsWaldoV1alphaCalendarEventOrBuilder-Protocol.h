//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleInternalAppsWaldoV1alphaConferenceData, ComGoogleInternalAppsWaldoV1alphaEventAttendee, ComGoogleInternalAppsWaldoV1alphaTimeRange, NSString;
@protocol JavaUtilList;

@protocol ComGoogleInternalAppsWaldoV1alphaCalendarEventOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleInternalAppsWaldoV1alphaConferenceData *)getConferenceData;
- (_Bool)hasConferenceData;
- (ComGoogleInternalAppsWaldoV1alphaEventAttendee *)getAttendeesWithInt:(int)arg1;
- (id <JavaUtilList>)getAttendeesList;
- (int)getAttendeesCount;
- (ComGoogleInternalAppsWaldoV1alphaTimeRange *)getTimeRange;
- (_Bool)hasTimeRange;
- (NSString *)getSummary;
- (_Bool)hasSummary;
@end


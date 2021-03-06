//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JCalendarAttendee, JCalendarCalendarEvent, JCalendarErrorCode, JCalendarIcalProposal, NSString;
@protocol JavaUtilList;

@protocol JCalendarCalendarEventOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getEditNoteUrl;
- (_Bool)hasEditNoteUrl;
- (NSString *)getProposeNewTimeUrl;
- (_Bool)hasProposeNewTimeUrl;
- (JCalendarCalendarEvent *)getOriginalEventDetails;
- (_Bool)hasOriginalEventDetails;
- (NSString *)getAdditionalPublishUrlParams;
- (_Bool)hasAdditionalPublishUrlParams;
- (_Bool)getGuestListHidden;
- (_Bool)hasGuestListHidden;
- (JCalendarErrorCode *)getErrorCode;
- (_Bool)hasErrorCode;
- (NSString *)getRecurrenceName;
- (_Bool)hasRecurrenceName;
- (JCalendarIcalProposal *)getProposal;
- (_Bool)hasProposal;
- (NSString *)getEid;
- (_Bool)hasEid;
- (JCalendarAttendee *)getParticipant;
- (_Bool)hasParticipant;
- (JCalendarAttendee *)getResponder;
- (_Bool)hasResponder;
- (JCalendarAttendee *)getOrganizer;
- (_Bool)hasOrganizer;
- (JCalendarAttendee *)getAttendeesWithInt:(int)arg1;
- (id <JavaUtilList>)getAttendeesList;
- (int)getAttendeesCount;
- (NSString *)getLocation;
- (_Bool)hasLocation;
- (NSString *)getViewEventParams;
- (_Bool)hasViewEventParams;
- (NSString *)getIsoEnd;
- (_Bool)hasIsoEnd;
- (NSString *)getIsoStart;
- (_Bool)hasIsoStart;
- (NSString *)getEventTime;
- (_Bool)hasEventTime;
- (NSString *)getName;
- (_Bool)hasName;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCCardFeedbackMetadata, GHCEventFeedbackMetadata, NSString;

@interface GHCCustomAction_FeedbackAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCCardFeedbackMetadata *cardFeedbackMetadata; // @dynamic cardFeedbackMetadata;
@property(copy, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(retain, nonatomic) GHCEventFeedbackMetadata *eventFeedbackMetadata; // @dynamic eventFeedbackMetadata;
@property(copy, nonatomic) NSString *eventTime; // @dynamic eventTime;
@property(copy, nonatomic) NSString *eventTitle; // @dynamic eventTitle;
@property(readonly, nonatomic) int feedbackTypeMetadataOneOfCase; // @dynamic feedbackTypeMetadataOneOfCase;
@property(copy, nonatomic) NSString *structureId; // @dynamic structureId;

@end


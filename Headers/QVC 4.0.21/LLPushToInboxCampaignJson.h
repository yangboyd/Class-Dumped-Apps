//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface LLPushToInboxCampaignJson : NSObject
{
    NSNumber *_campaignId;
    NSString *_abTest;
    NSNumber *_receivedDate;
    NSNumber *_startTime;
    NSNumber *_expirationDate;
    NSString *_listingTitle;
    NSString *_listingSummary;
    NSNumber *_sortOrder;
    NSURL *_deepLinkUrl;
    NSDictionary *_attributes;
}

+ (id)withPayload:(id)arg1 apsDictionary:(id)arg2 logger:(id)arg3 localyticsDelegate:(id)arg4;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (id)generateLoggingDictionary;
@property(readonly, copy, nonatomic) NSDictionary *markerDictionary;
- (id)expirationStringFromDate;
- (id)expirationDateFromString:(id)arg1;
- (id)expirationDateFromPayload:(id)arg1 logger:(id)arg2;
- (id)attributesFromPayload:(id)arg1;
- (id)initWithPayload:(id)arg1 apsDictionary:(id)arg2 logger:(id)arg3 localyticsDelegate:(id)arg4;

@end


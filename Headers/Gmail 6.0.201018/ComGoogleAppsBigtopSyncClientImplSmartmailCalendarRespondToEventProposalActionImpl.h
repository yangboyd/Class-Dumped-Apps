//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTRespondToEventProposalAction-Protocol.h"

@class JCalendarIcalProposal, NSString;
@protocol ComGoogleAppsBigtopDataItemsCalendarApiCalendarEventDataService;

@interface ComGoogleAppsBigtopSyncClientImplSmartmailCalendarRespondToEventProposalActionImpl : NSObject <JBTRespondToEventProposalAction>
{
    id <ComGoogleAppsBigtopDataItemsCalendarApiCalendarEventDataService> calendarEventDataService_;
    NSString *messageServerPermId_;
    NSString *threadServerPermId_;
    JCalendarIcalProposal *proposal_;
    _Bool actionCompleted_;
}

- (void)dealloc;
- (_Bool)isActionCompleted;
- (id)accept;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


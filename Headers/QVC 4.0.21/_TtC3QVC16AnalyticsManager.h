//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC3QVC16AnalyticsManager : NSObject
{
    // Error parsing type: , name: analyticsConfig
    // Error parsing type: , name: isANewSession
    // Error parsing type: , name: restrictionFlag
    // Error parsing type: , name: currentPageID
    // Error parsing type: , name: postponedTagsQueue
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool postponesTags;
- (void)updateAllowedPageWith:(unsigned long long)arg1;
- (long long)getPageCounter;
- (id)getClientID;
- (id)getCjvfParam;
- (id)getSessionId;
- (void)onNewSessionStarted;
- (id)init;
@property(nonatomic) _Bool isANewSession; // @synthesize isANewSession;

@end


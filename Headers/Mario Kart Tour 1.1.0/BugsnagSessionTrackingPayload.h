//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface BugsnagSessionTrackingPayload : NSObject
{
    NSArray *_sessions;
}

@property(retain) NSArray *sessions; // @synthesize sessions=_sessions;
- (void).cxx_destruct;
- (id)toJson;
- (id)initWithSessions:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSMutableArray, NSString;

@interface AnalyticsEventItemStorageItem : NSObject <NSCoding>
{
    NSMutableArray *_eventList;
    NSString *_userId;
    NSDate *_savedTime;
}

@property(retain) NSDate *savedTime; // @synthesize savedTime=_savedTime;
@property(retain) NSString *userId; // @synthesize userId=_userId;
@property(retain) NSMutableArray *eventList; // @synthesize eventList=_eventList;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


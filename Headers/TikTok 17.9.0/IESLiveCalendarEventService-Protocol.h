//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IESLiveCalendarEventParamModel;

@protocol IESLiveCalendarEventService <NSObject>
- (void)getCalendarEvent:(IESLiveCalendarEventParamModel *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, long long))arg2;
- (void)cancelCalendarEvent:(IESLiveCalendarEventParamModel *)arg1 completionBlock:(void (^)(_Bool, NSString *, long long))arg2;
- (void)createCalendarEvent:(IESLiveCalendarEventParamModel *)arg1 completionBlock:(void (^)(_Bool, NSString *, long long))arg2;
@end


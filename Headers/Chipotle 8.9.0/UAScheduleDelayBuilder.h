//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UAScheduleDelayBuilder : NSObject
{
    double _seconds;
    NSArray *_screens;
    NSString *_regionID;
    long long _appState;
    NSArray *_cancellationTriggers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *cancellationTriggers; // @synthesize cancellationTriggers=_cancellationTriggers;
@property(nonatomic) long long appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *regionID; // @synthesize regionID=_regionID;
@property(copy, nonatomic) NSArray *screens; // @synthesize screens=_screens;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;

@end


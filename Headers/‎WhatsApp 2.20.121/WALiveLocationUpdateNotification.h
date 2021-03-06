//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WABaseNotification.h>

@class CLLocation, WAUserJID;

@interface WALiveLocationUpdateNotification : WABaseNotification
{
    WAUserJID *_userJID;
    CLLocation *_location;
    double _elapsedTimeInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double elapsedTimeInterval; // @synthesize elapsedTimeInterval=_elapsedTimeInterval;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) WAUserJID *userJID; // @synthesize userJID=_userJID;

@end


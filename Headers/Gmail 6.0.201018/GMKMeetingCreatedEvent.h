//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMKMeetingEvent.h"

@class GMKMeetingSpaceInfo;

@interface GMKMeetingCreatedEvent : GMKMeetingEvent
{
    GMKMeetingSpaceInfo *_spaceInfo;
}

+ (id)eventWithSpaceInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GMKMeetingSpaceInfo *spaceInfo; // @synthesize spaceInfo=_spaceInfo;

@end


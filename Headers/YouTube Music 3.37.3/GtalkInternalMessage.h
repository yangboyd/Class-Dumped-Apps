//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GtalkTopicsUpdateRequest, GtalkTopicsUpdateResponse;

@interface GtalkInternalMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int messageTypeOneOfCase; // @dynamic messageTypeOneOfCase;
@property(retain, nonatomic) GtalkTopicsUpdateRequest *topicsUpdateRequest; // @dynamic topicsUpdateRequest;
@property(retain, nonatomic) GtalkTopicsUpdateResponse *topicsUpdateResponse; // @dynamic topicsUpdateResponse;

@end


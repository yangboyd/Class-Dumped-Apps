//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotoSearchQueryEvent_SearchQuery;

@interface PhotoSearchQueryEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLoggingId; // @dynamic hasLoggingId;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool hasResultProvider; // @dynamic hasResultProvider;
@property(nonatomic) long long loggingId; // @dynamic loggingId;
@property(retain, nonatomic) PhotoSearchQueryEvent_SearchQuery *query; // @dynamic query;
@property(nonatomic) int resultProvider; // @dynamic resultProvider;

@end


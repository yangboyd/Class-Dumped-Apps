//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface GUNSNotificationFetchResponse : NSObject
{
    NSArray *_notifications;
    long long _syncVersion;
    NSData *_continuationToken;
    NSData *_syncToken;
    NSData *_syncPaginationToken;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *syncPaginationToken; // @synthesize syncPaginationToken=_syncPaginationToken;
@property(copy, nonatomic) NSData *syncToken; // @synthesize syncToken=_syncToken;
@property(copy, nonatomic) NSData *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(nonatomic) long long syncVersion; // @synthesize syncVersion=_syncVersion;
@property(retain, nonatomic) NSArray *notifications; // @synthesize notifications=_notifications;
- (id)description;

@end


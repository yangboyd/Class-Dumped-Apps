//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface ASMConfigFlagsService : NSObject
{
    NSMutableSet *_usersWithInFlightConfigFetches;
    NSMutableDictionary *_callbacksToNotifyForUser;
}

- (void).cxx_destruct;
- (void)fetchFlagsForAuthorization:(id)arg1 service:(id)arg2 options:(id)arg3 requestContext:(id)arg4 preRPCHandler:(CDUnknownBlockType)arg5 postRPCHandler:(CDUnknownBlockType)arg6 notificationHandler:(CDUnknownBlockType)arg7;
- (id)init;

@end


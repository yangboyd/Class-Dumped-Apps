//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGraphQLService;

@interface IGRTCTurnAllocationService : NSObject
{
    IGGraphQLService *_graphQLService;
}

- (void).cxx_destruct;
- (void)allocateWithTurnUsername:(id)arg1 turnPassword:(id)arg2 sessionKey:(id)arg3 version:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithGraphQLService:(id)arg1;

@end


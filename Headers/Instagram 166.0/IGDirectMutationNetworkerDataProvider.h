//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGDirectMutationNetworkerDataProvider : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    CDUnknownBlockType _supportsOnlyHttp_requestProvider;
    CDUnknownBlockType _supportsHttpAndRealtime_httpRequestProvider;
    CDUnknownBlockType _supportsHttpAndRealtime_realtimePayloadProvider;
    CDUnknownBlockType _supportsOnlyRealtime_realtimePayloadProvider;
}

+ (id)supportsOnlyRealtimeWithRealtimePayloadProvider:(CDUnknownBlockType)arg1;
+ (id)supportsOnlyHttpWithRequestProvider:(CDUnknownBlockType)arg1;
+ (id)supportsHttpAndRealtimeWithHttpRequestProvider:(CDUnknownBlockType)arg1 realtimePayloadProvider:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)matchSupportsOnlyHttp:(CDUnknownBlockType)arg1 supportsHttpAndRealtime:(CDUnknownBlockType)arg2 supportsOnlyRealtime:(CDUnknownBlockType)arg3;

@end


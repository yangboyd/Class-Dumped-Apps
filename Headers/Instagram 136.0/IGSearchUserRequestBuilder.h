//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSearchRequestBuilding-Protocol.h>

@class NSString;

@interface IGSearchUserRequestBuilder : NSObject <IGSearchRequestBuilding>
{
    long long _surfaceAttributionType;
}

- (id)initWithSearchSurfaceNetworkAttributionType:(long long)arg1;
- (id)requestBuilderForQueryString:(id)arg1 rankToken:(id)arg2 additionalParams:(id)arg3 excludeList:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


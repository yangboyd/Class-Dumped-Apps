//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSHybridGRPCService.h>

#import <NavigationFramework/GMSMobileMapsLocationService-Protocol.h>

@class NSString;

@interface GMSMobileMapsLocationService : GMSHybridGRPCService <GMSMobileMapsLocationService>
{
}

- (id)RPCToSnapToPlaceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)snapToPlaceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToGetLocationShiftWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getLocationShiftWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


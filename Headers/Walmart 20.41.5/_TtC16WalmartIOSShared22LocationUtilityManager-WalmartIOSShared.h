//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/_TtC16WalmartIOSShared22LocationUtilityManager.h>

@interface _TtC16WalmartIOSShared22LocationUtilityManager (WalmartIOSShared)
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationUpdateControllerDidSubmitWithLocation:(id)arg1 controller:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)locationUpdateControllerWithDidSearch:(id)arg1 parsedStoreNumber:(id)arg2;
- (void)userLocationDidChange:(struct CLLocationCoordinate2D)arg1;
- (void)authenticationStateChangedWithUser:(id)arg1 source:(long long)arg2;
@end


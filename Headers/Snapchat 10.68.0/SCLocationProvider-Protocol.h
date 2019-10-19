//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLHeading, CLLocation, NSArray, SCLocationListenerAnnouncer;
@protocol SCLocationRequest, SCObserving;

@protocol SCLocationProvider <NSObject>
- (SCLocationListenerAnnouncer *)locationAnnouncer;
- (id <SCObserving>)requestActiveLocationUpdatesWithRequest:(id <SCLocationRequest>)arg1;
- (_Bool)hasRecentAuthorizationStatus;
- (_Bool)hasAuthorizationStatus;
- (_Bool)lastAuthorized;
- (int)lastAuthorizationStatus;
- (NSArray *)beacons;
- (CLHeading *)heading;
- (CLLocation *)location;
@end


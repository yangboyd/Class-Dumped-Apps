//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AtriusLocation/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;
@protocol ATRCompassProviderDelegate;

@interface ATRCompassProvider : NSObject <CLLocationManagerDelegate>
{
    id <ATRCompassProviderDelegate> _delegate;
    CLLocationManager *_locationManager;
}

@property(retain) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic, getter=getDelegate, setter=setDelegate:) __weak id <ATRCompassProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)disableCompass;
- (void)enableCompass;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


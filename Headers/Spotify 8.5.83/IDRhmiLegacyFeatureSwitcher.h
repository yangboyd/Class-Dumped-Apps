//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDVehicleInfo, NSDictionary, NSOperationQueue;

@interface IDRhmiLegacyFeatureSwitcher : NSObject
{
    NSDictionary *_listViewControllers;
    IDVehicleInfo *_vehicleInfo;
    NSOperationQueue *_queue;
    id _applicationDidBecomeActiveObserver;
    id _featureInfoDeleteObserver;
    id _featureInfoUpdateObserver;
}

+ (_Bool)switchToRhmiFeature:(id)arg1;
+ (id)new;
- (void).cxx_destruct;
@property(retain) id featureInfoUpdateObserver; // @synthesize featureInfoUpdateObserver=_featureInfoUpdateObserver;
@property(retain) id featureInfoDeleteObserver; // @synthesize featureInfoDeleteObserver=_featureInfoDeleteObserver;
@property(retain) id applicationDidBecomeActiveObserver; // @synthesize applicationDidBecomeActiveObserver=_applicationDidBecomeActiveObserver;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDVehicleInfo *vehicleInfo; // @synthesize vehicleInfo=_vehicleInfo;
- (id)featureInfosForCurrentVehicle:(id)arg1;
- (id)viewControllerForHmiCategory:(id)arg1;
- (id)instantiateListViewControllers;
- (void)updateViewController:(id)arg1;
- (void)updateViewControllers:(id)arg1;
- (void)updateViewControllersForHmiCategories:(id)arg1;
- (void)disconnect;
- (void)connect;
@property(readonly, nonatomic) NSDictionary *listViewControllers; // @synthesize listViewControllers=_listViewControllers;
- (void)dealloc;
- (id)init;
- (id)initWithVehicleInfo:(id)arg1;

@end


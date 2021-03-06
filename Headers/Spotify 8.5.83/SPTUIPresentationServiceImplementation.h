//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPresenterViewControllerProvider-Protocol.h"
#import "SPTUIPresentationService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTContainerUIService, SPTInstrumentationService, SPTModalPresentationController, SPTPopoverPresentationController;

@interface SPTUIPresentationServiceImplementation : NSObject <SPTPresenterViewControllerProvider, SPTUIPresentationService>
{
    id <SPTContainerUIService> _containerUIService;
    id <SPTContainerService> _containerService;
    id <SPTInstrumentationService> _instrumentationService;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTPopoverPresentationController> _popoverPresentationController;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPopoverPresentationController> popoverPresentationController; // @synthesize popoverPresentationController=_popoverPresentationController;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(nonatomic) __weak id <SPTInstrumentationService> instrumentationService; // @synthesize instrumentationService=_instrumentationService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
- (id)provideMessageBarController;
- (id)providePopoverPresentationController;
- (id)provideModalPresentationController;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


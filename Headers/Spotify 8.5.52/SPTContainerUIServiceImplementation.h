//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContainerUIService-Protocol.h"

@class MessageBarController, NSString, SPTAlertControllerImplementation, SPTAlertQueueImplementation, SPTAllocationContext, SPTMainContentLayoutGuideController, SPTMainWindow;

@interface SPTContainerUIServiceImplementation : NSObject <SPTContainerUIService>
{
    MessageBarController *_messageBarController;
    SPTMainWindow *_mainWindow;
    SPTAlertQueueImplementation *_alertInterface;
    SPTAlertControllerImplementation *_alertController;
    SPTMainContentLayoutGuideController *_mainContentLayoutGuideController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTMainContentLayoutGuideController *mainContentLayoutGuideController; // @synthesize mainContentLayoutGuideController=_mainContentLayoutGuideController;
@property(retain, nonatomic) SPTAlertControllerImplementation *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTAlertQueueImplementation *alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) SPTMainWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(retain, nonatomic) MessageBarController *messageBarController; // @synthesize messageBarController=_messageBarController;
- (void).cxx_destruct;
- (id)provideMainContentLayoutGuide;
- (id)provideAlertController;
- (id)provideAlertInterface;
- (id)provideAnimationView;
- (void)showPopupWithViewController:(id)arg1;
- (id)provideRootPresenterViewController;
- (id)provideRootViewController;
- (id)provideMainWindow;
- (id)provideMessageBarController;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


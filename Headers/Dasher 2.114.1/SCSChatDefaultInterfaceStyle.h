//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServiceChat/SCInterfaceAction-Protocol.h>
#import <ServiceChat/SCInterfaceEventResponder-Protocol.h>
#import <ServiceChat/SCInterfacePresentation-Protocol.h>
#import <ServiceChat/SCInterfaceStyle-Protocol.h>
#import <ServiceChat/SCOverlayPresentationControllerDelegate-Protocol.h>
#import <ServiceChat/SCSInterfaceNotificationResponder-Protocol.h>
#import <ServiceChat/UINavigationControllerDelegate-Protocol.h>
#import <ServiceChat/UISplitViewControllerDelegate-Protocol.h>

@class NSArray, NSString, SCInterfaceRouter;

@interface SCSChatDefaultInterfaceStyle : NSObject <SCOverlayPresentationControllerDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, SCSInterfaceNotificationResponder, SCInterfaceStyle, SCInterfacePresentation, SCInterfaceAction, SCInterfaceEventResponder>
{
    NSString *_style;
    SCInterfaceRouter *_router;
    NSArray *_supportedViewControllers;
}

+ (void)load;
@property(retain, nonatomic) NSArray *supportedViewControllers; // @synthesize supportedViewControllers=_supportedViewControllers;
@property(nonatomic) __weak SCInterfaceRouter *router; // @synthesize router=_router;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (_Bool)showInterfaceForNotification:(id)arg1;
- (_Bool)didReceiveNotification:(id)arg1;
- (void)overlayPresentationController:(id)arg1 backgroundViewTapped:(id)arg2;
- (_Bool)shouldHandleViewController:(id)arg1;
- (id)topControllerForViewController:(id)arg1;
- (_Bool)interactionReceivedWithEvent:(id)arg1;
- (_Bool)supportsEventsWithName:(id)arg1;
- (long long)preferredSortIndexForInterfaceAction:(id)arg1;
- (id)eventNameForInterfaceAction:(id)arg1;
- (id)actionItemForInterfaceAction:(id)arg1;
- (id)availableInterfaceActions;
- (id)transitioningDelegateForPresentedController:(id)arg1 presentingController:(id)arg2;
- (void)showChatInterface:(id)arg1;
- (id)chatInterface;
- (id)initWithRouter:(id)arg1 interfaceStyle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


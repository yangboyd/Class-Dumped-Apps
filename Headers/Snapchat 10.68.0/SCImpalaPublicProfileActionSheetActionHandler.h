//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaPublicProfileActionSheetActionHandling-Protocol.h"

@class NSString, SCUserSession, UIViewController;
@protocol NavigationDelegate;

@interface SCImpalaPublicProfileActionSheetActionHandler : NSObject <SCImpalaPublicProfileActionSheetActionHandling>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)presentProfileWithEncodedBusinessProfile:(id)arg1;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 viewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


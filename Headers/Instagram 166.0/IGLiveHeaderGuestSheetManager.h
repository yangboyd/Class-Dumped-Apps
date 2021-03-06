//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGLiveHeaderGuestSheetViewControllerDelegate-Protocol.h>

@class IGLiveBroadcast, IGLiveHeaderGuestSheetViewController, IGUser, IGUserSession, NSArray, NSString, UIViewController;
@protocol IGLiveHeaderGuestSheetManagerDelegate;

@interface IGLiveHeaderGuestSheetManager : NSObject <IGLiveHeaderGuestSheetViewControllerDelegate>
{
    IGUserSession *_userSession;
    NSString *_analyticModule;
    IGLiveHeaderGuestSheetViewController *_userListViewController;
    _Bool _requestToJoinEnabled;
    IGLiveBroadcast *_broadcast;
    IGUser *_host;
    NSArray *_guests;
    UIViewController *_presenter;
    id <IGLiveHeaderGuestSheetManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool requestToJoinEnabled; // @synthesize requestToJoinEnabled=_requestToJoinEnabled;
@property(nonatomic) __weak id <IGLiveHeaderGuestSheetManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presenter; // @synthesize presenter=_presenter;
@property(copy, nonatomic) NSArray *guests; // @synthesize guests=_guests;
@property(retain, nonatomic) IGUser *host; // @synthesize host=_host;
@property(retain, nonatomic) IGLiveBroadcast *broadcast; // @synthesize broadcast=_broadcast;
- (void)guestSheetViewController:(id)arg1 didUnfollowUser:(id)arg2;
- (void)guestSheetViewController:(id)arg1 didFollowUser:(id)arg2;
- (void)guestSheetViewController:(id)arg1 didInspectUser:(id)arg2;
- (void)guestSheetViewControllerDidRequestToJoin:(id)arg1;
- (_Bool)isPresentingUserListSheet;
- (void)_clearUserListSheet;
- (void)dismissUserListSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentUserListSheet;
- (id)initWithUserSession:(id)arg1 analyticModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


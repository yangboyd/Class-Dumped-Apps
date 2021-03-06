//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOSShared/SDWebService.h>

@class UIAlertController;

@interface WalmartBaseNodeService : SDWebService
{
    UIAlertController *_noConnectionAlert;
    UIAlertController *_noWalmartAlert;
}

+ (Class)errorClass;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) UIAlertController *noWalmartAlert; // @synthesize noWalmartAlert=_noWalmartAlert;
@property(retain, nonatomic) UIAlertController *noConnectionAlert; // @synthesize noConnectionAlert=_noConnectionAlert;
- (id)validateZipcode:(id)arg1 withUIUpdateBlock:(CDUnknownBlockType)arg2;
- (id)setPreferredStoreID:(id)arg1 withUIUpdateBlock:(CDUnknownBlockType)arg2;
- (id)logout:(CDUnknownBlockType)arg1 uiUpdateBlock:(CDUnknownBlockType)arg2;
- (id)guestLoginWithCompletion:(CDUnknownBlockType)arg1 uiUpdateBlock:(CDUnknownBlockType)arg2;
- (id)getCookiesWithToken:(id)arg1 dataProcessingBlock:(CDUnknownBlockType)arg2 uiUpdateBlock:(CDUnknownBlockType)arg3;
- (void)will302RedirectToUrl:(id)arg1;
- (_Bool)isReachable:(_Bool)arg1;
- (_Bool)isReachableToHost:(id)arg1 showError:(_Bool)arg2;
- (void)showNoWalmartAlert;
- (void)hideNetworkActivity;
- (void)showNetworkActivity;
- (id)taxonomyForBestsellersWithUIUpdateBlock:(CDUnknownBlockType)arg1;
- (id)taxonomyForSavingsShowcaseWithID:(id)arg1 uiUpdateBlock:(CDUnknownBlockType)arg2;
- (id)taxonomyForID:(id)arg1 uiUpdateBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end


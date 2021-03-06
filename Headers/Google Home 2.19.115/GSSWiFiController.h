//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "GOOHeaderNavigationParentViewController-Protocol.h"
#import "GSSWiFiHandlerDelegate-Protocol.h"

@class GOOFlexibleHeaderViewController, GOOHeaderNavigationView, GSSHeaderController, GSSWiFiHandler, NSString, QTMActivityIndicator;

@interface GSSWiFiController : QTMCollectionViewController <GSSWiFiHandlerDelegate, GOOHeaderNavigationParentViewController>
{
    GSSWiFiHandler *_wifiHandler;
    GSSHeaderController *_smartSetupHeaderController;
    QTMActivityIndicator *_activityIndicator;
    GOOHeaderNavigationView *headerNavigationView;
    GOOFlexibleHeaderViewController *headerViewController;
}

@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController;
@property(retain, nonatomic) GOOHeaderNavigationView *headerNavigationView; // @synthesize headerNavigationView;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)wiFiHandler:(id)arg1 didFinishWithAccountsHandler:(id)arg2;
- (void)wiFiHandlerDidFailAuthentication:(id)arg1;
- (void)wiFiHandler:(id)arg1 didFailWithError:(id)arg2;
- (void)wiFiHandlerDidCompleteSetup:(id)arg1;
- (void)viewDidLoad;
- (id)initWithWiFiHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


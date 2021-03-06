//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GOOHeaderNavigationParentViewController-Protocol.h"
#import "GSSOptionsHandlerDelegate-Protocol.h"

@class GOOFlexibleHeaderViewController, GOOHeaderNavigationView, GSSHeaderController, GSSOptionsHandler, NSString;

@interface GSSOptionsController : UIViewController <GSSOptionsHandlerDelegate, GOOHeaderNavigationParentViewController>
{
    GSSHeaderController *_smartSetupHeaderController;
    GSSOptionsHandler *_optionsHandler;
    GOOFlexibleHeaderViewController *headerViewController;
    GOOHeaderNavigationView *headerNavigationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GOOHeaderNavigationView *headerNavigationView; // @synthesize headerNavigationView;
@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController;
- (void)optionsHandler:(id)arg1 didFinishWithAccountsHandler:(id)arg2;
- (void)optionsHandler:(id)arg1 didFinishWithWiFiHandler:(id)arg2;
- (void)optionsHandler:(id)arg1 didFailWithError:(id)arg2;
- (void)optionsHandlerDidCompleteSetup:(id)arg1;
- (void)viewDidLoad;
- (id)initWithWithD2DConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


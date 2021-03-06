//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <Instabug/IBGAddFeatureFormDelegate-Protocol.h>
#import <Instabug/IBGFeatureRequestsDataStoreDelegate-Protocol.h>

@class IBGAddFeatureFormController, IBGAddFeatureView, IBGFeatureRequestsDataStore, IBGFeatureRequestsHUD, IBGToastView, UIBarButtonItem;
@protocol IBGFeatureRequestUpdatesDelegate;

@interface IBGAddFeatureViewController : UITableViewController <IBGAddFeatureFormDelegate, IBGFeatureRequestsDataStoreDelegate>
{
    id <IBGFeatureRequestUpdatesDelegate> _delegate;
    IBGAddFeatureView *_formView;
    IBGAddFeatureFormController *_controller;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_addBarButtonItem;
    IBGFeatureRequestsHUD *_addFeatureHUD;
    IBGFeatureRequestsDataStore *_datastore;
    IBGToastView *_toastView;
}

@property(retain, nonatomic) IBGToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) IBGFeatureRequestsDataStore *datastore; // @synthesize datastore=_datastore;
@property(retain, nonatomic) IBGFeatureRequestsHUD *addFeatureHUD; // @synthesize addFeatureHUD=_addFeatureHUD;
@property(retain, nonatomic) UIBarButtonItem *addBarButtonItem; // @synthesize addBarButtonItem=_addBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(retain, nonatomic) IBGAddFeatureFormController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) IBGAddFeatureView *formView; // @synthesize formView=_formView;
@property(nonatomic) __weak id <IBGFeatureRequestUpdatesDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didAddFeatureRequest:(id)arg1 withError:(id)arg2;
- (void)formDidBecomeInvalid;
- (void)formDidBecomeValid;
- (void)presentAlertViewForCancel;
- (void)handleRequestSuccessWithFeature:(id)arg1;
- (void)handleRequestError;
- (void)executeAddFeatureRequest;
- (void)setupToastView;
- (void)setupNavigationBar;
- (void)addButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (_Bool)prefersShadowHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end


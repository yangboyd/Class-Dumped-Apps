//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "LocationPrivacyInfoViewDelegate-Protocol.h"

@class LocationManager, LocationPrivacyInfoView;
@protocol PrivacyViewDelegate;

@interface PrivacyInfoViewController : BaseViewController <LocationPrivacyInfoViewDelegate>
{
    LocationPrivacyInfoView *_privacyView;
    id <PrivacyViewDelegate> _delegate;
    LocationManager *_locationManager;
}

@property(retain, nonatomic) LocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) __weak id <PrivacyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LocationPrivacyInfoView *privacyView; // @synthesize privacyView=_privacyView;
- (void).cxx_destruct;
- (void)locationPrivacyInfoViewDidRequestLocation:(id)arg1;
- (void)locationPrivacyInfoView:(id)arg1 didSelectPrivacyURL:(id)arg2;
- (void)requestLocation;
- (void)configureNavigationBarAppearance;
- (void)dismiss;
- (void)viewDidLoad;

@end


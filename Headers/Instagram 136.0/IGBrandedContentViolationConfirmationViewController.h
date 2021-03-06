//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IGAdEmptyView, IGUserSession, NSString;
@protocol IGBrandedContentViolationConfirmationViewControllerDelegate;

@interface IGBrandedContentViolationConfirmationViewController : UIViewController
{
    IGUserSession *_userSession;
    NSString *_title;
    NSString *_subtitle;
    IGAdEmptyView *_confimationView;
    NSString *_mediaId;
    id <IGBrandedContentViolationConfirmationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGBrandedContentViolationConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_onDoneTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 title:(id)arg2 subtitle:(id)arg3 mediaId:(id)arg4;

@end


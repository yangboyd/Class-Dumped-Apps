//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOWebViewController.h"

#import "GOOWebViewControllerDelegate.h"
#import "YTPageStyleProvider.h"
#import "YTTopController.h"

@class GIMMe, NSString;

@interface YTWebViewController : GOOWebViewController <GOOWebViewControllerDelegate, YTPageStyleProvider, YTTopController>
{
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)loadAuthenticatedURL:(id)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
@property(readonly, nonatomic) long long pageStyle;
- (void)viewDidLoad;
- (void)loadWithEndpoint:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


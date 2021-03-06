//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <LinkKit/PLKCustomizable-Protocol.h>
#import <LinkKit/PLKFlowCoordinated-Protocol.h>

@class NSString, PLKFlowContext, UIButton, UILabel;
@protocol PLKFlowCoordinator;

@interface PLKMicrodepositsAuthorizationPaneViewController : UIViewController <PLKFlowCoordinated, PLKCustomizable>
{
    id <PLKFlowCoordinator> _flowCoordinator;
    PLKFlowContext *_flowContext;
    UILabel *_info;
    UILabel *_message;
    UILabel *_finePrint;
    UIButton *_continueButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) __weak UILabel *finePrint; // @synthesize finePrint=_finePrint;
@property(nonatomic) __weak UILabel *message; // @synthesize message=_message;
@property(nonatomic) __weak UILabel *info; // @synthesize info=_info;
@property(retain, nonatomic) PLKFlowContext *flowContext; // @synthesize flowContext=_flowContext;
@property(nonatomic) __weak id <PLKFlowCoordinator> flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
- (void)customizeWithConfiguration:(id)arg1;
- (void)didTapContinue:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


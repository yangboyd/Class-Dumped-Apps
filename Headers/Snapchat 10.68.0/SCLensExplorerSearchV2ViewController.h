//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCLensExplorerSearchViewControllerProtocol-Protocol.h"
#import "SIGHeaderDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SIGHeader, SIGTextView, UIView;
@protocol SCLensExplorerSearchPresenterProtocol, SCLensExplorerSearchViewControllerDelegate;

@interface SCLensExplorerSearchV2ViewController : UIViewController <UITextFieldDelegate, SIGHeaderDelegate, SCLensExplorerSearchViewControllerProtocol>
{
    SIGTextView *_searchTextField;
    SIGHeader *_headerView;
    double _headerHeight;
    id <SCLensExplorerSearchPresenterProtocol> _searchPresenter;
    id <SCLensExplorerSearchViewControllerDelegate> delegate;
}

@property(nonatomic) __weak id <SCLensExplorerSearchViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_setupKarma;
- (void)didSelectDismissalActionWithHeader:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
@property(readonly, nonatomic) UIView *headerView;
- (void)viewDidLoad;
- (id)initWithSearchPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


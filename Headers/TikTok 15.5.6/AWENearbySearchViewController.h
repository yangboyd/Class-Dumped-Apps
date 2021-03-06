//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class AWENearbySearchResultViewController, AWESearchBar, NSString, UIButton, UIImageView;

@interface AWENearbySearchViewController : UIViewController <UISearchBarDelegate, BTDRouterViewControllerProtocol>
{
    UIButton *_cancelButton;
    AWESearchBar *_searchBar;
    AWENearbySearchResultViewController *_nearbySearchResultViewController;
    NSString *_enterFrom;
    UIImageView *_nearbyImageView;
}

+ (void)__awe__codeRunnerRun_36;
@property(copy, nonatomic) UIImageView *nearbyImageView; // @synthesize nearbyImageView=_nearbyImageView;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) AWENearbySearchResultViewController *nearbySearchResultViewController; // @synthesize nearbySearchResultViewController=_nearbySearchResultViewController;
@property(retain, nonatomic) AWESearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)p_createImageWithColor:(id)arg1;
- (void)p_cancelButtonTapped;
- (void)p_configureUI;
- (void)viewDidLoad;
- (id)init;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


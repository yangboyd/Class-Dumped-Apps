//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageContainer-Protocol.h"
#import "SPTRoutingController-Protocol.h"
#import "SPTScrollToTopViewController-Protocol.h"
#import "SPViewController-Protocol.h"

@class NSString, NSURL;
@protocol SPTPageContainer, SPTPageController;

@interface _TtC15FindFeatureImpl18FindViewController : UIViewController <SPTPageContainer, SPTScrollToTopViewController, SPViewController, SPTRoutingController>
{
    // Error parsing type: , name: onVoiceSearchButtonPress
    // Error parsing type: , name: onReturnKeyPress
    // Error parsing type: , name: onScannablesButtonPress
    // Error parsing type: , name: mode
    // Error parsing type: , name: pageIdentifier
    // Error parsing type: , name: pageURI
    // Error parsing type: , name: currentPageController
    // Error parsing type: , name: mainContentLayoutGuide
    // Error parsing type: , name: headerViewController
    // Error parsing type: , name: searchViewController
    // Error parsing type: , name: browseViewController
    // Error parsing type: , name: contentViewController
    // Error parsing type: , name: containerViewController
    // Error parsing type: , name: viewLoadingLogger
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)routeToViewControllerForURL:(id)arg1;
@property(nonatomic, readonly) NSURL *URI;
- (void)spt_scrollToTop;
- (unsigned long long)preferredNavigationBarState;
@property(nonatomic, retain) id <SPTPageController> currentPageController; // @synthesize currentPageController;
- (id)spt_currentPageController;
- (id)spt_pageContainer;
- (id)spt_pageURI;
- (id)spt_pageIdentifier;
- (void)loadView;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic, readonly) id <SPTPageContainer> pageContainer;
@property(nonatomic, readonly) NSString *pageIdentifier;
@property(nonatomic, readonly) NSURL *pageURI;

@end


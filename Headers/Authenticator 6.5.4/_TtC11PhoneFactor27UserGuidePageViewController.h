//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@interface _TtC11PhoneFactor27UserGuidePageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>
{
    // Error parsing type: , name: isHorizontallyScrollable
    // Error parsing type: , name: currentPageNumber
    // Error parsing type: , name: pages
    // Error parsing type: , name: pageTransitionCompletedCallback
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;
- (long long)presentationIndexForPageViewController:(id)arg1;
- (long long)presentationCountForPageViewController:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)viewDidLoad;

@end


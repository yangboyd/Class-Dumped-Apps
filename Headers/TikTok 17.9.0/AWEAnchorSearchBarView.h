//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWESearchBar, UIButton;

@interface AWEAnchorSearchBarView : UIView
{
    UIButton *_searchCancelButton;
    AWESearchBar *_searchBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWESearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIButton *searchCancelButton; // @synthesize searchCancelButton=_searchCancelButton;
- (void)hideSearchCancelButton;
- (void)showSearchCancelButton;
- (void)updateText:(id)arg1;
- (void)setupSearchBar;
- (id)initWithFrame:(struct CGRect)arg1;

@end


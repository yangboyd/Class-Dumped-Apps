//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCHeaderDataSource-Protocol.h"

@class NSString, SCHeader, SCHeaderViewModel, SCSearchNavigationBar, SCSearchNavigationBarViewModel;
@protocol SCAddFriendsScrollAnimatorDataProviding;

@interface SCAddFriendsScrollAnimatorDataCoordinator : NSObject <SCHeaderDataSource>
{
    id <SCAddFriendsScrollAnimatorDataProviding> _dataProvider;
    SCHeader *_headerView;
    SCSearchNavigationBar *_searchBar;
    SCHeaderViewModel *_headerViewModel;
    SCSearchNavigationBarViewModel *_searchBarViewModel;
}

- (void).cxx_destruct;
- (void)_updateSearchBar;
- (void)_updateHeaderView;
- (id)fontForHeader:(id)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)initWithHeaderView:(id)arg1 searchBar:(id)arg2 dataProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

